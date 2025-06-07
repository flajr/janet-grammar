#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 183
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 213
#define ALIAS_COUNT 0
#define TOKEN_COUNT 183
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 57

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_def = 3,
  anon_sym_var = 4,
  anon_sym_varglobal = 5,
  anon_sym_defn = 6,
  anon_sym_defn_DASH = 7,
  anon_sym_defglobal = 8,
  anon_sym_defmacro = 9,
  anon_sym_defmacro_DASH = 10,
  anon_sym_defdyn = 11,
  anon_sym_fn = 12,
  anon_sym_macro = 13,
  anon_sym_PIPE = 14,
  anon_sym_if = 15,
  anon_sym_if_DASHlet = 16,
  anon_sym_if_DASHnot = 17,
  anon_sym_if_DASHwith = 18,
  anon_sym_when = 19,
  anon_sym_when_DASHlet = 20,
  anon_sym_when_DASHwith = 21,
  anon_sym_unless = 22,
  anon_sym_unless_DASHlet = 23,
  anon_sym_cond = 24,
  anon_sym_case = 25,
  anon_sym_and = 26,
  anon_sym_or = 27,
  anon_sym_do = 28,
  anon_sym_not = 29,
  anon_sym_while = 30,
  anon_sym_for = 31,
  anon_sym_loop = 32,
  anon_sym_each = 33,
  anon_sym_eachk = 34,
  anon_sym_eachp = 35,
  anon_sym_forever = 36,
  anon_sym_repeat = 37,
  anon_sym_set = 38,
  anon_sym_setdyn = 39,
  anon_sym_put = 40,
  anon_sym_put_DASHin = 41,
  anon_sym_update = 42,
  anon_sym_update_DASHin = 43,
  anon_sym_PLUS = 44,
  anon_sym_PLUS_PLUS = 45,
  anon_sym_PLUS_EQ = 46,
  anon_sym_DASH = 47,
  anon_sym_DASH_DASH = 48,
  anon_sym_DASH_EQ = 49,
  anon_sym_STAR = 50,
  anon_sym_STAR_EQ = 51,
  anon_sym_SLASH = 52,
  anon_sym_SLASH_EQ = 53,
  anon_sym_PERCENT = 54,
  anon_sym_PERCENT_EQ = 55,
  anon_sym_inc = 56,
  anon_sym_dec = 57,
  anon_sym_mod = 58,
  anon_sym_div = 59,
  anon_sym_abs = 60,
  anon_sym_sum = 61,
  anon_sym_product = 62,
  anon_sym_mean = 63,
  anon_sym_max = 64,
  anon_sym_min = 65,
  anon_sym_EQ = 66,
  anon_sym_not_EQ = 67,
  anon_sym_LT = 68,
  anon_sym_LT_EQ = 69,
  anon_sym_GT = 70,
  anon_sym_GT_EQ = 71,
  anon_sym_compare = 72,
  anon_sym_deep_EQ = 73,
  anon_sym_deep_DASHnot_EQ = 74,
  anon_sym_band = 75,
  anon_sym_bor = 76,
  anon_sym_bxor = 77,
  anon_sym_bnot = 78,
  anon_sym_blshift = 79,
  anon_sym_brshift = 80,
  anon_sym_brushift = 81,
  anon_sym_array = 82,
  anon_sym_get = 83,
  anon_sym_get_DASHin = 84,
  anon_sym_length = 85,
  anon_sym_empty_QMARK = 86,
  anon_sym_first = 87,
  anon_sym_last = 88,
  anon_sym_slice = 89,
  anon_sym_take = 90,
  anon_sym_take_DASHuntil = 91,
  anon_sym_take_DASHwhile = 92,
  anon_sym_drop = 93,
  anon_sym_drop_DASHuntil = 94,
  anon_sym_drop_DASHwhile = 95,
  anon_sym_reverse = 96,
  anon_sym_reverse_BANG = 97,
  anon_sym_sort = 98,
  anon_sym_sort_DASHby = 99,
  anon_sym_map = 100,
  anon_sym_mapcat = 101,
  anon_sym_filter = 102,
  anon_sym_keep = 103,
  anon_sym_reduce = 104,
  anon_sym_reduce2 = 105,
  anon_sym_find = 106,
  anon_sym_find_DASHindex = 107,
  anon_sym_frequencies = 108,
  anon_sym_string = 109,
  anon_sym_describe = 110,
  anon_sym_table = 111,
  anon_sym_struct = 112,
  anon_sym_keys = 113,
  anon_sym_values = 114,
  anon_sym_pairs = 115,
  anon_sym_merge = 116,
  anon_sym_merge_DASHinto = 117,
  anon_sym_print = 118,
  anon_sym_prin = 119,
  anon_sym_printf = 120,
  anon_sym_eprint = 121,
  anon_sym_slurp = 122,
  anon_sym_spit = 123,
  anon_sym_flush = 124,
  aux_sym_operation_token1 = 125,
  anon_sym_type = 126,
  anon_sym_boolean_QMARK = 127,
  anon_sym_number_QMARK = 128,
  anon_sym_function_QMARK = 129,
  anon_sym_truthy_QMARK = 130,
  anon_sym_nat_QMARK = 131,
  anon_sym_int_QMARK = 132,
  anon_sym_int_SLASHs64 = 133,
  anon_sym_int_SLASHu64 = 134,
  anon_sym_tuple = 135,
  anon_sym_buffer = 136,
  anon_sym_keyword = 137,
  anon_sym_symbol = 138,
  anon_sym_freeze = 139,
  anon_sym_thaw = 140,
  anon_sym_upscope = 141,
  anon_sym_comptime = 142,
  anon_sym_try = 143,
  anon_sym_error = 144,
  anon_sym_errorf = 145,
  anon_sym_assert = 146,
  anon_sym_assertf = 147,
  anon_sym_defer = 148,
  anon_sym_edefer = 149,
  anon_sym_import = 150,
  anon_sym_use = 151,
  anon_sym_require = 152,
  anon_sym_module = 153,
  anon_sym_DASH_GT = 154,
  anon_sym_DASH_GT_GT = 155,
  anon_sym_DASH_QMARK_GT = 156,
  anon_sym_DASH_QMARK_GT_GT = 157,
  anon_sym_quote = 158,
  anon_sym_SQUOTE = 159,
  anon_sym_quasiquote = 160,
  anon_sym_TILDE = 161,
  anon_sym_unquote = 162,
  anon_sym_COMMA = 163,
  anon_sym_splice = 164,
  anon_sym_SEMI = 165,
  sym_number_literal = 166,
  sym_str_literal = 167,
  sym_long_str_literal = 168,
  sym_buffer_literal = 169,
  sym_long_buffer_literal = 170,
  sym_keyword = 171,
  sym_symbol = 172,
  anon_sym_true = 173,
  anon_sym_false = 174,
  sym_nil_literal = 175,
  sym_line_comment = 176,
  anon_sym_LBRACK = 177,
  anon_sym_AT_LBRACK = 178,
  anon_sym_RBRACK = 179,
  anon_sym_AT_LBRACE = 180,
  anon_sym_RBRACE = 181,
  anon_sym_LBRACE = 182,
  sym_source_file = 183,
  sym__form = 184,
  sym_tuple = 185,
  sym__tuple_content = 186,
  sym_def = 187,
  sym_var = 188,
  sym_function_def = 189,
  sym_short_fn = 190,
  sym_control_flow = 191,
  sym_loop_construct = 192,
  sym_assignment = 193,
  sym_operation = 194,
  sym_special_form = 195,
  sym_generic_tuple = 196,
  sym_quote_form = 197,
  sym_quasiquote_form = 198,
  sym_unquote_form = 199,
  sym_splice_form = 200,
  sym_bool_literal = 201,
  sym_array = 202,
  sym_table = 203,
  sym_struct = 204,
  aux_sym_source_file_repeat1 = 205,
  aux_sym_def_repeat1 = 206,
  aux_sym_function_def_repeat1 = 207,
  aux_sym_control_flow_repeat1 = 208,
  aux_sym_control_flow_repeat2 = 209,
  aux_sym_special_form_repeat1 = 210,
  aux_sym_special_form_repeat2 = 211,
  aux_sym_table_repeat1 = 212,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_def] = "def",
  [anon_sym_var] = "var",
  [anon_sym_varglobal] = "varglobal",
  [anon_sym_defn] = "defn",
  [anon_sym_defn_DASH] = "defn-",
  [anon_sym_defglobal] = "defglobal",
  [anon_sym_defmacro] = "defmacro",
  [anon_sym_defmacro_DASH] = "defmacro-",
  [anon_sym_defdyn] = "defdyn",
  [anon_sym_fn] = "fn",
  [anon_sym_macro] = "macro",
  [anon_sym_PIPE] = "|",
  [anon_sym_if] = "if",
  [anon_sym_if_DASHlet] = "if-let",
  [anon_sym_if_DASHnot] = "if-not",
  [anon_sym_if_DASHwith] = "if-with",
  [anon_sym_when] = "when",
  [anon_sym_when_DASHlet] = "when-let",
  [anon_sym_when_DASHwith] = "when-with",
  [anon_sym_unless] = "unless",
  [anon_sym_unless_DASHlet] = "unless-let",
  [anon_sym_cond] = "cond",
  [anon_sym_case] = "case",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_do] = "do",
  [anon_sym_not] = "not",
  [anon_sym_while] = "while",
  [anon_sym_for] = "for",
  [anon_sym_loop] = "loop",
  [anon_sym_each] = "each",
  [anon_sym_eachk] = "eachk",
  [anon_sym_eachp] = "eachp",
  [anon_sym_forever] = "forever",
  [anon_sym_repeat] = "repeat",
  [anon_sym_set] = "set",
  [anon_sym_setdyn] = "setdyn",
  [anon_sym_put] = "put",
  [anon_sym_put_DASHin] = "put-in",
  [anon_sym_update] = "update",
  [anon_sym_update_DASHin] = "update-in",
  [anon_sym_PLUS] = "+",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_inc] = "inc",
  [anon_sym_dec] = "dec",
  [anon_sym_mod] = "mod",
  [anon_sym_div] = "div",
  [anon_sym_abs] = "abs",
  [anon_sym_sum] = "sum",
  [anon_sym_product] = "product",
  [anon_sym_mean] = "mean",
  [anon_sym_max] = "max",
  [anon_sym_min] = "min",
  [anon_sym_EQ] = "=",
  [anon_sym_not_EQ] = "not=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_compare] = "compare",
  [anon_sym_deep_EQ] = "deep=",
  [anon_sym_deep_DASHnot_EQ] = "deep-not=",
  [anon_sym_band] = "band",
  [anon_sym_bor] = "bor",
  [anon_sym_bxor] = "bxor",
  [anon_sym_bnot] = "bnot",
  [anon_sym_blshift] = "blshift",
  [anon_sym_brshift] = "brshift",
  [anon_sym_brushift] = "brushift",
  [anon_sym_array] = "array",
  [anon_sym_get] = "get",
  [anon_sym_get_DASHin] = "get-in",
  [anon_sym_length] = "length",
  [anon_sym_empty_QMARK] = "empty\?",
  [anon_sym_first] = "first",
  [anon_sym_last] = "last",
  [anon_sym_slice] = "slice",
  [anon_sym_take] = "take",
  [anon_sym_take_DASHuntil] = "take-until",
  [anon_sym_take_DASHwhile] = "take-while",
  [anon_sym_drop] = "drop",
  [anon_sym_drop_DASHuntil] = "drop-until",
  [anon_sym_drop_DASHwhile] = "drop-while",
  [anon_sym_reverse] = "reverse",
  [anon_sym_reverse_BANG] = "reverse!",
  [anon_sym_sort] = "sort",
  [anon_sym_sort_DASHby] = "sort-by",
  [anon_sym_map] = "map",
  [anon_sym_mapcat] = "mapcat",
  [anon_sym_filter] = "filter",
  [anon_sym_keep] = "keep",
  [anon_sym_reduce] = "reduce",
  [anon_sym_reduce2] = "reduce2",
  [anon_sym_find] = "find",
  [anon_sym_find_DASHindex] = "find-index",
  [anon_sym_frequencies] = "frequencies",
  [anon_sym_string] = "string",
  [anon_sym_describe] = "describe",
  [anon_sym_table] = "table",
  [anon_sym_struct] = "struct",
  [anon_sym_keys] = "keys",
  [anon_sym_values] = "values",
  [anon_sym_pairs] = "pairs",
  [anon_sym_merge] = "merge",
  [anon_sym_merge_DASHinto] = "merge-into",
  [anon_sym_print] = "print",
  [anon_sym_prin] = "prin",
  [anon_sym_printf] = "printf",
  [anon_sym_eprint] = "eprint",
  [anon_sym_slurp] = "slurp",
  [anon_sym_spit] = "spit",
  [anon_sym_flush] = "flush",
  [aux_sym_operation_token1] = "operation_token1",
  [anon_sym_type] = "type",
  [anon_sym_boolean_QMARK] = "boolean\?",
  [anon_sym_number_QMARK] = "number\?",
  [anon_sym_function_QMARK] = "function\?",
  [anon_sym_truthy_QMARK] = "truthy\?",
  [anon_sym_nat_QMARK] = "nat\?",
  [anon_sym_int_QMARK] = "int\?",
  [anon_sym_int_SLASHs64] = "int/s64",
  [anon_sym_int_SLASHu64] = "int/u64",
  [anon_sym_tuple] = "tuple",
  [anon_sym_buffer] = "buffer",
  [anon_sym_keyword] = "keyword",
  [anon_sym_symbol] = "symbol",
  [anon_sym_freeze] = "freeze",
  [anon_sym_thaw] = "thaw",
  [anon_sym_upscope] = "upscope",
  [anon_sym_comptime] = "comptime",
  [anon_sym_try] = "try",
  [anon_sym_error] = "error",
  [anon_sym_errorf] = "errorf",
  [anon_sym_assert] = "assert",
  [anon_sym_assertf] = "assertf",
  [anon_sym_defer] = "defer",
  [anon_sym_edefer] = "edefer",
  [anon_sym_import] = "import",
  [anon_sym_use] = "use",
  [anon_sym_require] = "require",
  [anon_sym_module] = "module",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DASH_GT_GT] = "->>",
  [anon_sym_DASH_QMARK_GT] = "-\?>",
  [anon_sym_DASH_QMARK_GT_GT] = "-\?>>",
  [anon_sym_quote] = "quote",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_quasiquote] = "quasiquote",
  [anon_sym_TILDE] = "~",
  [anon_sym_unquote] = "unquote",
  [anon_sym_COMMA] = ",",
  [anon_sym_splice] = "splice",
  [anon_sym_SEMI] = ";",
  [sym_number_literal] = "number_literal",
  [sym_str_literal] = "str_literal",
  [sym_long_str_literal] = "long_str_literal",
  [sym_buffer_literal] = "buffer_literal",
  [sym_long_buffer_literal] = "long_buffer_literal",
  [sym_keyword] = "keyword",
  [sym_symbol] = "symbol",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_nil_literal] = "nil_literal",
  [sym_line_comment] = "line_comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_AT_LBRACK] = "@[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [sym_source_file] = "source_file",
  [sym__form] = "_form",
  [sym_tuple] = "tuple",
  [sym__tuple_content] = "_tuple_content",
  [sym_def] = "def",
  [sym_var] = "var",
  [sym_function_def] = "function_def",
  [sym_short_fn] = "short_fn",
  [sym_control_flow] = "control_flow",
  [sym_loop_construct] = "loop_construct",
  [sym_assignment] = "assignment",
  [sym_operation] = "operation",
  [sym_special_form] = "special_form",
  [sym_generic_tuple] = "generic_tuple",
  [sym_quote_form] = "quote_form",
  [sym_quasiquote_form] = "quasiquote_form",
  [sym_unquote_form] = "unquote_form",
  [sym_splice_form] = "splice_form",
  [sym_bool_literal] = "bool_literal",
  [sym_array] = "array",
  [sym_table] = "table",
  [sym_struct] = "struct",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_def_repeat1] = "def_repeat1",
  [aux_sym_function_def_repeat1] = "function_def_repeat1",
  [aux_sym_control_flow_repeat1] = "control_flow_repeat1",
  [aux_sym_control_flow_repeat2] = "control_flow_repeat2",
  [aux_sym_special_form_repeat1] = "special_form_repeat1",
  [aux_sym_special_form_repeat2] = "special_form_repeat2",
  [aux_sym_table_repeat1] = "table_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_varglobal] = anon_sym_varglobal,
  [anon_sym_defn] = anon_sym_defn,
  [anon_sym_defn_DASH] = anon_sym_defn_DASH,
  [anon_sym_defglobal] = anon_sym_defglobal,
  [anon_sym_defmacro] = anon_sym_defmacro,
  [anon_sym_defmacro_DASH] = anon_sym_defmacro_DASH,
  [anon_sym_defdyn] = anon_sym_defdyn,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_if_DASHlet] = anon_sym_if_DASHlet,
  [anon_sym_if_DASHnot] = anon_sym_if_DASHnot,
  [anon_sym_if_DASHwith] = anon_sym_if_DASHwith,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_when_DASHlet] = anon_sym_when_DASHlet,
  [anon_sym_when_DASHwith] = anon_sym_when_DASHwith,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_unless_DASHlet] = anon_sym_unless_DASHlet,
  [anon_sym_cond] = anon_sym_cond,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_eachk] = anon_sym_eachk,
  [anon_sym_eachp] = anon_sym_eachp,
  [anon_sym_forever] = anon_sym_forever,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_setdyn] = anon_sym_setdyn,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_put_DASHin] = anon_sym_put_DASHin,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_update_DASHin] = anon_sym_update_DASHin,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_inc] = anon_sym_inc,
  [anon_sym_dec] = anon_sym_dec,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_abs] = anon_sym_abs,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_product] = anon_sym_product,
  [anon_sym_mean] = anon_sym_mean,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_not_EQ] = anon_sym_not_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_compare] = anon_sym_compare,
  [anon_sym_deep_EQ] = anon_sym_deep_EQ,
  [anon_sym_deep_DASHnot_EQ] = anon_sym_deep_DASHnot_EQ,
  [anon_sym_band] = anon_sym_band,
  [anon_sym_bor] = anon_sym_bor,
  [anon_sym_bxor] = anon_sym_bxor,
  [anon_sym_bnot] = anon_sym_bnot,
  [anon_sym_blshift] = anon_sym_blshift,
  [anon_sym_brshift] = anon_sym_brshift,
  [anon_sym_brushift] = anon_sym_brushift,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_get_DASHin] = anon_sym_get_DASHin,
  [anon_sym_length] = anon_sym_length,
  [anon_sym_empty_QMARK] = anon_sym_empty_QMARK,
  [anon_sym_first] = anon_sym_first,
  [anon_sym_last] = anon_sym_last,
  [anon_sym_slice] = anon_sym_slice,
  [anon_sym_take] = anon_sym_take,
  [anon_sym_take_DASHuntil] = anon_sym_take_DASHuntil,
  [anon_sym_take_DASHwhile] = anon_sym_take_DASHwhile,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_drop_DASHuntil] = anon_sym_drop_DASHuntil,
  [anon_sym_drop_DASHwhile] = anon_sym_drop_DASHwhile,
  [anon_sym_reverse] = anon_sym_reverse,
  [anon_sym_reverse_BANG] = anon_sym_reverse_BANG,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_sort_DASHby] = anon_sym_sort_DASHby,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_mapcat] = anon_sym_mapcat,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_keep] = anon_sym_keep,
  [anon_sym_reduce] = anon_sym_reduce,
  [anon_sym_reduce2] = anon_sym_reduce2,
  [anon_sym_find] = anon_sym_find,
  [anon_sym_find_DASHindex] = anon_sym_find_DASHindex,
  [anon_sym_frequencies] = anon_sym_frequencies,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_describe] = anon_sym_describe,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_keys] = anon_sym_keys,
  [anon_sym_values] = anon_sym_values,
  [anon_sym_pairs] = anon_sym_pairs,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_merge_DASHinto] = anon_sym_merge_DASHinto,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_prin] = anon_sym_prin,
  [anon_sym_printf] = anon_sym_printf,
  [anon_sym_eprint] = anon_sym_eprint,
  [anon_sym_slurp] = anon_sym_slurp,
  [anon_sym_spit] = anon_sym_spit,
  [anon_sym_flush] = anon_sym_flush,
  [aux_sym_operation_token1] = aux_sym_operation_token1,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_boolean_QMARK] = anon_sym_boolean_QMARK,
  [anon_sym_number_QMARK] = anon_sym_number_QMARK,
  [anon_sym_function_QMARK] = anon_sym_function_QMARK,
  [anon_sym_truthy_QMARK] = anon_sym_truthy_QMARK,
  [anon_sym_nat_QMARK] = anon_sym_nat_QMARK,
  [anon_sym_int_QMARK] = anon_sym_int_QMARK,
  [anon_sym_int_SLASHs64] = anon_sym_int_SLASHs64,
  [anon_sym_int_SLASHu64] = anon_sym_int_SLASHu64,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_buffer] = anon_sym_buffer,
  [anon_sym_keyword] = anon_sym_keyword,
  [anon_sym_symbol] = anon_sym_symbol,
  [anon_sym_freeze] = anon_sym_freeze,
  [anon_sym_thaw] = anon_sym_thaw,
  [anon_sym_upscope] = anon_sym_upscope,
  [anon_sym_comptime] = anon_sym_comptime,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_errorf] = anon_sym_errorf,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_assertf] = anon_sym_assertf,
  [anon_sym_defer] = anon_sym_defer,
  [anon_sym_edefer] = anon_sym_edefer,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_require] = anon_sym_require,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DASH_GT_GT] = anon_sym_DASH_GT_GT,
  [anon_sym_DASH_QMARK_GT] = anon_sym_DASH_QMARK_GT,
  [anon_sym_DASH_QMARK_GT_GT] = anon_sym_DASH_QMARK_GT_GT,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_quasiquote] = anon_sym_quasiquote,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_unquote] = anon_sym_unquote,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_splice] = anon_sym_splice,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_number_literal] = sym_number_literal,
  [sym_str_literal] = sym_str_literal,
  [sym_long_str_literal] = sym_long_str_literal,
  [sym_buffer_literal] = sym_buffer_literal,
  [sym_long_buffer_literal] = sym_long_buffer_literal,
  [sym_keyword] = sym_keyword,
  [sym_symbol] = sym_symbol,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_nil_literal] = sym_nil_literal,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_AT_LBRACK] = anon_sym_AT_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_source_file] = sym_source_file,
  [sym__form] = sym__form,
  [sym_tuple] = sym_tuple,
  [sym__tuple_content] = sym__tuple_content,
  [sym_def] = sym_def,
  [sym_var] = sym_var,
  [sym_function_def] = sym_function_def,
  [sym_short_fn] = sym_short_fn,
  [sym_control_flow] = sym_control_flow,
  [sym_loop_construct] = sym_loop_construct,
  [sym_assignment] = sym_assignment,
  [sym_operation] = sym_operation,
  [sym_special_form] = sym_special_form,
  [sym_generic_tuple] = sym_generic_tuple,
  [sym_quote_form] = sym_quote_form,
  [sym_quasiquote_form] = sym_quasiquote_form,
  [sym_unquote_form] = sym_unquote_form,
  [sym_splice_form] = sym_splice_form,
  [sym_bool_literal] = sym_bool_literal,
  [sym_array] = sym_array,
  [sym_table] = sym_table,
  [sym_struct] = sym_struct,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_def_repeat1] = aux_sym_def_repeat1,
  [aux_sym_function_def_repeat1] = aux_sym_function_def_repeat1,
  [aux_sym_control_flow_repeat1] = aux_sym_control_flow_repeat1,
  [aux_sym_control_flow_repeat2] = aux_sym_control_flow_repeat2,
  [aux_sym_special_form_repeat1] = aux_sym_special_form_repeat1,
  [aux_sym_special_form_repeat2] = aux_sym_special_form_repeat2,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varglobal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defglobal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmacro_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defdyn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHlet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHwith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when_DASHlet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when_DASHwith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless_DASHlet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eachk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eachp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forever] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setdyn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put_DASHin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update_DASHin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_product] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deep_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deep_DASHnot_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_band] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brushift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_length] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_first] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_last] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_take] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_take_DASHuntil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_take_DASHwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop_DASHuntil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop_DASHwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort_DASHby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mapcat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reduce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reduce2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_find] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_find_DASHindex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frequencies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_describe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_values] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pairs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge_DASHinto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_printf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eprint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slurp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flush] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_truthy_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int_SLASHs64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int_SLASHu64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keyword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_freeze] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thaw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upscope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comptime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_errorf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assertf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edefer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_QMARK_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quasiquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_splice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_str_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_long_str_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_long_buffer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_nil_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_content] = {
    .visible = false,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_function_def] = {
    .visible = true,
    .named = true,
  },
  [sym_short_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_control_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_construct] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_special_form] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_form] = {
    .visible = true,
    .named = true,
  },
  [sym_quasiquote_form] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_form] = {
    .visible = true,
    .named = true,
  },
  [sym_splice_form] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_control_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_control_flow_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_form_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_form_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_binding = 2,
  field_bindings = 3,
  field_body = 4,
  field_collection = 5,
  field_condition = 6,
  field_count = 7,
  field_ds = 8,
  field_else = 9,
  field_end = 10,
  field_expr = 11,
  field_fn = 12,
  field_form = 13,
  field_forms = 14,
  field_head = 15,
  field_key = 16,
  field_keys = 17,
  field_message = 18,
  field_metadata = 19,
  field_module = 20,
  field_name = 21,
  field_params = 22,
  field_pattern = 23,
  field_start = 24,
  field_step = 25,
  field_target = 26,
  field_then = 27,
  field_value = 28,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_binding] = "binding",
  [field_bindings] = "bindings",
  [field_body] = "body",
  [field_collection] = "collection",
  [field_condition] = "condition",
  [field_count] = "count",
  [field_ds] = "ds",
  [field_else] = "else",
  [field_end] = "end",
  [field_expr] = "expr",
  [field_fn] = "fn",
  [field_form] = "form",
  [field_forms] = "forms",
  [field_head] = "head",
  [field_key] = "key",
  [field_keys] = "keys",
  [field_message] = "message",
  [field_metadata] = "metadata",
  [field_module] = "module",
  [field_name] = "name",
  [field_params] = "params",
  [field_pattern] = "pattern",
  [field_start] = "start",
  [field_step] = "step",
  [field_target] = "target",
  [field_then] = "then",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 2},
  [17] = {.index = 21, .length = 1},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 2},
  [20] = {.index = 26, .length = 2},
  [21] = {.index = 28, .length = 2},
  [22] = {.index = 30, .length = 2},
  [23] = {.index = 32, .length = 2},
  [24] = {.index = 34, .length = 4},
  [25] = {.index = 38, .length = 3},
  [26] = {.index = 41, .length = 2},
  [27] = {.index = 43, .length = 2},
  [28] = {.index = 45, .length = 2},
  [29] = {.index = 47, .length = 2},
  [30] = {.index = 49, .length = 2},
  [31] = {.index = 51, .length = 2},
  [32] = {.index = 53, .length = 2},
  [33] = {.index = 55, .length = 2},
  [34] = {.index = 57, .length = 2},
  [35] = {.index = 59, .length = 1},
  [36] = {.index = 60, .length = 2},
  [37] = {.index = 62, .length = 2},
  [38] = {.index = 64, .length = 3},
  [39] = {.index = 67, .length = 3},
  [40] = {.index = 70, .length = 3},
  [41] = {.index = 73, .length = 2},
  [42] = {.index = 75, .length = 3},
  [43] = {.index = 78, .length = 3},
  [44] = {.index = 81, .length = 2},
  [45] = {.index = 83, .length = 4},
  [46] = {.index = 87, .length = 3},
  [47] = {.index = 90, .length = 3},
  [48] = {.index = 93, .length = 3},
  [49] = {.index = 96, .length = 3},
  [50] = {.index = 99, .length = 3},
  [51] = {.index = 102, .length = 3},
  [52] = {.index = 105, .length = 2},
  [53] = {.index = 107, .length = 4},
  [54] = {.index = 111, .length = 4},
  [55] = {.index = 115, .length = 4},
  [56] = {.index = 119, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_head, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_metadata, 0},
  [3] =
    {field_params, 1},
  [4] =
    {field_condition, 1},
  [5] =
    {field_body, 1, .inherited = true},
    {field_condition, 1, .inherited = true},
  [7] =
    {field_expr, 1},
  [8] =
    {field_bindings, 1},
  [9] =
    {field_count, 1},
  [10] =
    {field_form, 1},
  [11] =
    {field_module, 1},
  [12] =
    {field_args, 0},
  [13] =
    {field_args, 1, .inherited = true},
    {field_head, 0},
  [15] =
    {field_name, 1},
    {field_value, 2},
  [17] =
    {field_metadata, 2, .inherited = true},
    {field_name, 1},
  [19] =
    {field_name, 1},
    {field_params, 2},
  [21] =
    {field_body, 0},
  [22] =
    {field_body, 2, .inherited = true},
    {field_params, 1},
  [24] =
    {field_metadata, 1, .inherited = true},
    {field_params, 2},
  [26] =
    {field_metadata, 0, .inherited = true},
    {field_metadata, 1, .inherited = true},
  [28] =
    {field_condition, 1},
    {field_then, 2},
  [30] =
    {field_body, 2, .inherited = true},
    {field_condition, 1},
  [32] =
    {field_body, 1},
    {field_condition, 0},
  [34] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
  [38] =
    {field_body, 2, .inherited = true},
    {field_expr, 1},
    {field_pattern, 2, .inherited = true},
  [41] =
    {field_bindings, 1},
    {field_body, 2, .inherited = true},
  [43] =
    {field_binding, 1},
    {field_collection, 2},
  [45] =
    {field_body, 2, .inherited = true},
    {field_count, 1},
  [47] =
    {field_target, 1},
    {field_value, 2},
  [49] =
    {field_binding, 1},
    {field_value, 2},
  [51] =
    {field_condition, 1},
    {field_message, 2},
  [53] =
    {field_body, 2, .inherited = true},
    {field_form, 1},
  [55] =
    {field_args, 2, .inherited = true},
    {field_module, 1},
  [57] =
    {field_body, 2, .inherited = true},
    {field_name, 1},
  [59] =
    {field_forms, 0},
  [60] =
    {field_expr, 1},
    {field_forms, 2, .inherited = true},
  [62] =
    {field_args, 0, .inherited = true},
    {field_args, 1, .inherited = true},
  [64] =
    {field_metadata, 2, .inherited = true},
    {field_name, 1},
    {field_value, 3},
  [67] =
    {field_body, 3, .inherited = true},
    {field_name, 1},
    {field_params, 2},
  [70] =
    {field_metadata, 2, .inherited = true},
    {field_name, 1},
    {field_params, 3},
  [73] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
  [75] =
    {field_body, 3, .inherited = true},
    {field_metadata, 1, .inherited = true},
    {field_params, 2},
  [78] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
  [81] =
    {field_body, 1},
    {field_pattern, 0},
  [83] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_pattern, 0, .inherited = true},
    {field_pattern, 1, .inherited = true},
  [87] =
    {field_binding, 1},
    {field_end, 3},
    {field_start, 2},
  [90] =
    {field_binding, 1},
    {field_body, 3, .inherited = true},
    {field_collection, 2},
  [93] =
    {field_ds, 1},
    {field_key, 2},
    {field_value, 3},
  [96] =
    {field_ds, 1},
    {field_keys, 2},
    {field_value, 3},
  [99] =
    {field_ds, 1},
    {field_fn, 3},
    {field_key, 2},
  [102] =
    {field_ds, 1},
    {field_fn, 3},
    {field_keys, 2},
  [105] =
    {field_forms, 0, .inherited = true},
    {field_forms, 1, .inherited = true},
  [107] =
    {field_body, 4, .inherited = true},
    {field_metadata, 2, .inherited = true},
    {field_name, 1},
    {field_params, 3},
  [111] =
    {field_binding, 1},
    {field_end, 3},
    {field_start, 2},
    {field_step, 4},
  [115] =
    {field_binding, 1},
    {field_body, 4, .inherited = true},
    {field_end, 3},
    {field_start, 2},
  [119] =
    {field_binding, 1},
    {field_body, 5, .inherited = true},
    {field_end, 3},
    {field_start, 2},
    {field_step, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 3,
  [70] = 4,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 72,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 73,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 93,
  [128] = 104,
  [129] = 118,
  [130] = 109,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 152,
  [159] = 152,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
};

static TSCharacterRange sym_str_literal_character_set_1[] = {
  {'"', '"'}, {'/', '7'}, {'U', 'U'}, {'\\', '\\'}, {'a', 'b'}, {'f', 'f'}, {'n', 'n'}, {'r', 'r'},
  {'t', 'v'}, {'x', 'x'},
};

static TSCharacterRange sym_buffer_literal_character_set_1[] = {
  {'/', '7'}, {'\\', '\\'}, {'`', 'b'}, {'f', 'f'}, {'n', 'n'}, {'r', 'r'}, {'t', 't'}, {'v', 'v'},
  {'x', 'x'},
};

static TSCharacterRange sym_keyword_character_set_1[] = {
  {'!', '!'}, {'$', '$'}, {'&', '&'}, {'*', '+'}, {'-', '9'}, {'?', '?'}, {'A', 'Z'}, {'_', '_'},
  {'a', 'z'}, {'|', '|'},
};

static TSCharacterRange sym_symbol_character_set_1[] = {
  {'!', '!'}, {'$', '&'}, {'*', '+'}, {'-', '-'}, {'/', '/'}, {'<', '?'}, {'A', 'Z'}, {'_', '_'},
  {'a', 'z'}, {'|', '|'},
};

static TSCharacterRange sym_symbol_character_set_2[] = {
  {'!', '!'}, {'$', '&'}, {'*', '+'}, {'-', '9'}, {'<', '?'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'},
  {'|', '|'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(395);
      ADVANCE_MAP(
        '"', 3,
        '#', 1067,
        '%', 500,
        '\'', 694,
        '(', 396,
        ')', 397,
        '*', 493,
        '+', 480,
        ',', 700,
        '-', 486,
        '.', 379,
        '/', 496,
        '0', 705,
        ':', 392,
        ';', 703,
        '<', 528,
        '=', 524,
        '>', 532,
        '@', 4,
        '[', 1068,
        ']', 1070,
        'a', 50,
        'b', 37,
        'c', 47,
        'd', 82,
        'e', 28,
        'f', 29,
        'g', 83,
        'i', 136,
        'k', 84,
        'l', 38,
        'm', 30,
        'n', 31,
        'o', 270,
        'p', 32,
        'q', 353,
        'r', 85,
        's', 116,
        't', 33,
        'u', 213,
        'v', 34,
        'w', 147,
        '{', 1073,
        '|', 420,
        '}', 1072,
        '~', 697,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(706);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 3,
        '#', 1067,
        '$', 1053,
        '%', 501,
        '\'', 694,
        '(', 396,
        ')', 397,
        '*', 492,
        '+', 481,
        ',', 700,
        '-', 487,
        '.', 379,
        '/', 497,
        '0', 705,
        ':', 392,
        ';', 703,
        '<', 529,
        '=', 525,
        '>', 533,
        '@', 4,
        '[', 1068,
        'a', 750,
        'b', 730,
        'c', 747,
        'd', 778,
        'e', 731,
        'f', 732,
        'g', 779,
        'i', 825,
        'k', 780,
        'l', 738,
        'm', 733,
        'n', 739,
        'o', 940,
        'p', 734,
        'q', 1018,
        'r', 781,
        's', 809,
        't', 735,
        'u', 892,
        'v', 736,
        'w', 833,
        '{', 1073,
        '|', 421,
        '~', 697,
        '!', 1057,
        '&', 1057,
        '?', 1057,
        '_', 1057,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(719);
      if (lookahead == '\\') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(719);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '[') ADVANCE(1069);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == '{') ADVANCE(1071);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(720);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1067);
      if (lookahead == '$') ADVANCE(1053);
      if (lookahead == '*') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (set_contains(sym_symbol_character_set_1, 10, lookahead)) ADVANCE(1057);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '=') ADVANCE(538);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == '?') ADVANCE(649);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(650);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(651);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(540);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(688);
      END_STATE();
    case 15:
      if (lookahead == '?') ADVANCE(648);
      END_STATE();
    case 16:
      if (lookahead == '?') ADVANCE(564);
      END_STATE();
    case 17:
      if (lookahead == '?') ADVANCE(645);
      END_STATE();
    case 18:
      if (lookahead == '?') ADVANCE(647);
      END_STATE();
    case 19:
      if (lookahead == '?') ADVANCE(644);
      END_STATE();
    case 20:
      if (lookahead == '?') ADVANCE(646);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(387);
      if (lookahead == 'x') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2);
      if (set_contains(sym_str_literal_character_set_1, 10, lookahead)) ADVANCE(3);
      END_STATE();
    case 22:
      if (lookahead == '\\') ADVANCE(368);
      if (lookahead == '`') ADVANCE(722);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\\') ADVANCE(368);
      if (lookahead == '`') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\\') ADVANCE(368);
      if (lookahead == '`') ADVANCE(721);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(723);
      END_STATE();
    case 26:
      if (lookahead == '`') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '`') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == 'u') ADVANCE(268);
      if (lookahead == 'y') ADVANCE(265);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(246);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(370);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(197);
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(506);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'f') ADVANCE(399);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(504);
      if (lookahead == 'f') ADVANCE(704);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(593);
      if (lookahead == 'x') ADVANCE(520);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(509);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(542);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(604);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(654);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'p') ADVANCE(134);
      if (lookahead == 'q') ADVANCE(357);
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'q') ADVANCE(356);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(1058);
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == 'y') ADVANCE(210);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'y') ADVANCE(297);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 137:
      if (lookahead == 'f') ADVANCE(704);
      END_STATE();
    case 138:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(332);
      END_STATE();
    case 140:
      if (lookahead == 'f') ADVANCE(333);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(335);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(126);
      END_STATE();
    case 144:
      if (lookahead == 'g') ADVANCE(610);
      END_STATE();
    case 145:
      if (lookahead == 'g') ADVANCE(340);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 148:
      if (lookahead == 'h') ADVANCE(459);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(640);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(562);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(372);
      END_STATE();
    case 155:
      if (lookahead == 'h') ADVANCE(184);
      END_STATE();
    case 156:
      if (lookahead == 'h') ADVANCE(179);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 158:
      if (lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(1064);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'q') ADVANCE(360);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'w') ADVANCE(174);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'w') ADVANCE(175);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(514);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(522);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(518);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 258:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 259:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 260:
      if (lookahead == 'p') ADVANCE(578);
      END_STATE();
    case 261:
      if (lookahead == 'p') ADVANCE(598);
      END_STATE();
    case 262:
      if (lookahead == 'p') ADVANCE(456);
      END_STATE();
    case 263:
      if (lookahead == 'p') ADVANCE(636);
      END_STATE();
    case 264:
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 265:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 266:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 267:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 268:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 269:
      if (lookahead == 'q') ADVANCE(363);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(672);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(665);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(653);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(596);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 296:
      if (lookahead == 's') ADVANCE(512);
      END_STATE();
    case 297:
      if (lookahead == 's') ADVANCE(618);
      if (lookahead == 'w') ADVANCE(251);
      END_STATE();
    case 298:
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(622);
      END_STATE();
    case 300:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 301:
      if (lookahead == 's') ADVANCE(620);
      END_STATE();
    case 302:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 303:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 304:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 305:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 310:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 311:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 312:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 313:
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(634);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 352:
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(662);
      END_STATE();
    case 353:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 354:
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 355:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 356:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 357:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 358:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 359:
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead == 'w') ADVANCE(155);
      END_STATE();
    case 360:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 361:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 362:
      if (lookahead == 'u') ADVANCE(235);
      if (lookahead == 'w') ADVANCE(158);
      END_STATE();
    case 363:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 364:
      if (lookahead == 'v') ADVANCE(510);
      END_STATE();
    case 365:
      if (lookahead == 'v') ADVANCE(129);
      END_STATE();
    case 366:
      if (lookahead == 'w') ADVANCE(657);
      END_STATE();
    case 367:
      if (lookahead == 'x') ADVANCE(606);
      END_STATE();
    case 368:
      if (lookahead == 'x') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      if (set_contains(sym_buffer_literal_character_set_1, 9, lookahead)) ADVANCE(24);
      END_STATE();
    case 369:
      if (lookahead == 'y') ADVANCE(556);
      END_STATE();
    case 370:
      if (lookahead == 'y') ADVANCE(590);
      END_STATE();
    case 371:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 372:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 373:
      if (lookahead == 'y') ADVANCE(220);
      END_STATE();
    case 374:
      if (lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 375:
      if (lookahead == 'z') ADVANCE(100);
      END_STATE();
    case 376:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(714);
      END_STATE();
    case 377:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(712);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(713);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(714);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(716);
      END_STATE();
    case 383:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 384:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 385:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 386:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 387:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 388:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 389:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 390:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 391:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      END_STATE();
    case 392:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(724);
      END_STATE();
    case 393:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(717);
      END_STATE();
    case 394:
      if (eof) ADVANCE(395);
      ADVANCE_MAP(
        '"', 3,
        '#', 1067,
        '$', 1053,
        '\'', 694,
        '(', 396,
        ')', 397,
        '*', 725,
        ',', 700,
        '.', 379,
        '0', 705,
        ':', 392,
        ';', 703,
        '@', 4,
        '[', 1068,
        ']', 1070,
        'f', 1040,
        'i', 1047,
        'n', 1041,
        't', 1049,
        '{', 1073,
        '|', 421,
        '}', 1072,
        '~', 697,
        '+', 727,
        '-', 727,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(394);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1057);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'd') ADVANCE(1036);
      if (lookahead == 'e') ADVANCE(944);
      if (lookahead == 'g') ADVANCE(875);
      if (lookahead == 'm') ADVANCE(748);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'g') ADVANCE(888);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == 'g') ADVANCE(207);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_varglobal);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_varglobal);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '-') ADVANCE(406);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '-') ADVANCE(407);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_defn_DASH);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_defn_DASH);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_defglobal);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_defglobal);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_defmacro);
      if (lookahead == '-') ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_defmacro);
      if (lookahead == '-') ADVANCE(413);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_defmacro_DASH);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_defmacro_DASH);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_defdyn);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_defdyn);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(884);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_if_DASHnot);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_if_DASHnot);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_if_DASHwith);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_if_DASHwith);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-') ADVANCE(204);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-') ADVANCE(885);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_when_DASHlet);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_when_DASHlet);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_when_DASHwith);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_when_DASHwith);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(887);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-') ADVANCE(206);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_unless_DASHlet);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_unless_DASHlet);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_cond);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '=') ADVANCE(527);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '=') ADVANCE(526);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1031);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_loop);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'k') ADVANCE(461);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_eachk);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_eachk);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_eachp);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_eachp);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_forever);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_forever);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'd') ADVANCE(1037);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_setdyn);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_setdyn);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_put);
      if (lookahead == '-') ADVANCE(172);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_put);
      if (lookahead == '-') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_put_DASHin);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_put_DASHin);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_update);
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_update);
      if (lookahead == '-') ADVANCE(857);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_update_DASHin);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_update_DASHin);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(482);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '=') ADVANCE(484);
      if (lookahead == 'i') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(707);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(483);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '=') ADVANCE(485);
      if (lookahead == 'i') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '=') ADVANCE(490);
      if (lookahead == '>') ADVANCE(684);
      if (lookahead == '?') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(707);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '=') ADVANCE(491);
      if (lookahead == '>') ADVANCE(685);
      if (lookahead == '?') ADVANCE(1039);
      if (lookahead == 'i') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(725);
      if (lookahead == '=') ADVANCE(495);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|') ADVANCE(1057);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(725);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(494);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(498);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(499);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(502);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(503);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_inc);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_dec);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_dec);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(881);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_abs);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_abs);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_sum);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_product);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_product);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_mean);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_not_EQ);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_not_EQ);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(530);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(531);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(534);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(535);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_compare);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_compare);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_deep_EQ);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_deep_EQ);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_deep_DASHnot_EQ);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_deep_DASHnot_EQ);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_band);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_bor);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_bxor);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_blshift);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_blshift);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_brshift);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_brshift);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_brushift);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_brushift);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '-') ADVANCE(171);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '-') ADVANCE(855);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_get_DASHin);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_get_DASHin);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_empty_QMARK);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_empty_QMARK);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_first);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_first);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_last);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_slice);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_slice);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_take);
      if (lookahead == '-') ADVANCE(362);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_take);
      if (lookahead == '-') ADVANCE(1028);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_take_DASHuntil);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_take_DASHuntil);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_take_DASHwhile);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_take_DASHwhile);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_drop);
      if (lookahead == '-') ADVANCE(359);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_drop);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_drop_DASHuntil);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_drop_DASHuntil);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_drop_DASHwhile);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_drop_DASHwhile);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead == '!') ADVANCE(586);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead == '!') ADVANCE(587);
      if (lookahead == '/') ADVANCE(1056);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_reverse_BANG);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_reverse_BANG);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_sort_DASHby);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_sort_DASHby);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_map);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(745);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_map);
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_mapcat);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_mapcat);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_filter);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_keep);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_keep);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_reduce);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(603);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_reduce);
      if (lookahead == '2') ADVANCE(602);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_reduce2);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_reduce2);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_find);
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_find);
      if (lookahead == '-') ADVANCE(861);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_find_DASHindex);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_find_DASHindex);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_frequencies);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_frequencies);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_describe);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_describe);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_keys);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_keys);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_values);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_values);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_pairs);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_pairs);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_merge);
      if (lookahead == '-') ADVANCE(183);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_merge);
      if (lookahead == '-') ADVANCE(868);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_merge_DASHinto);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_merge_DASHinto);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'f') ADVANCE(632);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_prin);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(628);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_prin);
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_printf);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_printf);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_eprint);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_eprint);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_slurp);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_slurp);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_spit);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_spit);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_flush);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_flush);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_boolean_QMARK);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_number_QMARK);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_function_QMARK);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_truthy_QMARK);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_nat_QMARK);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_int_QMARK);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_int_SLASHs64);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_int_SLASHu64);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_buffer);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_keyword);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_freeze);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_thaw);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_upscope);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_upscope);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_comptime);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_try);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'f') ADVANCE(667);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == 'f') ADVANCE(666);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_errorf);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_errorf);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == 'f') ADVANCE(670);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_assertf);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_assertf);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_defer);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_defer);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_edefer);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_edefer);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_require);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>') ADVANCE(686);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>') ADVANCE(687);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_DASH_QMARK_GT);
      if (lookahead == '>') ADVANCE(690);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_DASH_QMARK_GT);
      if (lookahead == '>') ADVANCE(691);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_DASH_QMARK_GT_GT);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_DASH_QMARK_GT_GT);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_quasiquote);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_quasiquote);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_unquote);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_splice);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_splice);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead == 'x') ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(1055);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(713);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(714);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_number_literal);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_str_literal);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_long_str_literal);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_buffer_literal);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_buffer_literal);
      if (lookahead == '`') ADVANCE(27);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_long_buffer_literal);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_keyword);
      if (set_contains(sym_keyword_character_set_1, 10, lookahead)) ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(725);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|') ADVANCE(1057);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(725);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(912);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '=') ADVANCE(539);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == 'i') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '=') ADVANCE(541);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '?') ADVANCE(565);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(904);
      if (lookahead == 'l') ADVANCE(970);
      if (lookahead == 'n') ADVANCE(918);
      if (lookahead == 'o') ADVANCE(941);
      if (lookahead == 'r') ADVANCE(980);
      if (lookahead == 'x') ADVANCE(920);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'd') ADVANCE(782);
      if (lookahead == 'm') ADVANCE(935);
      if (lookahead == 'p') ADVANCE(950);
      if (lookahead == 'r') ADVANCE(962);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead == 'i') ADVANCE(877);
      if (lookahead == 'l') ADVANCE(1019);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(942);
      if (lookahead == 'r') ADVANCE(783);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'e') ADVANCE(740);
      if (lookahead == 'i') ADVANCE(895);
      if (lookahead == 'o') ADVANCE(770);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == 'r') ADVANCE(848);
      if (lookahead == 'u') ADVANCE(984);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead == 'r') ADVANCE(1020);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(876);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(1033);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(975);
      if (lookahead == 'e') ADVANCE(894);
      if (lookahead == 'o') ADVANCE(919);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(893);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == 'o') ADVANCE(983);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(896);
      if (lookahead == 'r') ADVANCE(832);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(871);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(972);
      if (lookahead == 'o') ADVANCE(1013);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(872);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 't') ADVANCE(844);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(996);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(997);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(974);
      if (lookahead == 'o') ADVANCE(890);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'a') ADVANCE(1014);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'b') ADVANCE(964);
      if (lookahead == 'n') ADVANCE(769);
      if (lookahead == 'r') ADVANCE(949);
      if (lookahead == 's') ADVANCE(973);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'b') ADVANCE(879);
      if (lookahead == 'k') ADVANCE(786);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'b') ADVANCE(1035);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'b') ADVANCE(741);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'b') ADVANCE(804);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'b') ADVANCE(743);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(507);
      if (lookahead == 'e') ADVANCE(930);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 's') ADVANCE(761);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == 'f') ADVANCE(709);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(834);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(952);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead == 'x') ADVANCE(521);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(860);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(956);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(791);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(953);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(795);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(998);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(796);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(1001);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'c') ADVANCE(921);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'd') ADVANCE(605);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'd') ADVANCE(1024);
      if (lookahead == 'p') ADVANCE(824);
      if (lookahead == 'q') ADVANCE(1023);
      if (lookahead == 'v') ADVANCE(816);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'd') ADVANCE(749);
      if (lookahead == 's') ADVANCE(768);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'd') ADVANCE(805);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'd') ADVANCE(1025);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(756);
      if (lookahead == 'i') ADVANCE(1030);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(917);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(774);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(829);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(938);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1059);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1062);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(659);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(613);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1032);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(985);
      if (lookahead == 'l') ADVANCE(846);
      if (lookahead == 'o') ADVANCE(957);
      if (lookahead == 'p') ADVANCE(854);
      if (lookahead == 't') ADVANCE(951);
      if (lookahead == 'u') ADVANCE(889);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(932);
      if (lookahead == 'y') ADVANCE(965);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(880);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(976);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(968);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(969);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(963);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(993);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(946);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(947);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(948);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1004);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1005);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(958);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'f') ADVANCE(423);
      if (lookahead == 'm') ADVANCE(937);
      if (lookahead == 'n') ADVANCE(757);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'f') ADVANCE(999);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'f') ADVANCE(1000);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'f') ADVANCE(1002);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'f') ADVANCE(818);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'g') ADVANCE(611);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'g') ADVANCE(1007);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'g') ADVANCE(789);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'h') ADVANCE(811);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'h') ADVANCE(458);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'h') ADVANCE(641);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'h') ADVANCE(563);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'h') ADVANCE(429);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'h') ADVANCE(435);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'h') ADVANCE(845);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'h') ADVANCE(867);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'h') ADVANCE(863);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'h') ADVANCE(865);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'h') ADVANCE(869);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(891);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(826);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(762);
      if (lookahead == 'u') ADVANCE(955);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(897);
      if (lookahead == 'o') ADVANCE(777);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(908);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(873);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(905);
      if (lookahead == 'u') ADVANCE(765);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(874);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(954);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(989);
      if (lookahead == 'l') ADVANCE(866);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(900);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(901);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(903);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(1009);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(814);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(907);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(939);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(827);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(961);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(828);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(766);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(882);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(911);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(883);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(1065);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(403);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(581);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(916);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(1021);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(1017);
      if (lookahead == 'n') ADVANCE(773);
      if (lookahead == 'r') ADVANCE(977);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(812);
      if (lookahead == 'q') ADVANCE(1027);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(792);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(806);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(817);
      if (lookahead == 'n') ADVANCE(923);
      if (lookahead == 'w') ADVANCE(858);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(821);
      if (lookahead == 'w') ADVANCE(859);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(978);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(822);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'l') ADVANCE(928);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'm') ADVANCE(515);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'm') ADVANCE(929);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'm') ADVANCE(803);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(878);
      if (lookahead == 'p') ADVANCE(775);
      if (lookahead == 's') ADVANCE(784);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(519);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(630);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(475);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(471);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(771);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(830);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(760);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(776);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(992);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(1011);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(1012);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(1010);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(924);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(627);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(753);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(931);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(986);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(933);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(943);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(936);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(945);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(994);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(1003);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(959);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(1015);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(1016);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(755);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'p') ADVANCE(744);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'p') ADVANCE(726);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'p') ADVANCE(579);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'p') ADVANCE(599);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'p') ADVANCE(457);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'p') ADVANCE(637);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'p') ADVANCE(1006);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'p') ADVANCE(802);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'p') ADVANCE(925);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'q') ADVANCE(1022);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'q') ADVANCE(1029);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(454);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(547);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(673);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(664);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(675);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(597);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(737);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(849);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(851);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(913);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(914);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(966);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(934);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(847);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(988);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(991);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(995);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(799);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(922);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(979);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(513);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(436);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(609);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(839);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(835);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(862);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(823);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(987);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(967);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(990);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(788);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(800);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(841);
      if (lookahead == 'u') ADVANCE(981);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(842);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(559);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(473);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(549);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(639);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(567);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(668);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(635);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(551);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(517);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(555);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(728);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(1034);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(836);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(838);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(915);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(790);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(797);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(801);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(807);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 't') ADVANCE(819);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(742);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(971);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(787);
      if (lookahead == 'y') ADVANCE(663);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(813);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(815);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(864);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(764);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(767);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(909);
      if (lookahead == 'w') ADVANCE(840);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(926);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(910);
      if (lookahead == 'w') ADVANCE(843);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(927);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'v') ADVANCE(511);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'v') ADVANCE(820);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'x') ADVANCE(607);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'y') ADVANCE(557);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'y') ADVANCE(729);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'y') ADVANCE(591);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'y') ADVANCE(899);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == 'y') ADVANCE(902);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '>') ADVANCE(689);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(1045);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(1048);
      if (lookahead == 'i') ADVANCE(1046);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(1060);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(1063);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(718);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(1050);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(1066);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(1044);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(718);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(1051);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(1043);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(1042);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_symbol);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|') ADVANCE(1057);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1053);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(1057);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_symbol);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_true);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_false);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_nil_literal);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_nil_literal);
      if (lookahead == '/') ADVANCE(1056);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_nil_literal);
      if (set_contains(sym_symbol_character_set_2, 9, lookahead)) ADVANCE(1057);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1067);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_AT_LBRACK);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 394},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 394},
  [4] = {.lex_state = 394},
  [5] = {.lex_state = 394},
  [6] = {.lex_state = 394},
  [7] = {.lex_state = 394},
  [8] = {.lex_state = 394},
  [9] = {.lex_state = 394},
  [10] = {.lex_state = 394},
  [11] = {.lex_state = 394},
  [12] = {.lex_state = 394},
  [13] = {.lex_state = 394},
  [14] = {.lex_state = 394},
  [15] = {.lex_state = 394},
  [16] = {.lex_state = 394},
  [17] = {.lex_state = 394},
  [18] = {.lex_state = 394},
  [19] = {.lex_state = 394},
  [20] = {.lex_state = 394},
  [21] = {.lex_state = 394},
  [22] = {.lex_state = 394},
  [23] = {.lex_state = 394},
  [24] = {.lex_state = 394},
  [25] = {.lex_state = 394},
  [26] = {.lex_state = 394},
  [27] = {.lex_state = 394},
  [28] = {.lex_state = 394},
  [29] = {.lex_state = 394},
  [30] = {.lex_state = 394},
  [31] = {.lex_state = 394},
  [32] = {.lex_state = 394},
  [33] = {.lex_state = 394},
  [34] = {.lex_state = 394},
  [35] = {.lex_state = 394},
  [36] = {.lex_state = 394},
  [37] = {.lex_state = 394},
  [38] = {.lex_state = 394},
  [39] = {.lex_state = 394},
  [40] = {.lex_state = 394},
  [41] = {.lex_state = 394},
  [42] = {.lex_state = 394},
  [43] = {.lex_state = 394},
  [44] = {.lex_state = 394},
  [45] = {.lex_state = 394},
  [46] = {.lex_state = 394},
  [47] = {.lex_state = 394},
  [48] = {.lex_state = 394},
  [49] = {.lex_state = 394},
  [50] = {.lex_state = 394},
  [51] = {.lex_state = 394},
  [52] = {.lex_state = 394},
  [53] = {.lex_state = 394},
  [54] = {.lex_state = 394},
  [55] = {.lex_state = 394},
  [56] = {.lex_state = 394},
  [57] = {.lex_state = 394},
  [58] = {.lex_state = 394},
  [59] = {.lex_state = 394},
  [60] = {.lex_state = 394},
  [61] = {.lex_state = 394},
  [62] = {.lex_state = 394},
  [63] = {.lex_state = 394},
  [64] = {.lex_state = 394},
  [65] = {.lex_state = 394},
  [66] = {.lex_state = 394},
  [67] = {.lex_state = 394},
  [68] = {.lex_state = 394},
  [69] = {.lex_state = 394},
  [70] = {.lex_state = 394},
  [71] = {.lex_state = 394},
  [72] = {.lex_state = 394},
  [73] = {.lex_state = 394},
  [74] = {.lex_state = 394},
  [75] = {.lex_state = 394},
  [76] = {.lex_state = 394},
  [77] = {.lex_state = 394},
  [78] = {.lex_state = 394},
  [79] = {.lex_state = 394},
  [80] = {.lex_state = 394},
  [81] = {.lex_state = 394},
  [82] = {.lex_state = 394},
  [83] = {.lex_state = 394},
  [84] = {.lex_state = 394},
  [85] = {.lex_state = 394},
  [86] = {.lex_state = 394},
  [87] = {.lex_state = 394},
  [88] = {.lex_state = 394},
  [89] = {.lex_state = 394},
  [90] = {.lex_state = 394},
  [91] = {.lex_state = 394},
  [92] = {.lex_state = 394},
  [93] = {.lex_state = 394},
  [94] = {.lex_state = 394},
  [95] = {.lex_state = 394},
  [96] = {.lex_state = 394},
  [97] = {.lex_state = 394},
  [98] = {.lex_state = 394},
  [99] = {.lex_state = 394},
  [100] = {.lex_state = 394},
  [101] = {.lex_state = 394},
  [102] = {.lex_state = 394},
  [103] = {.lex_state = 394},
  [104] = {.lex_state = 394},
  [105] = {.lex_state = 394},
  [106] = {.lex_state = 394},
  [107] = {.lex_state = 394},
  [108] = {.lex_state = 394},
  [109] = {.lex_state = 394},
  [110] = {.lex_state = 394},
  [111] = {.lex_state = 394},
  [112] = {.lex_state = 394},
  [113] = {.lex_state = 394},
  [114] = {.lex_state = 394},
  [115] = {.lex_state = 394},
  [116] = {.lex_state = 394},
  [117] = {.lex_state = 394},
  [118] = {.lex_state = 394},
  [119] = {.lex_state = 394},
  [120] = {.lex_state = 394},
  [121] = {.lex_state = 394},
  [122] = {.lex_state = 394},
  [123] = {.lex_state = 394},
  [124] = {.lex_state = 394},
  [125] = {.lex_state = 394},
  [126] = {.lex_state = 394},
  [127] = {.lex_state = 394},
  [128] = {.lex_state = 394},
  [129] = {.lex_state = 394},
  [130] = {.lex_state = 394},
  [131] = {.lex_state = 394},
  [132] = {.lex_state = 394},
  [133] = {.lex_state = 394},
  [134] = {.lex_state = 394},
  [135] = {.lex_state = 394},
  [136] = {.lex_state = 394},
  [137] = {.lex_state = 394},
  [138] = {.lex_state = 394},
  [139] = {.lex_state = 394},
  [140] = {.lex_state = 394},
  [141] = {.lex_state = 394},
  [142] = {.lex_state = 394},
  [143] = {.lex_state = 394},
  [144] = {.lex_state = 394},
  [145] = {.lex_state = 394},
  [146] = {.lex_state = 394},
  [147] = {.lex_state = 394},
  [148] = {.lex_state = 394},
  [149] = {.lex_state = 394},
  [150] = {.lex_state = 394},
  [151] = {.lex_state = 394},
  [152] = {.lex_state = 394},
  [153] = {.lex_state = 394},
  [154] = {.lex_state = 394},
  [155] = {.lex_state = 394},
  [156] = {.lex_state = 394},
  [157] = {.lex_state = 394},
  [158] = {.lex_state = 394},
  [159] = {.lex_state = 394},
  [160] = {.lex_state = 394},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_varglobal] = ACTIONS(1),
    [anon_sym_defn] = ACTIONS(1),
    [anon_sym_defn_DASH] = ACTIONS(1),
    [anon_sym_defglobal] = ACTIONS(1),
    [anon_sym_defmacro] = ACTIONS(1),
    [anon_sym_defmacro_DASH] = ACTIONS(1),
    [anon_sym_defdyn] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_if_DASHlet] = ACTIONS(1),
    [anon_sym_if_DASHnot] = ACTIONS(1),
    [anon_sym_if_DASHwith] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_when_DASHlet] = ACTIONS(1),
    [anon_sym_when_DASHwith] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_unless_DASHlet] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_eachk] = ACTIONS(1),
    [anon_sym_eachp] = ACTIONS(1),
    [anon_sym_forever] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_setdyn] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_put_DASHin] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_update_DASHin] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_inc] = ACTIONS(1),
    [anon_sym_dec] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_abs] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_product] = ACTIONS(1),
    [anon_sym_mean] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_not_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_compare] = ACTIONS(1),
    [anon_sym_deep_EQ] = ACTIONS(1),
    [anon_sym_deep_DASHnot_EQ] = ACTIONS(1),
    [anon_sym_band] = ACTIONS(1),
    [anon_sym_bor] = ACTIONS(1),
    [anon_sym_bxor] = ACTIONS(1),
    [anon_sym_bnot] = ACTIONS(1),
    [anon_sym_blshift] = ACTIONS(1),
    [anon_sym_brshift] = ACTIONS(1),
    [anon_sym_brushift] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_get_DASHin] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [anon_sym_empty_QMARK] = ACTIONS(1),
    [anon_sym_first] = ACTIONS(1),
    [anon_sym_last] = ACTIONS(1),
    [anon_sym_slice] = ACTIONS(1),
    [anon_sym_take] = ACTIONS(1),
    [anon_sym_take_DASHuntil] = ACTIONS(1),
    [anon_sym_take_DASHwhile] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_drop_DASHuntil] = ACTIONS(1),
    [anon_sym_drop_DASHwhile] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_reverse_BANG] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_sort_DASHby] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_mapcat] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_keep] = ACTIONS(1),
    [anon_sym_reduce] = ACTIONS(1),
    [anon_sym_reduce2] = ACTIONS(1),
    [anon_sym_find] = ACTIONS(1),
    [anon_sym_find_DASHindex] = ACTIONS(1),
    [anon_sym_frequencies] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_describe] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_keys] = ACTIONS(1),
    [anon_sym_values] = ACTIONS(1),
    [anon_sym_pairs] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_merge_DASHinto] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_prin] = ACTIONS(1),
    [anon_sym_printf] = ACTIONS(1),
    [anon_sym_eprint] = ACTIONS(1),
    [anon_sym_slurp] = ACTIONS(1),
    [anon_sym_spit] = ACTIONS(1),
    [anon_sym_flush] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_boolean_QMARK] = ACTIONS(1),
    [anon_sym_number_QMARK] = ACTIONS(1),
    [anon_sym_function_QMARK] = ACTIONS(1),
    [anon_sym_truthy_QMARK] = ACTIONS(1),
    [anon_sym_nat_QMARK] = ACTIONS(1),
    [anon_sym_int_QMARK] = ACTIONS(1),
    [anon_sym_int_SLASHs64] = ACTIONS(1),
    [anon_sym_int_SLASHu64] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_buffer] = ACTIONS(1),
    [anon_sym_keyword] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_freeze] = ACTIONS(1),
    [anon_sym_thaw] = ACTIONS(1),
    [anon_sym_upscope] = ACTIONS(1),
    [anon_sym_comptime] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_errorf] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_assertf] = ACTIONS(1),
    [anon_sym_defer] = ACTIONS(1),
    [anon_sym_edefer] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_DASH_QMARK_GT] = ACTIONS(1),
    [anon_sym_DASH_QMARK_GT_GT] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_quasiquote] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_unquote] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_splice] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_str_literal] = ACTIONS(1),
    [sym_long_str_literal] = ACTIONS(1),
    [sym_buffer_literal] = ACTIONS(1),
    [sym_long_buffer_literal] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_nil_literal] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_AT_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(167),
    [sym__form] = STATE(9),
    [sym_tuple] = STATE(9),
    [sym_short_fn] = STATE(9),
    [sym_quote_form] = STATE(9),
    [sym_quasiquote_form] = STATE(9),
    [sym_unquote_form] = STATE(9),
    [sym_splice_form] = STATE(9),
    [sym_bool_literal] = STATE(9),
    [sym_array] = STATE(9),
    [sym_table] = STATE(9),
    [sym_struct] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_number_literal] = ACTIONS(19),
    [sym_str_literal] = ACTIONS(21),
    [sym_long_str_literal] = ACTIONS(21),
    [sym_buffer_literal] = ACTIONS(19),
    [sym_long_buffer_literal] = ACTIONS(21),
    [sym_keyword] = ACTIONS(21),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_nil_literal] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(25),
    [anon_sym_AT_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
  },
  [2] = {
    [sym__form] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym__tuple_content] = STATE(173),
    [sym_def] = STATE(173),
    [sym_var] = STATE(173),
    [sym_function_def] = STATE(173),
    [sym_short_fn] = STATE(15),
    [sym_control_flow] = STATE(173),
    [sym_loop_construct] = STATE(173),
    [sym_assignment] = STATE(173),
    [sym_operation] = STATE(173),
    [sym_special_form] = STATE(173),
    [sym_generic_tuple] = STATE(173),
    [sym_quote_form] = STATE(15),
    [sym_quasiquote_form] = STATE(15),
    [sym_unquote_form] = STATE(15),
    [sym_splice_form] = STATE(15),
    [sym_bool_literal] = STATE(15),
    [sym_array] = STATE(15),
    [sym_table] = STATE(15),
    [sym_struct] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_def] = ACTIONS(33),
    [anon_sym_var] = ACTIONS(35),
    [anon_sym_varglobal] = ACTIONS(35),
    [anon_sym_defn] = ACTIONS(37),
    [anon_sym_defn_DASH] = ACTIONS(37),
    [anon_sym_defglobal] = ACTIONS(37),
    [anon_sym_defmacro] = ACTIONS(37),
    [anon_sym_defmacro_DASH] = ACTIONS(37),
    [anon_sym_defdyn] = ACTIONS(37),
    [anon_sym_fn] = ACTIONS(37),
    [anon_sym_macro] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_if_DASHlet] = ACTIONS(39),
    [anon_sym_if_DASHnot] = ACTIONS(39),
    [anon_sym_if_DASHwith] = ACTIONS(39),
    [anon_sym_when] = ACTIONS(41),
    [anon_sym_when_DASHlet] = ACTIONS(41),
    [anon_sym_when_DASHwith] = ACTIONS(41),
    [anon_sym_unless] = ACTIONS(41),
    [anon_sym_unless_DASHlet] = ACTIONS(41),
    [anon_sym_cond] = ACTIONS(43),
    [anon_sym_case] = ACTIONS(45),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_or] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_while] = ACTIONS(51),
    [anon_sym_for] = ACTIONS(53),
    [anon_sym_loop] = ACTIONS(55),
    [anon_sym_each] = ACTIONS(57),
    [anon_sym_eachk] = ACTIONS(57),
    [anon_sym_eachp] = ACTIONS(57),
    [anon_sym_forever] = ACTIONS(59),
    [anon_sym_repeat] = ACTIONS(61),
    [anon_sym_set] = ACTIONS(63),
    [anon_sym_setdyn] = ACTIONS(65),
    [anon_sym_put] = ACTIONS(67),
    [anon_sym_put_DASHin] = ACTIONS(69),
    [anon_sym_update] = ACTIONS(71),
    [anon_sym_update_DASHin] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_PLUS_PLUS] = ACTIONS(75),
    [anon_sym_PLUS_EQ] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_DASH_DASH] = ACTIONS(75),
    [anon_sym_DASH_EQ] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_STAR_EQ] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_SLASH_EQ] = ACTIONS(75),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PERCENT_EQ] = ACTIONS(75),
    [anon_sym_inc] = ACTIONS(75),
    [anon_sym_dec] = ACTIONS(75),
    [anon_sym_mod] = ACTIONS(75),
    [anon_sym_div] = ACTIONS(75),
    [anon_sym_abs] = ACTIONS(75),
    [anon_sym_sum] = ACTIONS(75),
    [anon_sym_product] = ACTIONS(75),
    [anon_sym_mean] = ACTIONS(75),
    [anon_sym_max] = ACTIONS(75),
    [anon_sym_min] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_not_EQ] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_compare] = ACTIONS(75),
    [anon_sym_deep_EQ] = ACTIONS(75),
    [anon_sym_deep_DASHnot_EQ] = ACTIONS(75),
    [anon_sym_band] = ACTIONS(75),
    [anon_sym_bor] = ACTIONS(75),
    [anon_sym_bxor] = ACTIONS(75),
    [anon_sym_bnot] = ACTIONS(75),
    [anon_sym_blshift] = ACTIONS(75),
    [anon_sym_brshift] = ACTIONS(75),
    [anon_sym_brushift] = ACTIONS(75),
    [anon_sym_array] = ACTIONS(75),
    [anon_sym_get] = ACTIONS(75),
    [anon_sym_get_DASHin] = ACTIONS(75),
    [anon_sym_length] = ACTIONS(75),
    [anon_sym_empty_QMARK] = ACTIONS(75),
    [anon_sym_first] = ACTIONS(75),
    [anon_sym_last] = ACTIONS(75),
    [anon_sym_slice] = ACTIONS(75),
    [anon_sym_take] = ACTIONS(75),
    [anon_sym_take_DASHuntil] = ACTIONS(75),
    [anon_sym_take_DASHwhile] = ACTIONS(75),
    [anon_sym_drop] = ACTIONS(75),
    [anon_sym_drop_DASHuntil] = ACTIONS(75),
    [anon_sym_drop_DASHwhile] = ACTIONS(75),
    [anon_sym_reverse] = ACTIONS(75),
    [anon_sym_reverse_BANG] = ACTIONS(75),
    [anon_sym_sort] = ACTIONS(75),
    [anon_sym_sort_DASHby] = ACTIONS(75),
    [anon_sym_map] = ACTIONS(75),
    [anon_sym_mapcat] = ACTIONS(75),
    [anon_sym_filter] = ACTIONS(75),
    [anon_sym_keep] = ACTIONS(75),
    [anon_sym_reduce] = ACTIONS(75),
    [anon_sym_reduce2] = ACTIONS(75),
    [anon_sym_find] = ACTIONS(75),
    [anon_sym_find_DASHindex] = ACTIONS(75),
    [anon_sym_frequencies] = ACTIONS(75),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_describe] = ACTIONS(75),
    [anon_sym_table] = ACTIONS(75),
    [anon_sym_struct] = ACTIONS(75),
    [anon_sym_keys] = ACTIONS(75),
    [anon_sym_values] = ACTIONS(75),
    [anon_sym_pairs] = ACTIONS(75),
    [anon_sym_merge] = ACTIONS(75),
    [anon_sym_merge_DASHinto] = ACTIONS(75),
    [anon_sym_print] = ACTIONS(75),
    [anon_sym_prin] = ACTIONS(75),
    [anon_sym_printf] = ACTIONS(75),
    [anon_sym_eprint] = ACTIONS(75),
    [anon_sym_slurp] = ACTIONS(75),
    [anon_sym_spit] = ACTIONS(75),
    [anon_sym_flush] = ACTIONS(75),
    [aux_sym_operation_token1] = ACTIONS(75),
    [anon_sym_upscope] = ACTIONS(77),
    [anon_sym_comptime] = ACTIONS(79),
    [anon_sym_try] = ACTIONS(77),
    [anon_sym_error] = ACTIONS(77),
    [anon_sym_errorf] = ACTIONS(77),
    [anon_sym_assert] = ACTIONS(81),
    [anon_sym_assertf] = ACTIONS(81),
    [anon_sym_defer] = ACTIONS(83),
    [anon_sym_edefer] = ACTIONS(83),
    [anon_sym_import] = ACTIONS(85),
    [anon_sym_use] = ACTIONS(87),
    [anon_sym_require] = ACTIONS(87),
    [anon_sym_module] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_DASH_GT_GT] = ACTIONS(91),
    [anon_sym_DASH_QMARK_GT] = ACTIONS(91),
    [anon_sym_DASH_QMARK_GT_GT] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_quasiquote] = ACTIONS(95),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_unquote] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_splice] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_number_literal] = ACTIONS(101),
    [sym_str_literal] = ACTIONS(103),
    [sym_long_str_literal] = ACTIONS(103),
    [sym_buffer_literal] = ACTIONS(101),
    [sym_long_buffer_literal] = ACTIONS(103),
    [sym_keyword] = ACTIONS(103),
    [sym_symbol] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_nil_literal] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(25),
    [anon_sym_AT_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_TILDE,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    ACTIONS(137), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(134), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(125), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(128), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(78), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [68] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_TILDE,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(175), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(172), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(163), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(166), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(78), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [136] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      anon_sym_TILDE,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_SEMI,
    ACTIONS(213), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(210), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(201), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(204), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(5), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [203] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [270] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_table_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(225), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(227), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(97), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [337] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_table_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(225), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(227), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(97), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [404] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(235), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(237), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(5), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [469] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_control_flow_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(241), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(243), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(112), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [536] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(245), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(247), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(25), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [601] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(251), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(253), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(27), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [666] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(257), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(259), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(29), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [731] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(263), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(265), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(30), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [796] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_special_form_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(269), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(271), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(153), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [863] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(235), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(237), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(5), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [928] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_table_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(225), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(227), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(97), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [995] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_table_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(225), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(227), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(97), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [1062] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      aux_sym_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(293), 2,
      sym_str_literal,
      sym_keyword,
    ACTIONS(295), 2,
      sym_long_str_literal,
      sym_long_buffer_literal,
    ACTIONS(291), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    STATE(165), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [1131] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_TILDE,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(332), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      aux_sym_def_repeat1,
    ACTIONS(320), 2,
      sym_str_literal,
      sym_keyword,
    ACTIONS(323), 2,
      sym_long_str_literal,
      sym_long_buffer_literal,
    ACTIONS(326), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(329), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(317), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    STATE(38), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [1200] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [1267] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [1334] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_control_flow_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(241), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(243), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(112), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [1401] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_control_flow_repeat2,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(346), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(348), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(92), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [1468] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(235), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(237), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(5), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [1533] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [1600] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(235), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(237), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(5), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [1665] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(356), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(358), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(16), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [1730] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(235), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(237), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(5), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [1795] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(235), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(237), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(5), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [1860] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [1927] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_special_form_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(269), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(271), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(153), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [1994] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2061] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_special_form_repeat2,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(374), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(376), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(157), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2128] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_special_form_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(269), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(271), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(153), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2195] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym_TILDE,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      aux_sym_table_repeat1,
    ACTIONS(404), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(407), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(398), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(401), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(97), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2262] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(293), 2,
      sym_str_literal,
      sym_keyword,
    ACTIONS(422), 2,
      sym_long_str_literal,
      sym_long_buffer_literal,
    ACTIONS(420), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    STATE(178), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2331] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2398] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2465] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2532] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2599] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(440), 1,
      anon_sym_SQUOTE,
    ACTIONS(443), 1,
      anon_sym_TILDE,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      aux_sym_control_flow_repeat1,
    ACTIONS(458), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(461), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(452), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(455), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(112), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2666] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_control_flow_repeat2,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(346), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(348), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(92), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2733] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2800] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2867] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [2934] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3001] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3068] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_special_form_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(269), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(271), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(153), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3135] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3202] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_special_form_repeat2,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(374), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(376), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(157), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3269] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_PIPE,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
    ACTIONS(499), 1,
      anon_sym_TILDE,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_SEMI,
    ACTIONS(520), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      aux_sym_special_form_repeat1,
    ACTIONS(514), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(517), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(508), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(511), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(153), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3336] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3403] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3470] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(535), 1,
      anon_sym_PIPE,
    ACTIONS(538), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym_TILDE,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_SEMI,
    ACTIONS(562), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(556), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(559), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(550), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(553), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3537] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3604] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(575), 1,
      anon_sym_PIPE,
    ACTIONS(578), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      anon_sym_TILDE,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      anon_sym_SEMI,
    ACTIONS(602), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      aux_sym_control_flow_repeat2,
    ACTIONS(596), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(599), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(590), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(593), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(92), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3671] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(610), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(612), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(64), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3738] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [3805] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(618), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(620), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(66), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [3870] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(624), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(626), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(67), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [3935] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    ACTIONS(633), 1,
      anon_sym_PIPE,
    ACTIONS(636), 1,
      anon_sym_SQUOTE,
    ACTIONS(639), 1,
      anon_sym_TILDE,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_SEMI,
    ACTIONS(660), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(663), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      aux_sym_special_form_repeat2,
    ACTIONS(654), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(657), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(648), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(651), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(157), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [4002] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [4069] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    ACTIONS(674), 1,
      anon_sym_PIPE,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_TILDE,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(695), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(698), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(689), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(692), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [4136] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [4203] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(235), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(237), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(5), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [4268] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(235), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(237), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(5), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [4333] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [4400] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(715), 1,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(717), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(719), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(78), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [4465] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(715), 1,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(717), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(719), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(78), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [4530] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_function_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(221), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(223), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(155), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [4597] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(723), 1,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(235), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(237), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(5), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [4659] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(715), 1,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(717), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(719), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(78), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [4721] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(727), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(729), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(164), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [4785] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      aux_sym_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(733), 2,
      sym_str_literal,
      sym_keyword,
    ACTIONS(735), 2,
      sym_long_str_literal,
      sym_long_buffer_literal,
    ACTIONS(731), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    STATE(176), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [4851] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      aux_sym_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(739), 2,
      sym_str_literal,
      sym_keyword,
    ACTIONS(741), 2,
      sym_long_str_literal,
      sym_long_buffer_literal,
    ACTIONS(737), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    STATE(54), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [4917] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(745), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(747), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(163), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [4981] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(749), 1,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(235), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(237), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(5), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [5043] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(755), 1,
      sym_symbol,
    STATE(81), 1,
      aux_sym_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(739), 2,
      sym_str_literal,
      sym_keyword,
    ACTIONS(753), 2,
      sym_long_str_literal,
      sym_long_buffer_literal,
    ACTIONS(751), 3,
      sym_number_literal,
      sym_buffer_literal,
      sym_nil_literal,
    STATE(21), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5111] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      aux_sym_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(733), 2,
      sym_str_literal,
      sym_keyword,
    ACTIONS(759), 2,
      sym_long_str_literal,
      sym_long_buffer_literal,
    ACTIONS(757), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    STATE(162), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5177] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      aux_sym_def_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(739), 2,
      sym_str_literal,
      sym_keyword,
    ACTIONS(763), 2,
      sym_long_str_literal,
      sym_long_buffer_literal,
    ACTIONS(761), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    STATE(40), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5243] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(765), 1,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(767), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(769), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(72), 12,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
      aux_sym_source_file_repeat1,
  [5305] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(771), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(773), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(168), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5366] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(775), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(777), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(34), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5427] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(779), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(781), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(180), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5488] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(783), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(785), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(174), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5549] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(787), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(789), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(181), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5610] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(791), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(793), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(170), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5671] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(795), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(797), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(74), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5732] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(799), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(801), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(161), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5793] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(803), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(805), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(24), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5854] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(807), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(809), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(151), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5915] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(811), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(813), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(134), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [5976] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(815), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(817), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(31), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6037] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(819), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(821), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(58), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6098] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(823), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(825), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(32), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6159] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(827), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(829), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(156), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6220] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(831), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(833), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(172), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6281] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(835), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(837), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(101), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6342] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(839), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(841), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(169), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6403] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(843), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(845), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(60), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6464] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(847), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(849), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(61), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6525] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(851), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(853), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(26), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6586] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(855), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(857), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(136), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6647] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(859), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(861), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(177), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6708] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(863), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(865), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(6), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6769] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(867), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(869), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(102), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6830] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(871), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(873), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(110), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6891] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(875), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(877), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(145), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [6952] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(879), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(881), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(77), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7013] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(883), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(885), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(71), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7074] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(887), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(889), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(160), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7135] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(891), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(893), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(122), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7196] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(895), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(897), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(123), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7257] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(899), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(901), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(124), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7318] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(903), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(905), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(125), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7379] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(907), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(909), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(95), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7440] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(911), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(913), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(143), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7501] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(915), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(917), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(46), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7562] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(919), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(921), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(99), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7623] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(923), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(925), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(107), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7684] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(927), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(929), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(182), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7745] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(931), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(933), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(166), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7806] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(935), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(937), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(83), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7867] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(939), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(941), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(100), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7928] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(943), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(945), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(33), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [7989] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(811), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(813), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(134), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [8050] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(855), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(857), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(136), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [8111] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(911), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(913), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(143), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [8172] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(875), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(877), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(145), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [8233] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(947), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(949), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(22), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [8294] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
    ACTIONS(951), 4,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      sym_nil_literal,
    ACTIONS(953), 4,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
    STATE(119), 11,
      sym__form,
      sym_tuple,
      sym_short_fn,
      sym_quote_form,
      sym_quasiquote_form,
      sym_unquote_form,
      sym_splice_form,
      sym_bool_literal,
      sym_array,
      sym_table,
      sym_struct,
  [8355] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(957), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(955), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8387] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(961), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(959), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8419] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(963), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8451] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(969), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(967), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8483] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(973), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(971), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8515] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(977), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(975), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8547] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(981), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(979), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8579] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(985), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(983), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8611] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(989), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(987), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8643] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(993), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(991), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8675] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(997), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(995), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8707] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1001), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(999), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8739] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1005), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1003), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8771] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1009), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1007), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1013), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1011), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8835] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1017), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1015), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8867] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1021), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1019), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [8899] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(150), 1,
      aux_sym_def_repeat1,
    ACTIONS(1027), 2,
      sym_str_literal,
      sym_keyword,
    ACTIONS(1025), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1023), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_long_str_literal,
      sym_long_buffer_literal,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_LBRACE,
  [8933] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1032), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1030), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_LBRACE,
  [8962] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(1037), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1034), 13,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_LBRACE,
  [8993] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1042), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1040), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_LBRACE,
  [9022] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1046), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1044), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_LBRACE,
  [9051] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1050), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1048), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_LBRACE,
  [9080] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1052), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(413), 14,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [9109] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1056), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1054), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_LBRACE,
  [9138] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
    ACTIONS(1046), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1044), 13,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_LBRACE,
  [9169] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(1046), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1044), 13,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_LBRACE,
  [9200] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1060), 7,
      anon_sym_PIPE,
      sym_number_literal,
      sym_buffer_literal,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(1058), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_str_literal,
      sym_long_str_literal,
      sym_long_buffer_literal,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_AT_LBRACE,
      anon_sym_LBRACE,
  [9229] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
  [9236] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
  [9243] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
  [9250] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
  [9257] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
  [9264] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
  [9271] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1074), 1,
      ts_builtin_sym_end,
  [9278] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
  [9285] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1078), 1,
      anon_sym_RPAREN,
  [9292] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
  [9299] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1082), 1,
      sym_symbol,
  [9306] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
  [9313] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
  [9320] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
  [9327] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1086), 1,
      sym_symbol,
  [9334] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
  [9341] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [9348] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
  [9355] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1092), 1,
      sym_symbol,
  [9362] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
  [9369] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
  [9376] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 203,
  [SMALL_STATE(7)] = 270,
  [SMALL_STATE(8)] = 337,
  [SMALL_STATE(9)] = 404,
  [SMALL_STATE(10)] = 469,
  [SMALL_STATE(11)] = 536,
  [SMALL_STATE(12)] = 601,
  [SMALL_STATE(13)] = 666,
  [SMALL_STATE(14)] = 731,
  [SMALL_STATE(15)] = 796,
  [SMALL_STATE(16)] = 863,
  [SMALL_STATE(17)] = 928,
  [SMALL_STATE(18)] = 995,
  [SMALL_STATE(19)] = 1062,
  [SMALL_STATE(20)] = 1131,
  [SMALL_STATE(21)] = 1200,
  [SMALL_STATE(22)] = 1267,
  [SMALL_STATE(23)] = 1334,
  [SMALL_STATE(24)] = 1401,
  [SMALL_STATE(25)] = 1468,
  [SMALL_STATE(26)] = 1533,
  [SMALL_STATE(27)] = 1600,
  [SMALL_STATE(28)] = 1665,
  [SMALL_STATE(29)] = 1730,
  [SMALL_STATE(30)] = 1795,
  [SMALL_STATE(31)] = 1860,
  [SMALL_STATE(32)] = 1927,
  [SMALL_STATE(33)] = 1994,
  [SMALL_STATE(34)] = 2061,
  [SMALL_STATE(35)] = 2128,
  [SMALL_STATE(36)] = 2195,
  [SMALL_STATE(37)] = 2262,
  [SMALL_STATE(38)] = 2331,
  [SMALL_STATE(39)] = 2398,
  [SMALL_STATE(40)] = 2465,
  [SMALL_STATE(41)] = 2532,
  [SMALL_STATE(42)] = 2599,
  [SMALL_STATE(43)] = 2666,
  [SMALL_STATE(44)] = 2733,
  [SMALL_STATE(45)] = 2800,
  [SMALL_STATE(46)] = 2867,
  [SMALL_STATE(47)] = 2934,
  [SMALL_STATE(48)] = 3001,
  [SMALL_STATE(49)] = 3068,
  [SMALL_STATE(50)] = 3135,
  [SMALL_STATE(51)] = 3202,
  [SMALL_STATE(52)] = 3269,
  [SMALL_STATE(53)] = 3336,
  [SMALL_STATE(54)] = 3403,
  [SMALL_STATE(55)] = 3470,
  [SMALL_STATE(56)] = 3537,
  [SMALL_STATE(57)] = 3604,
  [SMALL_STATE(58)] = 3671,
  [SMALL_STATE(59)] = 3738,
  [SMALL_STATE(60)] = 3805,
  [SMALL_STATE(61)] = 3870,
  [SMALL_STATE(62)] = 3935,
  [SMALL_STATE(63)] = 4002,
  [SMALL_STATE(64)] = 4069,
  [SMALL_STATE(65)] = 4136,
  [SMALL_STATE(66)] = 4203,
  [SMALL_STATE(67)] = 4268,
  [SMALL_STATE(68)] = 4333,
  [SMALL_STATE(69)] = 4400,
  [SMALL_STATE(70)] = 4465,
  [SMALL_STATE(71)] = 4530,
  [SMALL_STATE(72)] = 4597,
  [SMALL_STATE(73)] = 4659,
  [SMALL_STATE(74)] = 4721,
  [SMALL_STATE(75)] = 4785,
  [SMALL_STATE(76)] = 4851,
  [SMALL_STATE(77)] = 4917,
  [SMALL_STATE(78)] = 4981,
  [SMALL_STATE(79)] = 5043,
  [SMALL_STATE(80)] = 5111,
  [SMALL_STATE(81)] = 5177,
  [SMALL_STATE(82)] = 5243,
  [SMALL_STATE(83)] = 5305,
  [SMALL_STATE(84)] = 5366,
  [SMALL_STATE(85)] = 5427,
  [SMALL_STATE(86)] = 5488,
  [SMALL_STATE(87)] = 5549,
  [SMALL_STATE(88)] = 5610,
  [SMALL_STATE(89)] = 5671,
  [SMALL_STATE(90)] = 5732,
  [SMALL_STATE(91)] = 5793,
  [SMALL_STATE(92)] = 5854,
  [SMALL_STATE(93)] = 5915,
  [SMALL_STATE(94)] = 5976,
  [SMALL_STATE(95)] = 6037,
  [SMALL_STATE(96)] = 6098,
  [SMALL_STATE(97)] = 6159,
  [SMALL_STATE(98)] = 6220,
  [SMALL_STATE(99)] = 6281,
  [SMALL_STATE(100)] = 6342,
  [SMALL_STATE(101)] = 6403,
  [SMALL_STATE(102)] = 6464,
  [SMALL_STATE(103)] = 6525,
  [SMALL_STATE(104)] = 6586,
  [SMALL_STATE(105)] = 6647,
  [SMALL_STATE(106)] = 6708,
  [SMALL_STATE(107)] = 6769,
  [SMALL_STATE(108)] = 6830,
  [SMALL_STATE(109)] = 6891,
  [SMALL_STATE(110)] = 6952,
  [SMALL_STATE(111)] = 7013,
  [SMALL_STATE(112)] = 7074,
  [SMALL_STATE(113)] = 7135,
  [SMALL_STATE(114)] = 7196,
  [SMALL_STATE(115)] = 7257,
  [SMALL_STATE(116)] = 7318,
  [SMALL_STATE(117)] = 7379,
  [SMALL_STATE(118)] = 7440,
  [SMALL_STATE(119)] = 7501,
  [SMALL_STATE(120)] = 7562,
  [SMALL_STATE(121)] = 7623,
  [SMALL_STATE(122)] = 7684,
  [SMALL_STATE(123)] = 7745,
  [SMALL_STATE(124)] = 7806,
  [SMALL_STATE(125)] = 7867,
  [SMALL_STATE(126)] = 7928,
  [SMALL_STATE(127)] = 7989,
  [SMALL_STATE(128)] = 8050,
  [SMALL_STATE(129)] = 8111,
  [SMALL_STATE(130)] = 8172,
  [SMALL_STATE(131)] = 8233,
  [SMALL_STATE(132)] = 8294,
  [SMALL_STATE(133)] = 8355,
  [SMALL_STATE(134)] = 8387,
  [SMALL_STATE(135)] = 8419,
  [SMALL_STATE(136)] = 8451,
  [SMALL_STATE(137)] = 8483,
  [SMALL_STATE(138)] = 8515,
  [SMALL_STATE(139)] = 8547,
  [SMALL_STATE(140)] = 8579,
  [SMALL_STATE(141)] = 8611,
  [SMALL_STATE(142)] = 8643,
  [SMALL_STATE(143)] = 8675,
  [SMALL_STATE(144)] = 8707,
  [SMALL_STATE(145)] = 8739,
  [SMALL_STATE(146)] = 8771,
  [SMALL_STATE(147)] = 8803,
  [SMALL_STATE(148)] = 8835,
  [SMALL_STATE(149)] = 8867,
  [SMALL_STATE(150)] = 8899,
  [SMALL_STATE(151)] = 8933,
  [SMALL_STATE(152)] = 8962,
  [SMALL_STATE(153)] = 8993,
  [SMALL_STATE(154)] = 9022,
  [SMALL_STATE(155)] = 9051,
  [SMALL_STATE(156)] = 9080,
  [SMALL_STATE(157)] = 9109,
  [SMALL_STATE(158)] = 9138,
  [SMALL_STATE(159)] = 9169,
  [SMALL_STATE(160)] = 9200,
  [SMALL_STATE(161)] = 9229,
  [SMALL_STATE(162)] = 9236,
  [SMALL_STATE(163)] = 9243,
  [SMALL_STATE(164)] = 9250,
  [SMALL_STATE(165)] = 9257,
  [SMALL_STATE(166)] = 9264,
  [SMALL_STATE(167)] = 9271,
  [SMALL_STATE(168)] = 9278,
  [SMALL_STATE(169)] = 9285,
  [SMALL_STATE(170)] = 9292,
  [SMALL_STATE(171)] = 9299,
  [SMALL_STATE(172)] = 9306,
  [SMALL_STATE(173)] = 9313,
  [SMALL_STATE(174)] = 9320,
  [SMALL_STATE(175)] = 9327,
  [SMALL_STATE(176)] = 9334,
  [SMALL_STATE(177)] = 9341,
  [SMALL_STATE(178)] = 9348,
  [SMALL_STATE(179)] = 9355,
  [SMALL_STATE(180)] = 9362,
  [SMALL_STATE(181)] = 9369,
  [SMALL_STATE(182)] = 9376,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_fn, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(3),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(93),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(104),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(118),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(109),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(78),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(78),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(149),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(28),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(7),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 2, 0, 0), SHIFT(8),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_fn, 3, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(3),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(93),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(104),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(118),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(109),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(78),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(78),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(149),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(28),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(7),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_short_fn, 3, 0, 0), SHIFT(8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 2, 0, 8),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_flow, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_tuple, 1, 0, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 2, 0, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__form, 1, 0, 0), SHIFT(2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__form, 1, 0, 0),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__form, 1, 0, 0), SHIFT(73),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__form, 1, 0, 0), SHIFT(93),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__form, 1, 0, 0), SHIFT(104),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__form, 1, 0, 0), SHIFT(118),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__form, 1, 0, 0), SHIFT(109),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__form, 1, 0, 0), SHIFT(38),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__form, 1, 0, 0), SHIFT(152),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__form, 1, 0, 0), SHIFT(38),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__form, 1, 0, 0), SHIFT(149),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__form, 1, 0, 0), SHIFT(28),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__form, 1, 0, 0), SHIFT(7),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__form, 1, 0, 0), SHIFT(8),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 2, 0, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_flow, 2, 0, 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_flow, 2, 0, 6),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_flow, 2, 0, 7),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_flow, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 2, 0, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 2, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 2, 0, 10),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 2, 0, 11),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 2, 0, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 2, 0, 7),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_tuple, 2, 0, 13),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 3, 0, 15),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 3, 0, 16),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 3, 0, 18),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 3, 0, 19),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_flow, 3, 0, 22),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(73),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(93),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(104),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(118),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(109),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(112),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(112),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(149),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(28),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(7),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 24), SHIFT_REPEAT(8),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_flow, 3, 0, 25),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 3, 0, 22),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 3, 0, 26),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 3, 0, 27),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 3, 0, 28),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 3, 0, 32),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 3, 0, 33),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 3, 0, 34),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 3, 0, 36),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(73),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(93),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(104),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(118),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(109),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(153),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(153),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(149),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(28),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(7),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat1, 2, 0, 37), SHIFT_REPEAT(8),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4, 0, 39),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4, 0, 40),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(73),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(93),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(104),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(118),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(109),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(155),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(155),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(149),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(28),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(7),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2, 0, 41), SHIFT_REPEAT(8),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4, 0, 42),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(73),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(93),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(104),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(118),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(109),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(92),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(92),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(149),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(28),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(7),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 45), SHIFT_REPEAT(8),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 4, 0, 46),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 4, 0, 47),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 50),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 51),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(73),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(93),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(104),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(118),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(109),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(157),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(157),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(149),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(28),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(7),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_special_form_repeat2, 2, 0, 52), SHIFT_REPEAT(8),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5, 0, 53),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(2),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), REDUCE(sym_loop_construct, 5, 0, 54),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(73),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(93),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(104),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(118),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(109),
  [689] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(155),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(155),
  [695] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(149),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(28),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(7),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17), SHIFT(8),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 5, 0, 55),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, 0, 50),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, 0, 51),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 6, 0, 56),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_construct, 2, 0, 9),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 2, 0, 5),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_flow, 3, 0, 21),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2, 0, 0),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2, 0, 0),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_form, 2, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_form, 2, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote_form, 2, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote_form, 2, 0, 0),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_form, 4, 0, 0),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_form, 4, 0, 0),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote_form, 4, 0, 0),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote_form, 4, 0, 0),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_form, 4, 0, 0),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_form, 4, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splice_form, 4, 0, 0),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splice_form, 4, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_form, 2, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_form, 2, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splice_form, 2, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splice_form, 2, 0, 0),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, 0, 0),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 2, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2, 0, 20),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_repeat1, 2, 0, 20),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2, 0, 20), SHIFT_REPEAT(154),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 44),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_flow_repeat2, 2, 0, 44),
  [1034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__form, 1, 0, 0), REDUCE(aux_sym_def_repeat1, 1, 0, 3),
  [1037] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__form, 1, 0, 0), REDUCE(aux_sym_def_repeat1, 1, 0, 3),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_special_form_repeat1, 1, 0, 12),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_special_form_repeat1, 1, 0, 12),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 1, 0, 3),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_repeat1, 1, 0, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 1, 0, 17),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_special_form_repeat2, 1, 0, 35),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_special_form_repeat2, 1, 0, 35),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 23),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_flow_repeat1, 2, 0, 23),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3, 0, 14),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_flow, 4, 0, 43),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 3, 0, 31),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 3, 0, 14),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 30),
  [1074] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 48),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 49),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 4, 0, 38),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 4, 0, 38),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 29),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_janet(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
