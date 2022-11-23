module.exports = grammar({
  name: 'd2',

  rules: {
    source_file: $ => repeat($._block),

    _block: $ => choice($.comment, $.shape_expression, $.connection_expression),

    shape_expression: $ => seq($.shape, optional(seq('.', $.field)),optional(seq(':', $.label)), optional(repeat(seq(';', $.shape)))),
    connection_expression: $ => seq($.shape, repeat1(seq($.connection, $.shape))),

    comment: $ => /#.*/,
    shape: $ => /([\w' ]+\-?)+/,
    label: $ => /([\w' ]+\-?)+/,
    field: $ => choice("shape"),

    connection: $ => choice("--", "->", "<-", "<->"),
  }
})
