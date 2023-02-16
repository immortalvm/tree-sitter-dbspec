module.exports = grammar({
  name: 'dbspec',

  externals: $ => [
    $._indent,
    $._dedent,
    $._inter_start,
    $._inter_end,
    $._raw,
    $._string_start,
    $._string_content,
    $._string_end,
    $._comment,
  ],

  rules: {
    source_file: $ => repeat($.run_sql),

    run_sql: $ => seq('run', 'sql', $._indent, $._sql, $._dedent),

    _sql: $ => repeat1(choice($.raw_sql, $.interpolant)),

    raw_sql: $ => prec.right(repeat1($._raw)),

    interpolant: $ => seq($._inter_start, "var", $._inter_end),

  },

});


// Local Variables:
// js-indent-level: 2
// End:
