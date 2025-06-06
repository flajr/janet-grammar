module.exports = grammar({
  name: "janet",

  extras: ($) => [/\s/, $.line_comment],

  conflicts: ($) => [
    [$.short_fn],
    [$._form, $.function_def],
    [$._form, $.var],
    [$.loop_construct],
    [$.control_flow],
  ],

  rules: {
    source_file: ($) => repeat($._form),

    _form: ($) =>
      choice(
        $.number_literal,
        $.str_literal,
        $.long_str_literal,
        $.buffer_literal,
        $.long_buffer_literal,
        $.keyword,
        $.symbol,
        $.bool_literal,
        $.nil_literal,
        $.tuple,
        $.array,
        $.table,
        $.struct,
        $.quote_form,
        $.quasiquote_form,
        $.unquote_form,
        $.splice_form,
        $.short_fn,
      ),

    tuple: ($) => seq("(", optional($._tuple_content), ")"),

    _tuple_content: ($) =>
      choice(
        $.def,
        $.var,
        $.function_def,
        $.control_flow,
        $.loop_construct,
        $.assignment,
        $.operation,
        $.special_form,
        $.generic_tuple,
      ),

    def: ($) =>
      seq(
        "def",
        field("name", $.symbol),
        repeat(field("metadata", choice($.keyword, $.str_literal))),
        field("value", $._form),
      ),

    var: ($) =>
      seq(
        choice("var", "varglobal"),
        field("name", $.symbol),
        repeat(field("metadata", choice($.keyword, $.str_literal))),
        optional(field("value", $._form)),
      ),

    function_def: ($) =>
      seq(
        choice(
          "defn",
          "defn-",
          "defglobal",
          "defmacro",
          "defmacro-",
          "defdyn",
          "fn",
          "macro",
        ),
        field("name", optional($.symbol)),
        repeat(field("metadata", choice($.keyword, $.str_literal))),
        field("params", $._form),
        repeat(field("body", $._form)),
      ),

    short_fn: ($) => seq("|", repeat($._form), "|"),

    control_flow: ($) =>
      choice(
        seq(
          choice("if", "if-let", "if-not", "if-with"),
          field("condition", $._form),
          field("then", $._form),
          optional(field("else", $._form)),
        ),
        seq(
          choice("when", "when-let", "when-with", "unless", "unless-let"),
          field("condition", $._form),
          repeat(field("body", $._form)),
        ),
        seq(
          "cond",
          repeat(seq(field("condition", $._form), field("body", $._form))),
        ),
        seq(
          "case",
          field("expr", $._form),
          repeat(seq(field("pattern", $._form), field("body", $._form))),
        ),
        seq(choice("and", "or", "do"), repeat($._form)),
        seq("not", field("expr", $._form)),
      ),

    loop_construct: ($) =>
      choice(
        seq(
          "while",
          field("condition", $._form),
          repeat(field("body", $._form)),
        ),
        seq(
          "for",
          field("binding", $.symbol),
          field("start", $._form),
          field("end", $._form),
          optional(field("step", $._form)),
          repeat(field("body", $._form)),
        ),
        seq("loop", field("bindings", $._form), repeat(field("body", $._form))),
        seq(
          choice("each", "eachk", "eachp"),
          field("binding", $._form),
          field("collection", $._form),
          repeat(field("body", $._form)),
        ),
        seq("forever", repeat($._form)),
        seq("repeat", field("count", $._form), repeat(field("body", $._form))),
      ),

    assignment: ($) =>
      choice(
        seq("set", field("target", $._form), field("value", $._form)),
        seq("setdyn", field("binding", $._form), field("value", $._form)),
        seq(
          "put",
          field("ds", $._form),
          field("key", $._form),
          field("value", $._form),
        ),
        seq(
          "put-in",
          field("ds", $._form),
          field("keys", $._form),
          field("value", $._form),
        ),
        seq(
          "update",
          field("ds", $._form),
          field("key", $._form),
          field("fn", $._form),
          repeat($._form),
        ),
        seq(
          "update-in",
          field("ds", $._form),
          field("keys", $._form),
          field("fn", $._form),
          repeat($._form),
        ),
      ),

    operation: ($) =>
      seq(
        choice(
          "+",
          "++",
          "+=",
          "-",
          "--",
          "-=",
          "*",
          "*=",
          "/",
          "/=",
          "%",
          "%=",
          "inc",
          "dec",
          "mod",
          "div",
          "abs",
          "sum",
          "product",
          "mean",
          "max",
          "min",
          "=",
          "not=",
          "<",
          "<=",
          ">",
          ">=",
          "compare",
          "deep=",
          "deep-not=",
          "band",
          "bor",
          "bxor",
          "bnot",
          "blshift",
          "brshift",
          "brushift",
          "array",
          "get",
          "get-in",
          "length",
          "empty?",
          "first",
          "last",
          "slice",
          "take",
          "take-until",
          "take-while",
          "drop",
          "drop-until",
          "drop-while",
          "reverse",
          "reverse!",
          "sort",
          "sort-by",
          "map",
          "mapcat",
          "filter",
          "keep",
          "reduce",
          "reduce2",
          "find",
          "find-index",
          "frequencies",
          "string",
          "describe",
          "table",
          "struct",
          "keys",
          "values",
          "pairs",
          "merge",
          "merge-into",
          "print",
          "prin",
          "printf",
          "eprint",
          "slurp",
          "spit",
          "flush",
          /[a-zA-Z][a-zA-Z0-9\-_]*\/[a-zA-Z][a-zA-Z0-9\-_]*/,
        ),
        repeat($._form),
      ),

    type_check: ($) =>
      seq(
        choice(
          "type",
          "nil?",
          "boolean?",
          "number?",
          "string?",
          "keyword?",
          "symbol?",
          "function?",
          "array?",
          "tuple?",
          "table?",
          "struct?",
          "buffer?",
          "truthy?",
          "true?",
          "false?",
          "nat?",
          "int?",
          "nan?",
        ),
        repeat($._form),
      ),

    type_convert: ($) =>
      seq(
        choice(
          "int/s64",
          "int/u64",
          "tuple",
          "array",
          "table",
          "struct",
          "buffer",
          "string",
          "keyword",
          "symbol",
          "freeze",
          "thaw",
        ),
        repeat($._form),
      ),

    special_form: ($) =>
      choice(
        seq("upscope", repeat($._form)),
        seq("comptime", field("expr", $._form)),
        seq("try", repeat($._form)),
        seq(choice("error", "errorf"), repeat($._form)),
        seq(
          choice("assert", "assertf"),
          field("condition", $._form),
          optional(field("message", $._form)),
        ),
        seq(
          choice("defer", "edefer"),
          field("form", $._form),
          repeat(field("body", $._form)),
        ),
        seq("import", field("module", $._form), repeat(field("args", $._form))),
        seq("use", field("module", $._form)),
        seq("require", field("module", $._form)),
        seq("module", field("name", $._form), repeat(field("body", $._form))),
        seq("->", field("expr", $._form), repeat(field("forms", $._form))),
        seq("->>", field("expr", $._form), repeat(field("forms", $._form))),
        seq("-?>", field("expr", $._form), repeat(field("forms", $._form))),
        seq("-?>>", field("expr", $._form), repeat(field("forms", $._form))),
      ),

    generic_tuple: ($) =>
      seq(field("head", $._form), repeat(field("args", $._form))),

    quote_form: ($) =>
      choice(seq("(", "quote", $._form, ")"), seq("'", $._form)),

    quasiquote_form: ($) =>
      choice(seq("(", "quasiquote", $._form, ")"), seq("~", $._form)),

    unquote_form: ($) =>
      choice(seq("(", "unquote", $._form, ")"), seq(",", $._form)),

    splice_form: ($) =>
      choice(seq("(", "splice", $._form, ")"), seq(";", $._form)),

    number_literal: ($) =>
      token(
        choice(
          /[0-9]+r[0-9a-zA-Z]+/,
          /0x[0-9a-fA-F]+/,
          /0o[0-7]+/,
          /0b[01]+/,
          /[+-]?[0-9]+(\.[0-9]+)?[eE][+-]?[0-9]+/,
          /[+-]?[0-9]+\.[0-9]+/,
          /[+-]?\.[0-9]+/,
          /[+-]?[0-9]+/,
          /[+-]?inf/,
          /nan/,
        ),
      ),

    str_literal: ($) =>
      token(prec(1,
        /"([^"\\]|\\[\\"/abfnrtv0]|\\x[0-9a-fA-F]{2}|\\u[0-9a-fA-F]{4}|\\U[0-9a-fA-F]{8}|\\[0-7]{1,3})*"/
      )),

    long_str_literal: ($) => token(prec(1, seq('@"', /([^"])*/, '"'))),

    buffer_literal: ($) =>
      token(prec(1,
        seq(
          "@`",
          /([^`\\]|\\[\\`/abfnrtv0]|\\x[0-9a-fA-F]{2}|\\[0-7]{1,3})*/,
          "`",
        ),
      )),

    long_buffer_literal: ($) => token(prec(1, "@``````")),

    keyword: ($) => token(seq(":", /[a-zA-Z_][a-zA-Z0-9_\-/*+?!&|$.]*/)),

    symbol: ($) =>
      token(
        choice(
          /[a-zA-Z_+\-*/%=<>!?&|$][a-zA-Z0-9_+\-*/%=<>!?&|$.]*/,
          /\*[a-zA-Z0-9_\-*+?!]*\*/,
          /\$[a-zA-Z0-9_\-*+?!]*/,
        ),
      ),

    bool_literal: ($) => choice("true", "false"),
    nil_literal: ($) => "nil",

    line_comment: ($) => token(seq("#", /[^\n]*/)),

    array: ($) => seq(choice("[", "@["), repeat($._form), "]"),
    table: ($) => seq("@{", repeat(seq($._form, $._form)), "}"),
    struct: ($) => seq("{", repeat(seq($._form, $._form)), "}"),
  },
});
