#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 243
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 36

enum {
  sym_identifier = 1,
  anon_sym_Parameters = 2,
  anon_sym_COLON = 3,
  anon_sym_Set = 4,
  anon_sym_EQ = 5,
  anon_sym_Execute = 6,
  anon_sym_using = 7,
  anon_sym_connection = 8,
  anon_sym_to = 9,
  anon_sym_with = 10,
  anon_sym_result = 11,
  anon_sym_via = 12,
  anon_sym_Output = 13,
  anon_sym_description = 14,
  anon_sym_archiver = 15,
  anon_sym_archiverContact = 16,
  anon_sym_dataOwner = 17,
  anon_sym_dataOriginTimespan = 18,
  anon_sym_lobFolder = 19,
  anon_sym_Schema = 20,
  anon_sym_Type = 21,
  anon_sym_Table = 22,
  anon_sym_Column = 23,
  anon_sym_Field = 24,
  anon_sym_Key = 25,
  anon_sym_Check = 26,
  anon_sym_View = 27,
  sym_escape_sequence = 28,
  sym_short_description = 29,
  aux_sym__short_descr_token1 = 30,
  sym__newline = 31,
  sym__indent = 32,
  sym__dedent = 33,
  sym__inter_start = 34,
  sym__inter_end = 35,
  sym__raw = 36,
  sym__string_start = 37,
  sym__string_content = 38,
  sym__string_end = 39,
  sym__comment = 40,
  sym__end_of_file = 41,
  sym__skip = 42,
  sym_source_file = 43,
  sym_parameters = 44,
  sym_parameter = 45,
  sym__statement = 46,
  sym_set = 47,
  sym__expression = 48,
  sym_execute_using = 49,
  sym_connection = 50,
  sym_execute_sql = 51,
  sym_query = 52,
  sym_siard_output = 53,
  sym__siard_description = 54,
  sym__siard_archiver = 55,
  sym__siard_archiverContact = 56,
  sym__siard_dataOwner = 57,
  sym__siard_dataOriginTimespan = 58,
  sym__siard_lobFolder = 59,
  sym_siard_schema = 60,
  sym_siard_type = 61,
  sym_siard_table = 62,
  sym_siard_column = 63,
  sym_siard_field = 64,
  sym_siard_key = 65,
  sym_siard_check = 66,
  sym_siard_view = 67,
  sym__basic_expression = 68,
  sym_variable_instance = 69,
  sym_string = 70,
  sym_string_content = 71,
  sym__short_descr = 72,
  sym__nl = 73,
  sym__ni = 74,
  sym__ded = 75,
  sym_interpolation = 76,
  sym_key_value_pairs = 77,
  sym_key_value_pair = 78,
  sym_raw = 79,
  sym_raw_content = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_parameters_repeat1 = 82,
  aux_sym_siard_output_repeat1 = 83,
  aux_sym_siard_output_repeat2 = 84,
  aux_sym_siard_schema_repeat1 = 85,
  aux_sym_siard_table_repeat1 = 86,
  aux_sym_siard_column_repeat1 = 87,
  aux_sym_siard_view_repeat1 = 88,
  aux_sym_string_repeat1 = 89,
  aux_sym_string_content_repeat1 = 90,
  aux_sym_key_value_pairs_repeat1 = 91,
  aux_sym_raw_repeat1 = 92,
  aux_sym_raw_content_repeat1 = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_Parameters] = "Parameters",
  [anon_sym_COLON] = ":",
  [anon_sym_Set] = "Set",
  [anon_sym_EQ] = "=",
  [anon_sym_Execute] = "Execute",
  [anon_sym_using] = "using",
  [anon_sym_connection] = "connection",
  [anon_sym_to] = "to",
  [anon_sym_with] = "with",
  [anon_sym_result] = "result",
  [anon_sym_via] = "via",
  [anon_sym_Output] = "Output",
  [anon_sym_description] = "description",
  [anon_sym_archiver] = "archiver",
  [anon_sym_archiverContact] = "archiverContact",
  [anon_sym_dataOwner] = "dataOwner",
  [anon_sym_dataOriginTimespan] = "dataOriginTimespan",
  [anon_sym_lobFolder] = "lobFolder",
  [anon_sym_Schema] = "Schema",
  [anon_sym_Type] = "Type",
  [anon_sym_Table] = "Table",
  [anon_sym_Column] = "Column",
  [anon_sym_Field] = "Field",
  [anon_sym_Key] = "Key",
  [anon_sym_Check] = "Check",
  [anon_sym_View] = "View",
  [sym_escape_sequence] = "escape_sequence",
  [sym_short_description] = "short_description",
  [aux_sym__short_descr_token1] = "_short_descr_token1",
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
  [sym_set] = "set",
  [sym__expression] = "_expression",
  [sym_execute_using] = "execute_using",
  [sym_connection] = "connection",
  [sym_execute_sql] = "execute_sql",
  [sym_query] = "query",
  [sym_siard_output] = "siard_output",
  [sym__siard_description] = "_siard_description",
  [sym__siard_archiver] = "_siard_archiver",
  [sym__siard_archiverContact] = "_siard_archiverContact",
  [sym__siard_dataOwner] = "_siard_dataOwner",
  [sym__siard_dataOriginTimespan] = "_siard_dataOriginTimespan",
  [sym__siard_lobFolder] = "_siard_lobFolder",
  [sym_siard_schema] = "siard_schema",
  [sym_siard_type] = "siard_type",
  [sym_siard_table] = "siard_table",
  [sym_siard_column] = "siard_column",
  [sym_siard_field] = "siard_field",
  [sym_siard_key] = "siard_key",
  [sym_siard_check] = "siard_check",
  [sym_siard_view] = "siard_view",
  [sym__basic_expression] = "_basic_expression",
  [sym_variable_instance] = "variable_instance",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym__short_descr] = "_short_descr",
  [sym__nl] = "_nl",
  [sym__ni] = "_ni",
  [sym__ded] = "_ded",
  [sym_interpolation] = "interpolation",
  [sym_key_value_pairs] = "key_value_pairs",
  [sym_key_value_pair] = "key_value_pair",
  [sym_raw] = "raw",
  [sym_raw_content] = "raw_content",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_siard_output_repeat1] = "siard_output_repeat1",
  [aux_sym_siard_output_repeat2] = "siard_output_repeat2",
  [aux_sym_siard_schema_repeat1] = "siard_schema_repeat1",
  [aux_sym_siard_table_repeat1] = "siard_table_repeat1",
  [aux_sym_siard_column_repeat1] = "siard_column_repeat1",
  [aux_sym_siard_view_repeat1] = "siard_view_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_key_value_pairs_repeat1] = "key_value_pairs_repeat1",
  [aux_sym_raw_repeat1] = "raw_repeat1",
  [aux_sym_raw_content_repeat1] = "raw_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_Parameters] = anon_sym_Parameters,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Set] = anon_sym_Set,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_Execute] = anon_sym_Execute,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_connection] = anon_sym_connection,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_result] = anon_sym_result,
  [anon_sym_via] = anon_sym_via,
  [anon_sym_Output] = anon_sym_Output,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_archiver] = anon_sym_archiver,
  [anon_sym_archiverContact] = anon_sym_archiverContact,
  [anon_sym_dataOwner] = anon_sym_dataOwner,
  [anon_sym_dataOriginTimespan] = anon_sym_dataOriginTimespan,
  [anon_sym_lobFolder] = anon_sym_lobFolder,
  [anon_sym_Schema] = anon_sym_Schema,
  [anon_sym_Type] = anon_sym_Type,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_Column] = anon_sym_Column,
  [anon_sym_Field] = anon_sym_Field,
  [anon_sym_Key] = anon_sym_Key,
  [anon_sym_Check] = anon_sym_Check,
  [anon_sym_View] = anon_sym_View,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_short_description] = sym_short_description,
  [aux_sym__short_descr_token1] = aux_sym__short_descr_token1,
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
  [sym_set] = sym_set,
  [sym__expression] = sym__expression,
  [sym_execute_using] = sym_execute_using,
  [sym_connection] = sym_connection,
  [sym_execute_sql] = sym_execute_sql,
  [sym_query] = sym_query,
  [sym_siard_output] = sym_siard_output,
  [sym__siard_description] = sym__siard_description,
  [sym__siard_archiver] = sym__siard_archiver,
  [sym__siard_archiverContact] = sym__siard_archiverContact,
  [sym__siard_dataOwner] = sym__siard_dataOwner,
  [sym__siard_dataOriginTimespan] = sym__siard_dataOriginTimespan,
  [sym__siard_lobFolder] = sym__siard_lobFolder,
  [sym_siard_schema] = sym_siard_schema,
  [sym_siard_type] = sym_siard_type,
  [sym_siard_table] = sym_siard_table,
  [sym_siard_column] = sym_siard_column,
  [sym_siard_field] = sym_siard_field,
  [sym_siard_key] = sym_siard_key,
  [sym_siard_check] = sym_siard_check,
  [sym_siard_view] = sym_siard_view,
  [sym__basic_expression] = sym__basic_expression,
  [sym_variable_instance] = sym_variable_instance,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym__short_descr] = sym__short_descr,
  [sym__nl] = sym__nl,
  [sym__ni] = sym__ni,
  [sym__ded] = sym__ded,
  [sym_interpolation] = sym_interpolation,
  [sym_key_value_pairs] = sym_key_value_pairs,
  [sym_key_value_pair] = sym_key_value_pair,
  [sym_raw] = sym_raw,
  [sym_raw_content] = sym_raw_content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_siard_output_repeat1] = aux_sym_siard_output_repeat1,
  [aux_sym_siard_output_repeat2] = aux_sym_siard_output_repeat2,
  [aux_sym_siard_schema_repeat1] = aux_sym_siard_schema_repeat1,
  [aux_sym_siard_table_repeat1] = aux_sym_siard_table_repeat1,
  [aux_sym_siard_column_repeat1] = aux_sym_siard_column_repeat1,
  [aux_sym_siard_view_repeat1] = aux_sym_siard_view_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_key_value_pairs_repeat1] = aux_sym_key_value_pairs_repeat1,
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
  [anon_sym_Set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Execute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
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
  [anon_sym_result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_via] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_archiver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_archiverContact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dataOwner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dataOriginTimespan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lobFolder] = {
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
  [anon_sym_Key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_View] = {
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
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_execute_using] = {
    .visible = true,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_sql] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
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
  [sym__siard_archiver] = {
    .visible = false,
    .named = true,
  },
  [sym__siard_archiverContact] = {
    .visible = false,
    .named = true,
  },
  [sym__siard_dataOwner] = {
    .visible = false,
    .named = true,
  },
  [sym__siard_dataOriginTimespan] = {
    .visible = false,
    .named = true,
  },
  [sym__siard_lobFolder] = {
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
  [sym_siard_key] = {
    .visible = true,
    .named = true,
  },
  [sym_siard_check] = {
    .visible = true,
    .named = true,
  },
  [sym_siard_view] = {
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
  [sym_key_value_pairs] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_siard_output_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_siard_output_repeat2] = {
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
  [aux_sym_siard_view_repeat1] = {
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
  [aux_sym_key_value_pairs_repeat1] = {
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
  field_archiver = 1,
  field_archiverContact = 2,
  field_connection = 3,
  field_dataOriginTimespan = 4,
  field_dataOwner = 5,
  field_description = 6,
  field_file = 7,
  field_interpreter = 8,
  field_key = 9,
  field_lobFolder = 10,
  field_name = 11,
  field_properties = 12,
  field_script = 13,
  field_sql = 14,
  field_url = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_archiver] = "archiver",
  [field_archiverContact] = "archiverContact",
  [field_connection] = "connection",
  [field_dataOriginTimespan] = "dataOriginTimespan",
  [field_dataOwner] = "dataOwner",
  [field_description] = "description",
  [field_file] = "file",
  [field_interpreter] = "interpreter",
  [field_key] = "key",
  [field_lobFolder] = "lobFolder",
  [field_name] = "name",
  [field_properties] = "properties",
  [field_script] = "script",
  [field_sql] = "sql",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 21, .length = 1},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 1},
  [18] = {.index = 25, .length = 1},
  [19] = {.index = 26, .length = 1},
  [20] = {.index = 27, .length = 1},
  [21] = {.index = 28, .length = 1},
  [22] = {.index = 29, .length = 12},
  [23] = {.index = 41, .length = 3},
  [24] = {.index = 44, .length = 2},
  [25] = {.index = 46, .length = 2},
  [26] = {.index = 48, .length = 1},
  [27] = {.index = 49, .length = 9},
  [28] = {.index = 58, .length = 1},
  [29] = {.index = 59, .length = 1},
  [30] = {.index = 60, .length = 1},
  [31] = {.index = 61, .length = 1},
  [32] = {.index = 62, .length = 1},
  [33] = {.index = 63, .length = 1},
  [34] = {.index = 64, .length = 2},
  [35] = {.index = 66, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_value, 3},
  [2] =
    {field_interpreter, 2},
    {field_script, 3},
  [4] =
    {field_connection, 2},
    {field_sql, 3},
  [6] =
    {field_description, 1, .inherited = true},
    {field_name, 0},
  [8] =
    {field_name, 0},
  [9] =
    {field_description, 0},
    {field_description, 1},
    {field_description, 2},
  [12] =
    {field_url, 2},
  [13] =
    {field_properties, 4},
    {field_url, 2},
  [15] =
    {field_properties, 5},
    {field_url, 2},
  [17] =
    {field_description, 0, .inherited = true},
  [18] =
    {field_archiver, 0, .inherited = true},
  [19] =
    {field_archiverContact, 0, .inherited = true},
  [20] =
    {field_dataOwner, 0, .inherited = true},
  [21] =
    {field_dataOriginTimespan, 0, .inherited = true},
  [22] =
    {field_lobFolder, 0, .inherited = true},
  [23] =
    {field_description, 1},
  [24] =
    {field_archiver, 1},
  [25] =
    {field_archiverContact, 1},
  [26] =
    {field_dataOwner, 1},
  [27] =
    {field_dataOriginTimespan, 1},
  [28] =
    {field_lobFolder, 1},
  [29] =
    {field_archiver, 0, .inherited = true},
    {field_archiver, 1, .inherited = true},
    {field_archiverContact, 0, .inherited = true},
    {field_archiverContact, 1, .inherited = true},
    {field_dataOriginTimespan, 0, .inherited = true},
    {field_dataOriginTimespan, 1, .inherited = true},
    {field_dataOwner, 0, .inherited = true},
    {field_dataOwner, 1, .inherited = true},
    {field_description, 0, .inherited = true},
    {field_description, 1, .inherited = true},
    {field_lobFolder, 0, .inherited = true},
    {field_lobFolder, 1, .inherited = true},
  [41] =
    {field_connection, 5},
    {field_file, 3},
    {field_name, 1},
  [44] =
    {field_key, 0},
    {field_value, 1},
  [46] =
    {field_description, 2, .inherited = true},
    {field_name, 1},
  [48] =
    {field_name, 1},
  [49] =
    {field_archiver, 8, .inherited = true},
    {field_archiverContact, 8, .inherited = true},
    {field_connection, 5},
    {field_dataOriginTimespan, 8, .inherited = true},
    {field_dataOwner, 8, .inherited = true},
    {field_description, 8, .inherited = true},
    {field_file, 3},
    {field_lobFolder, 8, .inherited = true},
    {field_name, 1},
  [58] =
    {field_description, 2},
  [59] =
    {field_archiver, 2},
  [60] =
    {field_archiverContact, 2},
  [61] =
    {field_dataOwner, 2},
  [62] =
    {field_dataOriginTimespan, 2},
  [63] =
    {field_lobFolder, 2},
  [64] =
    {field_key, 0},
    {field_value, 2},
  [66] =
    {field_description, 4, .inherited = true},
    {field_name, 1},
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
  [16] = 7,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 21,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 32,
  [35] = 30,
  [36] = 36,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 27,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 26,
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
  [80] = 71,
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
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 90,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 91,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 137,
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
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 79,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 61,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 163,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 72,
  [187] = 167,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 72,
  [219] = 219,
  [220] = 61,
  [221] = 79,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 225,
  [232] = 232,
  [233] = 233,
  [234] = 216,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 210,
  [242] = 223,
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
      if (lookahead == 'K') ADVANCE(4);
      if (lookahead == 'O') ADVANCE(5);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'V') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'F') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_via);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 62:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 88:
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_connection);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(135);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_dataOriginTimespan);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 4},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 5},
  [25] = {.lex_state = 0, .external_lex_state = 5},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 5},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 6},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 6},
  [33] = {.lex_state = 0, .external_lex_state = 6},
  [34] = {.lex_state = 0, .external_lex_state = 6},
  [35] = {.lex_state = 0, .external_lex_state = 6},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 6},
  [38] = {.lex_state = 0, .external_lex_state = 6},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 7},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 7},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 7},
  [70] = {.lex_state = 0, .external_lex_state = 7},
  [71] = {.lex_state = 0, .external_lex_state = 8},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 7},
  [74] = {.lex_state = 0, .external_lex_state = 7},
  [75] = {.lex_state = 0, .external_lex_state = 7},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 8},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 7},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 6},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 5},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 0, .external_lex_state = 4},
  [91] = {.lex_state = 0, .external_lex_state = 4},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 4},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 0, .external_lex_state = 5},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 6},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 4},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 3},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 7},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 7},
  [143] = {.lex_state = 0, .external_lex_state = 6},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 7},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 3},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 0, .external_lex_state = 7},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 7},
  [161] = {.lex_state = 0, .external_lex_state = 7},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 7},
  [166] = {.lex_state = 0, .external_lex_state = 7},
  [167] = {.lex_state = 0, .external_lex_state = 7},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 7},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 0, .external_lex_state = 3},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 7},
  [187] = {.lex_state = 0, .external_lex_state = 7},
  [188] = {.lex_state = 0, .external_lex_state = 7},
  [189] = {.lex_state = 0, .external_lex_state = 7},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 9},
  [194] = {.lex_state = 0, .external_lex_state = 9},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 9},
  [198] = {.lex_state = 0, .external_lex_state = 9},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 9},
  [201] = {.lex_state = 0, .external_lex_state = 9},
  [202] = {.lex_state = 0, .external_lex_state = 9},
  [203] = {.lex_state = 0, .external_lex_state = 9},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 9},
  [206] = {.lex_state = 0, .external_lex_state = 9},
  [207] = {.lex_state = 0, .external_lex_state = 9},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 10},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 11},
  [217] = {.lex_state = 18, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 11},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 11},
  [221] = {.lex_state = 0, .external_lex_state = 11},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 9},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 10},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 10},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 11},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 10},
  [242] = {.lex_state = 0, .external_lex_state = 9},
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
    [ts_external_token__indent] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [11] = {
    [ts_external_token__inter_end] = true,
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
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_Execute] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_connection] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_result] = ACTIONS(1),
    [anon_sym_via] = ACTIONS(1),
    [anon_sym_Output] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_archiver] = ACTIONS(1),
    [anon_sym_archiverContact] = ACTIONS(1),
    [anon_sym_dataOwner] = ACTIONS(1),
    [anon_sym_dataOriginTimespan] = ACTIONS(1),
    [anon_sym_lobFolder] = ACTIONS(1),
    [anon_sym_Schema] = ACTIONS(1),
    [anon_sym_Type] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_Column] = ACTIONS(1),
    [anon_sym_Field] = ACTIONS(1),
    [anon_sym_Key] = ACTIONS(1),
    [anon_sym_Check] = ACTIONS(1),
    [anon_sym_View] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym__short_descr_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(237),
    [sym_parameters] = STATE(19),
    [sym__statement] = STATE(17),
    [sym_set] = STATE(17),
    [sym_execute_using] = STATE(17),
    [sym_execute_sql] = STATE(17),
    [sym_siard_output] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Parameters] = ACTIONS(7),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_Execute] = ACTIONS(11),
    [anon_sym_Output] = ACTIONS(13),
    [sym__comment] = ACTIONS(3),
    [sym__skip] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(15), 1,
      anon_sym_description,
    ACTIONS(17), 1,
      anon_sym_archiver,
    ACTIONS(19), 1,
      anon_sym_archiverContact,
    ACTIONS(21), 1,
      anon_sym_dataOwner,
    ACTIONS(23), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(25), 1,
      anon_sym_lobFolder,
    ACTIONS(27), 1,
      anon_sym_Schema,
    STATE(3), 1,
      aux_sym_siard_output_repeat1,
    STATE(42), 1,
      sym__siard_lobFolder,
    STATE(44), 1,
      sym__siard_dataOriginTimespan,
    STATE(45), 1,
      sym__siard_dataOwner,
    STATE(46), 1,
      sym__siard_archiverContact,
    STATE(47), 1,
      sym__siard_archiver,
    STATE(49), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(83), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [51] = 16,
    ACTIONS(15), 1,
      anon_sym_description,
    ACTIONS(17), 1,
      anon_sym_archiver,
    ACTIONS(19), 1,
      anon_sym_archiverContact,
    ACTIONS(21), 1,
      anon_sym_dataOwner,
    ACTIONS(23), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(25), 1,
      anon_sym_lobFolder,
    ACTIONS(27), 1,
      anon_sym_Schema,
    STATE(4), 1,
      aux_sym_siard_output_repeat1,
    STATE(42), 1,
      sym__siard_lobFolder,
    STATE(44), 1,
      sym__siard_dataOriginTimespan,
    STATE(45), 1,
      sym__siard_dataOwner,
    STATE(46), 1,
      sym__siard_archiverContact,
    STATE(47), 1,
      sym__siard_archiver,
    STATE(49), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(65), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [102] = 15,
    ACTIONS(29), 1,
      anon_sym_description,
    ACTIONS(32), 1,
      anon_sym_archiver,
    ACTIONS(35), 1,
      anon_sym_archiverContact,
    ACTIONS(38), 1,
      anon_sym_dataOwner,
    ACTIONS(41), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(44), 1,
      anon_sym_lobFolder,
    ACTIONS(47), 1,
      anon_sym_Schema,
    STATE(4), 1,
      aux_sym_siard_output_repeat1,
    STATE(42), 1,
      sym__siard_lobFolder,
    STATE(44), 1,
      sym__siard_dataOriginTimespan,
    STATE(45), 1,
      sym__siard_dataOwner,
    STATE(46), 1,
      sym__siard_archiverContact,
    STATE(47), 1,
      sym__siard_archiver,
    STATE(49), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [149] = 9,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(51), 1,
      anon_sym_Column,
    ACTIONS(53), 1,
      anon_sym_Key,
    ACTIONS(55), 1,
      anon_sym_Check,
    STATE(13), 1,
      sym__siard_description,
    STATE(112), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(57), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(20), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [182] = 9,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(59), 1,
      anon_sym_Type,
    ACTIONS(61), 1,
      anon_sym_Table,
    ACTIONS(63), 1,
      anon_sym_View,
    STATE(10), 1,
      sym__siard_description,
    STATE(150), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(65), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(12), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [215] = 3,
    ACTIONS(69), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [235] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(73), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(71), 9,
      anon_sym_Schema,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
      sym_identifier,
  [255] = 7,
    ACTIONS(59), 1,
      anon_sym_Type,
    ACTIONS(61), 1,
      anon_sym_Table,
    ACTIONS(63), 1,
      anon_sym_View,
    STATE(158), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(75), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(23), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [282] = 7,
    ACTIONS(59), 1,
      anon_sym_Type,
    ACTIONS(61), 1,
      anon_sym_Table,
    ACTIONS(63), 1,
      anon_sym_View,
    STATE(159), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(77), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(9), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [309] = 7,
    ACTIONS(51), 1,
      anon_sym_Column,
    ACTIONS(53), 1,
      anon_sym_Key,
    ACTIONS(55), 1,
      anon_sym_Check,
    STATE(110), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(79), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(22), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [336] = 7,
    ACTIONS(59), 1,
      anon_sym_Type,
    ACTIONS(61), 1,
      anon_sym_Table,
    ACTIONS(63), 1,
      anon_sym_View,
    STATE(181), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(81), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(23), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [363] = 7,
    ACTIONS(51), 1,
      anon_sym_Column,
    ACTIONS(53), 1,
      anon_sym_Key,
    ACTIONS(55), 1,
      anon_sym_Check,
    STATE(86), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(83), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(11), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [390] = 6,
    ACTIONS(9), 1,
      anon_sym_Set,
    ACTIONS(11), 1,
      anon_sym_Execute,
    ACTIONS(13), 1,
      anon_sym_Output,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(15), 6,
      sym__statement,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [415] = 6,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_Set,
    ACTIONS(92), 1,
      anon_sym_Execute,
    ACTIONS(95), 1,
      anon_sym_Output,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(15), 6,
      sym__statement,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [440] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(67), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(69), 8,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
      sym_identifier,
  [459] = 6,
    ACTIONS(9), 1,
      anon_sym_Set,
    ACTIONS(11), 1,
      anon_sym_Execute,
    ACTIONS(13), 1,
      anon_sym_Output,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(15), 6,
      sym__statement,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [484] = 6,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_connection,
    ACTIONS(104), 1,
      anon_sym_result,
    ACTIONS(106), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(138), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [509] = 6,
    ACTIONS(9), 1,
      anon_sym_Set,
    ACTIONS(11), 1,
      anon_sym_Execute,
    ACTIONS(13), 1,
      anon_sym_Output,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(14), 6,
      sym__statement,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [534] = 7,
    ACTIONS(51), 1,
      anon_sym_Column,
    ACTIONS(53), 1,
      anon_sym_Key,
    ACTIONS(55), 1,
      anon_sym_Check,
    STATE(88), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(108), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(22), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [561] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(110), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_description,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [578] = 6,
    ACTIONS(112), 1,
      anon_sym_Column,
    ACTIONS(115), 1,
      anon_sym_Key,
    ACTIONS(118), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(121), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(22), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [602] = 6,
    ACTIONS(123), 1,
      anon_sym_Type,
    ACTIONS(126), 1,
      anon_sym_Table,
    ACTIONS(129), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(132), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(23), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [626] = 7,
    ACTIONS(136), 1,
      sym__inter_start,
    ACTIONS(138), 1,
      sym__raw,
    STATE(7), 1,
      sym__ded,
    STATE(98), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(134), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(28), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [652] = 7,
    ACTIONS(136), 1,
      sym__inter_start,
    ACTIONS(138), 1,
      sym__raw,
    STATE(16), 1,
      sym__ded,
    STATE(98), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(140), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(28), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [678] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(142), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [694] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(144), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [710] = 6,
    ACTIONS(148), 1,
      sym__inter_start,
    ACTIONS(151), 1,
      sym__raw,
    STATE(98), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(146), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(28), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [733] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(154), 8,
      anon_sym_description,
      anon_sym_archiver,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      sym_identifier,
  [748] = 7,
    ACTIONS(156), 1,
      sym_escape_sequence,
    ACTIONS(158), 1,
      sym__inter_start,
    ACTIONS(160), 1,
      sym__string_content,
    ACTIONS(162), 1,
      sym__string_end,
    STATE(84), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(32), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [773] = 7,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(164), 1,
      anon_sym_Field,
    STATE(58), 1,
      sym__siard_description,
    STATE(156), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(166), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(62), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [798] = 7,
    ACTIONS(158), 1,
      sym__inter_start,
    ACTIONS(160), 1,
      sym__string_content,
    ACTIONS(168), 1,
      sym_escape_sequence,
    ACTIONS(170), 1,
      sym__string_end,
    STATE(84), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(38), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [823] = 7,
    ACTIONS(158), 1,
      sym__inter_start,
    ACTIONS(160), 1,
      sym__string_content,
    ACTIONS(172), 1,
      sym_escape_sequence,
    ACTIONS(174), 1,
      sym__string_end,
    STATE(84), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(34), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [848] = 7,
    ACTIONS(158), 1,
      sym__inter_start,
    ACTIONS(160), 1,
      sym__string_content,
    ACTIONS(168), 1,
      sym_escape_sequence,
    ACTIONS(176), 1,
      sym__string_end,
    STATE(84), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(38), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [873] = 7,
    ACTIONS(158), 1,
      sym__inter_start,
    ACTIONS(160), 1,
      sym__string_content,
    ACTIONS(178), 1,
      sym_escape_sequence,
    ACTIONS(180), 1,
      sym__string_end,
    STATE(84), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(37), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [898] = 7,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(164), 1,
      anon_sym_Field,
    STATE(77), 1,
      sym__siard_description,
    STATE(115), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(182), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(81), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [923] = 7,
    ACTIONS(158), 1,
      sym__inter_start,
    ACTIONS(160), 1,
      sym__string_content,
    ACTIONS(168), 1,
      sym_escape_sequence,
    ACTIONS(184), 1,
      sym__string_end,
    STATE(84), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(38), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [948] = 7,
    ACTIONS(186), 1,
      sym_escape_sequence,
    ACTIONS(189), 1,
      sym__inter_start,
    ACTIONS(192), 1,
      sym__string_content,
    ACTIONS(195), 1,
      sym__string_end,
    STATE(84), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(38), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [973] = 7,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(51), 1,
      anon_sym_Column,
    STATE(76), 1,
      sym__siard_description,
    STATE(106), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(197), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(63), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [998] = 3,
    ACTIONS(201), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(199), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1014] = 3,
    ACTIONS(205), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(203), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1030] = 3,
    ACTIONS(209), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(207), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1046] = 3,
    ACTIONS(211), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(144), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1062] = 3,
    ACTIONS(215), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(213), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1078] = 3,
    ACTIONS(219), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(217), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1094] = 3,
    ACTIONS(223), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(221), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1110] = 3,
    ACTIONS(227), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(225), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1126] = 3,
    ACTIONS(231), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(229), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1142] = 3,
    ACTIONS(235), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(233), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1158] = 3,
    ACTIONS(239), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(237), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1174] = 3,
    ACTIONS(243), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(241), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1190] = 3,
    ACTIONS(245), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(142), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1206] = 3,
    ACTIONS(249), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(247), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1222] = 3,
    ACTIONS(253), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(251), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1238] = 3,
    ACTIONS(257), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(255), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1254] = 3,
    ACTIONS(261), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(259), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1270] = 3,
    ACTIONS(265), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(263), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1286] = 5,
    ACTIONS(164), 1,
      anon_sym_Field,
    STATE(155), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(267), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(59), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1305] = 5,
    ACTIONS(164), 1,
      anon_sym_Field,
    STATE(151), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(269), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(125), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1324] = 6,
    ACTIONS(271), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      aux_sym__short_descr_token1,
    STATE(153), 1,
      sym__nl,
    STATE(154), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(275), 2,
      sym__newline,
      sym__end_of_file,
  [1345] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_via,
      anon_sym_Output,
  [1358] = 5,
    ACTIONS(164), 1,
      anon_sym_Field,
    STATE(152), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(279), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(125), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1377] = 5,
    ACTIONS(51), 1,
      anon_sym_Column,
    STATE(92), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(281), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(94), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1396] = 6,
    ACTIONS(273), 1,
      aux_sym__short_descr_token1,
    ACTIONS(283), 1,
      anon_sym_COLON,
    STATE(164), 1,
      sym__nl,
    STATE(178), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(285), 2,
      sym__newline,
      sym__end_of_file,
  [1417] = 5,
    ACTIONS(27), 1,
      anon_sym_Schema,
    STATE(147), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(287), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(107), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [1436] = 5,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(136), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(291), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(111), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [1455] = 5,
    ACTIONS(51), 1,
      anon_sym_Column,
    STATE(113), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(293), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(94), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1474] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(141), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(297), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(122), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1493] = 6,
    ACTIONS(273), 1,
      aux_sym__short_descr_token1,
    ACTIONS(299), 1,
      anon_sym_COLON,
    STATE(120), 1,
      sym__nl,
    STATE(129), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(301), 2,
      sym__newline,
      sym__end_of_file,
  [1514] = 6,
    ACTIONS(273), 1,
      aux_sym__short_descr_token1,
    ACTIONS(303), 1,
      anon_sym_COLON,
    STATE(118), 1,
      sym__nl,
    STATE(119), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(305), 2,
      sym__newline,
      sym__end_of_file,
  [1535] = 5,
    ACTIONS(136), 1,
      sym__inter_start,
    ACTIONS(138), 1,
      sym__raw,
    STATE(98), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(24), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1554] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(307), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_via,
      anon_sym_Output,
  [1567] = 6,
    ACTIONS(273), 1,
      aux_sym__short_descr_token1,
    ACTIONS(309), 1,
      anon_sym_COLON,
    STATE(105), 1,
      sym__short_descr,
    STATE(109), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(311), 2,
      sym__newline,
      sym__end_of_file,
  [1588] = 6,
    ACTIONS(273), 1,
      aux_sym__short_descr_token1,
    ACTIONS(313), 1,
      anon_sym_COLON,
    STATE(102), 1,
      sym__short_descr,
    STATE(104), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(315), 2,
      sym__newline,
      sym__end_of_file,
  [1609] = 6,
    ACTIONS(273), 1,
      aux_sym__short_descr_token1,
    ACTIONS(317), 1,
      anon_sym_COLON,
    STATE(96), 1,
      sym__short_descr,
    STATE(100), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(319), 2,
      sym__newline,
      sym__end_of_file,
  [1630] = 5,
    ACTIONS(51), 1,
      anon_sym_Column,
    STATE(89), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(321), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(67), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1649] = 5,
    ACTIONS(164), 1,
      anon_sym_Field,
    STATE(123), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(323), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(78), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1668] = 5,
    ACTIONS(164), 1,
      anon_sym_Field,
    STATE(128), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(325), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(125), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1687] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(327), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_via,
      anon_sym_Output,
  [1700] = 5,
    ACTIONS(136), 1,
      sym__inter_start,
    ACTIONS(138), 1,
      sym__raw,
    STATE(98), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(25), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1719] = 5,
    ACTIONS(164), 1,
      anon_sym_Field,
    STATE(124), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(329), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(125), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1738] = 6,
    ACTIONS(273), 1,
      aux_sym__short_descr_token1,
    ACTIONS(331), 1,
      anon_sym_COLON,
    STATE(116), 1,
      sym__nl,
    STATE(117), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(333), 2,
      sym__newline,
      sym__end_of_file,
  [1759] = 5,
    ACTIONS(27), 1,
      anon_sym_Schema,
    STATE(146), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(335), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(107), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [1778] = 4,
    ACTIONS(339), 1,
      sym__string_content,
    STATE(114), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(337), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [1794] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(341), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1806] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(343), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1818] = 4,
    ACTIONS(347), 1,
      sym__raw,
    STATE(87), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(345), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [1834] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(350), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1846] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(352), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1858] = 4,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(234), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1874] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(167), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1890] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(362), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1902] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(149), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1918] = 4,
    ACTIONS(364), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(367), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(94), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1934] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(166), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1950] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(369), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1962] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(161), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1978] = 4,
    ACTIONS(373), 1,
      sym__raw,
    STATE(87), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(371), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [1994] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(160), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2010] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(375), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2022] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(157), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2038] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(377), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2050] = 3,
    ACTIONS(381), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(379), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2064] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(383), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2076] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(385), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2088] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(387), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2100] = 4,
    ACTIONS(389), 1,
      anon_sym_Schema,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(392), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(107), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [2116] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(189), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2132] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(394), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2144] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(396), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2156] = 4,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(401), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(111), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [2172] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(403), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2184] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(405), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2196] = 4,
    ACTIONS(409), 1,
      sym__string_content,
    STATE(114), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(407), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [2212] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(412), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2224] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(414), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2236] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(416), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2248] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(418), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2260] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(420), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2272] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(422), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2284] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(142), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2300] = 4,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(427), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(122), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2316] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(429), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2328] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(431), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2340] = 4,
    ACTIONS(433), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(436), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(125), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2356] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(438), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2368] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(440), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2380] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(442), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2392] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(444), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2404] = 4,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(216), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2420] = 5,
    ACTIONS(273), 1,
      aux_sym__short_descr_token1,
    STATE(179), 1,
      sym__short_descr,
    STATE(180), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(446), 2,
      sym__newline,
      sym__end_of_file,
  [2438] = 4,
    ACTIONS(106), 1,
      sym__string_start,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(219), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2454] = 4,
    ACTIONS(106), 1,
      sym__string_start,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(195), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2470] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(187), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2486] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(450), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2497] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(452), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2508] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(454), 4,
      sym__dedent,
      sym__inter_start,
      sym__raw,
      sym__end_of_file,
  [2519] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(456), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2530] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(458), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2541] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(460), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2552] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(462), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2563] = 5,
    ACTIONS(464), 1,
      anon_sym_with,
    ACTIONS(466), 1,
      sym__newline,
    ACTIONS(468), 1,
      sym__end_of_file,
    STATE(144), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2580] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(454), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      sym_escape_sequence,
  [2591] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(470), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2602] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(472), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2613] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(474), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2624] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(476), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2635] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(478), 4,
      ts_builtin_sym_end,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
  [2646] = 3,
    STATE(57), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(480), 2,
      sym__newline,
      sym__end_of_file,
  [2658] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(482), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2668] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(484), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2678] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(486), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2688] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(488), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2698] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(490), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2708] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(492), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2718] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(494), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2728] = 3,
    STATE(54), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(496), 2,
      sym__newline,
      sym__end_of_file,
  [2740] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(498), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2750] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(500), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2760] = 3,
    STATE(51), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(502), 2,
      sym__newline,
      sym__end_of_file,
  [2772] = 3,
    STATE(50), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(504), 2,
      sym__newline,
      sym__end_of_file,
  [2784] = 3,
    STATE(85), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(506), 2,
      sym__dedent,
      sym__end_of_file,
  [2796] = 4,
    ACTIONS(508), 1,
      anon_sym_COLON,
    ACTIONS(510), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2810] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(512), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2820] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(327), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [2830] = 3,
    STATE(48), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(514), 2,
      sym__newline,
      sym__end_of_file,
  [2842] = 3,
    STATE(43), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(516), 2,
      sym__newline,
      sym__end_of_file,
  [2854] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(518), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [2864] = 4,
    ACTIONS(508), 1,
      anon_sym_COLON,
    ACTIONS(520), 1,
      anon_sym_EQ,
    STATE(168), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2878] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(277), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [2888] = 4,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(524), 1,
      anon_sym_EQ,
    STATE(41), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2902] = 4,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(526), 1,
      anon_sym_EQ,
    STATE(55), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2916] = 4,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(528), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2930] = 4,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(530), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2944] = 4,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(532), 1,
      anon_sym_EQ,
    STATE(53), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2958] = 4,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(534), 1,
      anon_sym_EQ,
    STATE(52), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2972] = 3,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(66), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [2984] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(536), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2994] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(538), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3004] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(540), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3014] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(542), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [3024] = 3,
    STATE(127), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(544), 2,
      sym__dedent,
      sym__end_of_file,
  [3036] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(546), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3046] = 3,
    STATE(126), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(548), 2,
      sym__dedent,
      sym__end_of_file,
  [3058] = 3,
    ACTIONS(295), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(68), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [3070] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(307), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3080] = 3,
    STATE(27), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(550), 2,
      sym__newline,
      sym__end_of_file,
  [3092] = 3,
    STATE(8), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(552), 2,
      sym__newline,
      sym__end_of_file,
  [3104] = 3,
    STATE(183), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(554), 2,
      sym__newline,
      sym__end_of_file,
  [3116] = 3,
    ACTIONS(522), 1,
      anon_sym_COLON,
    STATE(135), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3127] = 3,
    ACTIONS(49), 1,
      anon_sym_description,
    STATE(184), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3138] = 3,
    ACTIONS(49), 1,
      anon_sym_description,
    STATE(182), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3149] = 3,
    ACTIONS(556), 1,
      sym__newline,
    STATE(204), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3160] = 3,
    ACTIONS(556), 1,
      sym__newline,
    STATE(192), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3171] = 3,
    ACTIONS(522), 1,
      anon_sym_COLON,
    STATE(139), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3182] = 3,
    ACTIONS(558), 1,
      anon_sym_COLON,
    STATE(148), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3193] = 3,
    ACTIONS(556), 1,
      sym__newline,
    STATE(191), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3204] = 3,
    ACTIONS(556), 1,
      sym__newline,
    STATE(2), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3215] = 3,
    ACTIONS(558), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3226] = 3,
    ACTIONS(560), 1,
      sym__newline,
    STATE(36), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3237] = 3,
    ACTIONS(560), 1,
      sym__newline,
    STATE(31), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3248] = 3,
    ACTIONS(556), 1,
      sym__newline,
    STATE(177), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3259] = 3,
    ACTIONS(556), 1,
      sym__newline,
    STATE(185), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3270] = 3,
    ACTIONS(49), 1,
      anon_sym_description,
    STATE(162), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3281] = 3,
    ACTIONS(560), 1,
      sym__newline,
    STATE(6), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3292] = 3,
    ACTIONS(560), 1,
      sym__newline,
    STATE(39), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3303] = 3,
    ACTIONS(560), 1,
      sym__newline,
    STATE(5), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3314] = 3,
    ACTIONS(562), 1,
      anon_sym_using,
    ACTIONS(564), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3325] = 3,
    ACTIONS(522), 1,
      anon_sym_COLON,
    STATE(140), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3336] = 2,
    ACTIONS(566), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3344] = 2,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3352] = 2,
    ACTIONS(570), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3360] = 2,
    ACTIONS(572), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3368] = 2,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3376] = 2,
    ACTIONS(576), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3384] = 2,
    ACTIONS(578), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3392] = 2,
    ACTIONS(580), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3400] = 2,
    ACTIONS(307), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3408] = 2,
    ACTIONS(582), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3416] = 2,
    ACTIONS(277), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3424] = 2,
    ACTIONS(327), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3432] = 2,
    ACTIONS(584), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3440] = 2,
    ACTIONS(586), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3448] = 2,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3456] = 2,
    ACTIONS(590), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3464] = 2,
    ACTIONS(592), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3472] = 2,
    ACTIONS(594), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3480] = 2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3488] = 2,
    ACTIONS(598), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3496] = 2,
    ACTIONS(600), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3504] = 2,
    ACTIONS(602), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3512] = 2,
    ACTIONS(604), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3520] = 2,
    ACTIONS(606), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3528] = 2,
    ACTIONS(608), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3536] = 2,
    ACTIONS(610), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3544] = 2,
    ACTIONS(612), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3552] = 2,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3560] = 2,
    ACTIONS(616), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3568] = 2,
    ACTIONS(618), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3576] = 2,
    ACTIONS(620), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3584] = 2,
    ACTIONS(622), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3592] = 2,
    ACTIONS(624), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 149,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 215,
  [SMALL_STATE(8)] = 235,
  [SMALL_STATE(9)] = 255,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 336,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 390,
  [SMALL_STATE(15)] = 415,
  [SMALL_STATE(16)] = 440,
  [SMALL_STATE(17)] = 459,
  [SMALL_STATE(18)] = 484,
  [SMALL_STATE(19)] = 509,
  [SMALL_STATE(20)] = 534,
  [SMALL_STATE(21)] = 561,
  [SMALL_STATE(22)] = 578,
  [SMALL_STATE(23)] = 602,
  [SMALL_STATE(24)] = 626,
  [SMALL_STATE(25)] = 652,
  [SMALL_STATE(26)] = 678,
  [SMALL_STATE(27)] = 694,
  [SMALL_STATE(28)] = 710,
  [SMALL_STATE(29)] = 733,
  [SMALL_STATE(30)] = 748,
  [SMALL_STATE(31)] = 773,
  [SMALL_STATE(32)] = 798,
  [SMALL_STATE(33)] = 823,
  [SMALL_STATE(34)] = 848,
  [SMALL_STATE(35)] = 873,
  [SMALL_STATE(36)] = 898,
  [SMALL_STATE(37)] = 923,
  [SMALL_STATE(38)] = 948,
  [SMALL_STATE(39)] = 973,
  [SMALL_STATE(40)] = 998,
  [SMALL_STATE(41)] = 1014,
  [SMALL_STATE(42)] = 1030,
  [SMALL_STATE(43)] = 1046,
  [SMALL_STATE(44)] = 1062,
  [SMALL_STATE(45)] = 1078,
  [SMALL_STATE(46)] = 1094,
  [SMALL_STATE(47)] = 1110,
  [SMALL_STATE(48)] = 1126,
  [SMALL_STATE(49)] = 1142,
  [SMALL_STATE(50)] = 1158,
  [SMALL_STATE(51)] = 1174,
  [SMALL_STATE(52)] = 1190,
  [SMALL_STATE(53)] = 1206,
  [SMALL_STATE(54)] = 1222,
  [SMALL_STATE(55)] = 1238,
  [SMALL_STATE(56)] = 1254,
  [SMALL_STATE(57)] = 1270,
  [SMALL_STATE(58)] = 1286,
  [SMALL_STATE(59)] = 1305,
  [SMALL_STATE(60)] = 1324,
  [SMALL_STATE(61)] = 1345,
  [SMALL_STATE(62)] = 1358,
  [SMALL_STATE(63)] = 1377,
  [SMALL_STATE(64)] = 1396,
  [SMALL_STATE(65)] = 1417,
  [SMALL_STATE(66)] = 1436,
  [SMALL_STATE(67)] = 1455,
  [SMALL_STATE(68)] = 1474,
  [SMALL_STATE(69)] = 1493,
  [SMALL_STATE(70)] = 1514,
  [SMALL_STATE(71)] = 1535,
  [SMALL_STATE(72)] = 1554,
  [SMALL_STATE(73)] = 1567,
  [SMALL_STATE(74)] = 1588,
  [SMALL_STATE(75)] = 1609,
  [SMALL_STATE(76)] = 1630,
  [SMALL_STATE(77)] = 1649,
  [SMALL_STATE(78)] = 1668,
  [SMALL_STATE(79)] = 1687,
  [SMALL_STATE(80)] = 1700,
  [SMALL_STATE(81)] = 1719,
  [SMALL_STATE(82)] = 1738,
  [SMALL_STATE(83)] = 1759,
  [SMALL_STATE(84)] = 1778,
  [SMALL_STATE(85)] = 1794,
  [SMALL_STATE(86)] = 1806,
  [SMALL_STATE(87)] = 1818,
  [SMALL_STATE(88)] = 1834,
  [SMALL_STATE(89)] = 1846,
  [SMALL_STATE(90)] = 1858,
  [SMALL_STATE(91)] = 1874,
  [SMALL_STATE(92)] = 1890,
  [SMALL_STATE(93)] = 1902,
  [SMALL_STATE(94)] = 1918,
  [SMALL_STATE(95)] = 1934,
  [SMALL_STATE(96)] = 1950,
  [SMALL_STATE(97)] = 1962,
  [SMALL_STATE(98)] = 1978,
  [SMALL_STATE(99)] = 1994,
  [SMALL_STATE(100)] = 2010,
  [SMALL_STATE(101)] = 2022,
  [SMALL_STATE(102)] = 2038,
  [SMALL_STATE(103)] = 2050,
  [SMALL_STATE(104)] = 2064,
  [SMALL_STATE(105)] = 2076,
  [SMALL_STATE(106)] = 2088,
  [SMALL_STATE(107)] = 2100,
  [SMALL_STATE(108)] = 2116,
  [SMALL_STATE(109)] = 2132,
  [SMALL_STATE(110)] = 2144,
  [SMALL_STATE(111)] = 2156,
  [SMALL_STATE(112)] = 2172,
  [SMALL_STATE(113)] = 2184,
  [SMALL_STATE(114)] = 2196,
  [SMALL_STATE(115)] = 2212,
  [SMALL_STATE(116)] = 2224,
  [SMALL_STATE(117)] = 2236,
  [SMALL_STATE(118)] = 2248,
  [SMALL_STATE(119)] = 2260,
  [SMALL_STATE(120)] = 2272,
  [SMALL_STATE(121)] = 2284,
  [SMALL_STATE(122)] = 2300,
  [SMALL_STATE(123)] = 2316,
  [SMALL_STATE(124)] = 2328,
  [SMALL_STATE(125)] = 2340,
  [SMALL_STATE(126)] = 2356,
  [SMALL_STATE(127)] = 2368,
  [SMALL_STATE(128)] = 2380,
  [SMALL_STATE(129)] = 2392,
  [SMALL_STATE(130)] = 2404,
  [SMALL_STATE(131)] = 2420,
  [SMALL_STATE(132)] = 2438,
  [SMALL_STATE(133)] = 2454,
  [SMALL_STATE(134)] = 2470,
  [SMALL_STATE(135)] = 2486,
  [SMALL_STATE(136)] = 2497,
  [SMALL_STATE(137)] = 2508,
  [SMALL_STATE(138)] = 2519,
  [SMALL_STATE(139)] = 2530,
  [SMALL_STATE(140)] = 2541,
  [SMALL_STATE(141)] = 2552,
  [SMALL_STATE(142)] = 2563,
  [SMALL_STATE(143)] = 2580,
  [SMALL_STATE(144)] = 2591,
  [SMALL_STATE(145)] = 2602,
  [SMALL_STATE(146)] = 2613,
  [SMALL_STATE(147)] = 2624,
  [SMALL_STATE(148)] = 2635,
  [SMALL_STATE(149)] = 2646,
  [SMALL_STATE(150)] = 2658,
  [SMALL_STATE(151)] = 2668,
  [SMALL_STATE(152)] = 2678,
  [SMALL_STATE(153)] = 2688,
  [SMALL_STATE(154)] = 2698,
  [SMALL_STATE(155)] = 2708,
  [SMALL_STATE(156)] = 2718,
  [SMALL_STATE(157)] = 2728,
  [SMALL_STATE(158)] = 2740,
  [SMALL_STATE(159)] = 2750,
  [SMALL_STATE(160)] = 2760,
  [SMALL_STATE(161)] = 2772,
  [SMALL_STATE(162)] = 2784,
  [SMALL_STATE(163)] = 2796,
  [SMALL_STATE(164)] = 2810,
  [SMALL_STATE(165)] = 2820,
  [SMALL_STATE(166)] = 2830,
  [SMALL_STATE(167)] = 2842,
  [SMALL_STATE(168)] = 2854,
  [SMALL_STATE(169)] = 2864,
  [SMALL_STATE(170)] = 2878,
  [SMALL_STATE(171)] = 2888,
  [SMALL_STATE(172)] = 2902,
  [SMALL_STATE(173)] = 2916,
  [SMALL_STATE(174)] = 2930,
  [SMALL_STATE(175)] = 2944,
  [SMALL_STATE(176)] = 2958,
  [SMALL_STATE(177)] = 2972,
  [SMALL_STATE(178)] = 2984,
  [SMALL_STATE(179)] = 2994,
  [SMALL_STATE(180)] = 3004,
  [SMALL_STATE(181)] = 3014,
  [SMALL_STATE(182)] = 3024,
  [SMALL_STATE(183)] = 3036,
  [SMALL_STATE(184)] = 3046,
  [SMALL_STATE(185)] = 3058,
  [SMALL_STATE(186)] = 3070,
  [SMALL_STATE(187)] = 3080,
  [SMALL_STATE(188)] = 3092,
  [SMALL_STATE(189)] = 3104,
  [SMALL_STATE(190)] = 3116,
  [SMALL_STATE(191)] = 3127,
  [SMALL_STATE(192)] = 3138,
  [SMALL_STATE(193)] = 3149,
  [SMALL_STATE(194)] = 3160,
  [SMALL_STATE(195)] = 3171,
  [SMALL_STATE(196)] = 3182,
  [SMALL_STATE(197)] = 3193,
  [SMALL_STATE(198)] = 3204,
  [SMALL_STATE(199)] = 3215,
  [SMALL_STATE(200)] = 3226,
  [SMALL_STATE(201)] = 3237,
  [SMALL_STATE(202)] = 3248,
  [SMALL_STATE(203)] = 3259,
  [SMALL_STATE(204)] = 3270,
  [SMALL_STATE(205)] = 3281,
  [SMALL_STATE(206)] = 3292,
  [SMALL_STATE(207)] = 3303,
  [SMALL_STATE(208)] = 3314,
  [SMALL_STATE(209)] = 3325,
  [SMALL_STATE(210)] = 3336,
  [SMALL_STATE(211)] = 3344,
  [SMALL_STATE(212)] = 3352,
  [SMALL_STATE(213)] = 3360,
  [SMALL_STATE(214)] = 3368,
  [SMALL_STATE(215)] = 3376,
  [SMALL_STATE(216)] = 3384,
  [SMALL_STATE(217)] = 3392,
  [SMALL_STATE(218)] = 3400,
  [SMALL_STATE(219)] = 3408,
  [SMALL_STATE(220)] = 3416,
  [SMALL_STATE(221)] = 3424,
  [SMALL_STATE(222)] = 3432,
  [SMALL_STATE(223)] = 3440,
  [SMALL_STATE(224)] = 3448,
  [SMALL_STATE(225)] = 3456,
  [SMALL_STATE(226)] = 3464,
  [SMALL_STATE(227)] = 3472,
  [SMALL_STATE(228)] = 3480,
  [SMALL_STATE(229)] = 3488,
  [SMALL_STATE(230)] = 3496,
  [SMALL_STATE(231)] = 3504,
  [SMALL_STATE(232)] = 3512,
  [SMALL_STATE(233)] = 3520,
  [SMALL_STATE(234)] = 3528,
  [SMALL_STATE(235)] = 3536,
  [SMALL_STATE(236)] = 3544,
  [SMALL_STATE(237)] = 3552,
  [SMALL_STATE(238)] = 3560,
  [SMALL_STATE(239)] = 3568,
  [SMALL_STATE(240)] = 3576,
  [SMALL_STATE(241)] = 3584,
  [SMALL_STATE(242)] = 3592,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(176),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(175),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(174),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(173),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(172),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(171),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(238),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(239),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(236),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(235),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(222),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(211),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(212),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 16),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 28),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(90),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(98),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(38),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(130),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(84),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 18),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 18),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 21),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 21),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 15),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 15),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 28),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 14),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 14),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 13),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 13),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 12),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 12),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 11),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 11),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 30),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 30),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 10),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 10),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 31),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 31),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 32),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 32),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 16),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 17),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 17),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 33),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 33),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 20),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 20),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 19),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 19),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 29),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 29),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 35),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 35),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(87),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 26),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 35),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 26),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(239),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 25),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 26),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 25),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 26),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 25),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 26),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat2, 2), SHIFT_REPEAT(230),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat2, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 26),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 35),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(169),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 26),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 35),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(114),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 26),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 26),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 25),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 26),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 25),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 26),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(131),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 35),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 26),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(228),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 35),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 35),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 35),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 25),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 4, .production_id = 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 4, .production_id = 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 7),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6, .production_id = 9),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 10, .production_id = 23),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 11, .production_id = 27),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 8),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 26),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 35),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 26),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 26),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 25),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 35),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 26),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 35),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 35),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 26),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 24),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 25),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 26),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 34),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [614] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
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
