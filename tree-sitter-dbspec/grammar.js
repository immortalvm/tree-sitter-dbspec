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
      repeat(choice($._comment, $._newline)),
      optional(seq(
        $.parameters,
        repeat(choice($._comment, $._newline)),
      )),
      optional(seq($.let, repeat(choice($.let, $._comment, $._newline)))),
    ),

    parameters: $ => seq("Parameters", ':', $._newline, optional(seq(
      $._indent, repeat1(seq($._parameter, $._newline)), $._dedent))),

    _parameter: $ => $.identifier,

    _nl: $ => choice($._end_of_file, repeat1($._newline)),

    // As in tree-sitter-python
    identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

    let: $ => seq('Let', field('name', $.identifier), '=', $._expression),

    _expression: $ => choice($._basic_expression,  $._connection_expression),

    _basic_expression: $ => choice($.string, $.variable_instance), // TODO

    variable_instance: $ => $.identifier,


    _connection_expression: $ => seq(
      'connection', 'to', field('url', $.string), $._newline, optional(seq(
        $._indent, repeat1(seq($.name_value_pair, $._newline)), $._dedent))),

    // TODO: allow non-literal values
    name_value_pair: $ =>seq(
      field('name', $.identifier), ':', field('value', $._basic_expression)),


    // Inspired by tree-sitter-python
    string: $ => seq(
      alias($._string_start, '"'),
      repeat(choice(
        $.interpolation,
        $.escape_sequence,
        prec.right(repeat1($._string_content)))),
      alias($._string_end, '"')
    ),
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



    // run_sql: $ => seq('run', 'sql', $._nl, $._indent, $._sql, $._dedent),

    // _sql: $ => repeat1(choice($.raw_sql, $.interpolation)),

    // raw_sql: $ => prec.right(repeat1($._raw)),

    interpolation: $ => seq($._inter_start, $._basic_expression, $._inter_end),


  },

});


// Local Variables:
// js-indent-level: 2
// End:
