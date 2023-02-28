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

  rules: {
    source_file: $ => seq(
      optional($.parameters),
      $.connection,
      repeat($._statement),
    ),


    // ---- Parameters ----

    parameters: $ => seq("Parameters", ':', $._ni, repeat1($.parameter), $._ded),
    parameter: $ => seq(field('name', $.identifier), choice($._nl, $._short_descr)),


    // ---- Statements ----

    _statement: $ => choice(
      $.let,
      $.execute,
      $.siard_output,
    ),

    let: $ => seq('Let', field('name', $.identifier), '=', field('value', $._expression)),

    _expression: $ => choice(
      $._basic_expression,
      $.query,
    ),


    // ---- SQL ----

    // cf. https://docs.oracle.com/javase/tutorial/jdbc/basics/connecting.html
    connection: $ => seq(
      'Connection', 'to', field('url', $.string),
      choice(
        $._nl,
        seq(
          optional($._newline), 'with', ':',
          $._ni, field('properties', repeat1($.key_value_pair)), $._ded))),

    execute: $ => seq('Execute', field('sql', $.raw)),
    query: $ => seq('result', 'of', field('sql', $.raw)),


    // ---- SIARD ----

    siard_output: $ => seq(
      'Output', field('name', $.identifier), 'to', field('file', $._basic_expression), ':',
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

    siard_schema: $ => seq('Schema', field('name', $.identifier), choice(
      $._nl, $._short_descr, seq(
        ':', $._ni,
        optional($._siard_description),
        repeat(choice(
          $.siard_type,
          $.siard_table,
          // TODO
          // $.siard_view,
          // $.siard_routine,
        )),
        $._ded))),

    siard_type: $ => seq('Type', field('name', $.identifier), choice(
      $._nl, $._short_descr,
      seq(':', $._ni, $._siard_description, $._ded))),

    siard_table: $ => seq('Table', field('name', $.identifier), choice(
      $._nl, $._short_descr, seq(
        ':', $._ni,
        optional($._siard_description),
        repeat1($.siard_column),
        $._ded))),

    siard_column: $ => seq('Column', field('name', $.identifier), choice(
      $._nl, $._short_descr, seq(
        ':', $._ni,
        optional($._siard_description),
        repeat($.siard_field),
        $._ded))),

    siard_field: $ => seq(
      'Field', field('name', $.identifier), ':', $._ni,
      optional($._siard_description),
      repeat($.siard_field), // NB: Recursion!
      $._ded),


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

    // This matches the rest of the line
    short_description: $ => /.*/,
    _short_descr: $ => field('description', seq(/- */, $.short_description, $._nl)),

    _nl: $ => choice($._newline, $._end_of_file),
    _ni: $ => seq($._newline, $._indent),
    _ded: $ => choice($._dedent, $._end_of_file),

    interpolation: $ => seq($._inter_start, $._basic_expression, $._inter_end),

    // NB. Each key must an identifier (i.e. no whitespace, etc.).
    key_value_pair: $ => seq(field('key', $.identifier), field('value', $._value), $._nl),

    raw: $ => seq(
      ':', $._newline, $._indent,
      repeat1(choice($.raw_content, $.interpolation)),
      $._ded),
    raw_content: $ => prec.right(repeat1($._raw)),

    _value: $ => choice($.raw, seq('=', $._basic_expression, $._nl)),
  },

});


function property_rules(prefix, shortnames) {
  let res = {};
  for (var shortname of shortnames) {
    // For some reason, we must force JavaScript to make a deep copy of the string...
    let x = (' ' + shortname).slice(1);
    res['_' + prefix + '_' + x] = $ => seq(x, field(x, $._value));
  }
  return res;
}




// Local Variables:
// js-indent-level: 2
// End:
