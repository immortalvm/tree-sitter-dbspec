module.exports = grammar({
  name: 'dbspec',

  externals: $ => [
    $._newline,
    $._indent,
    $._dedent,
    $._inter_start,
    $._inter_start2,
    $._inter_end,
    $._raw,
    $._string_start,
    $._string_content,
    $._string_end,
    $._comment,
    $._end_of_file,
    $._skip,
    $._set_inter,
  ],

  extras: $ => [
    $._comment,
    $._skip,
  ],

  word: $ => $.identifier,

  inline: $ => [
    $._name,
    $._via_c,
  ],

  rules: {
    source_file: $ => seq(
      optional($.parameters),
      repeat($._statement),
    ),


    // ---- Parameters ----

    parameters: $ => seq("Parameters", ':', $._ni, repeat1($.parameter), $._ded),
    parameter: $ => seq($._name, choice($._nl, $._short_descr)),


    // ---- Statements ----

    _statement: $ => choice(
      $.nop,
      $.set,
      $.execute_using,
      $.execute_sql,
      $.siard_metadata,
      $.siard_output,
      $.for_loop,
      $.set_inter,
      $.log,
      $.assert,
      $.conditional,
    ),

    nop: $ => seq('...', $._nl),

    log: $ => seq('Log', $._basic_expression),

    assert: $ => seq('Assert', $._boolean_expression),

    set_inter: $ => seq(
      'Interpolation', 'symbol', '=', "'", $._set_inter, "'", $._nl),

    set: $ => seq('Set', $._name, '=', field('value', $._expression)),

    _expression: $ => choice(
      $._basic_expression,
      $.connection,
      $.query,
      $.script_result,
    ),


    // ---- Embedded scripts (other than SQL) ----

    execute_using: $ => seq('Execute', $._using_i, field('script', $.raw)),
    script_result: $ => seq('result', $._using_i, field('script', $.raw)),
    _using_i: $ => seq('using', field('interpreter', $._basic_expression)),


    // ---- SQL ----

    // cf. https://docs.oracle.com/javase/tutorial/jdbc/basics/connecting.html
    connection: $ => seq(
      'connection', 'to', field('url', $._basic_expression),
      choice(
        $._nl,
        seq(
          optional($._newline), 'with', field('properties', $.key_value_pairs)))),

    execute_sql: $ => seq('Execute', $._via_c, field('sql', $.raw)),
    query: $ => seq('result', $._via_c, field('sql', $.raw)),
    _via_c: $ => seq('via', field('connection', $.identifier)),


    // ---- SIARD ----

    siard_output: $ => seq(
      'Output', field('connection', $.identifier), '.', $._name,
      'to', field('file', $._basic_expression), $._nl),

    siard_metadata: $ => seq(
      'Metadata', 'for', field('connection', $.identifier), '.', $._name, ':', $._ni,
      repeat(choice(
        $._siard_dbname,
        $._siard_description,
        $._siard_archiver,
        $._siard_archiverContact,
        $._siard_dataOwner,
        $._siard_dataOriginTimespan,
        $._siard_lobFolder,
        $.siard_schema,

        $.command_declaration,
      )),
      $._ded),

    ...property_rules('siard', [
      'dbname', // Meaning: Override current name
      'description', // Reused below
      'archiver',
      'archiverContact',
      'dataOwner',
      'dataOriginTimespan',
      'lobFolder',
      // 'producerApplication',
      // 'archivalDate',
      // 'messageDigest',
      // 'clientMachine',
      // 'databaseProduct',
      // 'connection',
      // 'databaseUser',
    ]),

    siard_schema: $ => seq('Schema', $._name, choice(
      $._nl, $._short_descr, seq(
        ':', $._ni,
        optional($._siard_description),
        repeat(choice(
          $.siard_type,
          $.siard_table,
          $.siard_view,
          // We ignore routines (stored procedures) for now
        )),
        $._ded))),

    siard_type: $ => seq('Type', $._name, choice(
      $._nl, $._short_descr, seq(':', $._ni, $._siard_description, $._ded))),

    siard_table: $ => seq('Table', $._name, choice(
      $._nl, $._short_descr, seq(
        ':', $._ni,
        optional($._siard_description),
        repeat(choice(
          $.siard_column,
          $.siard_key,
          $.siard_check,
          // We ignore triggers for now
        )),
        $._ded))),

    siard_column: $ => seq('Column', $._name, choice(
      $._nl, $._short_descr, seq(
        ':', $._ni,
        optional($._siard_description),
        repeat($.siard_field),
        $._ded))),

    siard_field: $ => seq('Field', $._name, choice(
      $._nl, $._short_descr, seq(
        ':', $._ni,
        optional($._siard_description),
        repeat($.siard_field), // NB: Recursion!
        $._ded))),

    // Used for both candidate, primary and foreign keys.
    // Candidate keys are usually expressed through uniqueness constraints.
    siard_key: $ => seq('Key', $._name, choice(
      $._nl, $._short_descr, seq(':', $._ni, $._siard_description, $._ded))),

    siard_check: $ => seq('Check', $._name, choice(
      $._nl, $._short_descr, seq(':', $._ni, $._siard_description, $._ded))),

    siard_view: $ => seq('View', $._name, choice(
      $._nl, $._short_descr, seq(
        ':', $._ni,
        optional($._siard_description),
        repeat($.siard_column),
        // The other properties (e.g. query and queryOriginal) will be extracted from the db.
        $._ded))),


    command_declaration: $ => seq(
      'Command', ':', $._ni,
      optional(seq('title', value_field('title', $))),
      optional(field('parameters', $.parameters)),
      'Body', field('body', $.raw),
      $._ded),


    // ---- Loops and conditionals ----

    for_loop: $ => seq(
      'For', field('variables', $.for_variables),
      'in', field('result_set', $.identifier), ':', $._ni,
      field('body', $.statement_block),
      $._ded),

    // Cf. https://www.baeldung.com/jdbc-resultset
    for_variables: $ => seq('(', commaSep1($.identifier), ')'),

    conditional: $ => seq(
      'If', field('condition', $._boolean_expression), ':', $._ni,
      field('then', $.statement_block),
      $._ded,
      optional(seq(
        'Else', ':', $._ni,
        field('else', $.statement_block),
        $._ded))),

    statement_block: $ => repeat1($._statement),


    // ---- Boolean expressions ----

    _boolean_expression: $ => choice(
      $.comparison,
      // To be continued
    ),

    comparison: $ => seq(
      field('left', $._basic_expression),
      field('operator', $.comparison_operator),
      field('right', $._basic_expression),
    ),

    comparison_operator: $ => choice('==', '!=', '<', '>', '<=', '>='),


    // ---- Basic expressions ----

    _basic_expression: $ => choice(
      $.string,
      $.variable_instance,
      $.integer,
      $.dot_expression,
      // To be continued
    ),
    variable_instance: $ => $.identifier,

    dot_expression: $ => seq(
      field('left', $._basic_expression), '.', field('right', $.dot_operator)),
    dot_operator: $ => choice('stripped', 'size', 'as_integer'),

    // Inspired by tree-sitter-python
    string: $ => seq(
      alias($._string_start, '"'),
      repeat(choice(
        $.interpolation,
        $.escape_sequence,
        $.string_content)),
      alias($._string_end, '"')
    ),
    string_content: $ => prec.right(repeat1($._string_content)),
    escape_sequence: $ => prec(1, seq(
      '\\',
      choice(
          /u[a-fA-F\d]{4}/,
          /U[a-fA-F\d]{8}/,
          /x[a-fA-F\d]{2}/,
          /\d{3}/,
          /\r?\n/,
          /['"abfrntv\\]/,
      )
    )),

    integer: $ => /-?[0-9]+/,


    // ---- Generic ----

    // As in tree-sitter-python
    identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

    _name:  $ => field('name', $.identifier),

    // This matches the rest of the line
    short_description: $ => /.*/,
    _short_descr: $ => field('description', seq(/- */, $.short_description, $._nl)),

    _nl: $ => choice($._newline, $._end_of_file),
    _ni: $ => seq($._newline, $._indent),
    _ded: $ => choice($._dedent, $._end_of_file),

    interpolation: $ => seq($._inter_start, $._basic_expression, $._inter_end),
    interpolation2: $ => seq($._inter_start2, $._basic_expression, $._inter_end),

    // NB. Each key must an identifier (i.e. no whitespace, etc.).
    key_value_pairs: $ => seq(':', $._ni, repeat1($.key_value_pair), $._ded),
    key_value_pair: $ => seq(field('key', $.identifier), value_field('value', $)),

    raw: $ => seq(
      ':', $._newline, $._indent,
      repeat1(choice($.raw_content, $.interpolation, $.interpolation2)),
      $._ded),
    raw_content: $ => prec.right(repeat1($._raw)),
  },

});


function property_rules(prefix, shortnames) {
  let res = {};
  for (var shortname of shortnames) {
    // For some reason, we must force JavaScript to make a deep copy of the string...
    let x = (' ' + shortname).slice(1);
    res['_' + prefix + '_' + x] = $ => seq(x, value_field(x, $));
  }
  return res;
}

function value_field(field_name, $) {
  // We must "distribute" the field declarations thanks to this limitation:
  // https://github.com/tree-sitter/tree-sitter/issues/755
  return choice(field(field_name, $.raw), seq('=', field(field_name, $._basic_expression), $._nl));
}

// Copied from other tree-sitter grammars.
function commaSep1(rule) {
  return sep1(rule, ',');
}
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}


// Local Variables:
// js-indent-level: 2
// End:
