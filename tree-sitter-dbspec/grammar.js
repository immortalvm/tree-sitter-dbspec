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
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => seq(
      repeat($._comment),
      optional(seq($._parameters, repeat($._comment))),
      optional(seq($._statement, repeat(choice($._statement, $._comment)))),
    ),

    _statement: $ => choice(
      $.let,
      $.execute_sql,
    ),

    _parameters: $ => seq(
      "Parameters", ':', $._newline,
      seq($._indent, repeat1($.parameter), $._ded)),

    parameter: $ => seq(
      field('name', $.identifier),
      optional(seq('-', field('doc', $.short_documentation))), $._nl),

    // This matches the rest of the line
    short_documentation: $ => /.*/,

    _nl: $ => choice($._newline, $._end_of_file),
    _ded: $ => choice($._dedent, $._end_of_file),

    // As in tree-sitter-python
    identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

    let: $ => seq('Let', field('name', $.identifier), '=', $._expression),

    _expression: $ => choice(
      $._basic_expression,
      $._connection_expression,
      // To be continued
    ),

    _basic_expression: $ => choice(
      $.string,
      $.variable_instance,
      // To be continued
    ),
    variable_instance: $ => $.identifier,


    _connection_expression: $ => seq(
      'connection', 'to', field('url', $.string), $._newline, optional(seq(
        $._indent, repeat1(seq($.name_value_pair, $._newline)), $._dedent))),

    name_value_pair: $ =>seq(
      field('name', $.identifier), ':', field('value', $._basic_expression)),


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

    interpolation: $ => seq($._inter_start, $._basic_expression, $._inter_end),

    // Embedded SQL
    execute_sql: $ => seq(
      'Execute', 'SQL', 'using', field('connection', $.identifier), ':',
      $._newline, $._indent, $._sql, $._ded),
    _sql: $ => repeat1(choice($.sql_content, $.interpolation)),
    sql_content: $ => prec.right(repeat1($._raw)),
  },

});


// Local Variables:
// js-indent-level: 2
// End:
