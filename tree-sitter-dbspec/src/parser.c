#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 15

enum {
  sym_identifier = 1,
  anon_sym_Parameters = 2,
  anon_sym_COLON = 3,
  anon_sym_Let = 4,
  anon_sym_EQ = 5,
  anon_sym_connection = 6,
  anon_sym_to = 7,
  anon_sym_with = 8,
  anon_sym_Execute = 9,
  anon_sym_result = 10,
  anon_sym_using = 11,
  anon_sym_Output = 12,
  anon_sym_SIARD = 13,
  anon_sym_description = 14,
  anon_sym_Schema = 15,
  anon_sym_Type = 16,
  anon_sym_Table = 17,
  anon_sym_Column = 18,
  anon_sym_Field = 19,
  sym_escape_sequence = 20,
  sym_short_description = 21,
  aux_sym__short_descr_token1 = 22,
  anon_sym_Properties = 23,
  sym__newline = 24,
  sym__indent = 25,
  sym__dedent = 26,
  sym__inter_start = 27,
  sym__inter_end = 28,
  sym__raw = 29,
  sym__string_start = 30,
  sym__string_content = 31,
  sym__string_end = 32,
  sym__comment = 33,
  sym__end_of_file = 34,
  sym__skip = 35,
  sym_source_file = 36,
  sym_parameters = 37,
  sym_parameter = 38,
  sym__statement = 39,
  sym_let = 40,
  sym__expression = 41,
  sym_connection = 42,
  sym_execute = 43,
  sym_query = 44,
  sym__sql = 45,
  sym_siard_output = 46,
  sym__siard_description = 47,
  sym_siard_schema = 48,
  sym_siard_type = 49,
  sym_siard_table = 50,
  sym_siard_column = 51,
  sym_siard_field = 52,
  sym__basic_expression = 53,
  sym_variable_instance = 54,
  sym_string = 55,
  sym_string_content = 56,
  sym__short_descr = 57,
  sym__nl = 58,
  sym__ni = 59,
  sym__ded = 60,
  sym_interpolation = 61,
  sym_properties = 62,
  sym_key_value_pair = 63,
  sym_raw = 64,
  sym_raw_content = 65,
  sym__value = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_parameters_repeat1 = 68,
  aux_sym_connection_repeat1 = 69,
  aux_sym_siard_output_repeat1 = 70,
  aux_sym_siard_schema_repeat1 = 71,
  aux_sym_siard_table_repeat1 = 72,
  aux_sym_siard_column_repeat1 = 73,
  aux_sym_string_repeat1 = 74,
  aux_sym_string_content_repeat1 = 75,
  aux_sym_raw_repeat1 = 76,
  aux_sym_raw_content_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_Parameters] = "Parameters",
  [anon_sym_COLON] = ":",
  [anon_sym_Let] = "Let",
  [anon_sym_EQ] = "=",
  [anon_sym_connection] = "connection",
  [anon_sym_to] = "to",
  [anon_sym_with] = "with",
  [anon_sym_Execute] = "Execute",
  [anon_sym_result] = "result",
  [anon_sym_using] = "using",
  [anon_sym_Output] = "Output",
  [anon_sym_SIARD] = "SIARD",
  [anon_sym_description] = "description",
  [anon_sym_Schema] = "Schema",
  [anon_sym_Type] = "Type",
  [anon_sym_Table] = "Table",
  [anon_sym_Column] = "Column",
  [anon_sym_Field] = "Field",
  [sym_escape_sequence] = "escape_sequence",
  [sym_short_description] = "short_description",
  [aux_sym__short_descr_token1] = "_short_descr_token1",
  [anon_sym_Properties] = "Properties",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__inter_start] = "_inter_start",
  [sym__inter_end] = "_inter_end",
  [sym__raw] = "_raw",
  [sym__string_start] = "\"",
  [sym__string_content] = "_string_content",
  [sym__string_end] = "\"",
  [sym__comment] = "_comment",
  [sym__end_of_file] = "_end_of_file",
  [sym__skip] = "_skip",
  [sym_source_file] = "source_file",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym__statement] = "_statement",
  [sym_let] = "let",
  [sym__expression] = "_expression",
  [sym_connection] = "connection",
  [sym_execute] = "execute",
  [sym_query] = "query",
  [sym__sql] = "_sql",
  [sym_siard_output] = "siard_output",
  [sym__siard_description] = "_siard_description",
  [sym_siard_schema] = "siard_schema",
  [sym_siard_type] = "siard_type",
  [sym_siard_table] = "siard_table",
  [sym_siard_column] = "siard_column",
  [sym_siard_field] = "siard_field",
  [sym__basic_expression] = "_basic_expression",
  [sym_variable_instance] = "variable_instance",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym__short_descr] = "_short_descr",
  [sym__nl] = "_nl",
  [sym__ni] = "_ni",
  [sym__ded] = "_ded",
  [sym_interpolation] = "interpolation",
  [sym_properties] = "properties",
  [sym_key_value_pair] = "key_value_pair",
  [sym_raw] = "raw",
  [sym_raw_content] = "raw_content",
  [sym__value] = "_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym_siard_output_repeat1] = "siard_output_repeat1",
  [aux_sym_siard_schema_repeat1] = "siard_schema_repeat1",
  [aux_sym_siard_table_repeat1] = "siard_table_repeat1",
  [aux_sym_siard_column_repeat1] = "siard_column_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_raw_repeat1] = "raw_repeat1",
  [aux_sym_raw_content_repeat1] = "raw_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_Parameters] = anon_sym_Parameters,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Let] = anon_sym_Let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_connection] = anon_sym_connection,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_Execute] = anon_sym_Execute,
  [anon_sym_result] = anon_sym_result,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_Output] = anon_sym_Output,
  [anon_sym_SIARD] = anon_sym_SIARD,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_Schema] = anon_sym_Schema,
  [anon_sym_Type] = anon_sym_Type,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_Column] = anon_sym_Column,
  [anon_sym_Field] = anon_sym_Field,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_short_description] = sym_short_description,
  [aux_sym__short_descr_token1] = aux_sym__short_descr_token1,
  [anon_sym_Properties] = anon_sym_Properties,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__inter_start] = sym__inter_start,
  [sym__inter_end] = sym__inter_end,
  [sym__raw] = sym__raw,
  [sym__string_start] = sym__string_start,
  [sym__string_content] = sym__string_content,
  [sym__string_end] = sym__string_start,
  [sym__comment] = sym__comment,
  [sym__end_of_file] = sym__end_of_file,
  [sym__skip] = sym__skip,
  [sym_source_file] = sym_source_file,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym__statement] = sym__statement,
  [sym_let] = sym_let,
  [sym__expression] = sym__expression,
  [sym_connection] = sym_connection,
  [sym_execute] = sym_execute,
  [sym_query] = sym_query,
  [sym__sql] = sym__sql,
  [sym_siard_output] = sym_siard_output,
  [sym__siard_description] = sym__siard_description,
  [sym_siard_schema] = sym_siard_schema,
  [sym_siard_type] = sym_siard_type,
  [sym_siard_table] = sym_siard_table,
  [sym_siard_column] = sym_siard_column,
  [sym_siard_field] = sym_siard_field,
  [sym__basic_expression] = sym__basic_expression,
  [sym_variable_instance] = sym_variable_instance,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym__short_descr] = sym__short_descr,
  [sym__nl] = sym__nl,
  [sym__ni] = sym__ni,
  [sym__ded] = sym__ded,
  [sym_interpolation] = sym_interpolation,
  [sym_properties] = sym_properties,
  [sym_key_value_pair] = sym_key_value_pair,
  [sym_raw] = sym_raw,
  [sym_raw_content] = sym_raw_content,
  [sym__value] = sym__value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym_siard_output_repeat1] = aux_sym_siard_output_repeat1,
  [aux_sym_siard_schema_repeat1] = aux_sym_siard_schema_repeat1,
  [aux_sym_siard_table_repeat1] = aux_sym_siard_table_repeat1,
  [aux_sym_siard_column_repeat1] = aux_sym_siard_column_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_raw_repeat1] = aux_sym_raw_repeat1,
  [aux_sym_raw_content_repeat1] = aux_sym_raw_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Parameters] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Execute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIARD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Schema] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Column] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Field] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_short_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__short_descr_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Properties] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__inter_start] = {
    .visible = false,
    .named = true,
  },
  [sym__inter_end] = {
    .visible = false,
    .named = true,
  },
  [sym__raw] = {
    .visible = false,
    .named = true,
  },
  [sym__string_start] = {
    .visible = true,
    .named = false,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__string_end] = {
    .visible = true,
    .named = false,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym__end_of_file] = {
    .visible = false,
    .named = true,
  },
  [sym__skip] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym_execute] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym__sql] = {
    .visible = false,
    .named = true,
  },
  [sym_siard_output] = {
    .visible = true,
    .named = true,
  },
  [sym__siard_description] = {
    .visible = false,
    .named = true,
  },
  [sym_siard_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_siard_type] = {
    .visible = true,
    .named = true,
  },
  [sym_siard_table] = {
    .visible = true,
    .named = true,
  },
  [sym_siard_column] = {
    .visible = true,
    .named = true,
  },
  [sym_siard_field] = {
    .visible = true,
    .named = true,
  },
  [sym__basic_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym__short_descr] = {
    .visible = false,
    .named = true,
  },
  [sym__nl] = {
    .visible = false,
    .named = true,
  },
  [sym__ni] = {
    .visible = false,
    .named = true,
  },
  [sym__ded] = {
    .visible = false,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_raw] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_content] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_connection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_siard_output_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_siard_schema_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_siard_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_siard_column_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_connection = 1,
  field_description = 2,
  field_file = 3,
  field_key = 4,
  field_name = 5,
  field_sql = 6,
  field_url = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_connection] = "connection",
  [field_description] = "description",
  [field_file] = "file",
  [field_key] = "key",
  [field_name] = "name",
  [field_sql] = "sql",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 2},
  [14] = {.index = 21, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_connection, 1, .inherited = true},
    {field_sql, 1, .inherited = true},
  [2] =
    {field_sql, 0},
  [3] =
    {field_name, 1},
    {field_value, 3},
  [5] =
    {field_connection, 1},
    {field_sql, 2},
  [7] =
    {field_description, 1, .inherited = true},
    {field_name, 0},
  [9] =
    {field_name, 0},
  [10] =
    {field_file, 2},
  [11] =
    {field_description, 0},
    {field_description, 1},
    {field_description, 2},
  [14] =
    {field_url, 2},
  [15] =
    {field_description, 2, .inherited = true},
    {field_name, 1},
  [17] =
    {field_name, 1},
  [18] =
    {field_description, 1},
  [19] =
    {field_description, 4, .inherited = true},
    {field_name, 1},
  [21] =
    {field_key, 0},
    {field_value, 1},
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
  [7] = 6,
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 15,
  [23] = 23,
  [24] = 12,
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
  [44] = 32,
  [45] = 45,
  [46] = 32,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 50,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 64,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
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
  [93] = 84,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 87,
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
  [111] = 106,
  [112] = 112,
  [113] = 113,
  [114] = 60,
  [115] = 115,
  [116] = 57,
  [117] = 106,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 14,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 72,
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
  [148] = 68,
  [149] = 149,
  [150] = 150,
  [151] = 64,
  [152] = 152,
  [153] = 153,
  [154] = 72,
  [155] = 155,
  [156] = 57,
  [157] = 157,
  [158] = 60,
  [159] = 56,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 68,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 168,
  [175] = 175,
  [176] = 176,
  [177] = 172,
  [178] = 178,
  [179] = 179,
  [180] = 179,
  [181] = 181,
  [182] = 179,
  [183] = 164,
  [184] = 164,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\''
      ? (c < '"'
        ? c == '\n'
        : c <= '"')
      : (c <= '\'' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(4);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 4:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'U') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_short_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__short_descr_token1);
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'C') ADVANCE(1);
      if (lookahead == 'E') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'L') ADVANCE(4);
      if (lookahead == 'O') ADVANCE(5);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_Let);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SIARD);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_Properties);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_connection);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 4},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 5},
  [7] = {.lex_state = 0, .external_lex_state = 5},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 5},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 6},
  [13] = {.lex_state = 0, .external_lex_state = 6},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 6},
  [16] = {.lex_state = 0, .external_lex_state = 5},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 6},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 6},
  [23] = {.lex_state = 0, .external_lex_state = 6},
  [24] = {.lex_state = 0, .external_lex_state = 6},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 0, .external_lex_state = 7},
  [30] = {.lex_state = 0, .external_lex_state = 7},
  [31] = {.lex_state = 0, .external_lex_state = 7},
  [32] = {.lex_state = 0, .external_lex_state = 8},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 0, .external_lex_state = 3},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 8},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 8},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 7},
  [50] = {.lex_state = 0, .external_lex_state = 4},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 4},
  [53] = {.lex_state = 0, .external_lex_state = 4},
  [54] = {.lex_state = 0, .external_lex_state = 4},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 5},
  [59] = {.lex_state = 0, .external_lex_state = 4},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 6},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 6},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 5},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 7},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 5},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 6},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 7},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 7},
  [107] = {.lex_state = 0, .external_lex_state = 7},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 0, .external_lex_state = 7},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 7},
  [114] = {.lex_state = 0, .external_lex_state = 7},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 7},
  [117] = {.lex_state = 0, .external_lex_state = 7},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 3},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 0, .external_lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 0, .external_lex_state = 7},
  [137] = {.lex_state = 0, .external_lex_state = 9},
  [138] = {.lex_state = 0, .external_lex_state = 9},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 9},
  [142] = {.lex_state = 0, .external_lex_state = 9},
  [143] = {.lex_state = 0, .external_lex_state = 9},
  [144] = {.lex_state = 0, .external_lex_state = 9},
  [145] = {.lex_state = 0, .external_lex_state = 9},
  [146] = {.lex_state = 0, .external_lex_state = 9},
  [147] = {.lex_state = 0, .external_lex_state = 9},
  [148] = {.lex_state = 0, .external_lex_state = 7},
  [149] = {.lex_state = 0, .external_lex_state = 9},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 7},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 10},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 10},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 10},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 9},
  [165] = {.lex_state = 18, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 11},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 10},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 11},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 10},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 11},
  [180] = {.lex_state = 0, .external_lex_state = 11},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 11},
  [183] = {.lex_state = 0, .external_lex_state = 9},
  [184] = {.lex_state = 0, .external_lex_state = 9},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__inter_start = 3,
  ts_external_token__inter_end = 4,
  ts_external_token__raw = 5,
  ts_external_token__string_start = 6,
  ts_external_token__string_content = 7,
  ts_external_token__string_end = 8,
  ts_external_token__comment = 9,
  ts_external_token__end_of_file = 10,
  ts_external_token__skip = 11,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__inter_start] = sym__inter_start,
  [ts_external_token__inter_end] = sym__inter_end,
  [ts_external_token__raw] = sym__raw,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token__string_end] = sym__string_end,
  [ts_external_token__comment] = sym__comment,
  [ts_external_token__end_of_file] = sym__end_of_file,
  [ts_external_token__skip] = sym__skip,
};

static const bool ts_external_scanner_states[12][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__inter_start] = true,
    [ts_external_token__inter_end] = true,
    [ts_external_token__raw] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__end_of_file] = true,
    [ts_external_token__skip] = true,
  },
  [2] = {
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__end_of_file] = true,
    [ts_external_token__skip] = true,
  },
  [4] = {
    [ts_external_token__string_start] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [5] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__inter_start] = true,
    [ts_external_token__raw] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__end_of_file] = true,
    [ts_external_token__skip] = true,
  },
  [6] = {
    [ts_external_token__inter_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [7] = {
    [ts_external_token__newline] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__end_of_file] = true,
    [ts_external_token__skip] = true,
  },
  [8] = {
    [ts_external_token__inter_start] = true,
    [ts_external_token__raw] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [9] = {
    [ts_external_token__newline] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [10] = {
    [ts_external_token__inter_end] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [11] = {
    [ts_external_token__indent] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_Parameters] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_connection] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_Execute] = ACTIONS(1),
    [anon_sym_result] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_Output] = ACTIONS(1),
    [anon_sym_SIARD] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_Schema] = ACTIONS(1),
    [anon_sym_Type] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_Column] = ACTIONS(1),
    [anon_sym_Field] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym__short_descr_token1] = ACTIONS(1),
    [anon_sym_Properties] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__inter_start] = ACTIONS(1),
    [sym__inter_end] = ACTIONS(1),
    [sym__raw] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [sym__end_of_file] = ACTIONS(1),
    [sym__skip] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(171),
    [sym_parameters] = STATE(4),
    [sym__statement] = STATE(5),
    [sym_let] = STATE(5),
    [sym_execute] = STATE(5),
    [sym_siard_output] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Parameters] = ACTIONS(7),
    [anon_sym_Let] = ACTIONS(9),
    [anon_sym_Execute] = ACTIONS(11),
    [anon_sym_Output] = ACTIONS(13),
    [sym__comment] = ACTIONS(3),
    [sym__skip] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(15), 1,
      anon_sym_description,
    ACTIONS(17), 1,
      anon_sym_Type,
    ACTIONS(19), 1,
      anon_sym_Table,
    STATE(19), 1,
      sym__siard_description,
    STATE(105), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(21), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(21), 3,
      sym_siard_type,
      sym_siard_table,
      aux_sym_siard_schema_repeat1,
  [29] = 6,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_connection,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(89), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [54] = 6,
    ACTIONS(9), 1,
      anon_sym_Let,
    ACTIONS(11), 1,
      anon_sym_Execute,
    ACTIONS(13), 1,
      anon_sym_Output,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(8), 5,
      sym__statement,
      sym_let,
      sym_execute,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [78] = 6,
    ACTIONS(9), 1,
      anon_sym_Let,
    ACTIONS(11), 1,
      anon_sym_Execute,
    ACTIONS(13), 1,
      anon_sym_Output,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(10), 5,
      sym__statement,
      sym_let,
      sym_execute,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [102] = 7,
    ACTIONS(35), 1,
      sym__inter_start,
    ACTIONS(37), 1,
      sym__raw,
    STATE(58), 1,
      aux_sym_raw_content_repeat1,
    STATE(67), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(33), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(16), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [128] = 7,
    ACTIONS(35), 1,
      sym__inter_start,
    ACTIONS(37), 1,
      sym__raw,
    STATE(58), 1,
      aux_sym_raw_content_repeat1,
    STATE(64), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(39), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(16), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [154] = 6,
    ACTIONS(9), 1,
      anon_sym_Let,
    ACTIONS(11), 1,
      anon_sym_Execute,
    ACTIONS(13), 1,
      anon_sym_Output,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(10), 5,
      sym__statement,
      sym_let,
      sym_execute,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [178] = 7,
    ACTIONS(35), 1,
      sym__inter_start,
    ACTIONS(37), 1,
      sym__raw,
    STATE(58), 1,
      aux_sym_raw_content_repeat1,
    STATE(151), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(43), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(16), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [204] = 6,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_Let,
    ACTIONS(50), 1,
      anon_sym_Execute,
    ACTIONS(53), 1,
      anon_sym_Output,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(10), 5,
      sym__statement,
      sym_let,
      sym_execute,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [228] = 7,
    ACTIONS(15), 1,
      anon_sym_description,
    ACTIONS(56), 1,
      anon_sym_Field,
    STATE(35), 1,
      sym__siard_description,
    STATE(135), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(58), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(36), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [253] = 7,
    ACTIONS(60), 1,
      sym_escape_sequence,
    ACTIONS(62), 1,
      sym__inter_start,
    ACTIONS(64), 1,
      sym__string_content,
    ACTIONS(66), 1,
      sym__string_end,
    STATE(63), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(15), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [278] = 7,
    ACTIONS(62), 1,
      sym__inter_start,
    ACTIONS(64), 1,
      sym__string_content,
    ACTIONS(68), 1,
      sym_escape_sequence,
    ACTIONS(70), 1,
      sym__string_end,
    STATE(63), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(18), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [303] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(72), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_description,
      anon_sym_Schema,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Field,
      anon_sym_Properties,
  [318] = 7,
    ACTIONS(62), 1,
      sym__inter_start,
    ACTIONS(64), 1,
      sym__string_content,
    ACTIONS(74), 1,
      sym_escape_sequence,
    ACTIONS(76), 1,
      sym__string_end,
    STATE(63), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(23), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [343] = 6,
    ACTIONS(80), 1,
      sym__inter_start,
    ACTIONS(83), 1,
      sym__raw,
    STATE(58), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(78), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(16), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [366] = 7,
    ACTIONS(86), 1,
      anon_sym_Schema,
    ACTIONS(88), 1,
      anon_sym_Properties,
    STATE(41), 1,
      sym_properties,
    STATE(76), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(90), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(42), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat1,
  [391] = 7,
    ACTIONS(62), 1,
      sym__inter_start,
    ACTIONS(64), 1,
      sym__string_content,
    ACTIONS(74), 1,
      sym_escape_sequence,
    ACTIONS(92), 1,
      sym__string_end,
    STATE(63), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(23), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [416] = 6,
    ACTIONS(17), 1,
      anon_sym_Type,
    ACTIONS(19), 1,
      anon_sym_Table,
    STATE(109), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(94), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(25), 3,
      sym_siard_type,
      sym_siard_table,
      aux_sym_siard_schema_repeat1,
  [439] = 7,
    ACTIONS(15), 1,
      anon_sym_description,
    ACTIONS(56), 1,
      anon_sym_Field,
    STATE(28), 1,
      sym__siard_description,
    STATE(123), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(96), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(33), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [464] = 6,
    ACTIONS(17), 1,
      anon_sym_Type,
    ACTIONS(19), 1,
      anon_sym_Table,
    STATE(110), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(98), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(26), 3,
      sym_siard_type,
      sym_siard_table,
      aux_sym_siard_schema_repeat1,
  [487] = 7,
    ACTIONS(62), 1,
      sym__inter_start,
    ACTIONS(64), 1,
      sym__string_content,
    ACTIONS(74), 1,
      sym_escape_sequence,
    ACTIONS(100), 1,
      sym__string_end,
    STATE(63), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(23), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [512] = 7,
    ACTIONS(102), 1,
      sym_escape_sequence,
    ACTIONS(105), 1,
      sym__inter_start,
    ACTIONS(108), 1,
      sym__string_content,
    ACTIONS(111), 1,
      sym__string_end,
    STATE(63), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(23), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [537] = 7,
    ACTIONS(62), 1,
      sym__inter_start,
    ACTIONS(64), 1,
      sym__string_content,
    ACTIONS(113), 1,
      sym_escape_sequence,
    ACTIONS(115), 1,
      sym__string_end,
    STATE(63), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(22), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [562] = 6,
    ACTIONS(17), 1,
      anon_sym_Type,
    ACTIONS(19), 1,
      anon_sym_Table,
    STATE(115), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(117), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(26), 3,
      sym_siard_type,
      sym_siard_table,
      aux_sym_siard_schema_repeat1,
  [585] = 5,
    ACTIONS(119), 1,
      anon_sym_Type,
    ACTIONS(122), 1,
      anon_sym_Table,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(125), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(26), 3,
      sym_siard_type,
      sym_siard_table,
      aux_sym_siard_schema_repeat1,
  [605] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(129), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(127), 5,
      anon_sym_Schema,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      sym_identifier,
  [621] = 5,
    ACTIONS(56), 1,
      anon_sym_Field,
    STATE(122), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(131), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(48), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [640] = 6,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      aux_sym__short_descr_token1,
    STATE(90), 1,
      sym__short_descr,
    STATE(92), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(137), 2,
      sym__newline,
      sym__end_of_file,
  [661] = 6,
    ACTIONS(135), 1,
      aux_sym__short_descr_token1,
    ACTIONS(139), 1,
      anon_sym_COLON,
    STATE(129), 1,
      sym__short_descr,
    STATE(130), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(141), 2,
      sym__newline,
      sym__end_of_file,
  [682] = 6,
    ACTIONS(135), 1,
      aux_sym__short_descr_token1,
    ACTIONS(143), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym__short_descr,
    STATE(94), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(145), 2,
      sym__newline,
      sym__end_of_file,
  [703] = 5,
    ACTIONS(35), 1,
      sym__inter_start,
    ACTIONS(37), 1,
      sym__raw,
    STATE(58), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(7), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [722] = 5,
    ACTIONS(56), 1,
      anon_sym_Field,
    STATE(102), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(147), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(73), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [741] = 5,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(95), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(151), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(62), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [760] = 5,
    ACTIONS(56), 1,
      anon_sym_Field,
    STATE(133), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(153), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(37), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [779] = 5,
    ACTIONS(56), 1,
      anon_sym_Field,
    STATE(132), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(155), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(73), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [798] = 5,
    ACTIONS(56), 1,
      anon_sym_Field,
    STATE(128), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(157), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(73), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [817] = 5,
    ACTIONS(159), 1,
      anon_sym_Column,
    STATE(80), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(161), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(71), 2,
      sym_siard_column,
      aux_sym_siard_table_repeat1,
  [836] = 5,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(77), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(165), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(55), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [855] = 5,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(108), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(167), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(62), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [874] = 5,
    ACTIONS(86), 1,
      anon_sym_Schema,
    STATE(75), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(169), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(47), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat1,
  [893] = 5,
    ACTIONS(86), 1,
      anon_sym_Schema,
    STATE(75), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(169), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(51), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat1,
  [912] = 5,
    ACTIONS(159), 1,
      anon_sym_Column,
    STATE(83), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(171), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(71), 2,
      sym_siard_column,
      aux_sym_siard_table_repeat1,
  [931] = 5,
    ACTIONS(35), 1,
      sym__inter_start,
    ACTIONS(37), 1,
      sym__raw,
    STATE(58), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(9), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [950] = 5,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(98), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(173), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(62), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [969] = 5,
    ACTIONS(35), 1,
      sym__inter_start,
    ACTIONS(37), 1,
      sym__raw,
    STATE(58), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(6), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [988] = 5,
    ACTIONS(86), 1,
      anon_sym_Schema,
    STATE(82), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(175), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(51), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat1,
  [1007] = 5,
    ACTIONS(56), 1,
      anon_sym_Field,
    STATE(120), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(177), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(73), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1026] = 6,
    ACTIONS(135), 1,
      aux_sym__short_descr_token1,
    ACTIONS(179), 1,
      anon_sym_COLON,
    STATE(103), 1,
      sym__short_descr,
    STATE(134), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(181), 2,
      sym__newline,
      sym__end_of_file,
  [1047] = 4,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(111), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1063] = 4,
    ACTIONS(187), 1,
      anon_sym_Schema,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(190), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(51), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat1,
  [1079] = 4,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(106), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1095] = 4,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(194), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(172), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1111] = 4,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(194), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(177), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1127] = 4,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(199), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(55), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1143] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(201), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Field,
  [1155] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1167] = 4,
    ACTIONS(207), 1,
      sym__raw,
    STATE(65), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(205), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [1183] = 4,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(117), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1199] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1211] = 4,
    ACTIONS(213), 1,
      sym__string_content,
    STATE(61), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(211), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [1227] = 4,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(219), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(62), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [1243] = 4,
    ACTIONS(223), 1,
      sym__string_content,
    STATE(61), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(221), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [1259] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Column,
  [1271] = 4,
    ACTIONS(229), 1,
      sym__raw,
    STATE(65), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(227), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [1287] = 5,
    ACTIONS(159), 1,
      anon_sym_Column,
    ACTIONS(232), 1,
      anon_sym_description,
    STATE(121), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(43), 2,
      sym_siard_column,
      aux_sym_siard_table_repeat1,
  [1305] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(225), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Field,
  [1317] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(234), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Field,
  [1329] = 5,
    ACTIONS(135), 1,
      aux_sym__short_descr_token1,
    STATE(104), 1,
      sym__nl,
    STATE(118), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(236), 2,
      sym__newline,
      sym__end_of_file,
  [1347] = 3,
    ACTIONS(240), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(238), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1361] = 4,
    ACTIONS(242), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(245), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(71), 2,
      sym_siard_column,
      aux_sym_siard_table_repeat1,
  [1377] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1389] = 4,
    ACTIONS(249), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(252), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(73), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1405] = 4,
    ACTIONS(29), 1,
      sym__string_start,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(161), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1421] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(256), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1432] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(258), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1443] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(260), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1454] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(262), 4,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
  [1465] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(264), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1476] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(266), 4,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
  [1487] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(268), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1498] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(270), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1509] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(272), 4,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
  [1520] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(274), 4,
      sym__dedent,
      sym__inter_start,
      sym__raw,
      sym__end_of_file,
  [1531] = 4,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(278), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(107), 2,
      sym_raw,
      sym__value,
  [1546] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(280), 4,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
  [1557] = 4,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(284), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(56), 2,
      sym_raw,
      sym__value,
  [1572] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(286), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1583] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(288), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1594] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(290), 4,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
  [1605] = 5,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(294), 1,
      anon_sym_using,
    STATE(88), 1,
      sym_raw,
    STATE(99), 1,
      sym__sql,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [1622] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(296), 4,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
  [1633] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(274), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      sym_escape_sequence,
  [1644] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(298), 4,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
  [1655] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(300), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1666] = 5,
    ACTIONS(302), 1,
      anon_sym_with,
    ACTIONS(304), 1,
      sym__newline,
    ACTIONS(306), 1,
      sym__end_of_file,
    STATE(81), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [1683] = 4,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(159), 2,
      sym_raw,
      sym__value,
  [1698] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(310), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1709] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(312), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1720] = 5,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(294), 1,
      anon_sym_using,
    STATE(79), 1,
      sym__sql,
    STATE(88), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [1737] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(314), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1748] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(316), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [1758] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(318), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [1768] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(320), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [1778] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(322), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [1788] = 3,
    STATE(167), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(324), 2,
      sym__newline,
      sym__end_of_file,
  [1800] = 3,
    STATE(112), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(326), 2,
      sym__newline,
      sym__end_of_file,
  [1812] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(328), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [1822] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(330), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [1832] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(332), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [1842] = 3,
    STATE(148), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(334), 2,
      sym__newline,
      sym__end_of_file,
  [1854] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(336), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [1864] = 3,
    STATE(27), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(338), 2,
      sym__newline,
      sym__end_of_file,
  [1876] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(209), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [1886] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(340), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [1896] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(203), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [1906] = 3,
    STATE(68), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(342), 2,
      sym__newline,
      sym__end_of_file,
  [1918] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(344), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [1928] = 3,
    STATE(86), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(346), 2,
      sym__dedent,
      sym__end_of_file,
  [1940] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(348), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [1950] = 3,
    ACTIONS(159), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(38), 2,
      sym_siard_column,
      aux_sym_siard_table_repeat1,
  [1962] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(350), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [1972] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(352), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [1982] = 3,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(34), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [1994] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 3,
      anon_sym_description,
      anon_sym_Column,
      sym_identifier,
  [2004] = 3,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(45), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [2016] = 3,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(39), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2028] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
  [2038] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(358), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
  [2048] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(360), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
  [2058] = 3,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(40), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [2070] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(362), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
  [2080] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(364), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
  [2090] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(366), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2100] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(368), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
  [2110] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(247), 2,
      sym__newline,
      sym__end_of_file,
  [2119] = 3,
    ACTIONS(370), 1,
      sym__newline,
    STATE(131), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2130] = 3,
    ACTIONS(372), 1,
      sym__newline,
    STATE(17), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2141] = 3,
    ACTIONS(292), 1,
      anon_sym_COLON,
    STATE(101), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2152] = 3,
    ACTIONS(185), 1,
      sym__string_start,
    STATE(96), 1,
      sym_string,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2163] = 3,
    ACTIONS(370), 1,
      sym__newline,
    STATE(150), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2174] = 3,
    ACTIONS(372), 1,
      sym__newline,
    STATE(20), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2185] = 3,
    ACTIONS(370), 1,
      sym__newline,
    STATE(66), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2196] = 3,
    ACTIONS(372), 1,
      sym__newline,
    STATE(11), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2207] = 3,
    ACTIONS(370), 1,
      sym__newline,
    STATE(127), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2218] = 3,
    ACTIONS(370), 1,
      sym__newline,
    STATE(124), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2229] = 3,
    ACTIONS(372), 1,
      sym__newline,
    STATE(2), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2240] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(234), 2,
      sym__newline,
      sym__end_of_file,
  [2249] = 3,
    ACTIONS(370), 1,
      sym__newline,
    STATE(126), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2260] = 3,
    ACTIONS(15), 1,
      anon_sym_description,
    STATE(119), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2271] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(225), 2,
      sym__newline,
      sym__end_of_file,
  [2280] = 2,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2288] = 2,
    ACTIONS(376), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2296] = 2,
    ACTIONS(247), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2304] = 2,
    ACTIONS(378), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2312] = 2,
    ACTIONS(203), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2320] = 2,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2328] = 2,
    ACTIONS(209), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2336] = 2,
    ACTIONS(201), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2344] = 2,
    ACTIONS(382), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2352] = 2,
    ACTIONS(384), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2360] = 2,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2368] = 2,
    ACTIONS(388), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2376] = 2,
    ACTIONS(390), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2384] = 2,
    ACTIONS(392), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2392] = 2,
    ACTIONS(394), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2400] = 2,
    ACTIONS(234), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2408] = 2,
    ACTIONS(396), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2416] = 2,
    ACTIONS(398), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2424] = 2,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2432] = 2,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2440] = 2,
    ACTIONS(404), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2448] = 2,
    ACTIONS(406), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2456] = 2,
    ACTIONS(408), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2464] = 2,
    ACTIONS(410), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2472] = 2,
    ACTIONS(412), 1,
      anon_sym_SIARD,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2480] = 2,
    ACTIONS(414), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2488] = 2,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2496] = 2,
    ACTIONS(418), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2504] = 2,
    ACTIONS(420), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2512] = 2,
    ACTIONS(422), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2520] = 2,
    ACTIONS(424), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2528] = 2,
    ACTIONS(426), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2536] = 2,
    ACTIONS(428), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 253,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 318,
  [SMALL_STATE(16)] = 343,
  [SMALL_STATE(17)] = 366,
  [SMALL_STATE(18)] = 391,
  [SMALL_STATE(19)] = 416,
  [SMALL_STATE(20)] = 439,
  [SMALL_STATE(21)] = 464,
  [SMALL_STATE(22)] = 487,
  [SMALL_STATE(23)] = 512,
  [SMALL_STATE(24)] = 537,
  [SMALL_STATE(25)] = 562,
  [SMALL_STATE(26)] = 585,
  [SMALL_STATE(27)] = 605,
  [SMALL_STATE(28)] = 621,
  [SMALL_STATE(29)] = 640,
  [SMALL_STATE(30)] = 661,
  [SMALL_STATE(31)] = 682,
  [SMALL_STATE(32)] = 703,
  [SMALL_STATE(33)] = 722,
  [SMALL_STATE(34)] = 741,
  [SMALL_STATE(35)] = 760,
  [SMALL_STATE(36)] = 779,
  [SMALL_STATE(37)] = 798,
  [SMALL_STATE(38)] = 817,
  [SMALL_STATE(39)] = 836,
  [SMALL_STATE(40)] = 855,
  [SMALL_STATE(41)] = 874,
  [SMALL_STATE(42)] = 893,
  [SMALL_STATE(43)] = 912,
  [SMALL_STATE(44)] = 931,
  [SMALL_STATE(45)] = 950,
  [SMALL_STATE(46)] = 969,
  [SMALL_STATE(47)] = 988,
  [SMALL_STATE(48)] = 1007,
  [SMALL_STATE(49)] = 1026,
  [SMALL_STATE(50)] = 1047,
  [SMALL_STATE(51)] = 1063,
  [SMALL_STATE(52)] = 1079,
  [SMALL_STATE(53)] = 1095,
  [SMALL_STATE(54)] = 1111,
  [SMALL_STATE(55)] = 1127,
  [SMALL_STATE(56)] = 1143,
  [SMALL_STATE(57)] = 1155,
  [SMALL_STATE(58)] = 1167,
  [SMALL_STATE(59)] = 1183,
  [SMALL_STATE(60)] = 1199,
  [SMALL_STATE(61)] = 1211,
  [SMALL_STATE(62)] = 1227,
  [SMALL_STATE(63)] = 1243,
  [SMALL_STATE(64)] = 1259,
  [SMALL_STATE(65)] = 1271,
  [SMALL_STATE(66)] = 1287,
  [SMALL_STATE(67)] = 1305,
  [SMALL_STATE(68)] = 1317,
  [SMALL_STATE(69)] = 1329,
  [SMALL_STATE(70)] = 1347,
  [SMALL_STATE(71)] = 1361,
  [SMALL_STATE(72)] = 1377,
  [SMALL_STATE(73)] = 1389,
  [SMALL_STATE(74)] = 1405,
  [SMALL_STATE(75)] = 1421,
  [SMALL_STATE(76)] = 1432,
  [SMALL_STATE(77)] = 1443,
  [SMALL_STATE(78)] = 1454,
  [SMALL_STATE(79)] = 1465,
  [SMALL_STATE(80)] = 1476,
  [SMALL_STATE(81)] = 1487,
  [SMALL_STATE(82)] = 1498,
  [SMALL_STATE(83)] = 1509,
  [SMALL_STATE(84)] = 1520,
  [SMALL_STATE(85)] = 1531,
  [SMALL_STATE(86)] = 1546,
  [SMALL_STATE(87)] = 1557,
  [SMALL_STATE(88)] = 1572,
  [SMALL_STATE(89)] = 1583,
  [SMALL_STATE(90)] = 1594,
  [SMALL_STATE(91)] = 1605,
  [SMALL_STATE(92)] = 1622,
  [SMALL_STATE(93)] = 1633,
  [SMALL_STATE(94)] = 1644,
  [SMALL_STATE(95)] = 1655,
  [SMALL_STATE(96)] = 1666,
  [SMALL_STATE(97)] = 1683,
  [SMALL_STATE(98)] = 1698,
  [SMALL_STATE(99)] = 1709,
  [SMALL_STATE(100)] = 1720,
  [SMALL_STATE(101)] = 1737,
  [SMALL_STATE(102)] = 1748,
  [SMALL_STATE(103)] = 1758,
  [SMALL_STATE(104)] = 1768,
  [SMALL_STATE(105)] = 1778,
  [SMALL_STATE(106)] = 1788,
  [SMALL_STATE(107)] = 1800,
  [SMALL_STATE(108)] = 1812,
  [SMALL_STATE(109)] = 1822,
  [SMALL_STATE(110)] = 1832,
  [SMALL_STATE(111)] = 1842,
  [SMALL_STATE(112)] = 1854,
  [SMALL_STATE(113)] = 1864,
  [SMALL_STATE(114)] = 1876,
  [SMALL_STATE(115)] = 1886,
  [SMALL_STATE(116)] = 1896,
  [SMALL_STATE(117)] = 1906,
  [SMALL_STATE(118)] = 1918,
  [SMALL_STATE(119)] = 1928,
  [SMALL_STATE(120)] = 1940,
  [SMALL_STATE(121)] = 1950,
  [SMALL_STATE(122)] = 1962,
  [SMALL_STATE(123)] = 1972,
  [SMALL_STATE(124)] = 1982,
  [SMALL_STATE(125)] = 1994,
  [SMALL_STATE(126)] = 2004,
  [SMALL_STATE(127)] = 2016,
  [SMALL_STATE(128)] = 2028,
  [SMALL_STATE(129)] = 2038,
  [SMALL_STATE(130)] = 2048,
  [SMALL_STATE(131)] = 2058,
  [SMALL_STATE(132)] = 2070,
  [SMALL_STATE(133)] = 2080,
  [SMALL_STATE(134)] = 2090,
  [SMALL_STATE(135)] = 2100,
  [SMALL_STATE(136)] = 2110,
  [SMALL_STATE(137)] = 2119,
  [SMALL_STATE(138)] = 2130,
  [SMALL_STATE(139)] = 2141,
  [SMALL_STATE(140)] = 2152,
  [SMALL_STATE(141)] = 2163,
  [SMALL_STATE(142)] = 2174,
  [SMALL_STATE(143)] = 2185,
  [SMALL_STATE(144)] = 2196,
  [SMALL_STATE(145)] = 2207,
  [SMALL_STATE(146)] = 2218,
  [SMALL_STATE(147)] = 2229,
  [SMALL_STATE(148)] = 2240,
  [SMALL_STATE(149)] = 2249,
  [SMALL_STATE(150)] = 2260,
  [SMALL_STATE(151)] = 2271,
  [SMALL_STATE(152)] = 2280,
  [SMALL_STATE(153)] = 2288,
  [SMALL_STATE(154)] = 2296,
  [SMALL_STATE(155)] = 2304,
  [SMALL_STATE(156)] = 2312,
  [SMALL_STATE(157)] = 2320,
  [SMALL_STATE(158)] = 2328,
  [SMALL_STATE(159)] = 2336,
  [SMALL_STATE(160)] = 2344,
  [SMALL_STATE(161)] = 2352,
  [SMALL_STATE(162)] = 2360,
  [SMALL_STATE(163)] = 2368,
  [SMALL_STATE(164)] = 2376,
  [SMALL_STATE(165)] = 2384,
  [SMALL_STATE(166)] = 2392,
  [SMALL_STATE(167)] = 2400,
  [SMALL_STATE(168)] = 2408,
  [SMALL_STATE(169)] = 2416,
  [SMALL_STATE(170)] = 2424,
  [SMALL_STATE(171)] = 2432,
  [SMALL_STATE(172)] = 2440,
  [SMALL_STATE(173)] = 2448,
  [SMALL_STATE(174)] = 2456,
  [SMALL_STATE(175)] = 2464,
  [SMALL_STATE(176)] = 2472,
  [SMALL_STATE(177)] = 2480,
  [SMALL_STATE(178)] = 2488,
  [SMALL_STATE(179)] = 2496,
  [SMALL_STATE(180)] = 2504,
  [SMALL_STATE(181)] = 2512,
  [SMALL_STATE(182)] = 2520,
  [SMALL_STATE(183)] = 2528,
  [SMALL_STATE(184)] = 2536,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(53),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(58),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(23),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(54),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(63),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(170),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(162),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 8),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 8),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2), SHIFT_REPEAT(173),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(69),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 12),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(61),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(85),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(65),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(160),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(163),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 7, .production_id = 7),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 6, .production_id = 7),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 10),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute, 2, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 13),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 9),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 8, .production_id = 7),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 11),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 13),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sql, 1, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 10),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 11),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 11),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 9, .production_id = 9),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 8, .production_id = 9),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sql, 3, .production_id = 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 11),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 10),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 6),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 11),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 13),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 11),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 3, .production_id = 14),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 13),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 13),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 13),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 11),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 13),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 10),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 11),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 11),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 13),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 11),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 11),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [402] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dbspec_external_scanner_create(void);
void tree_sitter_dbspec_external_scanner_destroy(void *);
bool tree_sitter_dbspec_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dbspec_external_scanner_serialize(void *, char *);
void tree_sitter_dbspec_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dbspec(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dbspec_external_scanner_create,
      tree_sitter_dbspec_external_scanner_destroy,
      tree_sitter_dbspec_external_scanner_scan,
      tree_sitter_dbspec_external_scanner_serialize,
      tree_sitter_dbspec_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
