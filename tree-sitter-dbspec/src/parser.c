#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 248
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  anon_sym_Connection = 11,
  anon_sym_to = 12,
  anon_sym_with = 13,
  anon_sym_SQL = 14,
  anon_sym_result = 15,
  anon_sym_of = 16,
  anon_sym_Output = 17,
  anon_sym_description = 18,
  anon_sym_archiver = 19,
  anon_sym_archiverContact = 20,
  anon_sym_dataOwner = 21,
  anon_sym_dataOriginTimespan = 22,
  anon_sym_lobFolder = 23,
  anon_sym_Schema = 24,
  anon_sym_Type = 25,
  anon_sym_Table = 26,
  anon_sym_Column = 27,
  anon_sym_Field = 28,
  anon_sym_Key = 29,
  anon_sym_Check = 30,
  anon_sym_View = 31,
  sym_escape_sequence = 32,
  sym_short_description = 33,
  aux_sym__short_descr_token1 = 34,
  sym__newline = 35,
  sym__indent = 36,
  sym__dedent = 37,
  sym__inter_start = 38,
  sym__inter_end = 39,
  sym__raw = 40,
  sym__string_start = 41,
  sym__string_content = 42,
  sym__string_end = 43,
  sym__comment = 44,
  sym__end_of_file = 45,
  sym__skip = 46,
  sym_source_file = 47,
  sym_parameters = 48,
  sym_parameter = 49,
  sym__statement = 50,
  sym_let = 51,
  sym__expression = 52,
  sym_execute_using_shell = 53,
  sym_shell_name = 54,
  sym_connection = 55,
  sym_execute_sql = 56,
  sym_query = 57,
  sym_siard_output = 58,
  sym__siard_description = 59,
  sym__siard_archiver = 60,
  sym__siard_archiverContact = 61,
  sym__siard_dataOwner = 62,
  sym__siard_dataOriginTimespan = 63,
  sym__siard_lobFolder = 64,
  sym_siard_schema = 65,
  sym_siard_type = 66,
  sym_siard_table = 67,
  sym_siard_column = 68,
  sym_siard_field = 69,
  sym_siard_key = 70,
  sym_siard_check = 71,
  sym_siard_view = 72,
  sym__basic_expression = 73,
  sym_variable_instance = 74,
  sym_string = 75,
  sym_string_content = 76,
  sym__short_descr = 77,
  sym__nl = 78,
  sym__ni = 79,
  sym__ded = 80,
  sym_interpolation = 81,
  sym_key_value_pairs = 82,
  sym_key_value_pair = 83,
  sym_raw = 84,
  sym_raw_content = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_source_file_repeat2 = 87,
  aux_sym_parameters_repeat1 = 88,
  aux_sym_siard_output_repeat1 = 89,
  aux_sym_siard_output_repeat2 = 90,
  aux_sym_siard_schema_repeat1 = 91,
  aux_sym_siard_table_repeat1 = 92,
  aux_sym_siard_column_repeat1 = 93,
  aux_sym_siard_view_repeat1 = 94,
  aux_sym_string_repeat1 = 95,
  aux_sym_string_content_repeat1 = 96,
  aux_sym_key_value_pairs_repeat1 = 97,
  aux_sym_raw_repeat1 = 98,
  aux_sym_raw_content_repeat1 = 99,
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
  [anon_sym_Connection] = "Connection",
  [anon_sym_to] = "to",
  [anon_sym_with] = "with",
  [anon_sym_SQL] = "SQL",
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
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
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
  [anon_sym_Connection] = anon_sym_Connection,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_SQL] = anon_sym_SQL,
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
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
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
  [anon_sym_SQL] = {
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
  [aux_sym_source_file_repeat2] = {
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
  field_dataOriginTimespan = 3,
  field_dataOwner = 4,
  field_description = 5,
  field_file = 6,
  field_key = 7,
  field_lobFolder = 8,
  field_name = 9,
  field_properties = 10,
  field_script = 11,
  field_shell_name = 12,
  field_sql = 13,
  field_url = 14,
  field_value = 15,
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
  [field_script] = "script",
  [field_shell_name] = "shell_name",
  [field_sql] = "sql",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 2},
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
  [22] = {.index = 29, .length = 1},
  [23] = {.index = 30, .length = 12},
  [24] = {.index = 42, .length = 2},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 2},
  [27] = {.index = 48, .length = 1},
  [28] = {.index = 49, .length = 8},
  [29] = {.index = 57, .length = 1},
  [30] = {.index = 58, .length = 1},
  [31] = {.index = 59, .length = 1},
  [32] = {.index = 60, .length = 1},
  [33] = {.index = 61, .length = 1},
  [34] = {.index = 62, .length = 1},
  [35] = {.index = 63, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_script, 3},
    {field_shell_name, 2},
  [2] =
    {field_url, 2},
  [3] =
    {field_sql, 2},
  [4] =
    {field_description, 1, .inherited = true},
    {field_name, 0},
  [6] =
    {field_name, 0},
  [7] =
    {field_properties, 4},
    {field_url, 2},
  [9] =
    {field_name, 1},
    {field_value, 3},
  [11] =
    {field_properties, 5},
    {field_url, 2},
  [13] =
    {field_description, 0},
    {field_description, 1},
    {field_description, 2},
  [16] =
    {field_key, 0},
    {field_value, 1},
  [18] =
    {field_description, 0, .inherited = true},
  [19] =
    {field_archiver, 0, .inherited = true},
  [20] =
    {field_archiverContact, 0, .inherited = true},
  [21] =
    {field_dataOwner, 0, .inherited = true},
  [22] =
    {field_dataOriginTimespan, 0, .inherited = true},
  [23] =
    {field_lobFolder, 0, .inherited = true},
  [24] =
    {field_description, 1},
  [25] =
    {field_archiver, 1},
  [26] =
    {field_archiverContact, 1},
  [27] =
    {field_dataOwner, 1},
  [28] =
    {field_dataOriginTimespan, 1},
  [29] =
    {field_lobFolder, 1},
  [30] =
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
  [42] =
    {field_file, 3},
    {field_name, 1},
  [44] =
    {field_key, 0},
    {field_value, 2},
  [46] =
    {field_description, 2, .inherited = true},
    {field_name, 1},
  [48] =
    {field_name, 1},
  [49] =
    {field_archiver, 6, .inherited = true},
    {field_archiverContact, 6, .inherited = true},
    {field_dataOriginTimespan, 6, .inherited = true},
    {field_dataOwner, 6, .inherited = true},
    {field_description, 6, .inherited = true},
    {field_file, 3},
    {field_lobFolder, 6, .inherited = true},
    {field_name, 1},
  [57] =
    {field_description, 2},
  [58] =
    {field_archiver, 2},
  [59] =
    {field_archiverContact, 2},
  [60] =
    {field_dataOwner, 2},
  [61] =
    {field_dataOriginTimespan, 2},
  [62] =
    {field_lobFolder, 2},
  [63] =
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
  [21] = 5,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 14,
  [33] = 33,
  [34] = 30,
  [35] = 35,
  [36] = 33,
  [37] = 37,
  [38] = 33,
  [39] = 30,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 25,
  [47] = 47,
  [48] = 27,
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
  [68] = 66,
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
  [108] = 102,
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
  [122] = 118,
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
  [146] = 145,
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
  [164] = 130,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 131,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 163,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 133,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 159,
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
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 130,
  [224] = 224,
  [225] = 131,
  [226] = 133,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 235,
  [237] = 237,
  [238] = 238,
  [239] = 218,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 228,
  [247] = 224,
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
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'Q') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_sh);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Let);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SQL);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'w') ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_bash);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 98:
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(133);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Connection);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 156:
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
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 4},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 4},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 0, .external_lex_state = 5},
  [31] = {.lex_state = 0, .external_lex_state = 6},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 5},
  [34] = {.lex_state = 0, .external_lex_state = 5},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 5},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 5},
  [39] = {.lex_state = 0, .external_lex_state = 5},
  [40] = {.lex_state = 0, .external_lex_state = 5},
  [41] = {.lex_state = 0, .external_lex_state = 4},
  [42] = {.lex_state = 0, .external_lex_state = 3},
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
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 7},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 7},
  [69] = {.lex_state = 0, .external_lex_state = 8},
  [70] = {.lex_state = 0, .external_lex_state = 8},
  [71] = {.lex_state = 0, .external_lex_state = 8},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 8},
  [75] = {.lex_state = 0, .external_lex_state = 8},
  [76] = {.lex_state = 0, .external_lex_state = 8},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 8},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 8},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 6},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 6},
  [103] = {.lex_state = 0, .external_lex_state = 6},
  [104] = {.lex_state = 0, .external_lex_state = 6},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 6},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 6},
  [109] = {.lex_state = 0, .external_lex_state = 6},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 6},
  [112] = {.lex_state = 0, .external_lex_state = 5},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 0, .external_lex_state = 5},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 6},
  [119] = {.lex_state = 0, .external_lex_state = 6},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 0, .external_lex_state = 6},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 8},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 0, .external_lex_state = 3},
  [138] = {.lex_state = 0, .external_lex_state = 6},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 8},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 8},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 8},
  [164] = {.lex_state = 0, .external_lex_state = 8},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 0, .external_lex_state = 8},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 0, .external_lex_state = 8},
  [176] = {.lex_state = 0, .external_lex_state = 8},
  [177] = {.lex_state = 0, .external_lex_state = 8},
  [178] = {.lex_state = 0, .external_lex_state = 8},
  [179] = {.lex_state = 0, .external_lex_state = 8},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 0, .external_lex_state = 8},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 8},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 3},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 8},
  [195] = {.lex_state = 0, .external_lex_state = 2},
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
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 9},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 9},
  [212] = {.lex_state = 0, .external_lex_state = 9},
  [213] = {.lex_state = 0, .external_lex_state = 9},
  [214] = {.lex_state = 0, .external_lex_state = 9},
  [215] = {.lex_state = 0, .external_lex_state = 9},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 10},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 10},
  [224] = {.lex_state = 0, .external_lex_state = 9},
  [225] = {.lex_state = 0, .external_lex_state = 10},
  [226] = {.lex_state = 0, .external_lex_state = 10},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 11},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 18, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 11},
  [236] = {.lex_state = 0, .external_lex_state = 11},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 10},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 11},
  [247] = {.lex_state = 0, .external_lex_state = 9},
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
    [anon_sym_Execute] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_sh] = ACTIONS(1),
    [anon_sym_bash] = ACTIONS(1),
    [anon_sym_Connection] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_SQL] = ACTIONS(1),
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
    [sym_source_file] = STATE(243),
    [sym_parameters] = STATE(123),
    [sym_execute_using_shell] = STATE(125),
    [sym_connection] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(125),
    [anon_sym_Parameters] = ACTIONS(5),
    [anon_sym_Execute] = ACTIONS(7),
    [anon_sym_Connection] = ACTIONS(9),
    [sym__comment] = ACTIONS(3),
    [sym__skip] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(11), 1,
      anon_sym_description,
    ACTIONS(13), 1,
      anon_sym_archiver,
    ACTIONS(15), 1,
      anon_sym_archiverContact,
    ACTIONS(17), 1,
      anon_sym_dataOwner,
    ACTIONS(19), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(21), 1,
      anon_sym_lobFolder,
    ACTIONS(23), 1,
      anon_sym_Schema,
    STATE(4), 1,
      aux_sym_siard_output_repeat1,
    STATE(49), 1,
      sym__siard_lobFolder,
    STATE(50), 1,
      sym__siard_dataOriginTimespan,
    STATE(51), 1,
      sym__siard_dataOwner,
    STATE(52), 1,
      sym__siard_archiverContact,
    STATE(53), 1,
      sym__siard_archiver,
    STATE(54), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(77), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [51] = 16,
    ACTIONS(11), 1,
      anon_sym_description,
    ACTIONS(13), 1,
      anon_sym_archiver,
    ACTIONS(15), 1,
      anon_sym_archiverContact,
    ACTIONS(17), 1,
      anon_sym_dataOwner,
    ACTIONS(19), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(21), 1,
      anon_sym_lobFolder,
    ACTIONS(23), 1,
      anon_sym_Schema,
    STATE(2), 1,
      aux_sym_siard_output_repeat1,
    STATE(49), 1,
      sym__siard_lobFolder,
    STATE(50), 1,
      sym__siard_dataOriginTimespan,
    STATE(51), 1,
      sym__siard_dataOwner,
    STATE(52), 1,
      sym__siard_archiverContact,
    STATE(53), 1,
      sym__siard_archiver,
    STATE(54), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(81), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [102] = 15,
    ACTIONS(25), 1,
      anon_sym_description,
    ACTIONS(28), 1,
      anon_sym_archiver,
    ACTIONS(31), 1,
      anon_sym_archiverContact,
    ACTIONS(34), 1,
      anon_sym_dataOwner,
    ACTIONS(37), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(40), 1,
      anon_sym_lobFolder,
    ACTIONS(43), 1,
      anon_sym_Schema,
    STATE(4), 1,
      aux_sym_siard_output_repeat1,
    STATE(49), 1,
      sym__siard_lobFolder,
    STATE(50), 1,
      sym__siard_dataOriginTimespan,
    STATE(51), 1,
      sym__siard_dataOwner,
    STATE(52), 1,
      sym__siard_archiverContact,
    STATE(53), 1,
      sym__siard_archiver,
    STATE(54), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [149] = 3,
    ACTIONS(47), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(45), 11,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Connection,
      anon_sym_Output,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [170] = 9,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(51), 1,
      anon_sym_Type,
    ACTIONS(53), 1,
      anon_sym_Table,
    ACTIONS(55), 1,
      anon_sym_View,
    STATE(13), 1,
      sym__siard_description,
    STATE(168), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(57), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(11), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [203] = 9,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(59), 1,
      anon_sym_Column,
    ACTIONS(61), 1,
      anon_sym_Key,
    ACTIONS(63), 1,
      anon_sym_Check,
    STATE(22), 1,
      sym__siard_description,
    STATE(116), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(65), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(15), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [236] = 3,
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
  [256] = 6,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_Let,
    ACTIONS(75), 1,
      anon_sym_Execute,
    ACTIONS(77), 1,
      anon_sym_Output,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(23), 6,
      sym__statement,
      sym_let,
      sym_execute_using_shell,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat2,
  [281] = 7,
    ACTIONS(51), 1,
      anon_sym_Type,
    ACTIONS(53), 1,
      anon_sym_Table,
    ACTIONS(55), 1,
      anon_sym_View,
    STATE(158), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(79), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(29), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [308] = 7,
    ACTIONS(51), 1,
      anon_sym_Type,
    ACTIONS(53), 1,
      anon_sym_Table,
    ACTIONS(55), 1,
      anon_sym_View,
    STATE(161), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(81), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(29), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [335] = 6,
    ACTIONS(73), 1,
      anon_sym_Let,
    ACTIONS(75), 1,
      anon_sym_Execute,
    ACTIONS(77), 1,
      anon_sym_Output,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(18), 6,
      sym__statement,
      sym_let,
      sym_execute_using_shell,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat2,
  [360] = 7,
    ACTIONS(51), 1,
      anon_sym_Type,
    ACTIONS(53), 1,
      anon_sym_Table,
    ACTIONS(55), 1,
      anon_sym_View,
    STATE(157), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(85), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(10), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [387] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(87), 10,
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
  [404] = 7,
    ACTIONS(59), 1,
      anon_sym_Column,
    ACTIONS(61), 1,
      anon_sym_Key,
    ACTIONS(63), 1,
      anon_sym_Check,
    STATE(85), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(89), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(26), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [431] = 6,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_Let,
    ACTIONS(96), 1,
      anon_sym_Execute,
    ACTIONS(99), 1,
      anon_sym_Output,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(16), 6,
      sym__statement,
      sym_let,
      sym_execute_using_shell,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat2,
  [456] = 6,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_Let,
    ACTIONS(75), 1,
      anon_sym_Execute,
    ACTIONS(77), 1,
      anon_sym_Output,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(16), 6,
      sym__statement,
      sym_let,
      sym_execute_using_shell,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat2,
  [481] = 6,
    ACTIONS(73), 1,
      anon_sym_Let,
    ACTIONS(75), 1,
      anon_sym_Execute,
    ACTIONS(77), 1,
      anon_sym_Output,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(16), 6,
      sym__statement,
      sym_let,
      sym_execute_using_shell,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat2,
  [506] = 6,
    ACTIONS(73), 1,
      anon_sym_Let,
    ACTIONS(75), 1,
      anon_sym_Execute,
    ACTIONS(77), 1,
      anon_sym_Output,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(17), 6,
      sym__statement,
      sym_let,
      sym_execute_using_shell,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat2,
  [531] = 7,
    ACTIONS(59), 1,
      anon_sym_Column,
    ACTIONS(61), 1,
      anon_sym_Key,
    ACTIONS(63), 1,
      anon_sym_Check,
    STATE(135), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(106), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(26), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [558] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(45), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(47), 8,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
      sym_identifier,
  [577] = 7,
    ACTIONS(59), 1,
      anon_sym_Column,
    ACTIONS(61), 1,
      anon_sym_Key,
    ACTIONS(63), 1,
      anon_sym_Check,
    STATE(121), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(108), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(20), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [604] = 6,
    ACTIONS(73), 1,
      anon_sym_Let,
    ACTIONS(75), 1,
      anon_sym_Execute,
    ACTIONS(77), 1,
      anon_sym_Output,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(16), 6,
      sym__statement,
      sym_let,
      sym_execute_using_shell,
      sym_execute_sql,
      sym_siard_output,
      aux_sym_source_file_repeat2,
  [629] = 7,
    ACTIONS(112), 1,
      sym__inter_start,
    ACTIONS(114), 1,
      sym__raw,
    STATE(5), 1,
      sym__ded,
    STATE(126), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(110), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(41), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [655] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(116), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [671] = 6,
    ACTIONS(118), 1,
      anon_sym_Column,
    ACTIONS(121), 1,
      anon_sym_Key,
    ACTIONS(124), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(127), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(26), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [695] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(129), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [711] = 7,
    ACTIONS(112), 1,
      sym__inter_start,
    ACTIONS(114), 1,
      sym__raw,
    STATE(21), 1,
      sym__ded,
    STATE(126), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(131), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(41), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [737] = 6,
    ACTIONS(133), 1,
      anon_sym_Type,
    ACTIONS(136), 1,
      anon_sym_Table,
    ACTIONS(139), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(142), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(29), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [761] = 7,
    ACTIONS(144), 1,
      sym_escape_sequence,
    ACTIONS(146), 1,
      sym__inter_start,
    ACTIONS(148), 1,
      sym__string_content,
    ACTIONS(150), 1,
      sym__string_end,
    STATE(112), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(40), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [786] = 5,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_result,
    ACTIONS(156), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(153), 5,
      sym__expression,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [807] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(158), 8,
      anon_sym_description,
      anon_sym_archiver,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      sym_identifier,
  [822] = 7,
    ACTIONS(146), 1,
      sym__inter_start,
    ACTIONS(148), 1,
      sym__string_content,
    ACTIONS(160), 1,
      sym_escape_sequence,
    ACTIONS(162), 1,
      sym__string_end,
    STATE(112), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(34), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [847] = 7,
    ACTIONS(144), 1,
      sym_escape_sequence,
    ACTIONS(146), 1,
      sym__inter_start,
    ACTIONS(148), 1,
      sym__string_content,
    ACTIONS(164), 1,
      sym__string_end,
    STATE(112), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(40), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [872] = 7,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(166), 1,
      anon_sym_Field,
    STATE(67), 1,
      sym__siard_description,
    STATE(107), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(168), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(64), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [897] = 7,
    ACTIONS(146), 1,
      sym__inter_start,
    ACTIONS(148), 1,
      sym__string_content,
    ACTIONS(170), 1,
      sym_escape_sequence,
    ACTIONS(172), 1,
      sym__string_end,
    STATE(112), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(39), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [922] = 7,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(59), 1,
      anon_sym_Column,
    STATE(65), 1,
      sym__siard_description,
    STATE(105), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(174), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(63), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [947] = 7,
    ACTIONS(146), 1,
      sym__inter_start,
    ACTIONS(148), 1,
      sym__string_content,
    ACTIONS(176), 1,
      sym_escape_sequence,
    ACTIONS(178), 1,
      sym__string_end,
    STATE(112), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(30), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [972] = 7,
    ACTIONS(144), 1,
      sym_escape_sequence,
    ACTIONS(146), 1,
      sym__inter_start,
    ACTIONS(148), 1,
      sym__string_content,
    ACTIONS(180), 1,
      sym__string_end,
    STATE(112), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(40), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [997] = 7,
    ACTIONS(182), 1,
      sym_escape_sequence,
    ACTIONS(185), 1,
      sym__inter_start,
    ACTIONS(188), 1,
      sym__string_content,
    ACTIONS(191), 1,
      sym__string_end,
    STATE(112), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(40), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1022] = 6,
    ACTIONS(195), 1,
      sym__inter_start,
    ACTIONS(198), 1,
      sym__raw,
    STATE(126), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(193), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(41), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1045] = 7,
    ACTIONS(49), 1,
      anon_sym_description,
    ACTIONS(166), 1,
      anon_sym_Field,
    STATE(80), 1,
      sym__siard_description,
    STATE(172), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(201), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(78), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1070] = 3,
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
  [1086] = 3,
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
  [1102] = 3,
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
  [1118] = 3,
    ACTIONS(215), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(116), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1134] = 3,
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
  [1150] = 3,
    ACTIONS(221), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(129), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1166] = 3,
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
  [1182] = 3,
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
  [1198] = 3,
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
  [1214] = 3,
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
  [1230] = 3,
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
  [1246] = 3,
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
  [1262] = 3,
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
  [1278] = 3,
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
  [1294] = 3,
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
  [1310] = 3,
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
  [1326] = 3,
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
  [1342] = 3,
    ACTIONS(269), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(267), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1358] = 5,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(154), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(273), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(88), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [1377] = 5,
    ACTIONS(166), 1,
      anon_sym_Field,
    STATE(100), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(275), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(96), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1396] = 5,
    ACTIONS(59), 1,
      anon_sym_Column,
    STATE(94), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(277), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(93), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1415] = 5,
    ACTIONS(166), 1,
      anon_sym_Field,
    STATE(95), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(279), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(96), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1434] = 5,
    ACTIONS(59), 1,
      anon_sym_Column,
    STATE(101), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(281), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(83), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1453] = 5,
    ACTIONS(112), 1,
      sym__inter_start,
    ACTIONS(114), 1,
      sym__raw,
    STATE(126), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(28), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1472] = 5,
    ACTIONS(166), 1,
      anon_sym_Field,
    STATE(115), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(283), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(62), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1491] = 5,
    ACTIONS(112), 1,
      sym__inter_start,
    ACTIONS(114), 1,
      sym__raw,
    STATE(126), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(24), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1510] = 6,
    ACTIONS(285), 1,
      anon_sym_COLON,
    ACTIONS(287), 1,
      aux_sym__short_descr_token1,
    STATE(128), 1,
      sym__nl,
    STATE(129), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(289), 2,
      sym__newline,
      sym__end_of_file,
  [1531] = 6,
    ACTIONS(287), 1,
      aux_sym__short_descr_token1,
    ACTIONS(291), 1,
      anon_sym_COLON,
    STATE(132), 1,
      sym__nl,
    STATE(137), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(293), 2,
      sym__newline,
      sym__end_of_file,
  [1552] = 6,
    ACTIONS(287), 1,
      aux_sym__short_descr_token1,
    ACTIONS(295), 1,
      anon_sym_COLON,
    STATE(139), 1,
      sym__nl,
    STATE(140), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(297), 2,
      sym__newline,
      sym__end_of_file,
  [1573] = 5,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(210), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(301), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(97), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1592] = 5,
    ACTIONS(166), 1,
      anon_sym_Field,
    STATE(165), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(303), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(96), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1611] = 6,
    ACTIONS(287), 1,
      aux_sym__short_descr_token1,
    ACTIONS(305), 1,
      anon_sym_COLON,
    STATE(89), 1,
      sym__nl,
    STATE(90), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(307), 2,
      sym__newline,
      sym__end_of_file,
  [1632] = 6,
    ACTIONS(287), 1,
      aux_sym__short_descr_token1,
    ACTIONS(309), 1,
      anon_sym_COLON,
    STATE(91), 1,
      sym__nl,
    STATE(92), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(311), 2,
      sym__newline,
      sym__end_of_file,
  [1653] = 6,
    ACTIONS(287), 1,
      aux_sym__short_descr_token1,
    ACTIONS(313), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym__short_descr,
    STATE(124), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(315), 2,
      sym__newline,
      sym__end_of_file,
  [1674] = 5,
    ACTIONS(23), 1,
      anon_sym_Schema,
    STATE(147), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(317), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(117), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [1693] = 5,
    ACTIONS(166), 1,
      anon_sym_Field,
    STATE(167), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(319), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(96), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1712] = 6,
    ACTIONS(287), 1,
      aux_sym__short_descr_token1,
    ACTIONS(321), 1,
      anon_sym_COLON,
    STATE(166), 1,
      sym__nl,
    STATE(171), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(323), 2,
      sym__newline,
      sym__end_of_file,
  [1733] = 5,
    ACTIONS(166), 1,
      anon_sym_Field,
    STATE(170), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(325), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(73), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1752] = 5,
    ACTIONS(23), 1,
      anon_sym_Schema,
    STATE(149), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(327), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(117), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [1771] = 6,
    ACTIONS(287), 1,
      aux_sym__short_descr_token1,
    ACTIONS(329), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym__nl,
    STATE(184), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(331), 2,
      sym__newline,
      sym__end_of_file,
  [1792] = 5,
    ACTIONS(59), 1,
      anon_sym_Column,
    STATE(136), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(333), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(93), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1811] = 4,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(176), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1827] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(339), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1839] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(341), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1851] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(343), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1863] = 4,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(348), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(88), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [1879] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(350), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1891] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(352), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1903] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1915] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1927] = 4,
    ACTIONS(358), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(361), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(93), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1943] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(363), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [1955] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(365), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [1967] = 4,
    ACTIONS(367), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(370), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(96), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1983] = 4,
    ACTIONS(372), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(375), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(97), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1999] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(377), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2011] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(379), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2023] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(381), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2035] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(383), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2047] = 4,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(179), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2063] = 4,
    ACTIONS(156), 1,
      sym__string_start,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(242), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2079] = 4,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(178), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2095] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(387), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2107] = 4,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(177), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2123] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(389), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2135] = 4,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(163), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2151] = 4,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(175), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2167] = 3,
    ACTIONS(393), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(391), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2181] = 4,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(155), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2197] = 4,
    ACTIONS(397), 1,
      sym__string_content,
    STATE(114), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(395), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [2213] = 4,
    ACTIONS(401), 1,
      sym__raw,
    STATE(113), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(399), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [2229] = 4,
    ACTIONS(406), 1,
      sym__string_content,
    STATE(114), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(404), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [2245] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(409), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2257] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(411), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2269] = 4,
    ACTIONS(413), 1,
      anon_sym_Schema,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(416), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(117), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [2285] = 4,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(420), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(218), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2301] = 4,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(181), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2317] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Connection,
      anon_sym_Output,
  [2329] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(424), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2341] = 4,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(420), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(239), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2357] = 5,
    ACTIONS(7), 1,
      anon_sym_Execute,
    ACTIONS(9), 1,
      anon_sym_Connection,
    STATE(9), 1,
      sym_connection,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(134), 2,
      sym_execute_using_shell,
      aux_sym_source_file_repeat1,
  [2375] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(426), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2387] = 5,
    ACTIONS(7), 1,
      anon_sym_Execute,
    ACTIONS(9), 1,
      anon_sym_Connection,
    STATE(9), 1,
      sym_connection,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(143), 2,
      sym_execute_using_shell,
      aux_sym_source_file_repeat1,
  [2405] = 4,
    ACTIONS(430), 1,
      sym__raw,
    STATE(113), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(428), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [2421] = 5,
    ACTIONS(287), 1,
      aux_sym__short_descr_token1,
    STATE(173), 1,
      sym__short_descr,
    STATE(174), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(432), 2,
      sym__newline,
      sym__end_of_file,
  [2439] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(434), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2451] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(436), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2463] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(438), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2475] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(440), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2487] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(442), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2499] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(444), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2511] = 5,
    ACTIONS(7), 1,
      anon_sym_Execute,
    ACTIONS(9), 1,
      anon_sym_Connection,
    STATE(12), 1,
      sym_connection,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(143), 2,
      sym_execute_using_shell,
      aux_sym_source_file_repeat1,
  [2529] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(446), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2541] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(448), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2553] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(450), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2565] = 4,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(144), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2581] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(452), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2593] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(454), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2605] = 3,
    STATE(204), 1,
      sym_shell_name,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(456), 3,
      anon_sym_cmd,
      anon_sym_sh,
      anon_sym_bash,
  [2618] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(458), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2629] = 4,
    ACTIONS(460), 1,
      anon_sym_Execute,
    ACTIONS(463), 1,
      anon_sym_Connection,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(143), 2,
      sym_execute_using_shell,
      aux_sym_source_file_repeat1,
  [2644] = 5,
    ACTIONS(465), 1,
      anon_sym_with,
    ACTIONS(467), 1,
      sym__newline,
    ACTIONS(469), 1,
      sym__end_of_file,
    STATE(151), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2661] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(471), 4,
      sym__dedent,
      sym__inter_start,
      sym__raw,
      sym__end_of_file,
  [2672] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(471), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      sym_escape_sequence,
  [2683] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(473), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2694] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(475), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2705] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(477), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2716] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(479), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2727] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(481), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2738] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(483), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2749] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(485), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2760] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(487), 4,
      ts_builtin_sym_end,
      anon_sym_Let,
      anon_sym_Execute,
      anon_sym_Output,
  [2771] = 3,
    STATE(47), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(489), 2,
      sym__newline,
      sym__end_of_file,
  [2783] = 3,
    STATE(99), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(491), 2,
      sym__dedent,
      sym__end_of_file,
  [2795] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(493), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2805] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(495), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2815] = 4,
    ACTIONS(497), 1,
      anon_sym_COLON,
    ACTIONS(499), 1,
      anon_sym_EQ,
    STATE(25), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [2829] = 3,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(72), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2841] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(501), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2851] = 3,
    STATE(87), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(503), 2,
      sym__dedent,
      sym__end_of_file,
  [2863] = 3,
    STATE(27), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(505), 2,
      sym__newline,
      sym__end_of_file,
  [2875] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(438), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [2885] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(507), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2895] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(509), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2905] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(511), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2915] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(513), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2925] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(440), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [2935] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(515), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2945] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(517), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [2955] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(519), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [2965] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(521), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [2975] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(523), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [2985] = 3,
    STATE(45), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(525), 2,
      sym__newline,
      sym__end_of_file,
  [2997] = 3,
    STATE(59), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(527), 2,
      sym__newline,
      sym__end_of_file,
  [3009] = 3,
    STATE(60), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(529), 2,
      sym__newline,
      sym__end_of_file,
  [3021] = 3,
    STATE(58), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(531), 2,
      sym__newline,
      sym__end_of_file,
  [3033] = 3,
    STATE(48), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(533), 2,
      sym__newline,
      sym__end_of_file,
  [3045] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(535), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3055] = 3,
    STATE(180), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(537), 2,
      sym__newline,
      sym__end_of_file,
  [3067] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(539), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [3077] = 4,
    ACTIONS(541), 1,
      anon_sym_COLON,
    ACTIONS(543), 1,
      anon_sym_EQ,
    STATE(43), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3091] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(545), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [3101] = 4,
    ACTIONS(541), 1,
      anon_sym_COLON,
    ACTIONS(547), 1,
      anon_sym_EQ,
    STATE(57), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3115] = 4,
    ACTIONS(541), 1,
      anon_sym_COLON,
    ACTIONS(549), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3129] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(444), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3139] = 4,
    ACTIONS(541), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_EQ,
    STATE(55), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3153] = 4,
    ACTIONS(541), 1,
      anon_sym_COLON,
    ACTIONS(553), 1,
      anon_sym_EQ,
    STATE(44), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3167] = 3,
    STATE(98), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(555), 2,
      sym__dedent,
      sym__end_of_file,
  [3179] = 4,
    ACTIONS(541), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_EQ,
    STATE(46), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3193] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(559), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3203] = 4,
    ACTIONS(497), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_EQ,
    STATE(192), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3217] = 3,
    STATE(8), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(563), 2,
      sym__newline,
      sym__end_of_file,
  [3229] = 3,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(61), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3241] = 3,
    ACTIONS(565), 1,
      sym__newline,
    STATE(7), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3252] = 3,
    ACTIONS(49), 1,
      anon_sym_description,
    STATE(156), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3263] = 3,
    ACTIONS(567), 1,
      sym__newline,
    STATE(160), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3274] = 3,
    ACTIONS(541), 1,
      anon_sym_COLON,
    STATE(148), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3285] = 3,
    ACTIONS(567), 1,
      sym__newline,
    STATE(3), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3296] = 3,
    ACTIONS(49), 1,
      anon_sym_description,
    STATE(162), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3307] = 3,
    ACTIONS(567), 1,
      sym__newline,
    STATE(197), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3318] = 3,
    ACTIONS(569), 1,
      anon_sym_using,
    ACTIONS(571), 1,
      anon_sym_SQL,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3329] = 3,
    ACTIONS(541), 1,
      anon_sym_COLON,
    STATE(120), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3340] = 3,
    ACTIONS(567), 1,
      sym__newline,
    STATE(195), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3351] = 3,
    ACTIONS(573), 1,
      anon_sym_COLON,
    STATE(142), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3362] = 3,
    ACTIONS(567), 1,
      sym__newline,
    STATE(209), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3373] = 3,
    ACTIONS(541), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3384] = 3,
    ACTIONS(49), 1,
      anon_sym_description,
    STATE(190), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3395] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(575), 2,
      anon_sym_Execute,
      anon_sym_Connection,
  [3404] = 3,
    ACTIONS(565), 1,
      sym__newline,
    STATE(42), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3415] = 3,
    ACTIONS(565), 1,
      sym__newline,
    STATE(35), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3426] = 3,
    ACTIONS(567), 1,
      sym__newline,
    STATE(201), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3437] = 3,
    ACTIONS(565), 1,
      sym__newline,
    STATE(6), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3448] = 3,
    ACTIONS(565), 1,
      sym__newline,
    STATE(37), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3459] = 3,
    ACTIONS(573), 1,
      anon_sym_COLON,
    STATE(150), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3470] = 2,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3478] = 2,
    ACTIONS(579), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3486] = 2,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3494] = 2,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3502] = 2,
    ACTIONS(585), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3510] = 2,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3518] = 2,
    ACTIONS(438), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3526] = 2,
    ACTIONS(589), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3534] = 2,
    ACTIONS(440), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3542] = 2,
    ACTIONS(444), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3550] = 2,
    ACTIONS(591), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3558] = 2,
    ACTIONS(593), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3566] = 2,
    ACTIONS(595), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3574] = 2,
    ACTIONS(597), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3582] = 2,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3590] = 2,
    ACTIONS(601), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3598] = 2,
    ACTIONS(603), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3606] = 2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3614] = 2,
    ACTIONS(607), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3622] = 2,
    ACTIONS(609), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3630] = 2,
    ACTIONS(611), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3638] = 2,
    ACTIONS(613), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3646] = 2,
    ACTIONS(615), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3654] = 2,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3662] = 2,
    ACTIONS(619), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3670] = 2,
    ACTIONS(621), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3678] = 2,
    ACTIONS(623), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3686] = 2,
    ACTIONS(625), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3694] = 2,
    ACTIONS(569), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3702] = 2,
    ACTIONS(627), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3710] = 2,
    ACTIONS(629), 1,
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
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 281,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 335,
  [SMALL_STATE(13)] = 360,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 404,
  [SMALL_STATE(16)] = 431,
  [SMALL_STATE(17)] = 456,
  [SMALL_STATE(18)] = 481,
  [SMALL_STATE(19)] = 506,
  [SMALL_STATE(20)] = 531,
  [SMALL_STATE(21)] = 558,
  [SMALL_STATE(22)] = 577,
  [SMALL_STATE(23)] = 604,
  [SMALL_STATE(24)] = 629,
  [SMALL_STATE(25)] = 655,
  [SMALL_STATE(26)] = 671,
  [SMALL_STATE(27)] = 695,
  [SMALL_STATE(28)] = 711,
  [SMALL_STATE(29)] = 737,
  [SMALL_STATE(30)] = 761,
  [SMALL_STATE(31)] = 786,
  [SMALL_STATE(32)] = 807,
  [SMALL_STATE(33)] = 822,
  [SMALL_STATE(34)] = 847,
  [SMALL_STATE(35)] = 872,
  [SMALL_STATE(36)] = 897,
  [SMALL_STATE(37)] = 922,
  [SMALL_STATE(38)] = 947,
  [SMALL_STATE(39)] = 972,
  [SMALL_STATE(40)] = 997,
  [SMALL_STATE(41)] = 1022,
  [SMALL_STATE(42)] = 1045,
  [SMALL_STATE(43)] = 1070,
  [SMALL_STATE(44)] = 1086,
  [SMALL_STATE(45)] = 1102,
  [SMALL_STATE(46)] = 1118,
  [SMALL_STATE(47)] = 1134,
  [SMALL_STATE(48)] = 1150,
  [SMALL_STATE(49)] = 1166,
  [SMALL_STATE(50)] = 1182,
  [SMALL_STATE(51)] = 1198,
  [SMALL_STATE(52)] = 1214,
  [SMALL_STATE(53)] = 1230,
  [SMALL_STATE(54)] = 1246,
  [SMALL_STATE(55)] = 1262,
  [SMALL_STATE(56)] = 1278,
  [SMALL_STATE(57)] = 1294,
  [SMALL_STATE(58)] = 1310,
  [SMALL_STATE(59)] = 1326,
  [SMALL_STATE(60)] = 1342,
  [SMALL_STATE(61)] = 1358,
  [SMALL_STATE(62)] = 1377,
  [SMALL_STATE(63)] = 1396,
  [SMALL_STATE(64)] = 1415,
  [SMALL_STATE(65)] = 1434,
  [SMALL_STATE(66)] = 1453,
  [SMALL_STATE(67)] = 1472,
  [SMALL_STATE(68)] = 1491,
  [SMALL_STATE(69)] = 1510,
  [SMALL_STATE(70)] = 1531,
  [SMALL_STATE(71)] = 1552,
  [SMALL_STATE(72)] = 1573,
  [SMALL_STATE(73)] = 1592,
  [SMALL_STATE(74)] = 1611,
  [SMALL_STATE(75)] = 1632,
  [SMALL_STATE(76)] = 1653,
  [SMALL_STATE(77)] = 1674,
  [SMALL_STATE(78)] = 1693,
  [SMALL_STATE(79)] = 1712,
  [SMALL_STATE(80)] = 1733,
  [SMALL_STATE(81)] = 1752,
  [SMALL_STATE(82)] = 1771,
  [SMALL_STATE(83)] = 1792,
  [SMALL_STATE(84)] = 1811,
  [SMALL_STATE(85)] = 1827,
  [SMALL_STATE(86)] = 1839,
  [SMALL_STATE(87)] = 1851,
  [SMALL_STATE(88)] = 1863,
  [SMALL_STATE(89)] = 1879,
  [SMALL_STATE(90)] = 1891,
  [SMALL_STATE(91)] = 1903,
  [SMALL_STATE(92)] = 1915,
  [SMALL_STATE(93)] = 1927,
  [SMALL_STATE(94)] = 1943,
  [SMALL_STATE(95)] = 1955,
  [SMALL_STATE(96)] = 1967,
  [SMALL_STATE(97)] = 1983,
  [SMALL_STATE(98)] = 1999,
  [SMALL_STATE(99)] = 2011,
  [SMALL_STATE(100)] = 2023,
  [SMALL_STATE(101)] = 2035,
  [SMALL_STATE(102)] = 2047,
  [SMALL_STATE(103)] = 2063,
  [SMALL_STATE(104)] = 2079,
  [SMALL_STATE(105)] = 2095,
  [SMALL_STATE(106)] = 2107,
  [SMALL_STATE(107)] = 2123,
  [SMALL_STATE(108)] = 2135,
  [SMALL_STATE(109)] = 2151,
  [SMALL_STATE(110)] = 2167,
  [SMALL_STATE(111)] = 2181,
  [SMALL_STATE(112)] = 2197,
  [SMALL_STATE(113)] = 2213,
  [SMALL_STATE(114)] = 2229,
  [SMALL_STATE(115)] = 2245,
  [SMALL_STATE(116)] = 2257,
  [SMALL_STATE(117)] = 2269,
  [SMALL_STATE(118)] = 2285,
  [SMALL_STATE(119)] = 2301,
  [SMALL_STATE(120)] = 2317,
  [SMALL_STATE(121)] = 2329,
  [SMALL_STATE(122)] = 2341,
  [SMALL_STATE(123)] = 2357,
  [SMALL_STATE(124)] = 2375,
  [SMALL_STATE(125)] = 2387,
  [SMALL_STATE(126)] = 2405,
  [SMALL_STATE(127)] = 2421,
  [SMALL_STATE(128)] = 2439,
  [SMALL_STATE(129)] = 2451,
  [SMALL_STATE(130)] = 2463,
  [SMALL_STATE(131)] = 2475,
  [SMALL_STATE(132)] = 2487,
  [SMALL_STATE(133)] = 2499,
  [SMALL_STATE(134)] = 2511,
  [SMALL_STATE(135)] = 2529,
  [SMALL_STATE(136)] = 2541,
  [SMALL_STATE(137)] = 2553,
  [SMALL_STATE(138)] = 2565,
  [SMALL_STATE(139)] = 2581,
  [SMALL_STATE(140)] = 2593,
  [SMALL_STATE(141)] = 2605,
  [SMALL_STATE(142)] = 2618,
  [SMALL_STATE(143)] = 2629,
  [SMALL_STATE(144)] = 2644,
  [SMALL_STATE(145)] = 2661,
  [SMALL_STATE(146)] = 2672,
  [SMALL_STATE(147)] = 2683,
  [SMALL_STATE(148)] = 2694,
  [SMALL_STATE(149)] = 2705,
  [SMALL_STATE(150)] = 2716,
  [SMALL_STATE(151)] = 2727,
  [SMALL_STATE(152)] = 2738,
  [SMALL_STATE(153)] = 2749,
  [SMALL_STATE(154)] = 2760,
  [SMALL_STATE(155)] = 2771,
  [SMALL_STATE(156)] = 2783,
  [SMALL_STATE(157)] = 2795,
  [SMALL_STATE(158)] = 2805,
  [SMALL_STATE(159)] = 2815,
  [SMALL_STATE(160)] = 2829,
  [SMALL_STATE(161)] = 2841,
  [SMALL_STATE(162)] = 2851,
  [SMALL_STATE(163)] = 2863,
  [SMALL_STATE(164)] = 2875,
  [SMALL_STATE(165)] = 2885,
  [SMALL_STATE(166)] = 2895,
  [SMALL_STATE(167)] = 2905,
  [SMALL_STATE(168)] = 2915,
  [SMALL_STATE(169)] = 2925,
  [SMALL_STATE(170)] = 2935,
  [SMALL_STATE(171)] = 2945,
  [SMALL_STATE(172)] = 2955,
  [SMALL_STATE(173)] = 2965,
  [SMALL_STATE(174)] = 2975,
  [SMALL_STATE(175)] = 2985,
  [SMALL_STATE(176)] = 2997,
  [SMALL_STATE(177)] = 3009,
  [SMALL_STATE(178)] = 3021,
  [SMALL_STATE(179)] = 3033,
  [SMALL_STATE(180)] = 3045,
  [SMALL_STATE(181)] = 3055,
  [SMALL_STATE(182)] = 3067,
  [SMALL_STATE(183)] = 3077,
  [SMALL_STATE(184)] = 3091,
  [SMALL_STATE(185)] = 3101,
  [SMALL_STATE(186)] = 3115,
  [SMALL_STATE(187)] = 3129,
  [SMALL_STATE(188)] = 3139,
  [SMALL_STATE(189)] = 3153,
  [SMALL_STATE(190)] = 3167,
  [SMALL_STATE(191)] = 3179,
  [SMALL_STATE(192)] = 3193,
  [SMALL_STATE(193)] = 3203,
  [SMALL_STATE(194)] = 3217,
  [SMALL_STATE(195)] = 3229,
  [SMALL_STATE(196)] = 3241,
  [SMALL_STATE(197)] = 3252,
  [SMALL_STATE(198)] = 3263,
  [SMALL_STATE(199)] = 3274,
  [SMALL_STATE(200)] = 3285,
  [SMALL_STATE(201)] = 3296,
  [SMALL_STATE(202)] = 3307,
  [SMALL_STATE(203)] = 3318,
  [SMALL_STATE(204)] = 3329,
  [SMALL_STATE(205)] = 3340,
  [SMALL_STATE(206)] = 3351,
  [SMALL_STATE(207)] = 3362,
  [SMALL_STATE(208)] = 3373,
  [SMALL_STATE(209)] = 3384,
  [SMALL_STATE(210)] = 3395,
  [SMALL_STATE(211)] = 3404,
  [SMALL_STATE(212)] = 3415,
  [SMALL_STATE(213)] = 3426,
  [SMALL_STATE(214)] = 3437,
  [SMALL_STATE(215)] = 3448,
  [SMALL_STATE(216)] = 3459,
  [SMALL_STATE(217)] = 3470,
  [SMALL_STATE(218)] = 3478,
  [SMALL_STATE(219)] = 3486,
  [SMALL_STATE(220)] = 3494,
  [SMALL_STATE(221)] = 3502,
  [SMALL_STATE(222)] = 3510,
  [SMALL_STATE(223)] = 3518,
  [SMALL_STATE(224)] = 3526,
  [SMALL_STATE(225)] = 3534,
  [SMALL_STATE(226)] = 3542,
  [SMALL_STATE(227)] = 3550,
  [SMALL_STATE(228)] = 3558,
  [SMALL_STATE(229)] = 3566,
  [SMALL_STATE(230)] = 3574,
  [SMALL_STATE(231)] = 3582,
  [SMALL_STATE(232)] = 3590,
  [SMALL_STATE(233)] = 3598,
  [SMALL_STATE(234)] = 3606,
  [SMALL_STATE(235)] = 3614,
  [SMALL_STATE(236)] = 3622,
  [SMALL_STATE(237)] = 3630,
  [SMALL_STATE(238)] = 3638,
  [SMALL_STATE(239)] = 3646,
  [SMALL_STATE(240)] = 3654,
  [SMALL_STATE(241)] = 3662,
  [SMALL_STATE(242)] = 3670,
  [SMALL_STATE(243)] = 3678,
  [SMALL_STATE(244)] = 3686,
  [SMALL_STATE(245)] = 3694,
  [SMALL_STATE(246)] = 3702,
  [SMALL_STATE(247)] = 3710,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(191),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(189),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(188),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(186),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(185),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(183),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 9),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 9),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(240),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(203),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(237),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 17),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(231),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(230),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(217),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 29),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(219),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(241),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(234),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(118),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(112),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(122),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(126),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 22),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 22),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 18),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 18),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 33),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 33),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 17),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 34),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 34),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 29),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 16),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 16),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 15),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 15),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 14),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 14),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 13),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 13),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 12),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 12),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 11),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 11),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 19),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 19),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 20),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 20),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 21),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 21),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 30),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 30),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 32),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 32),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 31),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 31),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 27),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 26),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 35),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(193),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 27),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 26),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 27),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 26),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(231),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 27),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 27),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(220),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(127),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 35),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 35),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 35),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 35),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 27),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 27),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(113),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(114),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 35),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 27),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat2, 2), SHIFT_REPEAT(222),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat2, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using_shell, 4, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 35),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 27),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 27),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 26),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 27),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 35),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 35),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 26),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 27),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 26),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6, .production_id = 8),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 9, .production_id = 28),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3, .production_id = 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 8, .production_id = 24),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 3, .production_id = 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 7),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 35),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 35),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 27),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 35),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 27),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 27),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 27),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 35),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 26),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 27),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 25),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 27),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 26),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 10),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_name, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [623] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
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
