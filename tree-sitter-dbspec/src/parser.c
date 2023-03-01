#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 230
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 29

enum {
  sym_identifier = 1,
  anon_sym_Parameters = 2,
  anon_sym_COLON = 3,
  anon_sym_Let = 4,
  anon_sym_EQ = 5,
  anon_sym_Connection = 6,
  anon_sym_to = 7,
  anon_sym_with = 8,
  anon_sym_Execute = 9,
  anon_sym_result = 10,
  anon_sym_of = 11,
  anon_sym_Output = 12,
  anon_sym_description = 13,
  anon_sym_archiver = 14,
  anon_sym_archiverContact = 15,
  anon_sym_dataOwner = 16,
  anon_sym_dataOriginTimespan = 17,
  anon_sym_lobFolder = 18,
  anon_sym_Schema = 19,
  anon_sym_Type = 20,
  anon_sym_Table = 21,
  anon_sym_Column = 22,
  anon_sym_Field = 23,
  anon_sym_Key = 24,
  anon_sym_Check = 25,
  anon_sym_View = 26,
  sym_escape_sequence = 27,
  sym_short_description = 28,
  aux_sym__short_descr_token1 = 29,
  sym__newline = 30,
  sym__indent = 31,
  sym__dedent = 32,
  sym__inter_start = 33,
  sym__inter_end = 34,
  sym__raw = 35,
  sym__string_start = 36,
  sym__string_content = 37,
  sym__string_end = 38,
  sym__comment = 39,
  sym__end_of_file = 40,
  sym__skip = 41,
  sym_source_file = 42,
  sym_parameters = 43,
  sym_parameter = 44,
  sym__statement = 45,
  sym_let = 46,
  sym__expression = 47,
  sym_connection = 48,
  sym_execute = 49,
  sym_query = 50,
  sym_siard_output = 51,
  sym__siard_description = 52,
  sym__siard_archiver = 53,
  sym__siard_archiverContact = 54,
  sym__siard_dataOwner = 55,
  sym__siard_dataOriginTimespan = 56,
  sym__siard_lobFolder = 57,
  sym_siard_schema = 58,
  sym_siard_type = 59,
  sym_siard_table = 60,
  sym_siard_column = 61,
  sym_siard_field = 62,
  sym_siard_key = 63,
  sym_siard_check = 64,
  sym_siard_view = 65,
  sym__basic_expression = 66,
  sym_variable_instance = 67,
  sym_string = 68,
  sym_string_content = 69,
  sym__short_descr = 70,
  sym__nl = 71,
  sym__ni = 72,
  sym__ded = 73,
  sym_interpolation = 74,
  sym_key_value_pair = 75,
  sym_raw = 76,
  sym_raw_content = 77,
  sym__value = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym_parameters_repeat1 = 80,
  aux_sym_connection_repeat1 = 81,
  aux_sym_siard_output_repeat1 = 82,
  aux_sym_siard_output_repeat2 = 83,
  aux_sym_siard_schema_repeat1 = 84,
  aux_sym_siard_table_repeat1 = 85,
  aux_sym_siard_column_repeat1 = 86,
  aux_sym_siard_view_repeat1 = 87,
  aux_sym_string_repeat1 = 88,
  aux_sym_string_content_repeat1 = 89,
  aux_sym_raw_repeat1 = 90,
  aux_sym_raw_content_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_Parameters] = "Parameters",
  [anon_sym_COLON] = ":",
  [anon_sym_Let] = "Let",
  [anon_sym_EQ] = "=",
  [anon_sym_Connection] = "Connection",
  [anon_sym_to] = "to",
  [anon_sym_with] = "with",
  [anon_sym_Execute] = "Execute",
  [anon_sym_result] = "result",
  [anon_sym_of] = "of",
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
  [sym_connection] = "connection",
  [sym_execute] = "execute",
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
  [sym_key_value_pair] = "key_value_pair",
  [sym_raw] = "raw",
  [sym_raw_content] = "raw_content",
  [sym__value] = "_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym_siard_output_repeat1] = "siard_output_repeat1",
  [aux_sym_siard_output_repeat2] = "siard_output_repeat2",
  [aux_sym_siard_schema_repeat1] = "siard_schema_repeat1",
  [aux_sym_siard_table_repeat1] = "siard_table_repeat1",
  [aux_sym_siard_column_repeat1] = "siard_column_repeat1",
  [aux_sym_siard_view_repeat1] = "siard_view_repeat1",
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
  [anon_sym_Connection] = anon_sym_Connection,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_Execute] = anon_sym_Execute,
  [anon_sym_result] = anon_sym_result,
  [anon_sym_of] = anon_sym_of,
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
  [sym_connection] = sym_connection,
  [sym_execute] = sym_execute,
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
  [sym_key_value_pair] = sym_key_value_pair,
  [sym_raw] = sym_raw,
  [sym_raw_content] = sym_raw_content,
  [sym__value] = sym__value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym_siard_output_repeat1] = aux_sym_siard_output_repeat1,
  [aux_sym_siard_output_repeat2] = aux_sym_siard_output_repeat2,
  [aux_sym_siard_schema_repeat1] = aux_sym_siard_schema_repeat1,
  [aux_sym_siard_table_repeat1] = aux_sym_siard_table_repeat1,
  [aux_sym_siard_column_repeat1] = aux_sym_siard_column_repeat1,
  [aux_sym_siard_view_repeat1] = aux_sym_siard_view_repeat1,
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
  [anon_sym_Connection] = {
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
  [anon_sym_of] = {
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
  field_dataOriginTimespan = 3,
  field_dataOwner = 4,
  field_description = 5,
  field_file = 6,
  field_key = 7,
  field_lobFolder = 8,
  field_name = 9,
  field_properties = 10,
  field_sql = 11,
  field_url = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_archiver] = "archiver",
  [field_archiverContact] = "archiverContact",
  [field_dataOriginTimespan] = "dataOriginTimespan",
  [field_dataOwner] = "dataOwner",
  [field_description] = "description",
  [field_file] = "file",
  [field_key] = "key",
  [field_lobFolder] = "lobFolder",
  [field_name] = "name",
  [field_properties] = "properties",
  [field_sql] = "sql",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 1},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 1},
  [20] = {.index = 26, .length = 1},
  [21] = {.index = 27, .length = 1},
  [22] = {.index = 28, .length = 1},
  [23] = {.index = 29, .length = 12},
  [24] = {.index = 41, .length = 2},
  [25] = {.index = 43, .length = 2},
  [26] = {.index = 45, .length = 1},
  [27] = {.index = 46, .length = 8},
  [28] = {.index = 54, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_sql, 1},
  [1] =
    {field_url, 2},
  [2] =
    {field_description, 1, .inherited = true},
    {field_name, 0},
  [4] =
    {field_name, 0},
  [5] =
    {field_name, 1},
    {field_value, 3},
  [7] =
    {field_description, 0},
    {field_description, 1},
    {field_description, 2},
  [10] =
    {field_sql, 2},
  [11] =
    {field_properties, 6},
    {field_url, 2},
  [13] =
    {field_description, 0, .inherited = true},
  [14] =
    {field_archiver, 0, .inherited = true},
  [15] =
    {field_archiverContact, 0, .inherited = true},
  [16] =
    {field_dataOwner, 0, .inherited = true},
  [17] =
    {field_dataOriginTimespan, 0, .inherited = true},
  [18] =
    {field_lobFolder, 0, .inherited = true},
  [19] =
    {field_properties, 7},
    {field_url, 2},
  [21] =
    {field_key, 0},
    {field_value, 1},
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
    {field_file, 3},
    {field_name, 1},
  [43] =
    {field_description, 2, .inherited = true},
    {field_name, 1},
  [45] =
    {field_name, 1},
  [46] =
    {field_archiver, 6, .inherited = true},
    {field_archiverContact, 6, .inherited = true},
    {field_dataOriginTimespan, 6, .inherited = true},
    {field_dataOwner, 6, .inherited = true},
    {field_description, 6, .inherited = true},
    {field_file, 3},
    {field_lobFolder, 6, .inherited = true},
    {field_name, 1},
  [54] =
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 7,
  [24] = 16,
  [25] = 25,
  [26] = 16,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 15,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 18,
  [51] = 51,
  [52] = 19,
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
  [65] = 56,
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
  [79] = 56,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 80,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 80,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 89,
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
  [130] = 130,
  [131] = 131,
  [132] = 128,
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
  [144] = 141,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 108,
  [152] = 149,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 94,
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
  [172] = 149,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 19,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 117,
  [189] = 189,
  [190] = 190,
  [191] = 7,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 108,
  [199] = 199,
  [200] = 94,
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
  [213] = 117,
  [214] = 214,
  [215] = 197,
  [216] = 202,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 206,
  [226] = 226,
  [227] = 206,
  [228] = 211,
  [229] = 211,
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
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Let);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'w') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'F') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 83:
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_Connection);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 140:
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
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 0, .external_lex_state = 4},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 4},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 4},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 5},
  [33] = {.lex_state = 0, .external_lex_state = 5},
  [34] = {.lex_state = 0, .external_lex_state = 6},
  [35] = {.lex_state = 0, .external_lex_state = 5},
  [36] = {.lex_state = 0, .external_lex_state = 5},
  [37] = {.lex_state = 0, .external_lex_state = 5},
  [38] = {.lex_state = 0, .external_lex_state = 4},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 5},
  [41] = {.lex_state = 0, .external_lex_state = 5},
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
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 7},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 8},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 7},
  [66] = {.lex_state = 0, .external_lex_state = 8},
  [67] = {.lex_state = 0, .external_lex_state = 8},
  [68] = {.lex_state = 0, .external_lex_state = 8},
  [69] = {.lex_state = 0, .external_lex_state = 8},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 8},
  [75] = {.lex_state = 0, .external_lex_state = 8},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 8},
  [79] = {.lex_state = 0, .external_lex_state = 7},
  [80] = {.lex_state = 0, .external_lex_state = 6},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 0, .external_lex_state = 6},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 6},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 6},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 4},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 8},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 6},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 5},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 5},
  [119] = {.lex_state = 0, .external_lex_state = 6},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 5},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 8},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 3},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 0, .external_lex_state = 8},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 8},
  [152] = {.lex_state = 0, .external_lex_state = 8},
  [153] = {.lex_state = 0, .external_lex_state = 3},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 0, .external_lex_state = 8},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 8},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 8},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 8},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0, .external_lex_state = 9},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 8},
  [179] = {.lex_state = 0, .external_lex_state = 9},
  [180] = {.lex_state = 0, .external_lex_state = 9},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 9},
  [183] = {.lex_state = 0, .external_lex_state = 9},
  [184] = {.lex_state = 0, .external_lex_state = 6},
  [185] = {.lex_state = 0, .external_lex_state = 9},
  [186] = {.lex_state = 0, .external_lex_state = 9},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 8},
  [189] = {.lex_state = 0, .external_lex_state = 9},
  [190] = {.lex_state = 0, .external_lex_state = 9},
  [191] = {.lex_state = 0, .external_lex_state = 8},
  [192] = {.lex_state = 0, .external_lex_state = 9},
  [193] = {.lex_state = 0, .external_lex_state = 9},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 9},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 10},
  [198] = {.lex_state = 0, .external_lex_state = 11},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 11},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 11},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 18, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 10},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 9},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 11},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 10},
  [216] = {.lex_state = 0, .external_lex_state = 11},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 10},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 10},
  [228] = {.lex_state = 0, .external_lex_state = 9},
  [229] = {.lex_state = 0, .external_lex_state = 9},
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
    [ts_external_token__dedent] = true,
    [ts_external_token__inter_start] = true,
    [ts_external_token__raw] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__end_of_file] = true,
    [ts_external_token__skip] = true,
  },
  [5] = {
    [ts_external_token__inter_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [6] = {
    [ts_external_token__string_start] = true,
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
    [anon_sym_Connection] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_Execute] = ACTIONS(1),
    [anon_sym_result] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
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
    [sym_source_file] = STATE(224),
    [sym_parameters] = STATE(175),
    [sym_connection] = STATE(28),
    [anon_sym_Parameters] = ACTIONS(5),
    [anon_sym_Connection] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [sym__skip] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(9), 1,
      anon_sym_description,
    ACTIONS(11), 1,
      anon_sym_archiver,
    ACTIONS(13), 1,
      anon_sym_archiverContact,
    ACTIONS(15), 1,
      anon_sym_dataOwner,
    ACTIONS(17), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(19), 1,
      anon_sym_lobFolder,
    ACTIONS(21), 1,
      anon_sym_Schema,
    STATE(4), 1,
      aux_sym_siard_output_repeat1,
    STATE(44), 1,
      sym__siard_lobFolder,
    STATE(45), 1,
      sym__siard_dataOriginTimespan,
    STATE(46), 1,
      sym__siard_dataOwner,
    STATE(47), 1,
      sym__siard_archiverContact,
    STATE(48), 1,
      sym__siard_archiver,
    STATE(49), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(73), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [51] = 16,
    ACTIONS(9), 1,
      anon_sym_description,
    ACTIONS(11), 1,
      anon_sym_archiver,
    ACTIONS(13), 1,
      anon_sym_archiverContact,
    ACTIONS(15), 1,
      anon_sym_dataOwner,
    ACTIONS(17), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(19), 1,
      anon_sym_lobFolder,
    ACTIONS(21), 1,
      anon_sym_Schema,
    STATE(2), 1,
      aux_sym_siard_output_repeat1,
    STATE(44), 1,
      sym__siard_lobFolder,
    STATE(45), 1,
      sym__siard_dataOriginTimespan,
    STATE(46), 1,
      sym__siard_dataOwner,
    STATE(47), 1,
      sym__siard_archiverContact,
    STATE(48), 1,
      sym__siard_archiver,
    STATE(49), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(60), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [102] = 15,
    ACTIONS(23), 1,
      anon_sym_description,
    ACTIONS(26), 1,
      anon_sym_archiver,
    ACTIONS(29), 1,
      anon_sym_archiverContact,
    ACTIONS(32), 1,
      anon_sym_dataOwner,
    ACTIONS(35), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(38), 1,
      anon_sym_lobFolder,
    ACTIONS(41), 1,
      anon_sym_Schema,
    STATE(4), 1,
      aux_sym_siard_output_repeat1,
    STATE(44), 1,
      sym__siard_lobFolder,
    STATE(45), 1,
      sym__siard_dataOriginTimespan,
    STATE(46), 1,
      sym__siard_dataOwner,
    STATE(47), 1,
      sym__siard_archiverContact,
    STATE(48), 1,
      sym__siard_archiver,
    STATE(49), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [149] = 9,
    ACTIONS(43), 1,
      anon_sym_description,
    ACTIONS(45), 1,
      anon_sym_Column,
    ACTIONS(47), 1,
      anon_sym_Key,
    ACTIONS(49), 1,
      anon_sym_Check,
    STATE(14), 1,
      sym__siard_description,
    STATE(109), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(51), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(13), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [182] = 9,
    ACTIONS(43), 1,
      anon_sym_description,
    ACTIONS(53), 1,
      anon_sym_Type,
    ACTIONS(55), 1,
      anon_sym_Table,
    ACTIONS(57), 1,
      anon_sym_View,
    STATE(9), 1,
      sym__siard_description,
    STATE(154), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(59), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(10), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [215] = 3,
    ACTIONS(63), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(61), 10,
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
  [235] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(67), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(65), 9,
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
    ACTIONS(53), 1,
      anon_sym_Type,
    ACTIONS(55), 1,
      anon_sym_Table,
    ACTIONS(57), 1,
      anon_sym_View,
    STATE(163), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(69), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(11), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [282] = 7,
    ACTIONS(53), 1,
      anon_sym_Type,
    ACTIONS(55), 1,
      anon_sym_Table,
    ACTIONS(57), 1,
      anon_sym_View,
    STATE(155), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(71), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(20), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [309] = 7,
    ACTIONS(53), 1,
      anon_sym_Type,
    ACTIONS(55), 1,
      anon_sym_Table,
    ACTIONS(57), 1,
      anon_sym_View,
    STATE(156), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(73), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(20), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [336] = 7,
    ACTIONS(45), 1,
      anon_sym_Column,
    ACTIONS(47), 1,
      anon_sym_Key,
    ACTIONS(49), 1,
      anon_sym_Check,
    STATE(105), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(75), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(21), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [363] = 7,
    ACTIONS(45), 1,
      anon_sym_Column,
    ACTIONS(47), 1,
      anon_sym_Key,
    ACTIONS(49), 1,
      anon_sym_Check,
    STATE(91), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(77), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(21), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [390] = 7,
    ACTIONS(45), 1,
      anon_sym_Column,
    ACTIONS(47), 1,
      anon_sym_Key,
    ACTIONS(49), 1,
      anon_sym_Check,
    STATE(93), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(79), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(12), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [417] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(81), 10,
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
  [434] = 7,
    ACTIONS(85), 1,
      sym__inter_start,
    ACTIONS(87), 1,
      sym__raw,
    STATE(96), 1,
      aux_sym_raw_content_repeat1,
    STATE(191), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(83), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(38), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [460] = 6,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_Let,
    ACTIONS(93), 1,
      anon_sym_Execute,
    ACTIONS(95), 1,
      anon_sym_Output,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(27), 5,
      sym__statement,
      sym_let,
      sym_execute,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [484] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(97), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [500] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(99), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [516] = 6,
    ACTIONS(101), 1,
      anon_sym_Type,
    ACTIONS(104), 1,
      anon_sym_Table,
    ACTIONS(107), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(110), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(20), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [540] = 6,
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
    STATE(21), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [564] = 6,
    ACTIONS(91), 1,
      anon_sym_Let,
    ACTIONS(93), 1,
      anon_sym_Execute,
    ACTIONS(95), 1,
      anon_sym_Output,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(27), 5,
      sym__statement,
      sym_let,
      sym_execute,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [588] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(61), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [604] = 7,
    ACTIONS(85), 1,
      sym__inter_start,
    ACTIONS(87), 1,
      sym__raw,
    STATE(23), 1,
      sym__ded,
    STATE(96), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(125), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(38), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [630] = 6,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_Let,
    ACTIONS(93), 1,
      anon_sym_Execute,
    ACTIONS(95), 1,
      anon_sym_Output,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(22), 5,
      sym__statement,
      sym_let,
      sym_execute,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [654] = 7,
    ACTIONS(85), 1,
      sym__inter_start,
    ACTIONS(87), 1,
      sym__raw,
    STATE(7), 1,
      sym__ded,
    STATE(96), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(127), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(38), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [680] = 6,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_Let,
    ACTIONS(134), 1,
      anon_sym_Execute,
    ACTIONS(137), 1,
      anon_sym_Output,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(27), 5,
      sym__statement,
      sym_let,
      sym_execute,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [704] = 6,
    ACTIONS(91), 1,
      anon_sym_Let,
    ACTIONS(93), 1,
      anon_sym_Execute,
    ACTIONS(95), 1,
      anon_sym_Output,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(17), 5,
      sym__statement,
      sym_let,
      sym_execute,
      sym_siard_output,
      aux_sym_source_file_repeat1,
  [728] = 7,
    ACTIONS(43), 1,
      anon_sym_description,
    ACTIONS(142), 1,
      anon_sym_Field,
    STATE(71), 1,
      sym__siard_description,
    STATE(113), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(144), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(72), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [753] = 7,
    ACTIONS(43), 1,
      anon_sym_description,
    ACTIONS(45), 1,
      anon_sym_Column,
    STATE(59), 1,
      sym__siard_description,
    STATE(99), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(146), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(55), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [778] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(148), 8,
      anon_sym_description,
      anon_sym_archiver,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      sym_identifier,
  [793] = 7,
    ACTIONS(150), 1,
      sym_escape_sequence,
    ACTIONS(152), 1,
      sym__inter_start,
    ACTIONS(154), 1,
      sym__string_content,
    ACTIONS(156), 1,
      sym__string_end,
    STATE(118), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(41), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [818] = 7,
    ACTIONS(150), 1,
      sym_escape_sequence,
    ACTIONS(152), 1,
      sym__inter_start,
    ACTIONS(154), 1,
      sym__string_content,
    ACTIONS(158), 1,
      sym__string_end,
    STATE(118), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(41), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [843] = 5,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_result,
    ACTIONS(164), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(129), 5,
      sym__expression,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [864] = 7,
    ACTIONS(152), 1,
      sym__inter_start,
    ACTIONS(154), 1,
      sym__string_content,
    ACTIONS(166), 1,
      sym_escape_sequence,
    ACTIONS(168), 1,
      sym__string_end,
    STATE(118), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(32), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [889] = 7,
    ACTIONS(152), 1,
      sym__inter_start,
    ACTIONS(154), 1,
      sym__string_content,
    ACTIONS(170), 1,
      sym_escape_sequence,
    ACTIONS(172), 1,
      sym__string_end,
    STATE(118), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(37), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [914] = 7,
    ACTIONS(150), 1,
      sym_escape_sequence,
    ACTIONS(152), 1,
      sym__inter_start,
    ACTIONS(154), 1,
      sym__string_content,
    ACTIONS(174), 1,
      sym__string_end,
    STATE(118), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(41), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [939] = 6,
    ACTIONS(178), 1,
      sym__inter_start,
    ACTIONS(181), 1,
      sym__raw,
    STATE(96), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(176), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(38), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [962] = 7,
    ACTIONS(43), 1,
      anon_sym_description,
    ACTIONS(142), 1,
      anon_sym_Field,
    STATE(63), 1,
      sym__siard_description,
    STATE(162), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(184), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(61), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [987] = 7,
    ACTIONS(152), 1,
      sym__inter_start,
    ACTIONS(154), 1,
      sym__string_content,
    ACTIONS(186), 1,
      sym_escape_sequence,
    ACTIONS(188), 1,
      sym__string_end,
    STATE(118), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(33), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1012] = 7,
    ACTIONS(190), 1,
      sym_escape_sequence,
    ACTIONS(193), 1,
      sym__inter_start,
    ACTIONS(196), 1,
      sym__string_content,
    ACTIONS(199), 1,
      sym__string_end,
    STATE(118), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(41), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1037] = 3,
    ACTIONS(203), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(201), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1053] = 3,
    ACTIONS(207), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(205), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1069] = 3,
    ACTIONS(211), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(209), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1085] = 3,
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
  [1101] = 3,
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
  [1117] = 3,
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
  [1133] = 3,
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
  [1149] = 3,
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
  [1165] = 3,
    ACTIONS(233), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(97), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1181] = 3,
    ACTIONS(237), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(235), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1197] = 3,
    ACTIONS(239), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(99), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1213] = 3,
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
  [1229] = 3,
    ACTIONS(247), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(245), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1245] = 5,
    ACTIONS(45), 1,
      anon_sym_Column,
    STATE(88), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(249), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(87), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1264] = 5,
    ACTIONS(85), 1,
      sym__inter_start,
    ACTIONS(87), 1,
      sym__raw,
    STATE(96), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(16), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1283] = 5,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(199), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(253), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(116), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1302] = 5,
    ACTIONS(142), 1,
      anon_sym_Field,
    STATE(114), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(255), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(100), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1321] = 5,
    ACTIONS(45), 1,
      anon_sym_Column,
    STATE(90), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(257), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(76), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1340] = 5,
    ACTIONS(21), 1,
      anon_sym_Schema,
    STATE(131), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(259), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(103), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [1359] = 5,
    ACTIONS(142), 1,
      anon_sym_Field,
    STATE(159), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(261), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(100), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1378] = 6,
    ACTIONS(263), 1,
      anon_sym_COLON,
    ACTIONS(265), 1,
      aux_sym__short_descr_token1,
    STATE(147), 1,
      sym__nl,
    STATE(164), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(267), 2,
      sym__newline,
      sym__end_of_file,
  [1399] = 5,
    ACTIONS(142), 1,
      anon_sym_Field,
    STATE(160), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(269), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(77), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1418] = 5,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(145), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(273), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(82), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [1437] = 5,
    ACTIONS(85), 1,
      sym__inter_start,
    ACTIONS(87), 1,
      sym__raw,
    STATE(96), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(26), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1456] = 6,
    ACTIONS(265), 1,
      aux_sym__short_descr_token1,
    ACTIONS(275), 1,
      anon_sym_COLON,
    STATE(84), 1,
      sym__short_descr,
    STATE(112), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(277), 2,
      sym__newline,
      sym__end_of_file,
  [1477] = 6,
    ACTIONS(265), 1,
      aux_sym__short_descr_token1,
    ACTIONS(279), 1,
      anon_sym_COLON,
    STATE(110), 1,
      sym__nl,
    STATE(111), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(281), 2,
      sym__newline,
      sym__end_of_file,
  [1498] = 6,
    ACTIONS(265), 1,
      aux_sym__short_descr_token1,
    ACTIONS(283), 1,
      anon_sym_COLON,
    STATE(166), 1,
      sym__nl,
    STATE(167), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(285), 2,
      sym__newline,
      sym__end_of_file,
  [1519] = 6,
    ACTIONS(265), 1,
      aux_sym__short_descr_token1,
    ACTIONS(287), 1,
      anon_sym_COLON,
    STATE(106), 1,
      sym__nl,
    STATE(107), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(289), 2,
      sym__newline,
      sym__end_of_file,
  [1540] = 5,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(135), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(291), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(82), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [1559] = 5,
    ACTIONS(142), 1,
      anon_sym_Field,
    STATE(86), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(293), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(58), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1578] = 5,
    ACTIONS(142), 1,
      anon_sym_Field,
    STATE(97), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(295), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(100), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1597] = 5,
    ACTIONS(21), 1,
      anon_sym_Schema,
    STATE(130), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(297), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(103), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [1616] = 6,
    ACTIONS(265), 1,
      aux_sym__short_descr_token1,
    ACTIONS(299), 1,
      anon_sym_COLON,
    STATE(124), 1,
      sym__short_descr,
    STATE(125), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(301), 2,
      sym__newline,
      sym__end_of_file,
  [1637] = 6,
    ACTIONS(265), 1,
      aux_sym__short_descr_token1,
    ACTIONS(303), 1,
      anon_sym_COLON,
    STATE(122), 1,
      sym__short_descr,
    STATE(123), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(305), 2,
      sym__newline,
      sym__end_of_file,
  [1658] = 5,
    ACTIONS(45), 1,
      anon_sym_Column,
    STATE(104), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(307), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(87), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1677] = 5,
    ACTIONS(142), 1,
      anon_sym_Field,
    STATE(158), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(309), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(100), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1696] = 6,
    ACTIONS(265), 1,
      aux_sym__short_descr_token1,
    ACTIONS(311), 1,
      anon_sym_COLON,
    STATE(120), 1,
      sym__short_descr,
    STATE(121), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(313), 2,
      sym__newline,
      sym__end_of_file,
  [1717] = 5,
    ACTIONS(85), 1,
      sym__inter_start,
    ACTIONS(87), 1,
      sym__raw,
    STATE(96), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(24), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1736] = 4,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(172), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1752] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(319), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1764] = 4,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(324), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(82), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [1780] = 4,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(149), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1796] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(326), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1808] = 4,
    ACTIONS(330), 1,
      sym__raw,
    STATE(85), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(328), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [1824] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(333), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1836] = 4,
    ACTIONS(335), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(338), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(87), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1852] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(340), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1864] = 4,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(216), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1880] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(346), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1892] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(348), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1904] = 4,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(152), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1920] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(350), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1932] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(352), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [1944] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1956] = 4,
    ACTIONS(358), 1,
      sym__raw,
    STATE(85), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [1972] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(360), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1984] = 5,
    ACTIONS(265), 1,
      aux_sym__short_descr_token1,
    STATE(153), 1,
      sym__short_descr,
    STATE(157), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(362), 2,
      sym__newline,
      sym__end_of_file,
  [2002] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(364), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2014] = 4,
    ACTIONS(366), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(369), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(100), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2030] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(371), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2042] = 4,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(202), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2058] = 4,
    ACTIONS(373), 1,
      anon_sym_Schema,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(376), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(103), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [2074] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(378), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2086] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(380), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2098] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(382), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2110] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(384), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2122] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(386), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2134] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(388), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2146] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(390), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2158] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(392), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2170] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(394), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2182] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(396), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2194] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(398), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2206] = 4,
    ACTIONS(402), 1,
      sym__string_content,
    STATE(115), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(400), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [2222] = 4,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(408), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(116), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2238] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(410), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2250] = 4,
    ACTIONS(414), 1,
      sym__string_content,
    STATE(115), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(412), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [2266] = 4,
    ACTIONS(164), 1,
      sym__string_start,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(222), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2282] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(418), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2294] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(420), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2306] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(422), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2318] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(424), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2330] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(426), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2342] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(428), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2354] = 3,
    ACTIONS(432), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(430), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2368] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(434), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2379] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(436), 4,
      sym__dedent,
      sym__inter_start,
      sym__raw,
      sym__end_of_file,
  [2390] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(438), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2401] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(440), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2412] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(442), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2423] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(436), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      sym_escape_sequence,
  [2434] = 4,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(169), 2,
      sym_raw,
      sym__value,
  [2449] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(448), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2460] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(450), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2471] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(452), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2482] = 5,
    ACTIONS(454), 1,
      anon_sym_with,
    ACTIONS(456), 1,
      sym__newline,
    ACTIONS(458), 1,
      sym__end_of_file,
    STATE(127), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2499] = 4,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(54), 2,
      sym_raw,
      sym__value,
  [2514] = 4,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(43), 2,
      sym_raw,
      sym__value,
  [2529] = 4,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(42), 2,
      sym_raw,
      sym__value,
  [2544] = 4,
    ACTIONS(464), 1,
      anon_sym_COLON,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(18), 2,
      sym_raw,
      sym__value,
  [2559] = 4,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(53), 2,
      sym_raw,
      sym__value,
  [2574] = 4,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(51), 2,
      sym_raw,
      sym__value,
  [2589] = 4,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(50), 2,
      sym_raw,
      sym__value,
  [2604] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(468), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2615] = 3,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(64), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [2627] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(470), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2637] = 3,
    STATE(95), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(472), 2,
      sym__dedent,
      sym__end_of_file,
  [2649] = 3,
    STATE(19), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(474), 2,
      sym__newline,
      sym__end_of_file,
  [2661] = 3,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(57), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2673] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(386), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [2683] = 3,
    STATE(52), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(476), 2,
      sym__newline,
      sym__end_of_file,
  [2695] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(478), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [2705] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(480), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2715] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(482), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2725] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(484), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2735] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(486), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [2745] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(488), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2755] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(490), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2765] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(492), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2775] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(352), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [2785] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(494), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2795] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(496), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2805] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(498), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2815] = 3,
    STATE(8), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(500), 2,
      sym__newline,
      sym__end_of_file,
  [2827] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(502), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2837] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(504), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2847] = 3,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(70), 2,
      sym_key_value_pair,
      aux_sym_connection_repeat1,
  [2859] = 3,
    STATE(173), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(506), 2,
      sym__newline,
      sym__end_of_file,
  [2871] = 3,
    STATE(81), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(508), 2,
      sym__dedent,
      sym__end_of_file,
  [2883] = 3,
    STATE(101), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(510), 2,
      sym__dedent,
      sym__end_of_file,
  [2895] = 3,
    STATE(178), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(512), 2,
      sym__newline,
      sym__end_of_file,
  [2907] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(514), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [2917] = 3,
    ACTIONS(516), 1,
      sym__newline,
    STATE(29), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2928] = 3,
    ACTIONS(7), 1,
      anon_sym_Connection,
    STATE(25), 1,
      sym_connection,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2939] = 3,
    ACTIONS(43), 1,
      anon_sym_description,
    STATE(170), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2950] = 3,
    ACTIONS(43), 1,
      anon_sym_description,
    STATE(171), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2961] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(99), 2,
      sym__newline,
      sym__end_of_file,
  [2970] = 3,
    ACTIONS(516), 1,
      sym__newline,
    STATE(6), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2981] = 3,
    ACTIONS(518), 1,
      sym__newline,
    STATE(3), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2992] = 3,
    ACTIONS(460), 1,
      anon_sym_COLON,
    STATE(134), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3003] = 3,
    ACTIONS(518), 1,
      sym__newline,
    STATE(168), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3014] = 3,
    ACTIONS(518), 1,
      sym__newline,
    STATE(150), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3025] = 3,
    ACTIONS(317), 1,
      sym__string_start,
    STATE(137), 1,
      sym_string,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3036] = 3,
    ACTIONS(516), 1,
      sym__newline,
    STATE(39), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3047] = 3,
    ACTIONS(518), 1,
      sym__newline,
    STATE(176), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3058] = 3,
    ACTIONS(460), 1,
      anon_sym_COLON,
    STATE(136), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3069] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(410), 2,
      sym__newline,
      sym__end_of_file,
  [3078] = 3,
    ACTIONS(518), 1,
      sym__newline,
    STATE(146), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3089] = 3,
    ACTIONS(518), 1,
      sym__newline,
    STATE(194), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3100] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(61), 2,
      sym__newline,
      sym__end_of_file,
  [3109] = 3,
    ACTIONS(518), 1,
      sym__newline,
    STATE(177), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3120] = 3,
    ACTIONS(516), 1,
      sym__newline,
    STATE(30), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3131] = 3,
    ACTIONS(43), 1,
      anon_sym_description,
    STATE(148), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3142] = 3,
    ACTIONS(516), 1,
      sym__newline,
    STATE(5), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3153] = 2,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3161] = 2,
    ACTIONS(522), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3169] = 2,
    ACTIONS(386), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3177] = 2,
    ACTIONS(524), 1,
      anon_sym_Connection,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3185] = 2,
    ACTIONS(352), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3193] = 2,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3201] = 2,
    ACTIONS(528), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3209] = 2,
    ACTIONS(530), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3217] = 2,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3225] = 2,
    ACTIONS(534), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3233] = 2,
    ACTIONS(536), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3241] = 2,
    ACTIONS(538), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3249] = 2,
    ACTIONS(540), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3257] = 2,
    ACTIONS(542), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3265] = 2,
    ACTIONS(544), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3273] = 2,
    ACTIONS(546), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3281] = 2,
    ACTIONS(548), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3289] = 2,
    ACTIONS(410), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3297] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3305] = 2,
    ACTIONS(552), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3313] = 2,
    ACTIONS(554), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3321] = 2,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3329] = 2,
    ACTIONS(558), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3337] = 2,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3345] = 2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3353] = 2,
    ACTIONS(564), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3361] = 2,
    ACTIONS(566), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3369] = 2,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3377] = 2,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3385] = 2,
    ACTIONS(572), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3393] = 2,
    ACTIONS(574), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3401] = 2,
    ACTIONS(576), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3409] = 2,
    ACTIONS(578), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3417] = 2,
    ACTIONS(580), 1,
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
  [SMALL_STATE(15)] = 417,
  [SMALL_STATE(16)] = 434,
  [SMALL_STATE(17)] = 460,
  [SMALL_STATE(18)] = 484,
  [SMALL_STATE(19)] = 500,
  [SMALL_STATE(20)] = 516,
  [SMALL_STATE(21)] = 540,
  [SMALL_STATE(22)] = 564,
  [SMALL_STATE(23)] = 588,
  [SMALL_STATE(24)] = 604,
  [SMALL_STATE(25)] = 630,
  [SMALL_STATE(26)] = 654,
  [SMALL_STATE(27)] = 680,
  [SMALL_STATE(28)] = 704,
  [SMALL_STATE(29)] = 728,
  [SMALL_STATE(30)] = 753,
  [SMALL_STATE(31)] = 778,
  [SMALL_STATE(32)] = 793,
  [SMALL_STATE(33)] = 818,
  [SMALL_STATE(34)] = 843,
  [SMALL_STATE(35)] = 864,
  [SMALL_STATE(36)] = 889,
  [SMALL_STATE(37)] = 914,
  [SMALL_STATE(38)] = 939,
  [SMALL_STATE(39)] = 962,
  [SMALL_STATE(40)] = 987,
  [SMALL_STATE(41)] = 1012,
  [SMALL_STATE(42)] = 1037,
  [SMALL_STATE(43)] = 1053,
  [SMALL_STATE(44)] = 1069,
  [SMALL_STATE(45)] = 1085,
  [SMALL_STATE(46)] = 1101,
  [SMALL_STATE(47)] = 1117,
  [SMALL_STATE(48)] = 1133,
  [SMALL_STATE(49)] = 1149,
  [SMALL_STATE(50)] = 1165,
  [SMALL_STATE(51)] = 1181,
  [SMALL_STATE(52)] = 1197,
  [SMALL_STATE(53)] = 1213,
  [SMALL_STATE(54)] = 1229,
  [SMALL_STATE(55)] = 1245,
  [SMALL_STATE(56)] = 1264,
  [SMALL_STATE(57)] = 1283,
  [SMALL_STATE(58)] = 1302,
  [SMALL_STATE(59)] = 1321,
  [SMALL_STATE(60)] = 1340,
  [SMALL_STATE(61)] = 1359,
  [SMALL_STATE(62)] = 1378,
  [SMALL_STATE(63)] = 1399,
  [SMALL_STATE(64)] = 1418,
  [SMALL_STATE(65)] = 1437,
  [SMALL_STATE(66)] = 1456,
  [SMALL_STATE(67)] = 1477,
  [SMALL_STATE(68)] = 1498,
  [SMALL_STATE(69)] = 1519,
  [SMALL_STATE(70)] = 1540,
  [SMALL_STATE(71)] = 1559,
  [SMALL_STATE(72)] = 1578,
  [SMALL_STATE(73)] = 1597,
  [SMALL_STATE(74)] = 1616,
  [SMALL_STATE(75)] = 1637,
  [SMALL_STATE(76)] = 1658,
  [SMALL_STATE(77)] = 1677,
  [SMALL_STATE(78)] = 1696,
  [SMALL_STATE(79)] = 1717,
  [SMALL_STATE(80)] = 1736,
  [SMALL_STATE(81)] = 1752,
  [SMALL_STATE(82)] = 1764,
  [SMALL_STATE(83)] = 1780,
  [SMALL_STATE(84)] = 1796,
  [SMALL_STATE(85)] = 1808,
  [SMALL_STATE(86)] = 1824,
  [SMALL_STATE(87)] = 1836,
  [SMALL_STATE(88)] = 1852,
  [SMALL_STATE(89)] = 1864,
  [SMALL_STATE(90)] = 1880,
  [SMALL_STATE(91)] = 1892,
  [SMALL_STATE(92)] = 1904,
  [SMALL_STATE(93)] = 1920,
  [SMALL_STATE(94)] = 1932,
  [SMALL_STATE(95)] = 1944,
  [SMALL_STATE(96)] = 1956,
  [SMALL_STATE(97)] = 1972,
  [SMALL_STATE(98)] = 1984,
  [SMALL_STATE(99)] = 2002,
  [SMALL_STATE(100)] = 2014,
  [SMALL_STATE(101)] = 2030,
  [SMALL_STATE(102)] = 2042,
  [SMALL_STATE(103)] = 2058,
  [SMALL_STATE(104)] = 2074,
  [SMALL_STATE(105)] = 2086,
  [SMALL_STATE(106)] = 2098,
  [SMALL_STATE(107)] = 2110,
  [SMALL_STATE(108)] = 2122,
  [SMALL_STATE(109)] = 2134,
  [SMALL_STATE(110)] = 2146,
  [SMALL_STATE(111)] = 2158,
  [SMALL_STATE(112)] = 2170,
  [SMALL_STATE(113)] = 2182,
  [SMALL_STATE(114)] = 2194,
  [SMALL_STATE(115)] = 2206,
  [SMALL_STATE(116)] = 2222,
  [SMALL_STATE(117)] = 2238,
  [SMALL_STATE(118)] = 2250,
  [SMALL_STATE(119)] = 2266,
  [SMALL_STATE(120)] = 2282,
  [SMALL_STATE(121)] = 2294,
  [SMALL_STATE(122)] = 2306,
  [SMALL_STATE(123)] = 2318,
  [SMALL_STATE(124)] = 2330,
  [SMALL_STATE(125)] = 2342,
  [SMALL_STATE(126)] = 2354,
  [SMALL_STATE(127)] = 2368,
  [SMALL_STATE(128)] = 2379,
  [SMALL_STATE(129)] = 2390,
  [SMALL_STATE(130)] = 2401,
  [SMALL_STATE(131)] = 2412,
  [SMALL_STATE(132)] = 2423,
  [SMALL_STATE(133)] = 2434,
  [SMALL_STATE(134)] = 2449,
  [SMALL_STATE(135)] = 2460,
  [SMALL_STATE(136)] = 2471,
  [SMALL_STATE(137)] = 2482,
  [SMALL_STATE(138)] = 2499,
  [SMALL_STATE(139)] = 2514,
  [SMALL_STATE(140)] = 2529,
  [SMALL_STATE(141)] = 2544,
  [SMALL_STATE(142)] = 2559,
  [SMALL_STATE(143)] = 2574,
  [SMALL_STATE(144)] = 2589,
  [SMALL_STATE(145)] = 2604,
  [SMALL_STATE(146)] = 2615,
  [SMALL_STATE(147)] = 2627,
  [SMALL_STATE(148)] = 2637,
  [SMALL_STATE(149)] = 2649,
  [SMALL_STATE(150)] = 2661,
  [SMALL_STATE(151)] = 2673,
  [SMALL_STATE(152)] = 2683,
  [SMALL_STATE(153)] = 2695,
  [SMALL_STATE(154)] = 2705,
  [SMALL_STATE(155)] = 2715,
  [SMALL_STATE(156)] = 2725,
  [SMALL_STATE(157)] = 2735,
  [SMALL_STATE(158)] = 2745,
  [SMALL_STATE(159)] = 2755,
  [SMALL_STATE(160)] = 2765,
  [SMALL_STATE(161)] = 2775,
  [SMALL_STATE(162)] = 2785,
  [SMALL_STATE(163)] = 2795,
  [SMALL_STATE(164)] = 2805,
  [SMALL_STATE(165)] = 2815,
  [SMALL_STATE(166)] = 2827,
  [SMALL_STATE(167)] = 2837,
  [SMALL_STATE(168)] = 2847,
  [SMALL_STATE(169)] = 2859,
  [SMALL_STATE(170)] = 2871,
  [SMALL_STATE(171)] = 2883,
  [SMALL_STATE(172)] = 2895,
  [SMALL_STATE(173)] = 2907,
  [SMALL_STATE(174)] = 2917,
  [SMALL_STATE(175)] = 2928,
  [SMALL_STATE(176)] = 2939,
  [SMALL_STATE(177)] = 2950,
  [SMALL_STATE(178)] = 2961,
  [SMALL_STATE(179)] = 2970,
  [SMALL_STATE(180)] = 2981,
  [SMALL_STATE(181)] = 2992,
  [SMALL_STATE(182)] = 3003,
  [SMALL_STATE(183)] = 3014,
  [SMALL_STATE(184)] = 3025,
  [SMALL_STATE(185)] = 3036,
  [SMALL_STATE(186)] = 3047,
  [SMALL_STATE(187)] = 3058,
  [SMALL_STATE(188)] = 3069,
  [SMALL_STATE(189)] = 3078,
  [SMALL_STATE(190)] = 3089,
  [SMALL_STATE(191)] = 3100,
  [SMALL_STATE(192)] = 3109,
  [SMALL_STATE(193)] = 3120,
  [SMALL_STATE(194)] = 3131,
  [SMALL_STATE(195)] = 3142,
  [SMALL_STATE(196)] = 3153,
  [SMALL_STATE(197)] = 3161,
  [SMALL_STATE(198)] = 3169,
  [SMALL_STATE(199)] = 3177,
  [SMALL_STATE(200)] = 3185,
  [SMALL_STATE(201)] = 3193,
  [SMALL_STATE(202)] = 3201,
  [SMALL_STATE(203)] = 3209,
  [SMALL_STATE(204)] = 3217,
  [SMALL_STATE(205)] = 3225,
  [SMALL_STATE(206)] = 3233,
  [SMALL_STATE(207)] = 3241,
  [SMALL_STATE(208)] = 3249,
  [SMALL_STATE(209)] = 3257,
  [SMALL_STATE(210)] = 3265,
  [SMALL_STATE(211)] = 3273,
  [SMALL_STATE(212)] = 3281,
  [SMALL_STATE(213)] = 3289,
  [SMALL_STATE(214)] = 3297,
  [SMALL_STATE(215)] = 3305,
  [SMALL_STATE(216)] = 3313,
  [SMALL_STATE(217)] = 3321,
  [SMALL_STATE(218)] = 3329,
  [SMALL_STATE(219)] = 3337,
  [SMALL_STATE(220)] = 3345,
  [SMALL_STATE(221)] = 3353,
  [SMALL_STATE(222)] = 3361,
  [SMALL_STATE(223)] = 3369,
  [SMALL_STATE(224)] = 3377,
  [SMALL_STATE(225)] = 3385,
  [SMALL_STATE(226)] = 3393,
  [SMALL_STATE(227)] = 3401,
  [SMALL_STATE(228)] = 3409,
  [SMALL_STATE(229)] = 3417,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(144),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(143),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(142),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(140),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(139),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(138),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 17),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(223),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(196),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(204),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(220),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(214),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(209),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(89),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(96),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(41),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(102),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(118),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 20),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 20),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 21),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 21),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 14),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 14),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 13),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 13),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 12),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 12),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 11),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 11),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 10),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 10),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 9),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 9),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 17),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 18),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 18),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 19),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 19),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 22),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 22),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 28),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(133),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 25),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(85),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 28),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(220),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 26),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 28),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 26),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 28),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 28),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 26),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 26),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(221),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 28),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat2, 2), SHIFT_REPEAT(201),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat2, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 28),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 28),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 26),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 25),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 26),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 26),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 25),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 26),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 26),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 28),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(115),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(98),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 25),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 26),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 25),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 26),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 25),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 26),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 5),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 9, .production_id = 27),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 8, .production_id = 24),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3, .production_id = 7),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 9, .production_id = 15),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute, 2, .production_id = 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 8, .production_id = 8),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 26),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 26),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 26),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 28),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 28),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 26),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 28),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 26),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 28),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 25),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 26),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 25),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 3, .production_id = 16),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [570] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
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
