#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 243
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 36

enum {
  sym_identifier = 1,
  anon_sym_Parameters = 2,
  anon_sym_COLON = 3,
  anon_sym_Let = 4,
  anon_sym_EQ = 5,
  anon_sym_Execute = 6,
  anon_sym_using = 7,
  anon_sym_cmd = 8,
  anon_sym_sh = 9,
  anon_sym_bash = 10,
  anon_sym_connection = 11,
  anon_sym_to = 12,
  anon_sym_with = 13,
  anon_sym_result = 14,
  anon_sym_Output = 15,
  anon_sym_description = 16,
  anon_sym_archiver = 17,
  anon_sym_archiverContact = 18,
  anon_sym_dataOwner = 19,
  anon_sym_dataOriginTimespan = 20,
  anon_sym_lobFolder = 21,
  anon_sym_Schema = 22,
  anon_sym_Type = 23,
  anon_sym_Table = 24,
  anon_sym_Column = 25,
  anon_sym_Field = 26,
  anon_sym_Key = 27,
  anon_sym_Check = 28,
  anon_sym_View = 29,
  sym_escape_sequence = 30,
  sym_short_description = 31,
  aux_sym__short_descr_token1 = 32,
  sym__newline = 33,
  sym__indent = 34,
  sym__dedent = 35,
  sym__inter_start = 36,
  sym__inter_end = 37,
  sym__raw = 38,
  sym__string_start = 39,
  sym__string_content = 40,
  sym__string_end = 41,
  sym__comment = 42,
  sym__end_of_file = 43,
  sym__skip = 44,
  sym_source_file = 45,
  sym_parameters = 46,
  sym_parameter = 47,
  sym__statement = 48,
  sym_let = 49,
  sym__expression = 50,
  sym_execute_using_shell = 51,
  sym_shell_name = 52,
  sym_connection = 53,
  sym_execute_sql = 54,
  sym_query = 55,
  sym_siard_output = 56,
  sym__siard_description = 57,
  sym__siard_archiver = 58,
  sym__siard_archiverContact = 59,
  sym__siard_dataOwner = 60,
  sym__siard_dataOriginTimespan = 61,
  sym__siard_lobFolder = 62,
  sym_siard_schema = 63,
  sym_siard_type = 64,
  sym_siard_table = 65,
  sym_siard_column = 66,
  sym_siard_field = 67,
  sym_siard_key = 68,
  sym_siard_check = 69,
  sym_siard_view = 70,
  sym__basic_expression = 71,
  sym_variable_instance = 72,
  sym_string = 73,
  sym_string_content = 74,
  sym__short_descr = 75,
  sym__nl = 76,
  sym__ni = 77,
  sym__ded = 78,
  sym_interpolation = 79,
  sym_key_value_pairs = 80,
  sym_key_value_pair = 81,
  sym_raw = 82,
  sym_raw_content = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_parameters_repeat1 = 85,
  aux_sym_siard_output_repeat1 = 86,
  aux_sym_siard_output_repeat2 = 87,
  aux_sym_siard_schema_repeat1 = 88,
  aux_sym_siard_table_repeat1 = 89,
  aux_sym_siard_column_repeat1 = 90,
  aux_sym_siard_view_repeat1 = 91,
  aux_sym_string_repeat1 = 92,
  aux_sym_string_content_repeat1 = 93,
  aux_sym_key_value_pairs_repeat1 = 94,
  aux_sym_raw_repeat1 = 95,
  aux_sym_raw_content_repeat1 = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_Parameters] = "Parameters",
  [anon_sym_COLON] = ":",
  [anon_sym_Let] = "Let",
  [anon_sym_EQ] = "=",
  [anon_sym_Execute] = "Execute",
  [anon_sym_using] = "using",
  [anon_sym_cmd] = "cmd",
  [anon_sym_sh] = "sh",
  [anon_sym_bash] = "bash",
  [anon_sym_connection] = "connection",
  [anon_sym_to] = "to",
  [anon_sym_with] = "with",
  [anon_sym_result] = "result",
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
  [sym_let] = "let",
  [sym__expression] = "_expression",
  [sym_execute_using_shell] = "execute_using_shell",
  [sym_shell_name] = "shell_name",
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
  [anon_sym_Let] = anon_sym_Let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_Execute] = anon_sym_Execute,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_sh] = anon_sym_sh,
  [anon_sym_bash] = anon_sym_bash,
  [anon_sym_connection] = anon_sym_connection,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_result] = anon_sym_result,
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
  [sym_let] = sym_let,
  [sym__expression] = sym__expression,
  [sym_execute_using_shell] = sym_execute_using_shell,
  [sym_shell_name] = sym_shell_name,
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
  [anon_sym_Let] = {
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
  [anon_sym_cmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bash] = {
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
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_execute_using_shell] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_name] = {
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
  field_key = 8,
  field_lobFolder = 9,
  field_name = 10,
  field_properties = 11,
  field_script = 12,
  field_shell_name = 13,
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
  [field_key] = "key",
  [field_lobFolder] = "lobFolder",
  [field_name] = "name",
  [field_properties] = "properties",
  [field_script] = "script",
  [field_shell_name] = "shell_name",
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
    {field_connection, 2},
    {field_sql, 3},
  [4] =
    {field_script, 3},
    {field_shell_name, 2},
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
  [16] = 16,
  [17] = 8,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 20,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 29,
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 30,
  [38] = 38,
  [39] = 29,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 26,
  [50] = 25,
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
  [80] = 58,
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
  [122] = 87,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
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
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 139,
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
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 163,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 130,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 121,
  [185] = 185,
  [186] = 186,
  [187] = 109,
  [188] = 174,
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
  [218] = 218,
  [219] = 130,
  [220] = 121,
  [221] = 109,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 227,
  [232] = 232,
  [233] = 233,
  [234] = 225,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 210,
  [242] = 226,
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
      if (lookahead == 'L') ADVANCE(5);
      if (lookahead == 'O') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'S') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'V') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'w') ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_sh);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Let);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == 'w') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'F') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_bash);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 94:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 'w') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_connection);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(141);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 153:
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
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 4},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 5},
  [24] = {.lex_state = 0, .external_lex_state = 5},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 6},
  [30] = {.lex_state = 0, .external_lex_state = 6},
  [31] = {.lex_state = 0, .external_lex_state = 5},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 6},
  [34] = {.lex_state = 0, .external_lex_state = 6},
  [35] = {.lex_state = 0, .external_lex_state = 6},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 6},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 6},
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
  [58] = {.lex_state = 0, .external_lex_state = 7},
  [59] = {.lex_state = 0, .external_lex_state = 8},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 8},
  [70] = {.lex_state = 0, .external_lex_state = 8},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 8},
  [73] = {.lex_state = 0, .external_lex_state = 8},
  [74] = {.lex_state = 0, .external_lex_state = 8},
  [75] = {.lex_state = 0, .external_lex_state = 8},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 8},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 0, .external_lex_state = 7},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 5},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 4},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 4},
  [92] = {.lex_state = 0, .external_lex_state = 5},
  [93] = {.lex_state = 0, .external_lex_state = 4},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 6},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 6},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 3},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 8},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 8},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 6},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 5},
  [149] = {.lex_state = 0, .external_lex_state = 8},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 8},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 0, .external_lex_state = 8},
  [157] = {.lex_state = 0, .external_lex_state = 8},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 0, .external_lex_state = 8},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 8},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 8},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 8},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 0, .external_lex_state = 8},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 0, .external_lex_state = 3},
  [184] = {.lex_state = 0, .external_lex_state = 8},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0, .external_lex_state = 8},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 8},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 9},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 9},
  [194] = {.lex_state = 0, .external_lex_state = 9},
  [195] = {.lex_state = 0, .external_lex_state = 9},
  [196] = {.lex_state = 0, .external_lex_state = 9},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 9},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 9},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 9},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 9},
  [206] = {.lex_state = 0, .external_lex_state = 9},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 9},
  [209] = {.lex_state = 18, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 10},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 11},
  [220] = {.lex_state = 0, .external_lex_state = 11},
  [221] = {.lex_state = 0, .external_lex_state = 11},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 11},
  [226] = {.lex_state = 0, .external_lex_state = 9},
  [227] = {.lex_state = 0, .external_lex_state = 10},
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
    [ts_external_token__inter_start] = true,
    [ts_external_token__raw] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [8] = {
    [ts_external_token__newline] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__end_of_file] = true,
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
    [anon_sym_Let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_Execute] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_sh] = ACTIONS(1),
    [anon_sym_bash] = ACTIONS(1),
    [anon_sym_connection] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_result] = ACTIONS(1),
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
    [sym_parameters] = STATE(21),
    [sym__statement] = STATE(10),
    [sym_let] = STATE(10),
    [sym_execute_using_shell] = STATE(10),
    [sym_execute_sql] = STATE(10),
    [sym_siard_output] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
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
      sym__siard_dataOriginTimespan,
    STATE(44), 1,
      sym__siard_dataOwner,
    STATE(45), 1,
      sym__siard_archiverContact,
    STATE(46), 1,
      sym__siard_archiver,
    STATE(48), 1,
      sym__siard_description,
    STATE(52), 1,
      sym__siard_lobFolder,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(65), 2,
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
      sym__siard_dataOriginTimespan,
    STATE(44), 1,
      sym__siard_dataOwner,
    STATE(45), 1,
      sym__siard_archiverContact,
    STATE(46), 1,
      sym__siard_archiver,
    STATE(48), 1,
      sym__siard_description,
    STATE(52), 1,
      sym__siard_lobFolder,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(61), 2,
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
      sym__siard_dataOriginTimespan,
    STATE(44), 1,
      sym__siard_dataOwner,
    STATE(45), 1,
      sym__siard_archiverContact,
    STATE(46), 1,
      sym__siard_archiver,
    STATE(48), 1,
      sym__siard_description,
    STATE(52), 1,
      sym__siard_lobFolder,
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
    STATE(11), 1,
      sym__siard_description,
    STATE(112), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(57), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(12), 4,
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
    STATE(9), 1,
      sym__siard_description,
    STATE(176), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(65), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(19), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [215] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(69), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(67), 9,
      anon_sym_Schema,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
      sym_identifier,
  [235] = 3,
    ACTIONS(73), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(71), 10,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [255] = 7,
    ACTIONS(59), 1,
      anon_sym_Type,
    ACTIONS(61), 1,
      anon_sym_Table,
    ACTIONS(63), 1,
      anon_sym_View,
    STATE(186), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(75), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(13), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [282] = 6,
    ACTIONS(9), 1,
      anon_sym_Let,
    ACTIONS(11), 1,
      anon_sym_Execute,
    ACTIONS(13), 1,
      anon_sym_Output,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(15), 6,
      sym__statement,
      sym_let,
      sym_execute_using_shell,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [307] = 7,
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
    ACTIONS(79), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(16), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [334] = 7,
    ACTIONS(51), 1,
      anon_sym_Column,
    ACTIONS(53), 1,
      anon_sym_Key,
    ACTIONS(55), 1,
      anon_sym_Check,
    STATE(83), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(81), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(27), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [361] = 7,
    ACTIONS(59), 1,
      anon_sym_Type,
    ACTIONS(61), 1,
      anon_sym_Table,
    ACTIONS(63), 1,
      anon_sym_View,
    STATE(154), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(83), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(22), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [388] = 6,
    ACTIONS(9), 1,
      anon_sym_Let,
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
      sym_let,
      sym_execute_using_shell,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [413] = 6,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_Let,
    ACTIONS(92), 1,
      anon_sym_Execute,
    ACTIONS(95), 1,
      anon_sym_Output,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(15), 6,
      sym__statement,
      sym_let,
      sym_execute_using_shell,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [438] = 7,
    ACTIONS(51), 1,
      anon_sym_Column,
    ACTIONS(53), 1,
      anon_sym_Key,
    ACTIONS(55), 1,
      anon_sym_Check,
    STATE(104), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(98), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(27), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [465] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(71), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(73), 8,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
      sym_identifier,
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
    STATE(136), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [509] = 7,
    ACTIONS(59), 1,
      anon_sym_Type,
    ACTIONS(61), 1,
      anon_sym_Table,
    ACTIONS(63), 1,
      anon_sym_View,
    STATE(183), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(108), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(22), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [536] = 2,
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
  [553] = 6,
    ACTIONS(9), 1,
      anon_sym_Let,
    ACTIONS(11), 1,
      anon_sym_Execute,
    ACTIONS(13), 1,
      anon_sym_Output,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(14), 6,
      sym__statement,
      sym_let,
      sym_execute_using_shell,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [578] = 6,
    ACTIONS(112), 1,
      anon_sym_Type,
    ACTIONS(115), 1,
      anon_sym_Table,
    ACTIONS(118), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(121), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(22), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [602] = 7,
    ACTIONS(125), 1,
      sym__inter_start,
    ACTIONS(127), 1,
      sym__raw,
    STATE(8), 1,
      sym__ded,
    STATE(92), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(123), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(31), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [628] = 7,
    ACTIONS(125), 1,
      sym__inter_start,
    ACTIONS(127), 1,
      sym__raw,
    STATE(17), 1,
      sym__ded,
    STATE(92), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(129), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(31), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [654] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(131), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [670] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(133), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [686] = 6,
    ACTIONS(135), 1,
      anon_sym_Column,
    ACTIONS(138), 1,
      anon_sym_Key,
    ACTIONS(141), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(144), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(27), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [710] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(146), 8,
      anon_sym_description,
      anon_sym_archiver,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      sym_identifier,
  [725] = 7,
    ACTIONS(148), 1,
      sym_escape_sequence,
    ACTIONS(150), 1,
      sym__inter_start,
    ACTIONS(152), 1,
      sym__string_content,
    ACTIONS(154), 1,
      sym__string_end,
    STATE(115), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(35), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [750] = 7,
    ACTIONS(150), 1,
      sym__inter_start,
    ACTIONS(152), 1,
      sym__string_content,
    ACTIONS(156), 1,
      sym_escape_sequence,
    ACTIONS(158), 1,
      sym__string_end,
    STATE(115), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(33), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [775] = 6,
    ACTIONS(162), 1,
      sym__inter_start,
    ACTIONS(165), 1,
      sym__raw,
    STATE(92), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(160), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(31), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [798] = 7,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(168), 1,
      anon_sym_Field,
    STATE(62), 1,
      sym__siard_description,
    STATE(160), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(170), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(66), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [823] = 7,
    ACTIONS(148), 1,
      sym_escape_sequence,
    ACTIONS(150), 1,
      sym__inter_start,
    ACTIONS(152), 1,
      sym__string_content,
    ACTIONS(172), 1,
      sym__string_end,
    STATE(115), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(35), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [848] = 7,
    ACTIONS(150), 1,
      sym__inter_start,
    ACTIONS(152), 1,
      sym__string_content,
    ACTIONS(174), 1,
      sym_escape_sequence,
    ACTIONS(176), 1,
      sym__string_end,
    STATE(115), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(39), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [873] = 7,
    ACTIONS(178), 1,
      sym_escape_sequence,
    ACTIONS(181), 1,
      sym__inter_start,
    ACTIONS(184), 1,
      sym__string_content,
    ACTIONS(187), 1,
      sym__string_end,
    STATE(115), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(35), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [898] = 7,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(168), 1,
      anon_sym_Field,
    STATE(77), 1,
      sym__siard_description,
    STATE(113), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(189), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(79), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [923] = 7,
    ACTIONS(150), 1,
      sym__inter_start,
    ACTIONS(152), 1,
      sym__string_content,
    ACTIONS(191), 1,
      sym_escape_sequence,
    ACTIONS(193), 1,
      sym__string_end,
    STATE(115), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(29), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [948] = 7,
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
    ACTIONS(195), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(64), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [973] = 7,
    ACTIONS(148), 1,
      sym_escape_sequence,
    ACTIONS(150), 1,
      sym__inter_start,
    ACTIONS(152), 1,
      sym__string_content,
    ACTIONS(197), 1,
      sym__string_end,
    STATE(115), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(35), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
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
    ACTIONS(213), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(211), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1062] = 3,
    ACTIONS(217), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(215), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1078] = 3,
    ACTIONS(221), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(219), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1094] = 3,
    ACTIONS(225), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(223), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1110] = 3,
    ACTIONS(229), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(227), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1126] = 3,
    ACTIONS(233), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(231), 6,
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
    ACTIONS(133), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1158] = 3,
    ACTIONS(237), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(131), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1174] = 3,
    ACTIONS(241), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(239), 6,
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
    ACTIONS(243), 6,
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
    ACTIONS(125), 1,
      sym__inter_start,
    ACTIONS(127), 1,
      sym__raw,
    STATE(92), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(23), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1305] = 6,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(269), 1,
      aux_sym__short_descr_token1,
    STATE(151), 1,
      sym__short_descr,
    STATE(170), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(271), 2,
      sym__newline,
      sym__end_of_file,
  [1326] = 5,
    ACTIONS(168), 1,
      anon_sym_Field,
    STATE(129), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(273), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(81), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1345] = 5,
    ACTIONS(27), 1,
      anon_sym_Schema,
    STATE(138), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(275), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(107), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [1364] = 5,
    ACTIONS(168), 1,
      anon_sym_Field,
    STATE(159), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(277), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(71), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1383] = 5,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(147), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(281), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(111), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [1402] = 5,
    ACTIONS(51), 1,
      anon_sym_Column,
    STATE(88), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(283), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(89), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1421] = 5,
    ACTIONS(27), 1,
      anon_sym_Schema,
    STATE(146), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(285), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(107), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [1440] = 5,
    ACTIONS(168), 1,
      anon_sym_Field,
    STATE(155), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(287), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(81), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1459] = 5,
    ACTIONS(51), 1,
      anon_sym_Column,
    STATE(110), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(289), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(89), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1478] = 5,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(140), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(293), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(123), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1497] = 6,
    ACTIONS(269), 1,
      aux_sym__short_descr_token1,
    ACTIONS(295), 1,
      anon_sym_COLON,
    STATE(120), 1,
      sym__nl,
    STATE(126), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(297), 2,
      sym__newline,
      sym__end_of_file,
  [1518] = 6,
    ACTIONS(269), 1,
      aux_sym__short_descr_token1,
    ACTIONS(299), 1,
      anon_sym_COLON,
    STATE(118), 1,
      sym__nl,
    STATE(119), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(301), 2,
      sym__newline,
      sym__end_of_file,
  [1539] = 5,
    ACTIONS(168), 1,
      anon_sym_Field,
    STATE(152), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(303), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(81), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1558] = 6,
    ACTIONS(269), 1,
      aux_sym__short_descr_token1,
    ACTIONS(305), 1,
      anon_sym_COLON,
    STATE(116), 1,
      sym__nl,
    STATE(117), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(307), 2,
      sym__newline,
      sym__end_of_file,
  [1579] = 6,
    ACTIONS(269), 1,
      aux_sym__short_descr_token1,
    ACTIONS(309), 1,
      anon_sym_COLON,
    STATE(102), 1,
      sym__short_descr,
    STATE(103), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(311), 2,
      sym__newline,
      sym__end_of_file,
  [1600] = 6,
    ACTIONS(269), 1,
      aux_sym__short_descr_token1,
    ACTIONS(313), 1,
      anon_sym_COLON,
    STATE(96), 1,
      sym__short_descr,
    STATE(100), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(315), 2,
      sym__newline,
      sym__end_of_file,
  [1621] = 6,
    ACTIONS(269), 1,
      aux_sym__short_descr_token1,
    ACTIONS(317), 1,
      anon_sym_COLON,
    STATE(90), 1,
      sym__short_descr,
    STATE(94), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(319), 2,
      sym__newline,
      sym__end_of_file,
  [1642] = 5,
    ACTIONS(51), 1,
      anon_sym_Column,
    STATE(84), 1,
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
  [1661] = 5,
    ACTIONS(168), 1,
      anon_sym_Field,
    STATE(124), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(323), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(60), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1680] = 6,
    ACTIONS(269), 1,
      aux_sym__short_descr_token1,
    ACTIONS(325), 1,
      anon_sym_COLON,
    STATE(178), 1,
      sym__nl,
    STATE(179), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(327), 2,
      sym__newline,
      sym__end_of_file,
  [1701] = 5,
    ACTIONS(168), 1,
      anon_sym_Field,
    STATE(125), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(329), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(81), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1720] = 5,
    ACTIONS(125), 1,
      sym__inter_start,
    ACTIONS(127), 1,
      sym__raw,
    STATE(92), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(24), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1739] = 4,
    ACTIONS(331), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(334), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(81), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1755] = 4,
    ACTIONS(338), 1,
      sym__raw,
    STATE(82), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(336), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [1771] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(341), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1783] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(343), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1795] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(345), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1807] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(347), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1819] = 4,
    ACTIONS(349), 1,
      sym_identifier,
    ACTIONS(351), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(234), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1835] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(353), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1847] = 4,
    ACTIONS(355), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(358), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(89), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1863] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(360), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1875] = 4,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(163), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1891] = 4,
    ACTIONS(368), 1,
      sym__raw,
    STATE(82), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(366), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [1907] = 4,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(149), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1923] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(370), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1935] = 4,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(161), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1951] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(372), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1963] = 4,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(157), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1979] = 3,
    ACTIONS(376), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(374), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1993] = 4,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(156), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2009] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(378), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2021] = 4,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(153), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2037] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(380), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2049] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(382), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2061] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(384), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2073] = 4,
    ACTIONS(388), 1,
      sym__string_content,
    STATE(105), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(386), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [2089] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(391), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2101] = 4,
    ACTIONS(393), 1,
      anon_sym_Schema,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(396), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(107), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [2117] = 4,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(180), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2133] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(398), 5,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_using,
      anon_sym_Output,
  [2145] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(400), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2157] = 4,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(405), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(111), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [2173] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(407), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2185] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(409), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2197] = 4,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(137), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2213] = 4,
    ACTIONS(413), 1,
      sym__string_content,
    STATE(105), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(411), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [2229] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(415), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2241] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(417), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2253] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(419), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2265] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(421), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2277] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(423), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2289] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(425), 5,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_using,
      anon_sym_Output,
  [2301] = 4,
    ACTIONS(349), 1,
      sym_identifier,
    ACTIONS(351), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(225), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2317] = 4,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(430), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(123), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2333] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(432), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2345] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(434), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2357] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(436), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2369] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(438), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2381] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(440), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2393] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(442), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2405] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(444), 5,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_using,
      anon_sym_Output,
  [2417] = 5,
    ACTIONS(269), 1,
      aux_sym__short_descr_token1,
    STATE(181), 1,
      sym__short_descr,
    STATE(182), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(446), 2,
      sym__newline,
      sym__end_of_file,
  [2435] = 4,
    ACTIONS(106), 1,
      sym__string_start,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(218), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2451] = 4,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(199), 1,
      sym_shell_name,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(452), 3,
      anon_sym_cmd,
      anon_sym_sh,
      anon_sym_bash,
  [2467] = 4,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(168), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2483] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(454), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2494] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(456), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2505] = 5,
    ACTIONS(458), 1,
      anon_sym_with,
    ACTIONS(460), 1,
      sym__newline,
    ACTIONS(462), 1,
      sym__end_of_file,
    STATE(141), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2522] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(464), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2533] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(466), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      sym_escape_sequence,
  [2544] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(468), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2555] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(470), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2566] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(472), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2577] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(474), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2588] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(476), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2599] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(478), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2610] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(480), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2621] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(482), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2632] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(466), 4,
      sym__dedent,
      sym__inter_start,
      sym__raw,
      sym__end_of_file,
  [2643] = 3,
    STATE(43), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(484), 2,
      sym__newline,
      sym__end_of_file,
  [2655] = 4,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(488), 1,
      anon_sym_EQ,
    STATE(55), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2669] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(490), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2679] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(492), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2689] = 3,
    STATE(41), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(494), 2,
      sym__newline,
      sym__end_of_file,
  [2701] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(496), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2711] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(498), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2721] = 3,
    STATE(56), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(500), 2,
      sym__newline,
      sym__end_of_file,
  [2733] = 3,
    STATE(51), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(502), 2,
      sym__newline,
      sym__end_of_file,
  [2745] = 3,
    STATE(85), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(504), 2,
      sym__dedent,
      sym__end_of_file,
  [2757] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(506), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2767] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(508), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2777] = 3,
    STATE(47), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(510), 2,
      sym__newline,
      sym__end_of_file,
  [2789] = 3,
    STATE(127), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(512), 2,
      sym__dedent,
      sym__end_of_file,
  [2801] = 3,
    STATE(49), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(514), 2,
      sym__newline,
      sym__end_of_file,
  [2813] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(516), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [2823] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(518), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [2833] = 3,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(68), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2845] = 4,
    ACTIONS(520), 1,
      anon_sym_COLON,
    ACTIONS(522), 1,
      anon_sym_EQ,
    STATE(165), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2859] = 3,
    STATE(26), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(524), 2,
      sym__newline,
      sym__end_of_file,
  [2871] = 4,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(526), 1,
      anon_sym_EQ,
    STATE(53), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2885] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(528), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2895] = 4,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(530), 1,
      anon_sym_EQ,
    STATE(57), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2909] = 4,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(532), 1,
      anon_sym_EQ,
    STATE(54), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2923] = 4,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(534), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2937] = 4,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(536), 1,
      anon_sym_EQ,
    STATE(50), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2951] = 3,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(63), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [2963] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(538), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2973] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(444), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [2983] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(540), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2993] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(542), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [3003] = 3,
    STATE(164), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(544), 2,
      sym__newline,
      sym__end_of_file,
  [3015] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(546), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3025] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(548), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3035] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(550), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [3045] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(425), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3055] = 3,
    STATE(128), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(552), 2,
      sym__dedent,
      sym__end_of_file,
  [3067] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(554), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [3077] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(398), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3087] = 4,
    ACTIONS(520), 1,
      anon_sym_COLON,
    ACTIONS(556), 1,
      anon_sym_EQ,
    STATE(25), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3101] = 3,
    STATE(7), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(558), 2,
      sym__newline,
      sym__end_of_file,
  [3113] = 3,
    ACTIONS(486), 1,
      anon_sym_COLON,
    STATE(135), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3124] = 3,
    ACTIONS(560), 1,
      sym__newline,
    STATE(175), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3135] = 3,
    ACTIONS(49), 1,
      anon_sym_description,
    STATE(185), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3146] = 3,
    ACTIONS(560), 1,
      sym__newline,
    STATE(166), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3157] = 3,
    ACTIONS(560), 1,
      sym__newline,
    STATE(204), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3168] = 3,
    ACTIONS(562), 1,
      sym__newline,
    STATE(5), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3179] = 3,
    ACTIONS(562), 1,
      sym__newline,
    STATE(38), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3190] = 3,
    ACTIONS(486), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3201] = 3,
    ACTIONS(562), 1,
      sym__newline,
    STATE(6), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3212] = 3,
    ACTIONS(486), 1,
      anon_sym_COLON,
    STATE(142), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3223] = 3,
    ACTIONS(560), 1,
      sym__newline,
    STATE(192), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3234] = 3,
    ACTIONS(564), 1,
      anon_sym_COLON,
    STATE(143), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3245] = 3,
    ACTIONS(560), 1,
      sym__newline,
    STATE(203), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3256] = 3,
    ACTIONS(49), 1,
      anon_sym_description,
    STATE(162), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3267] = 3,
    ACTIONS(49), 1,
      anon_sym_description,
    STATE(158), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3278] = 3,
    ACTIONS(560), 1,
      sym__newline,
    STATE(2), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3289] = 3,
    ACTIONS(562), 1,
      sym__newline,
    STATE(32), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3300] = 3,
    ACTIONS(564), 1,
      anon_sym_COLON,
    STATE(144), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3311] = 3,
    ACTIONS(562), 1,
      sym__newline,
    STATE(36), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3322] = 2,
    ACTIONS(566), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3330] = 2,
    ACTIONS(568), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3338] = 2,
    ACTIONS(570), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3346] = 2,
    ACTIONS(572), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3354] = 2,
    ACTIONS(574), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3362] = 2,
    ACTIONS(576), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3370] = 2,
    ACTIONS(578), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3378] = 2,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3386] = 2,
    ACTIONS(582), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3394] = 2,
    ACTIONS(584), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3402] = 2,
    ACTIONS(444), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3410] = 2,
    ACTIONS(425), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3418] = 2,
    ACTIONS(398), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3426] = 2,
    ACTIONS(586), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3434] = 2,
    ACTIONS(588), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3442] = 2,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3450] = 2,
    ACTIONS(592), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3458] = 2,
    ACTIONS(594), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3466] = 2,
    ACTIONS(596), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3474] = 2,
    ACTIONS(598), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3482] = 2,
    ACTIONS(600), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3490] = 2,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3498] = 2,
    ACTIONS(604), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3506] = 2,
    ACTIONS(606), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3514] = 2,
    ACTIONS(608), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3522] = 2,
    ACTIONS(610), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3530] = 2,
    ACTIONS(612), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3538] = 2,
    ACTIONS(614), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3546] = 2,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3554] = 2,
    ACTIONS(618), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3562] = 2,
    ACTIONS(620), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3570] = 2,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3578] = 2,
    ACTIONS(624), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3586] = 2,
    ACTIONS(626), 1,
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
  [SMALL_STATE(11)] = 307,
  [SMALL_STATE(12)] = 334,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 388,
  [SMALL_STATE(15)] = 413,
  [SMALL_STATE(16)] = 438,
  [SMALL_STATE(17)] = 465,
  [SMALL_STATE(18)] = 484,
  [SMALL_STATE(19)] = 509,
  [SMALL_STATE(20)] = 536,
  [SMALL_STATE(21)] = 553,
  [SMALL_STATE(22)] = 578,
  [SMALL_STATE(23)] = 602,
  [SMALL_STATE(24)] = 628,
  [SMALL_STATE(25)] = 654,
  [SMALL_STATE(26)] = 670,
  [SMALL_STATE(27)] = 686,
  [SMALL_STATE(28)] = 710,
  [SMALL_STATE(29)] = 725,
  [SMALL_STATE(30)] = 750,
  [SMALL_STATE(31)] = 775,
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
  [SMALL_STATE(60)] = 1326,
  [SMALL_STATE(61)] = 1345,
  [SMALL_STATE(62)] = 1364,
  [SMALL_STATE(63)] = 1383,
  [SMALL_STATE(64)] = 1402,
  [SMALL_STATE(65)] = 1421,
  [SMALL_STATE(66)] = 1440,
  [SMALL_STATE(67)] = 1459,
  [SMALL_STATE(68)] = 1478,
  [SMALL_STATE(69)] = 1497,
  [SMALL_STATE(70)] = 1518,
  [SMALL_STATE(71)] = 1539,
  [SMALL_STATE(72)] = 1558,
  [SMALL_STATE(73)] = 1579,
  [SMALL_STATE(74)] = 1600,
  [SMALL_STATE(75)] = 1621,
  [SMALL_STATE(76)] = 1642,
  [SMALL_STATE(77)] = 1661,
  [SMALL_STATE(78)] = 1680,
  [SMALL_STATE(79)] = 1701,
  [SMALL_STATE(80)] = 1720,
  [SMALL_STATE(81)] = 1739,
  [SMALL_STATE(82)] = 1755,
  [SMALL_STATE(83)] = 1771,
  [SMALL_STATE(84)] = 1783,
  [SMALL_STATE(85)] = 1795,
  [SMALL_STATE(86)] = 1807,
  [SMALL_STATE(87)] = 1819,
  [SMALL_STATE(88)] = 1835,
  [SMALL_STATE(89)] = 1847,
  [SMALL_STATE(90)] = 1863,
  [SMALL_STATE(91)] = 1875,
  [SMALL_STATE(92)] = 1891,
  [SMALL_STATE(93)] = 1907,
  [SMALL_STATE(94)] = 1923,
  [SMALL_STATE(95)] = 1935,
  [SMALL_STATE(96)] = 1951,
  [SMALL_STATE(97)] = 1963,
  [SMALL_STATE(98)] = 1979,
  [SMALL_STATE(99)] = 1993,
  [SMALL_STATE(100)] = 2009,
  [SMALL_STATE(101)] = 2021,
  [SMALL_STATE(102)] = 2037,
  [SMALL_STATE(103)] = 2049,
  [SMALL_STATE(104)] = 2061,
  [SMALL_STATE(105)] = 2073,
  [SMALL_STATE(106)] = 2089,
  [SMALL_STATE(107)] = 2101,
  [SMALL_STATE(108)] = 2117,
  [SMALL_STATE(109)] = 2133,
  [SMALL_STATE(110)] = 2145,
  [SMALL_STATE(111)] = 2157,
  [SMALL_STATE(112)] = 2173,
  [SMALL_STATE(113)] = 2185,
  [SMALL_STATE(114)] = 2197,
  [SMALL_STATE(115)] = 2213,
  [SMALL_STATE(116)] = 2229,
  [SMALL_STATE(117)] = 2241,
  [SMALL_STATE(118)] = 2253,
  [SMALL_STATE(119)] = 2265,
  [SMALL_STATE(120)] = 2277,
  [SMALL_STATE(121)] = 2289,
  [SMALL_STATE(122)] = 2301,
  [SMALL_STATE(123)] = 2317,
  [SMALL_STATE(124)] = 2333,
  [SMALL_STATE(125)] = 2345,
  [SMALL_STATE(126)] = 2357,
  [SMALL_STATE(127)] = 2369,
  [SMALL_STATE(128)] = 2381,
  [SMALL_STATE(129)] = 2393,
  [SMALL_STATE(130)] = 2405,
  [SMALL_STATE(131)] = 2417,
  [SMALL_STATE(132)] = 2435,
  [SMALL_STATE(133)] = 2451,
  [SMALL_STATE(134)] = 2467,
  [SMALL_STATE(135)] = 2483,
  [SMALL_STATE(136)] = 2494,
  [SMALL_STATE(137)] = 2505,
  [SMALL_STATE(138)] = 2522,
  [SMALL_STATE(139)] = 2533,
  [SMALL_STATE(140)] = 2544,
  [SMALL_STATE(141)] = 2555,
  [SMALL_STATE(142)] = 2566,
  [SMALL_STATE(143)] = 2577,
  [SMALL_STATE(144)] = 2588,
  [SMALL_STATE(145)] = 2599,
  [SMALL_STATE(146)] = 2610,
  [SMALL_STATE(147)] = 2621,
  [SMALL_STATE(148)] = 2632,
  [SMALL_STATE(149)] = 2643,
  [SMALL_STATE(150)] = 2655,
  [SMALL_STATE(151)] = 2669,
  [SMALL_STATE(152)] = 2679,
  [SMALL_STATE(153)] = 2689,
  [SMALL_STATE(154)] = 2701,
  [SMALL_STATE(155)] = 2711,
  [SMALL_STATE(156)] = 2721,
  [SMALL_STATE(157)] = 2733,
  [SMALL_STATE(158)] = 2745,
  [SMALL_STATE(159)] = 2757,
  [SMALL_STATE(160)] = 2767,
  [SMALL_STATE(161)] = 2777,
  [SMALL_STATE(162)] = 2789,
  [SMALL_STATE(163)] = 2801,
  [SMALL_STATE(164)] = 2813,
  [SMALL_STATE(165)] = 2823,
  [SMALL_STATE(166)] = 2833,
  [SMALL_STATE(167)] = 2845,
  [SMALL_STATE(168)] = 2859,
  [SMALL_STATE(169)] = 2871,
  [SMALL_STATE(170)] = 2885,
  [SMALL_STATE(171)] = 2895,
  [SMALL_STATE(172)] = 2909,
  [SMALL_STATE(173)] = 2923,
  [SMALL_STATE(174)] = 2937,
  [SMALL_STATE(175)] = 2951,
  [SMALL_STATE(176)] = 2963,
  [SMALL_STATE(177)] = 2973,
  [SMALL_STATE(178)] = 2983,
  [SMALL_STATE(179)] = 2993,
  [SMALL_STATE(180)] = 3003,
  [SMALL_STATE(181)] = 3015,
  [SMALL_STATE(182)] = 3025,
  [SMALL_STATE(183)] = 3035,
  [SMALL_STATE(184)] = 3045,
  [SMALL_STATE(185)] = 3055,
  [SMALL_STATE(186)] = 3067,
  [SMALL_STATE(187)] = 3077,
  [SMALL_STATE(188)] = 3087,
  [SMALL_STATE(189)] = 3101,
  [SMALL_STATE(190)] = 3113,
  [SMALL_STATE(191)] = 3124,
  [SMALL_STATE(192)] = 3135,
  [SMALL_STATE(193)] = 3146,
  [SMALL_STATE(194)] = 3157,
  [SMALL_STATE(195)] = 3168,
  [SMALL_STATE(196)] = 3179,
  [SMALL_STATE(197)] = 3190,
  [SMALL_STATE(198)] = 3201,
  [SMALL_STATE(199)] = 3212,
  [SMALL_STATE(200)] = 3223,
  [SMALL_STATE(201)] = 3234,
  [SMALL_STATE(202)] = 3245,
  [SMALL_STATE(203)] = 3256,
  [SMALL_STATE(204)] = 3267,
  [SMALL_STATE(205)] = 3278,
  [SMALL_STATE(206)] = 3289,
  [SMALL_STATE(207)] = 3300,
  [SMALL_STATE(208)] = 3311,
  [SMALL_STATE(209)] = 3322,
  [SMALL_STATE(210)] = 3330,
  [SMALL_STATE(211)] = 3338,
  [SMALL_STATE(212)] = 3346,
  [SMALL_STATE(213)] = 3354,
  [SMALL_STATE(214)] = 3362,
  [SMALL_STATE(215)] = 3370,
  [SMALL_STATE(216)] = 3378,
  [SMALL_STATE(217)] = 3386,
  [SMALL_STATE(218)] = 3394,
  [SMALL_STATE(219)] = 3402,
  [SMALL_STATE(220)] = 3410,
  [SMALL_STATE(221)] = 3418,
  [SMALL_STATE(222)] = 3426,
  [SMALL_STATE(223)] = 3434,
  [SMALL_STATE(224)] = 3442,
  [SMALL_STATE(225)] = 3450,
  [SMALL_STATE(226)] = 3458,
  [SMALL_STATE(227)] = 3466,
  [SMALL_STATE(228)] = 3474,
  [SMALL_STATE(229)] = 3482,
  [SMALL_STATE(230)] = 3490,
  [SMALL_STATE(231)] = 3498,
  [SMALL_STATE(232)] = 3506,
  [SMALL_STATE(233)] = 3514,
  [SMALL_STATE(234)] = 3522,
  [SMALL_STATE(235)] = 3530,
  [SMALL_STATE(236)] = 3538,
  [SMALL_STATE(237)] = 3546,
  [SMALL_STATE(238)] = 3554,
  [SMALL_STATE(239)] = 3562,
  [SMALL_STATE(240)] = 3570,
  [SMALL_STATE(241)] = 3578,
  [SMALL_STATE(242)] = 3586,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(174),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(173),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(172),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(171),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(150),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22), SHIFT_REPEAT(169),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 22),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(239),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(238),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(223),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(236),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(230),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 16),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 28),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(216),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(214),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(212),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(87),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(92),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(35),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(122),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(115),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 17),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 17),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 33),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 33),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 14),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 14),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 29),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 29),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 13),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 13),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 12),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 12),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 11),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 11),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 30),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 30),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 10),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 10),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 28),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 16),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 31),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 31),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 15),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 15),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 21),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 21),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 18),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 18),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 20),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 20),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 32),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 32),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 19),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 19),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(217),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(82),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 26),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 35),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 35),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 35),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 26),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(216),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 25),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 26),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 25),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 26),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 25),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 26),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 35),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(105),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 26),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat2, 2), SHIFT_REPEAT(211),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat2, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 35),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(167),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 26),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 26),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 26),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 25),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 26),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 25),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 26),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(131),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 35),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 26),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 25),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 35),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 35),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 35),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 11, .production_id = 27),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 7),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using_shell, 4, .production_id = 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 8),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6, .production_id = 9),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 4, .production_id = 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 10, .production_id = 23),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 25),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 35),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 35),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 26),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 35),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 26),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 34),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 24),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 26),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 26),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 26),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 25),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 26),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 35),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_name, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [616] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
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
