module.exports = grammar({
  name: 'dbspec',

  externals: $ => [
    $._newline,
    $._indent,
    $._dedent,
    $._inter_start,
    $._inter_end,
    $._raw,
    $._string_start,
    $._string_content,
    $._string_end,
    $._comment,
    $._end_of_file,
    $._skip,
  ],

  extras: $ => [
    $._comment,
    $._skip,
  ],

  word: $ => $.identifier,

  inline: $ => [
    $._name,
  ],

  rules: {
    source_file: $ => seq(
      optional($.parameters),
      $.connection,
      repeat($._statement),
    ),


    // ---- Parameters ----

    parameters: $ => seq("Parameters", ':', $._ni, repeat1($.parameter), $._ded),
    parameter: $ => seq($._name, choice($._nl, $._short_descr)),


    // ---- Statements ----

    _statement: $ => choice(
      $.let,
      $.execute_sql,
      $.siard_output,
    ),

    let: $ => seq('Let', $._name, '=', field('value', $._expression)),

    _expression: $ => choice(
      $._basic_expression,
      $.query,
    ),


    // ---- SQL ----

    // cf. https://docs.oracle.com/javase/tutorial/jdbc/basics/connecting.html
    connection: $ => seq(
      'Connection', 'to', field('url', $._basic_expression),
      choice(
        $._nl,
        seq(
          optional($._newline), 'with', field('properties', $.key_value_pairs)))),

    execute_sql: $ => seq('Execute', 'SQL', field('sql', $.raw)),
    query: $ => seq('result', 'of', field('sql', $.raw)),


    // ---- SIARD ----

    siard_output: $ => seq(
      'Output', $._name, 'to', field('file', $._basic_expression), ':',
      $._ni,
      repeat(choice(
        $._siard_description,
        $._siard_archiver,
        $._siard_archiverContact,
        $._siard_dataOwner,
        $._siard_dataOriginTimespan,
        $._siard_lobFolder,
      )),
      repeat1($.siard_schema),
      $._ded),

    ...property_rules('siard', [
      // 'dbname',
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



    // ---- Basic expressions ----

    _basic_expression: $ => choice(
      $.string,
      $.variable_instance,
      // To be continued
    ),
    variable_instance: $ => $.identifier,

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
    escape_sequence: $ => token(prec(1, seq(
      '\\',
      choice(
          /u[a-fA-F\d]{4}/,
          /U[a-fA-F\d]{8}/,
          /x[a-fA-F\d]{2}/,
          /\d{3}/,
          /\r?\n/,
          /['"abfrntv\\]/,
      )
    ))),


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

    // NB. Each key must an identifier (i.e. no whitespace, etc.).
    key_value_pairs: $ => seq(':', $._ni, repeat1($.key_value_pair), $._ded),
    key_value_pair: $ => seq(field('key', $.identifier), value_field('value', $)),

    raw: $ => seq(
      ':', $._newline, $._indent,
      repeat1(choice($.raw_content, $.interpolation)),
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


// Local Variables:
// js-indent-level: 2
// End:
