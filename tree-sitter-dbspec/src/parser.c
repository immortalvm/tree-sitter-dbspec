#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 319
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 37

enum {
  sym_identifier = 1,
  anon_sym_Parameters = 2,
  anon_sym_COLON = 3,
  anon_sym_DOT_DOT_DOT = 4,
  anon_sym_Set = 5,
  anon_sym_EQ = 6,
  anon_sym_Execute = 7,
  anon_sym_using = 8,
  anon_sym_connection = 9,
  anon_sym_to = 10,
  anon_sym_with = 11,
  anon_sym_result = 12,
  anon_sym_via = 13,
  anon_sym_Output = 14,
  anon_sym_description = 15,
  anon_sym_archiver = 16,
  anon_sym_archiverContact = 17,
  anon_sym_dataOwner = 18,
  anon_sym_dataOriginTimespan = 19,
  anon_sym_lobFolder = 20,
  anon_sym_Schema = 21,
  anon_sym_Type = 22,
  anon_sym_Table = 23,
  anon_sym_Column = 24,
  anon_sym_Field = 25,
  anon_sym_Key = 26,
  anon_sym_Check = 27,
  anon_sym_View = 28,
  anon_sym_For = 29,
  anon_sym_in = 30,
  anon_sym_LPAREN = 31,
  anon_sym_COMMA = 32,
  anon_sym_RPAREN = 33,
  sym_escape_sequence = 34,
  sym_short_description = 35,
  aux_sym__short_descr_token1 = 36,
  sym__newline = 37,
  sym__indent = 38,
  sym__dedent = 39,
  sym__inter_start = 40,
  sym__inter_end = 41,
  sym__raw = 42,
  sym__string_start = 43,
  sym__string_content = 44,
  sym__string_end = 45,
  sym__comment = 46,
  sym__end_of_file = 47,
  sym__skip = 48,
  sym_source_file = 49,
  sym_parameters = 50,
  sym_parameter = 51,
  sym__statement = 52,
  sym_nop = 53,
  sym_set = 54,
  sym__expression = 55,
  sym_execute_using = 56,
  sym_connection = 57,
  sym_execute_sql = 58,
  sym_query = 59,
  sym_siard_output = 60,
  sym__siard_description = 61,
  sym__siard_archiver = 62,
  sym__siard_archiverContact = 63,
  sym__siard_dataOwner = 64,
  sym__siard_dataOriginTimespan = 65,
  sym__siard_lobFolder = 66,
  sym_siard_schema = 67,
  sym_siard_type = 68,
  sym_siard_table = 69,
  sym_siard_column = 70,
  sym_siard_field = 71,
  sym_siard_key = 72,
  sym_siard_check = 73,
  sym_siard_view = 74,
  sym_for_loop = 75,
  sym_for_variables = 76,
  sym_for_body = 77,
  sym__basic_expression = 78,
  sym_variable_instance = 79,
  sym_string = 80,
  sym_string_content = 81,
  sym__short_descr = 82,
  sym__nl = 83,
  sym__ni = 84,
  sym__ded = 85,
  sym_interpolation = 86,
  sym_key_value_pairs = 87,
  sym_key_value_pair = 88,
  sym_raw = 89,
  sym_raw_content = 90,
  aux_sym_source_file_repeat1 = 91,
  aux_sym_parameters_repeat1 = 92,
  aux_sym_siard_output_repeat1 = 93,
  aux_sym_siard_output_repeat2 = 94,
  aux_sym_siard_schema_repeat1 = 95,
  aux_sym_siard_table_repeat1 = 96,
  aux_sym_siard_column_repeat1 = 97,
  aux_sym_siard_view_repeat1 = 98,
  aux_sym_for_variables_repeat1 = 99,
  aux_sym_string_repeat1 = 100,
  aux_sym_string_content_repeat1 = 101,
  aux_sym_key_value_pairs_repeat1 = 102,
  aux_sym_raw_repeat1 = 103,
  aux_sym_raw_content_repeat1 = 104,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_Parameters] = "Parameters",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT_DOT_DOT] = "...",
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
  [anon_sym_For] = "For",
  [anon_sym_in] = "in",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [sym_nop] = "nop",
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
  [sym_for_loop] = "for_loop",
  [sym_for_variables] = "for_variables",
  [sym_for_body] = "for_body",
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
  [aux_sym_for_variables_repeat1] = "for_variables_repeat1",
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
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
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
  [anon_sym_For] = anon_sym_For,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_nop] = sym_nop,
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
  [sym_for_loop] = sym_for_loop,
  [sym_for_variables] = sym_for_variables,
  [sym_for_body] = sym_for_body,
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
  [aux_sym_for_variables_repeat1] = aux_sym_for_variables_repeat1,
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
  [anon_sym_DOT_DOT_DOT] = {
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
  [anon_sym_For] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_nop] = {
    .visible = true,
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
  [sym_for_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_for_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_for_body] = {
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
  [aux_sym_for_variables_repeat1] = {
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
  field_body = 3,
  field_connection = 4,
  field_dataOriginTimespan = 5,
  field_dataOwner = 6,
  field_description = 7,
  field_file = 8,
  field_interpreter = 9,
  field_key = 10,
  field_lobFolder = 11,
  field_name = 12,
  field_properties = 13,
  field_result_set = 14,
  field_script = 15,
  field_sql = 16,
  field_url = 17,
  field_value = 18,
  field_variables = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_archiver] = "archiver",
  [field_archiverContact] = "archiverContact",
  [field_body] = "body",
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
  [field_result_set] = "result_set",
  [field_script] = "script",
  [field_sql] = "sql",
  [field_url] = "url",
  [field_value] = "value",
  [field_variables] = "variables",
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
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 1},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 1},
  [15] = {.index = 24, .length = 1},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 1},
  [18] = {.index = 27, .length = 1},
  [19] = {.index = 28, .length = 1},
  [20] = {.index = 29, .length = 1},
  [21] = {.index = 30, .length = 1},
  [22] = {.index = 31, .length = 1},
  [23] = {.index = 32, .length = 12},
  [24] = {.index = 44, .length = 3},
  [25] = {.index = 47, .length = 2},
  [26] = {.index = 49, .length = 2},
  [27] = {.index = 51, .length = 1},
  [28] = {.index = 52, .length = 9},
  [29] = {.index = 61, .length = 1},
  [30] = {.index = 62, .length = 1},
  [31] = {.index = 63, .length = 1},
  [32] = {.index = 64, .length = 1},
  [33] = {.index = 65, .length = 1},
  [34] = {.index = 66, .length = 1},
  [35] = {.index = 67, .length = 2},
  [36] = {.index = 69, .length = 2},
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
    {field_body, 6},
    {field_result_set, 3},
    {field_variables, 1},
  [18] =
    {field_properties, 5},
    {field_url, 2},
  [20] =
    {field_description, 0, .inherited = true},
  [21] =
    {field_archiver, 0, .inherited = true},
  [22] =
    {field_archiverContact, 0, .inherited = true},
  [23] =
    {field_dataOwner, 0, .inherited = true},
  [24] =
    {field_dataOriginTimespan, 0, .inherited = true},
  [25] =
    {field_lobFolder, 0, .inherited = true},
  [26] =
    {field_description, 1},
  [27] =
    {field_archiver, 1},
  [28] =
    {field_archiverContact, 1},
  [29] =
    {field_dataOwner, 1},
  [30] =
    {field_dataOriginTimespan, 1},
  [31] =
    {field_lobFolder, 1},
  [32] =
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
  [44] =
    {field_connection, 5},
    {field_file, 3},
    {field_name, 1},
  [47] =
    {field_key, 0},
    {field_value, 1},
  [49] =
    {field_description, 2, .inherited = true},
    {field_name, 1},
  [51] =
    {field_name, 1},
  [52] =
    {field_archiver, 8, .inherited = true},
    {field_archiverContact, 8, .inherited = true},
    {field_connection, 5},
    {field_dataOriginTimespan, 8, .inherited = true},
    {field_dataOwner, 8, .inherited = true},
    {field_description, 8, .inherited = true},
    {field_file, 3},
    {field_lobFolder, 8, .inherited = true},
    {field_name, 1},
  [61] =
    {field_description, 2},
  [62] =
    {field_archiver, 2},
  [63] =
    {field_archiverContact, 2},
  [64] =
    {field_dataOwner, 2},
  [65] =
    {field_dataOriginTimespan, 2},
  [66] =
    {field_lobFolder, 2},
  [67] =
    {field_key, 0},
    {field_value, 2},
  [69] =
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 7,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 6,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 17,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 37,
  [44] = 44,
  [45] = 45,
  [46] = 39,
  [47] = 39,
  [48] = 37,
  [49] = 39,
  [50] = 50,
  [51] = 37,
  [52] = 52,
  [53] = 53,
  [54] = 36,
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
  [65] = 35,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 41,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 30,
  [80] = 80,
  [81] = 81,
  [82] = 52,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 38,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 55,
  [91] = 91,
  [92] = 89,
  [93] = 93,
  [94] = 94,
  [95] = 59,
  [96] = 67,
  [97] = 97,
  [98] = 56,
  [99] = 57,
  [100] = 58,
  [101] = 101,
  [102] = 70,
  [103] = 103,
  [104] = 72,
  [105] = 73,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 94,
  [115] = 115,
  [116] = 93,
  [117] = 78,
  [118] = 118,
  [119] = 53,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 91,
  [125] = 76,
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
  [146] = 146,
  [147] = 146,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 143,
  [157] = 157,
  [158] = 158,
  [159] = 149,
  [160] = 160,
  [161] = 161,
  [162] = 155,
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
  [175] = 151,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 180,
  [182] = 179,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 52,
  [197] = 38,
  [198] = 191,
  [199] = 36,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 205,
  [207] = 207,
  [208] = 202,
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
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 192,
  [229] = 229,
  [230] = 207,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 238,
  [240] = 240,
  [241] = 241,
  [242] = 234,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 237,
  [247] = 247,
  [248] = 248,
  [249] = 236,
  [250] = 240,
  [251] = 241,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 255,
  [257] = 257,
  [258] = 253,
  [259] = 257,
  [260] = 260,
  [261] = 260,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 268,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 278,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 275,
  [296] = 296,
  [297] = 273,
  [298] = 289,
  [299] = 299,
  [300] = 265,
  [301] = 290,
  [302] = 36,
  [303] = 38,
  [304] = 304,
  [305] = 293,
  [306] = 52,
  [307] = 266,
  [308] = 304,
  [309] = 285,
  [310] = 277,
  [311] = 284,
  [312] = 294,
  [313] = 269,
  [314] = 314,
  [315] = 314,
  [316] = 316,
  [317] = 272,
  [318] = 291,
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
      if (eof) ADVANCE(15);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(6);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 6:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'U') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_short_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__short_descr_token1);
      if (lookahead == ' ') ADVANCE(25);
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
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(53);
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
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 56:
      if (lookahead == 'w') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'F') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_via);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 92:
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 'w') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_connection);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(139);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 151:
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
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 4},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 4},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 5},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 0, .external_lex_state = 5},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 6},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 6},
  [40] = {.lex_state = 0, .external_lex_state = 5},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 6},
  [43] = {.lex_state = 0, .external_lex_state = 6},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 6},
  [47] = {.lex_state = 0, .external_lex_state = 6},
  [48] = {.lex_state = 0, .external_lex_state = 6},
  [49] = {.lex_state = 0, .external_lex_state = 6},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 6},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 7},
  [88] = {.lex_state = 0, .external_lex_state = 7},
  [89] = {.lex_state = 0, .external_lex_state = 8},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 8},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 7},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 7},
  [113] = {.lex_state = 0, .external_lex_state = 7},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 7},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 0, .external_lex_state = 7},
  [123] = {.lex_state = 0, .external_lex_state = 7},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 3},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 4},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 3},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 3},
  [145] = {.lex_state = 0, .external_lex_state = 6},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 3},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 4},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 6},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 5},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 0, .external_lex_state = 4},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 7},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 7},
  [180] = {.lex_state = 0, .external_lex_state = 5},
  [181] = {.lex_state = 0, .external_lex_state = 6},
  [182] = {.lex_state = 0, .external_lex_state = 7},
  [183] = {.lex_state = 0, .external_lex_state = 3},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 0, .external_lex_state = 7},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 3},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 7},
  [197] = {.lex_state = 0, .external_lex_state = 7},
  [198] = {.lex_state = 0, .external_lex_state = 3},
  [199] = {.lex_state = 0, .external_lex_state = 7},
  [200] = {.lex_state = 0, .external_lex_state = 3},
  [201] = {.lex_state = 0, .external_lex_state = 3},
  [202] = {.lex_state = 0, .external_lex_state = 7},
  [203] = {.lex_state = 0, .external_lex_state = 7},
  [204] = {.lex_state = 0, .external_lex_state = 3},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 7},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 7},
  [211] = {.lex_state = 0, .external_lex_state = 3},
  [212] = {.lex_state = 0, .external_lex_state = 3},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 3},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 3},
  [217] = {.lex_state = 0, .external_lex_state = 3},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 3},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 7},
  [222] = {.lex_state = 0, .external_lex_state = 7},
  [223] = {.lex_state = 0, .external_lex_state = 7},
  [224] = {.lex_state = 0, .external_lex_state = 7},
  [225] = {.lex_state = 0, .external_lex_state = 7},
  [226] = {.lex_state = 0, .external_lex_state = 3},
  [227] = {.lex_state = 0, .external_lex_state = 3},
  [228] = {.lex_state = 0, .external_lex_state = 7},
  [229] = {.lex_state = 0, .external_lex_state = 3},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 3},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 9},
  [234] = {.lex_state = 0, .external_lex_state = 9},
  [235] = {.lex_state = 0, .external_lex_state = 9},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 9},
  [239] = {.lex_state = 0, .external_lex_state = 9},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 9},
  [242] = {.lex_state = 0, .external_lex_state = 9},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 9},
  [248] = {.lex_state = 0, .external_lex_state = 9},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 9},
  [252] = {.lex_state = 0, .external_lex_state = 9},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 9},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 9},
  [263] = {.lex_state = 0, .external_lex_state = 9},
  [264] = {.lex_state = 0, .external_lex_state = 9},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 10},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 10},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 0, .external_lex_state = 2},
  [278] = {.lex_state = 0, .external_lex_state = 11},
  [279] = {.lex_state = 0, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 11},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 24, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 0, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 0, .external_lex_state = 2},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 10},
  [291] = {.lex_state = 0, .external_lex_state = 2},
  [292] = {.lex_state = 0, .external_lex_state = 2},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 2},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 0, .external_lex_state = 2},
  [298] = {.lex_state = 0, .external_lex_state = 2},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 0, .external_lex_state = 10},
  [302] = {.lex_state = 0, .external_lex_state = 11},
  [303] = {.lex_state = 0, .external_lex_state = 11},
  [304] = {.lex_state = 0, .external_lex_state = 9},
  [305] = {.lex_state = 0, .external_lex_state = 2},
  [306] = {.lex_state = 0, .external_lex_state = 11},
  [307] = {.lex_state = 0, .external_lex_state = 2},
  [308] = {.lex_state = 0, .external_lex_state = 9},
  [309] = {.lex_state = 0, .external_lex_state = 2},
  [310] = {.lex_state = 0, .external_lex_state = 2},
  [311] = {.lex_state = 0, .external_lex_state = 2},
  [312] = {.lex_state = 0, .external_lex_state = 2},
  [313] = {.lex_state = 0, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 0, .external_lex_state = 2},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 0, .external_lex_state = 2},
  [318] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
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
    [anon_sym_For] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(286),
    [sym_parameters] = STATE(13),
    [sym__statement] = STATE(14),
    [sym_nop] = STATE(14),
    [sym_set] = STATE(14),
    [sym_execute_using] = STATE(14),
    [sym_execute_sql] = STATE(14),
    [sym_siard_output] = STATE(14),
    [sym_for_loop] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Parameters] = ACTIONS(7),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_Execute] = ACTIONS(13),
    [anon_sym_Output] = ACTIONS(15),
    [anon_sym_For] = ACTIONS(17),
    [sym__comment] = ACTIONS(3),
    [sym__skip] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(21), 1,
      anon_sym_archiver,
    ACTIONS(23), 1,
      anon_sym_archiverContact,
    ACTIONS(25), 1,
      anon_sym_dataOwner,
    ACTIONS(27), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(29), 1,
      anon_sym_lobFolder,
    ACTIONS(31), 1,
      anon_sym_Schema,
    STATE(9), 1,
      aux_sym_siard_output_repeat1,
    STATE(66), 1,
      sym__siard_dataOwner,
    STATE(68), 1,
      sym__siard_dataOriginTimespan,
    STATE(69), 1,
      sym__siard_lobFolder,
    STATE(83), 1,
      sym__siard_description,
    STATE(84), 1,
      sym__siard_archiver,
    STATE(85), 1,
      sym__siard_archiverContact,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(124), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [51] = 16,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(21), 1,
      anon_sym_archiver,
    ACTIONS(23), 1,
      anon_sym_archiverContact,
    ACTIONS(25), 1,
      anon_sym_dataOwner,
    ACTIONS(27), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(29), 1,
      anon_sym_lobFolder,
    ACTIONS(31), 1,
      anon_sym_Schema,
    STATE(9), 1,
      aux_sym_siard_output_repeat1,
    STATE(66), 1,
      sym__siard_dataOwner,
    STATE(68), 1,
      sym__siard_dataOriginTimespan,
    STATE(69), 1,
      sym__siard_lobFolder,
    STATE(83), 1,
      sym__siard_description,
    STATE(84), 1,
      sym__siard_archiver,
    STATE(85), 1,
      sym__siard_archiverContact,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(91), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [102] = 16,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(21), 1,
      anon_sym_archiver,
    ACTIONS(23), 1,
      anon_sym_archiverContact,
    ACTIONS(25), 1,
      anon_sym_dataOwner,
    ACTIONS(27), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(29), 1,
      anon_sym_lobFolder,
    ACTIONS(31), 1,
      anon_sym_Schema,
    STATE(3), 1,
      aux_sym_siard_output_repeat1,
    STATE(66), 1,
      sym__siard_dataOwner,
    STATE(68), 1,
      sym__siard_dataOriginTimespan,
    STATE(69), 1,
      sym__siard_lobFolder,
    STATE(83), 1,
      sym__siard_description,
    STATE(84), 1,
      sym__siard_archiver,
    STATE(85), 1,
      sym__siard_archiverContact,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(94), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [153] = 16,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(21), 1,
      anon_sym_archiver,
    ACTIONS(23), 1,
      anon_sym_archiverContact,
    ACTIONS(25), 1,
      anon_sym_dataOwner,
    ACTIONS(27), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(29), 1,
      anon_sym_lobFolder,
    ACTIONS(31), 1,
      anon_sym_Schema,
    STATE(2), 1,
      aux_sym_siard_output_repeat1,
    STATE(66), 1,
      sym__siard_dataOwner,
    STATE(68), 1,
      sym__siard_dataOriginTimespan,
    STATE(69), 1,
      sym__siard_lobFolder,
    STATE(83), 1,
      sym__siard_description,
    STATE(84), 1,
      sym__siard_archiver,
    STATE(85), 1,
      sym__siard_archiverContact,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(114), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [204] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(35), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(33), 12,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
      anon_sym_For,
      sym_identifier,
  [228] = 8,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(40), 1,
      anon_sym_Set,
    ACTIONS(43), 1,
      anon_sym_Execute,
    ACTIONS(46), 1,
      anon_sym_Output,
    ACTIONS(49), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(52), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(7), 8,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [262] = 8,
    ACTIONS(54), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(56), 1,
      anon_sym_Set,
    ACTIONS(58), 1,
      anon_sym_Execute,
    ACTIONS(60), 1,
      anon_sym_Output,
    ACTIONS(62), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(64), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(7), 8,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [296] = 15,
    ACTIONS(66), 1,
      anon_sym_description,
    ACTIONS(69), 1,
      anon_sym_archiver,
    ACTIONS(72), 1,
      anon_sym_archiverContact,
    ACTIONS(75), 1,
      anon_sym_dataOwner,
    ACTIONS(78), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(81), 1,
      anon_sym_lobFolder,
    ACTIONS(84), 1,
      anon_sym_Schema,
    STATE(9), 1,
      aux_sym_siard_output_repeat1,
    STATE(66), 1,
      sym__siard_dataOwner,
    STATE(68), 1,
      sym__siard_dataOriginTimespan,
    STATE(69), 1,
      sym__siard_lobFolder,
    STATE(83), 1,
      sym__siard_description,
    STATE(84), 1,
      sym__siard_archiver,
    STATE(85), 1,
      sym__siard_archiverContact,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [343] = 8,
    ACTIONS(54), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(56), 1,
      anon_sym_Set,
    ACTIONS(58), 1,
      anon_sym_Execute,
    ACTIONS(60), 1,
      anon_sym_Output,
    ACTIONS(62), 1,
      anon_sym_For,
    STATE(198), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(8), 8,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [376] = 8,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(89), 1,
      anon_sym_Set,
    ACTIONS(92), 1,
      anon_sym_Execute,
    ACTIONS(95), 1,
      anon_sym_Output,
    ACTIONS(98), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(11), 8,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [409] = 8,
    ACTIONS(54), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(56), 1,
      anon_sym_Set,
    ACTIONS(58), 1,
      anon_sym_Execute,
    ACTIONS(60), 1,
      anon_sym_Output,
    ACTIONS(62), 1,
      anon_sym_For,
    STATE(191), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(8), 8,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [442] = 8,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Set,
    ACTIONS(13), 1,
      anon_sym_Execute,
    ACTIONS(15), 1,
      anon_sym_Output,
    ACTIONS(17), 1,
      anon_sym_For,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(15), 8,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [475] = 8,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Set,
    ACTIONS(13), 1,
      anon_sym_Execute,
    ACTIONS(15), 1,
      anon_sym_Output,
    ACTIONS(17), 1,
      anon_sym_For,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(11), 8,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [508] = 8,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Set,
    ACTIONS(13), 1,
      anon_sym_Execute,
    ACTIONS(15), 1,
      anon_sym_Output,
    ACTIONS(17), 1,
      anon_sym_For,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(11), 8,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [541] = 3,
    ACTIONS(33), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(35), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_For,
  [563] = 3,
    ACTIONS(107), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(105), 12,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_description,
      anon_sym_archiver,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_For,
      sym_identifier,
  [585] = 9,
    ACTIONS(109), 1,
      anon_sym_description,
    ACTIONS(111), 1,
      anon_sym_Column,
    ACTIONS(113), 1,
      anon_sym_Key,
    ACTIONS(115), 1,
      anon_sym_Check,
    STATE(29), 1,
      sym__siard_description,
    STATE(154), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(117), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(28), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [618] = 9,
    ACTIONS(109), 1,
      anon_sym_description,
    ACTIONS(119), 1,
      anon_sym_Type,
    ACTIONS(121), 1,
      anon_sym_Table,
    ACTIONS(123), 1,
      anon_sym_View,
    STATE(24), 1,
      sym__siard_description,
    STATE(204), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(125), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(21), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [651] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(129), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(127), 9,
      anon_sym_Schema,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
      sym_identifier,
  [671] = 7,
    ACTIONS(119), 1,
      anon_sym_Type,
    ACTIONS(121), 1,
      anon_sym_Table,
    ACTIONS(123), 1,
      anon_sym_View,
    STATE(200), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(131), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(33), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [698] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(107), 10,
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
  [715] = 6,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_connection,
    ACTIONS(137), 1,
      anon_sym_result,
    ACTIONS(139), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(56), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [740] = 7,
    ACTIONS(119), 1,
      anon_sym_Type,
    ACTIONS(121), 1,
      anon_sym_Table,
    ACTIONS(123), 1,
      anon_sym_View,
    STATE(201), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(141), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(26), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [767] = 6,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_connection,
    ACTIONS(147), 1,
      anon_sym_result,
    ACTIONS(149), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(98), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [792] = 7,
    ACTIONS(119), 1,
      anon_sym_Type,
    ACTIONS(121), 1,
      anon_sym_Table,
    ACTIONS(123), 1,
      anon_sym_View,
    STATE(194), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(151), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(33), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [819] = 7,
    ACTIONS(111), 1,
      anon_sym_Column,
    ACTIONS(113), 1,
      anon_sym_Key,
    ACTIONS(115), 1,
      anon_sym_Check,
    STATE(150), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(153), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(31), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [846] = 7,
    ACTIONS(111), 1,
      anon_sym_Column,
    ACTIONS(113), 1,
      anon_sym_Key,
    ACTIONS(115), 1,
      anon_sym_Check,
    STATE(174), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(155), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(31), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [873] = 7,
    ACTIONS(111), 1,
      anon_sym_Column,
    ACTIONS(113), 1,
      anon_sym_Key,
    ACTIONS(115), 1,
      anon_sym_Check,
    STATE(176), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(157), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(27), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [900] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(159), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [916] = 6,
    ACTIONS(161), 1,
      anon_sym_Column,
    ACTIONS(164), 1,
      anon_sym_Key,
    ACTIONS(167), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(170), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(31), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [940] = 7,
    ACTIONS(174), 1,
      sym__inter_start,
    ACTIONS(176), 1,
      sym__raw,
    STATE(6), 1,
      sym__ded,
    STATE(160), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(172), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(40), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [966] = 6,
    ACTIONS(178), 1,
      anon_sym_Type,
    ACTIONS(181), 1,
      anon_sym_Table,
    ACTIONS(184), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(187), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(33), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [990] = 7,
    ACTIONS(174), 1,
      sym__inter_start,
    ACTIONS(176), 1,
      sym__raw,
    STATE(16), 1,
      sym__ded,
    STATE(160), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(189), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(40), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1016] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(191), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [1032] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_via,
      anon_sym_Output,
      anon_sym_For,
  [1047] = 7,
    ACTIONS(195), 1,
      sym_escape_sequence,
    ACTIONS(197), 1,
      sym__inter_start,
    ACTIONS(199), 1,
      sym__string_content,
    ACTIONS(201), 1,
      sym__string_end,
    STATE(145), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(39), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1072] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_via,
      anon_sym_Output,
      anon_sym_For,
  [1087] = 7,
    ACTIONS(197), 1,
      sym__inter_start,
    ACTIONS(199), 1,
      sym__string_content,
    ACTIONS(205), 1,
      sym_escape_sequence,
    ACTIONS(207), 1,
      sym__string_end,
    STATE(145), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(42), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1112] = 6,
    ACTIONS(211), 1,
      sym__inter_start,
    ACTIONS(214), 1,
      sym__raw,
    STATE(160), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(209), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(40), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1135] = 3,
    ACTIONS(219), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(217), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1152] = 7,
    ACTIONS(221), 1,
      sym_escape_sequence,
    ACTIONS(224), 1,
      sym__inter_start,
    ACTIONS(227), 1,
      sym__string_content,
    ACTIONS(230), 1,
      sym__string_end,
    STATE(145), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(42), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1177] = 7,
    ACTIONS(197), 1,
      sym__inter_start,
    ACTIONS(199), 1,
      sym__string_content,
    ACTIONS(232), 1,
      sym_escape_sequence,
    ACTIONS(234), 1,
      sym__string_end,
    STATE(145), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(47), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1202] = 7,
    ACTIONS(109), 1,
      anon_sym_description,
    ACTIONS(236), 1,
      anon_sym_Field,
    STATE(106), 1,
      sym__siard_description,
    STATE(231), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(238), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(103), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1227] = 7,
    ACTIONS(109), 1,
      anon_sym_description,
    ACTIONS(236), 1,
      anon_sym_Field,
    STATE(110), 1,
      sym__siard_description,
    STATE(144), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(240), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(109), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1252] = 7,
    ACTIONS(197), 1,
      sym__inter_start,
    ACTIONS(199), 1,
      sym__string_content,
    ACTIONS(205), 1,
      sym_escape_sequence,
    ACTIONS(242), 1,
      sym__string_end,
    STATE(145), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(42), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1277] = 7,
    ACTIONS(197), 1,
      sym__inter_start,
    ACTIONS(199), 1,
      sym__string_content,
    ACTIONS(205), 1,
      sym_escape_sequence,
    ACTIONS(244), 1,
      sym__string_end,
    STATE(145), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(42), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1302] = 7,
    ACTIONS(197), 1,
      sym__inter_start,
    ACTIONS(199), 1,
      sym__string_content,
    ACTIONS(246), 1,
      sym_escape_sequence,
    ACTIONS(248), 1,
      sym__string_end,
    STATE(145), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(49), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1327] = 7,
    ACTIONS(197), 1,
      sym__inter_start,
    ACTIONS(199), 1,
      sym__string_content,
    ACTIONS(205), 1,
      sym_escape_sequence,
    ACTIONS(250), 1,
      sym__string_end,
    STATE(145), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(42), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1352] = 7,
    ACTIONS(109), 1,
      anon_sym_description,
    ACTIONS(111), 1,
      anon_sym_Column,
    STATE(121), 1,
      sym__siard_description,
    STATE(169), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(252), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(118), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [1377] = 7,
    ACTIONS(197), 1,
      sym__inter_start,
    ACTIONS(199), 1,
      sym__string_content,
    ACTIONS(254), 1,
      sym_escape_sequence,
    ACTIONS(256), 1,
      sym__string_end,
    STATE(145), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(46), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1402] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_via,
      anon_sym_Output,
      anon_sym_For,
  [1417] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(260), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1431] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(193), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1445] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(262), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1459] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(264), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1473] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(266), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1487] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(268), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1501] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(270), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1515] = 3,
    ACTIONS(274), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(272), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1531] = 3,
    ACTIONS(278), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(276), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1547] = 3,
    ACTIONS(282), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(280), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1563] = 3,
    ACTIONS(286), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(284), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1579] = 3,
    ACTIONS(290), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(288), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1595] = 3,
    ACTIONS(292), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(191), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1611] = 3,
    ACTIONS(296), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(294), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1627] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(298), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1641] = 3,
    ACTIONS(302), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(300), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1657] = 3,
    ACTIONS(306), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(304), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1673] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(308), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1687] = 3,
    ACTIONS(312), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(310), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1703] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(314), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1717] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(316), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1731] = 3,
    ACTIONS(318), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(217), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1747] = 3,
    ACTIONS(322), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(320), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1763] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(324), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1777] = 3,
    ACTIONS(328), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(326), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1793] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(330), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1807] = 3,
    ACTIONS(332), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(159), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1823] = 3,
    ACTIONS(336), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(334), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1839] = 3,
    ACTIONS(340), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(338), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1855] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(258), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1869] = 3,
    ACTIONS(344), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(342), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1885] = 3,
    ACTIONS(348), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(346), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1901] = 3,
    ACTIONS(352), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(350), 6,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1917] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(203), 7,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [1931] = 6,
    ACTIONS(354), 1,
      anon_sym_COLON,
    ACTIONS(356), 1,
      aux_sym__short_descr_token1,
    STATE(172), 1,
      sym__short_descr,
    STATE(173), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(358), 2,
      sym__newline,
      sym__end_of_file,
  [1952] = 6,
    ACTIONS(356), 1,
      aux_sym__short_descr_token1,
    ACTIONS(360), 1,
      anon_sym_COLON,
    STATE(127), 1,
      sym__short_descr,
    STATE(170), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(362), 2,
      sym__newline,
      sym__end_of_file,
  [1973] = 5,
    ACTIONS(174), 1,
      sym__inter_start,
    ACTIONS(176), 1,
      sym__raw,
    STATE(160), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(32), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1992] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(262), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2005] = 5,
    ACTIONS(31), 1,
      anon_sym_Schema,
    STATE(78), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(364), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(133), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [2024] = 5,
    ACTIONS(174), 1,
      sym__inter_start,
    ACTIONS(176), 1,
      sym__raw,
    STATE(160), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(34), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2043] = 5,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(53), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(368), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(136), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [2062] = 5,
    ACTIONS(31), 1,
      anon_sym_Schema,
    STATE(76), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(370), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(133), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [2081] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(270), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2094] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(298), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2107] = 5,
    ACTIONS(372), 1,
      sym_identifier,
    STATE(120), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(374), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(164), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2126] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(264), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2139] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(266), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2152] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(268), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2165] = 5,
    ACTIONS(236), 1,
      anon_sym_Field,
    STATE(211), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(376), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(140), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2184] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(308), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2197] = 5,
    ACTIONS(236), 1,
      anon_sym_Field,
    STATE(212), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(378), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(140), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2216] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(314), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2229] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2242] = 5,
    ACTIONS(236), 1,
      anon_sym_Field,
    STATE(229), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(380), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(101), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2261] = 5,
    ACTIONS(236), 1,
      anon_sym_Field,
    STATE(135), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(382), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(140), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2280] = 6,
    ACTIONS(356), 1,
      aux_sym__short_descr_token1,
    ACTIONS(384), 1,
      anon_sym_COLON,
    STATE(226), 1,
      sym__short_descr,
    STATE(227), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(386), 2,
      sym__newline,
      sym__end_of_file,
  [2301] = 5,
    ACTIONS(236), 1,
      anon_sym_Field,
    STATE(141), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(388), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(140), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2320] = 5,
    ACTIONS(236), 1,
      anon_sym_Field,
    STATE(142), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(390), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(107), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2339] = 5,
    ACTIONS(111), 1,
      anon_sym_Column,
    STATE(148), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(392), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(165), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2358] = 6,
    ACTIONS(356), 1,
      aux_sym__short_descr_token1,
    ACTIONS(394), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym__nl,
    STATE(153), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(396), 2,
      sym__newline,
      sym__end_of_file,
  [2379] = 6,
    ACTIONS(356), 1,
      aux_sym__short_descr_token1,
    ACTIONS(398), 1,
      anon_sym_COLON,
    STATE(126), 1,
      sym__nl,
    STATE(158), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(400), 2,
      sym__newline,
      sym__end_of_file,
  [2400] = 5,
    ACTIONS(31), 1,
      anon_sym_Schema,
    STATE(125), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(402), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(133), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [2419] = 6,
    ACTIONS(356), 1,
      aux_sym__short_descr_token1,
    ACTIONS(404), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym__nl,
    STATE(163), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(406), 2,
      sym__newline,
      sym__end_of_file,
  [2440] = 5,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(119), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(408), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(136), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [2459] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(330), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2472] = 5,
    ACTIONS(111), 1,
      anon_sym_Column,
    STATE(168), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(410), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(165), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2491] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(260), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2504] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(412), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2517] = 5,
    ACTIONS(111), 1,
      anon_sym_Column,
    STATE(171), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(414), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(111), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2536] = 6,
    ACTIONS(356), 1,
      aux_sym__short_descr_token1,
    ACTIONS(416), 1,
      anon_sym_COLON,
    STATE(166), 1,
      sym__short_descr,
    STATE(167), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(418), 2,
      sym__newline,
      sym__end_of_file,
  [2557] = 6,
    ACTIONS(356), 1,
      aux_sym__short_descr_token1,
    ACTIONS(420), 1,
      anon_sym_COLON,
    STATE(214), 1,
      sym__nl,
    STATE(219), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(422), 2,
      sym__newline,
      sym__end_of_file,
  [2578] = 5,
    ACTIONS(31), 1,
      anon_sym_Schema,
    STATE(117), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(424), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(133), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [2597] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_For,
  [2610] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(426), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2622] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(428), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2634] = 4,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(225), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2650] = 4,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(224), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2666] = 4,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(223), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2682] = 4,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(222), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2698] = 4,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(221), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2714] = 4,
    ACTIONS(434), 1,
      anon_sym_Schema,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(437), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(133), 2,
      sym_siard_schema,
      aux_sym_siard_output_repeat2,
  [2730] = 4,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(210), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2746] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(439), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2758] = 4,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(444), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(136), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [2774] = 4,
    ACTIONS(448), 1,
      sym__raw,
    STATE(137), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(446), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [2790] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(451), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2802] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(453), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2814] = 4,
    ACTIONS(455), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(458), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(140), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2830] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(460), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2842] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(462), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2854] = 4,
    ACTIONS(149), 1,
      sym__string_start,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(314), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2870] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(466), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2882] = 4,
    ACTIONS(470), 1,
      sym__string_content,
    STATE(157), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(468), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [2898] = 4,
    ACTIONS(472), 1,
      sym_identifier,
    ACTIONS(474), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(278), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2914] = 4,
    ACTIONS(472), 1,
      sym_identifier,
    ACTIONS(474), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(280), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2930] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(476), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2942] = 4,
    ACTIONS(149), 1,
      sym__string_start,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(260), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2958] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(478), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [2970] = 4,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(192), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2986] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(480), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [2998] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(482), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3010] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(484), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3022] = 4,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(182), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3038] = 4,
    ACTIONS(149), 1,
      sym__string_start,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(315), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3054] = 4,
    ACTIONS(488), 1,
      sym__string_content,
    STATE(157), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(486), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [3070] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(491), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3082] = 4,
    ACTIONS(149), 1,
      sym__string_start,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(261), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3098] = 4,
    ACTIONS(495), 1,
      sym__raw,
    STATE(137), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(493), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [3114] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(497), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3126] = 4,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(179), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3142] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(499), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3154] = 4,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(504), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(164), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [3170] = 4,
    ACTIONS(506), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(509), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(165), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3186] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(511), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3198] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(513), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3210] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(515), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3222] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(517), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3234] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(519), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3246] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(521), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3258] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(523), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3270] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(525), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3282] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(527), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3294] = 4,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(228), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3310] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(529), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3322] = 5,
    ACTIONS(356), 1,
      aux_sym__short_descr_token1,
    STATE(185), 1,
      sym__short_descr,
    STATE(190), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(531), 2,
      sym__newline,
      sym__end_of_file,
  [3340] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(533), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3352] = 5,
    ACTIONS(535), 1,
      anon_sym_with,
    ACTIONS(537), 1,
      sym__newline,
    ACTIONS(539), 1,
      sym__end_of_file,
    STATE(95), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3369] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(541), 4,
      sym__dedent,
      sym__inter_start,
      sym__raw,
      sym__end_of_file,
  [3380] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(541), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      sym_escape_sequence,
  [3391] = 5,
    ACTIONS(543), 1,
      anon_sym_with,
    ACTIONS(545), 1,
      sym__newline,
    ACTIONS(547), 1,
      sym__end_of_file,
    STATE(59), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3408] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(549), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3418] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3432] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(555), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3442] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(557), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3452] = 3,
    ACTIONS(372), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(97), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [3464] = 4,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_EQ,
    STATE(186), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3478] = 3,
    STATE(178), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(563), 2,
      sym__dedent,
      sym__end_of_file,
  [3490] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(565), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3500] = 3,
    STATE(72), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(567), 2,
      sym__dedent,
      sym__end_of_file,
  [3512] = 3,
    STATE(35), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(569), 2,
      sym__newline,
      sym__end_of_file,
  [3524] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3538] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(573), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [3548] = 4,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(577), 1,
      anon_sym_EQ,
    STATE(80), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3562] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(258), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3572] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(203), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3582] = 3,
    STATE(104), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(579), 2,
      sym__dedent,
      sym__end_of_file,
  [3594] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(193), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3604] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(581), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [3614] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(583), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [3624] = 3,
    STATE(55), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(585), 2,
      sym__newline,
      sym__end_of_file,
  [3636] = 3,
    STATE(20), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(587), 2,
      sym__newline,
      sym__end_of_file,
  [3648] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(589), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [3658] = 3,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(93), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3670] = 3,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(116), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3682] = 4,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_EQ,
    STATE(30), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3696] = 3,
    STATE(90), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(593), 2,
      sym__newline,
      sym__end_of_file,
  [3708] = 4,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3722] = 3,
    STATE(183), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(600), 2,
      sym__newline,
      sym__end_of_file,
  [3734] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(602), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [3744] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(604), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [3754] = 4,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(606), 1,
      anon_sym_EQ,
    STATE(71), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3768] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(608), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [3778] = 4,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(610), 1,
      anon_sym_EQ,
    STATE(77), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3792] = 3,
    STATE(139), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(612), 2,
      sym__dedent,
      sym__end_of_file,
  [3804] = 3,
    STATE(138), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(614), 2,
      sym__dedent,
      sym__end_of_file,
  [3816] = 4,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(616), 1,
      anon_sym_EQ,
    STATE(75), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3830] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(618), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Schema,
  [3840] = 4,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(620), 1,
      anon_sym_EQ,
    STATE(81), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3854] = 3,
    STATE(60), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(622), 2,
      sym__newline,
      sym__end_of_file,
  [3866] = 3,
    STATE(61), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(624), 2,
      sym__newline,
      sym__end_of_file,
  [3878] = 3,
    STATE(62), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(626), 2,
      sym__newline,
      sym__end_of_file,
  [3890] = 3,
    STATE(63), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(628), 2,
      sym__newline,
      sym__end_of_file,
  [3902] = 3,
    STATE(64), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(630), 2,
      sym__newline,
      sym__end_of_file,
  [3914] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(632), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [3924] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(634), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [3934] = 3,
    STATE(65), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(636), 2,
      sym__newline,
      sym__end_of_file,
  [3946] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(638), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [3956] = 4,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(640), 1,
      anon_sym_EQ,
    STATE(79), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3970] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(642), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [3980] = 3,
    ACTIONS(109), 1,
      anon_sym_description,
    STATE(189), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3991] = 3,
    ACTIONS(644), 1,
      sym__newline,
    STATE(19), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4002] = 3,
    ACTIONS(646), 1,
      sym__newline,
    STATE(10), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4013] = 3,
    ACTIONS(644), 1,
      sym__newline,
    STATE(44), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4024] = 3,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(313), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4035] = 3,
    ACTIONS(650), 1,
      anon_sym_using,
    ACTIONS(652), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4046] = 3,
    ACTIONS(646), 1,
      sym__newline,
    STATE(206), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4057] = 3,
    ACTIONS(646), 1,
      sym__newline,
    STATE(205), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4068] = 3,
    ACTIONS(654), 1,
      anon_sym_COLON,
    STATE(105), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4079] = 3,
    ACTIONS(646), 1,
      sym__newline,
    STATE(4), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4090] = 3,
    ACTIONS(646), 1,
      sym__newline,
    STATE(12), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4101] = 3,
    ACTIONS(109), 1,
      anon_sym_description,
    STATE(217), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4112] = 3,
    ACTIONS(109), 1,
      anon_sym_description,
    STATE(216), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4123] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(598), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4132] = 3,
    ACTIONS(656), 1,
      anon_sym_using,
    ACTIONS(658), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4143] = 3,
    ACTIONS(646), 1,
      sym__newline,
    STATE(243), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4154] = 3,
    ACTIONS(646), 1,
      sym__newline,
    STATE(244), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4165] = 3,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(269), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4176] = 3,
    ACTIONS(660), 1,
      anon_sym_COLON,
    STATE(73), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4187] = 3,
    ACTIONS(646), 1,
      sym__newline,
    STATE(5), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4198] = 3,
    ACTIONS(644), 1,
      sym__newline,
    STATE(45), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4209] = 3,
    ACTIONS(660), 1,
      anon_sym_COLON,
    STATE(70), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4220] = 3,
    ACTIONS(646), 1,
      sym__newline,
    STATE(187), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4231] = 3,
    ACTIONS(575), 1,
      anon_sym_COLON,
    STATE(96), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4242] = 3,
    ACTIONS(559), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4253] = 3,
    ACTIONS(559), 1,
      anon_sym_COLON,
    STATE(58), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4264] = 3,
    ACTIONS(654), 1,
      anon_sym_COLON,
    STATE(102), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4275] = 3,
    ACTIONS(575), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4286] = 3,
    ACTIONS(559), 1,
      anon_sym_COLON,
    STATE(57), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4297] = 3,
    ACTIONS(575), 1,
      anon_sym_COLON,
    STATE(99), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4308] = 3,
    ACTIONS(646), 1,
      sym__newline,
    STATE(232), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4319] = 3,
    ACTIONS(644), 1,
      sym__newline,
    STATE(50), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4330] = 3,
    ACTIONS(644), 1,
      sym__newline,
    STATE(18), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4341] = 2,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4349] = 2,
    ACTIONS(664), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4357] = 2,
    ACTIONS(666), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4365] = 2,
    ACTIONS(668), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4373] = 2,
    ACTIONS(670), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4381] = 2,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4389] = 2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4397] = 2,
    ACTIONS(676), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4405] = 2,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4413] = 2,
    ACTIONS(680), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4421] = 2,
    ACTIONS(682), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4429] = 2,
    ACTIONS(684), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4437] = 2,
    ACTIONS(686), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4445] = 2,
    ACTIONS(688), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4453] = 2,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4461] = 2,
    ACTIONS(692), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4469] = 2,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4477] = 2,
    ACTIONS(696), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4485] = 2,
    ACTIONS(698), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4493] = 2,
    ACTIONS(700), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4501] = 2,
    ACTIONS(702), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4509] = 2,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4517] = 2,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4525] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4533] = 2,
    ACTIONS(710), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4541] = 2,
    ACTIONS(712), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4549] = 2,
    ACTIONS(714), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4557] = 2,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4565] = 2,
    ACTIONS(718), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4573] = 2,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4581] = 2,
    ACTIONS(722), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4589] = 2,
    ACTIONS(724), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4597] = 2,
    ACTIONS(726), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4605] = 2,
    ACTIONS(728), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4613] = 2,
    ACTIONS(730), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4621] = 2,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4629] = 2,
    ACTIONS(734), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4637] = 2,
    ACTIONS(193), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4645] = 2,
    ACTIONS(203), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4653] = 2,
    ACTIONS(736), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4661] = 2,
    ACTIONS(738), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4669] = 2,
    ACTIONS(258), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4677] = 2,
    ACTIONS(740), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4685] = 2,
    ACTIONS(742), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4693] = 2,
    ACTIONS(744), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4701] = 2,
    ACTIONS(746), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4709] = 2,
    ACTIONS(748), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4717] = 2,
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4725] = 2,
    ACTIONS(752), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4733] = 2,
    ACTIONS(754), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4741] = 2,
    ACTIONS(756), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4749] = 2,
    ACTIONS(758), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4757] = 2,
    ACTIONS(760), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4765] = 2,
    ACTIONS(762), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 262,
  [SMALL_STATE(9)] = 296,
  [SMALL_STATE(10)] = 343,
  [SMALL_STATE(11)] = 376,
  [SMALL_STATE(12)] = 409,
  [SMALL_STATE(13)] = 442,
  [SMALL_STATE(14)] = 475,
  [SMALL_STATE(15)] = 508,
  [SMALL_STATE(16)] = 541,
  [SMALL_STATE(17)] = 563,
  [SMALL_STATE(18)] = 585,
  [SMALL_STATE(19)] = 618,
  [SMALL_STATE(20)] = 651,
  [SMALL_STATE(21)] = 671,
  [SMALL_STATE(22)] = 698,
  [SMALL_STATE(23)] = 715,
  [SMALL_STATE(24)] = 740,
  [SMALL_STATE(25)] = 767,
  [SMALL_STATE(26)] = 792,
  [SMALL_STATE(27)] = 819,
  [SMALL_STATE(28)] = 846,
  [SMALL_STATE(29)] = 873,
  [SMALL_STATE(30)] = 900,
  [SMALL_STATE(31)] = 916,
  [SMALL_STATE(32)] = 940,
  [SMALL_STATE(33)] = 966,
  [SMALL_STATE(34)] = 990,
  [SMALL_STATE(35)] = 1016,
  [SMALL_STATE(36)] = 1032,
  [SMALL_STATE(37)] = 1047,
  [SMALL_STATE(38)] = 1072,
  [SMALL_STATE(39)] = 1087,
  [SMALL_STATE(40)] = 1112,
  [SMALL_STATE(41)] = 1135,
  [SMALL_STATE(42)] = 1152,
  [SMALL_STATE(43)] = 1177,
  [SMALL_STATE(44)] = 1202,
  [SMALL_STATE(45)] = 1227,
  [SMALL_STATE(46)] = 1252,
  [SMALL_STATE(47)] = 1277,
  [SMALL_STATE(48)] = 1302,
  [SMALL_STATE(49)] = 1327,
  [SMALL_STATE(50)] = 1352,
  [SMALL_STATE(51)] = 1377,
  [SMALL_STATE(52)] = 1402,
  [SMALL_STATE(53)] = 1417,
  [SMALL_STATE(54)] = 1431,
  [SMALL_STATE(55)] = 1445,
  [SMALL_STATE(56)] = 1459,
  [SMALL_STATE(57)] = 1473,
  [SMALL_STATE(58)] = 1487,
  [SMALL_STATE(59)] = 1501,
  [SMALL_STATE(60)] = 1515,
  [SMALL_STATE(61)] = 1531,
  [SMALL_STATE(62)] = 1547,
  [SMALL_STATE(63)] = 1563,
  [SMALL_STATE(64)] = 1579,
  [SMALL_STATE(65)] = 1595,
  [SMALL_STATE(66)] = 1611,
  [SMALL_STATE(67)] = 1627,
  [SMALL_STATE(68)] = 1641,
  [SMALL_STATE(69)] = 1657,
  [SMALL_STATE(70)] = 1673,
  [SMALL_STATE(71)] = 1687,
  [SMALL_STATE(72)] = 1703,
  [SMALL_STATE(73)] = 1717,
  [SMALL_STATE(74)] = 1731,
  [SMALL_STATE(75)] = 1747,
  [SMALL_STATE(76)] = 1763,
  [SMALL_STATE(77)] = 1777,
  [SMALL_STATE(78)] = 1793,
  [SMALL_STATE(79)] = 1807,
  [SMALL_STATE(80)] = 1823,
  [SMALL_STATE(81)] = 1839,
  [SMALL_STATE(82)] = 1855,
  [SMALL_STATE(83)] = 1869,
  [SMALL_STATE(84)] = 1885,
  [SMALL_STATE(85)] = 1901,
  [SMALL_STATE(86)] = 1917,
  [SMALL_STATE(87)] = 1931,
  [SMALL_STATE(88)] = 1952,
  [SMALL_STATE(89)] = 1973,
  [SMALL_STATE(90)] = 1992,
  [SMALL_STATE(91)] = 2005,
  [SMALL_STATE(92)] = 2024,
  [SMALL_STATE(93)] = 2043,
  [SMALL_STATE(94)] = 2062,
  [SMALL_STATE(95)] = 2081,
  [SMALL_STATE(96)] = 2094,
  [SMALL_STATE(97)] = 2107,
  [SMALL_STATE(98)] = 2126,
  [SMALL_STATE(99)] = 2139,
  [SMALL_STATE(100)] = 2152,
  [SMALL_STATE(101)] = 2165,
  [SMALL_STATE(102)] = 2184,
  [SMALL_STATE(103)] = 2197,
  [SMALL_STATE(104)] = 2216,
  [SMALL_STATE(105)] = 2229,
  [SMALL_STATE(106)] = 2242,
  [SMALL_STATE(107)] = 2261,
  [SMALL_STATE(108)] = 2280,
  [SMALL_STATE(109)] = 2301,
  [SMALL_STATE(110)] = 2320,
  [SMALL_STATE(111)] = 2339,
  [SMALL_STATE(112)] = 2358,
  [SMALL_STATE(113)] = 2379,
  [SMALL_STATE(114)] = 2400,
  [SMALL_STATE(115)] = 2419,
  [SMALL_STATE(116)] = 2440,
  [SMALL_STATE(117)] = 2459,
  [SMALL_STATE(118)] = 2472,
  [SMALL_STATE(119)] = 2491,
  [SMALL_STATE(120)] = 2504,
  [SMALL_STATE(121)] = 2517,
  [SMALL_STATE(122)] = 2536,
  [SMALL_STATE(123)] = 2557,
  [SMALL_STATE(124)] = 2578,
  [SMALL_STATE(125)] = 2597,
  [SMALL_STATE(126)] = 2610,
  [SMALL_STATE(127)] = 2622,
  [SMALL_STATE(128)] = 2634,
  [SMALL_STATE(129)] = 2650,
  [SMALL_STATE(130)] = 2666,
  [SMALL_STATE(131)] = 2682,
  [SMALL_STATE(132)] = 2698,
  [SMALL_STATE(133)] = 2714,
  [SMALL_STATE(134)] = 2730,
  [SMALL_STATE(135)] = 2746,
  [SMALL_STATE(136)] = 2758,
  [SMALL_STATE(137)] = 2774,
  [SMALL_STATE(138)] = 2790,
  [SMALL_STATE(139)] = 2802,
  [SMALL_STATE(140)] = 2814,
  [SMALL_STATE(141)] = 2830,
  [SMALL_STATE(142)] = 2842,
  [SMALL_STATE(143)] = 2854,
  [SMALL_STATE(144)] = 2870,
  [SMALL_STATE(145)] = 2882,
  [SMALL_STATE(146)] = 2898,
  [SMALL_STATE(147)] = 2914,
  [SMALL_STATE(148)] = 2930,
  [SMALL_STATE(149)] = 2942,
  [SMALL_STATE(150)] = 2958,
  [SMALL_STATE(151)] = 2970,
  [SMALL_STATE(152)] = 2986,
  [SMALL_STATE(153)] = 2998,
  [SMALL_STATE(154)] = 3010,
  [SMALL_STATE(155)] = 3022,
  [SMALL_STATE(156)] = 3038,
  [SMALL_STATE(157)] = 3054,
  [SMALL_STATE(158)] = 3070,
  [SMALL_STATE(159)] = 3082,
  [SMALL_STATE(160)] = 3098,
  [SMALL_STATE(161)] = 3114,
  [SMALL_STATE(162)] = 3126,
  [SMALL_STATE(163)] = 3142,
  [SMALL_STATE(164)] = 3154,
  [SMALL_STATE(165)] = 3170,
  [SMALL_STATE(166)] = 3186,
  [SMALL_STATE(167)] = 3198,
  [SMALL_STATE(168)] = 3210,
  [SMALL_STATE(169)] = 3222,
  [SMALL_STATE(170)] = 3234,
  [SMALL_STATE(171)] = 3246,
  [SMALL_STATE(172)] = 3258,
  [SMALL_STATE(173)] = 3270,
  [SMALL_STATE(174)] = 3282,
  [SMALL_STATE(175)] = 3294,
  [SMALL_STATE(176)] = 3310,
  [SMALL_STATE(177)] = 3322,
  [SMALL_STATE(178)] = 3340,
  [SMALL_STATE(179)] = 3352,
  [SMALL_STATE(180)] = 3369,
  [SMALL_STATE(181)] = 3380,
  [SMALL_STATE(182)] = 3391,
  [SMALL_STATE(183)] = 3408,
  [SMALL_STATE(184)] = 3418,
  [SMALL_STATE(185)] = 3432,
  [SMALL_STATE(186)] = 3442,
  [SMALL_STATE(187)] = 3452,
  [SMALL_STATE(188)] = 3464,
  [SMALL_STATE(189)] = 3478,
  [SMALL_STATE(190)] = 3490,
  [SMALL_STATE(191)] = 3500,
  [SMALL_STATE(192)] = 3512,
  [SMALL_STATE(193)] = 3524,
  [SMALL_STATE(194)] = 3538,
  [SMALL_STATE(195)] = 3548,
  [SMALL_STATE(196)] = 3562,
  [SMALL_STATE(197)] = 3572,
  [SMALL_STATE(198)] = 3582,
  [SMALL_STATE(199)] = 3594,
  [SMALL_STATE(200)] = 3604,
  [SMALL_STATE(201)] = 3614,
  [SMALL_STATE(202)] = 3624,
  [SMALL_STATE(203)] = 3636,
  [SMALL_STATE(204)] = 3648,
  [SMALL_STATE(205)] = 3658,
  [SMALL_STATE(206)] = 3670,
  [SMALL_STATE(207)] = 3682,
  [SMALL_STATE(208)] = 3696,
  [SMALL_STATE(209)] = 3708,
  [SMALL_STATE(210)] = 3722,
  [SMALL_STATE(211)] = 3734,
  [SMALL_STATE(212)] = 3744,
  [SMALL_STATE(213)] = 3754,
  [SMALL_STATE(214)] = 3768,
  [SMALL_STATE(215)] = 3778,
  [SMALL_STATE(216)] = 3792,
  [SMALL_STATE(217)] = 3804,
  [SMALL_STATE(218)] = 3816,
  [SMALL_STATE(219)] = 3830,
  [SMALL_STATE(220)] = 3840,
  [SMALL_STATE(221)] = 3854,
  [SMALL_STATE(222)] = 3866,
  [SMALL_STATE(223)] = 3878,
  [SMALL_STATE(224)] = 3890,
  [SMALL_STATE(225)] = 3902,
  [SMALL_STATE(226)] = 3914,
  [SMALL_STATE(227)] = 3924,
  [SMALL_STATE(228)] = 3934,
  [SMALL_STATE(229)] = 3946,
  [SMALL_STATE(230)] = 3956,
  [SMALL_STATE(231)] = 3970,
  [SMALL_STATE(232)] = 3980,
  [SMALL_STATE(233)] = 3991,
  [SMALL_STATE(234)] = 4002,
  [SMALL_STATE(235)] = 4013,
  [SMALL_STATE(236)] = 4024,
  [SMALL_STATE(237)] = 4035,
  [SMALL_STATE(238)] = 4046,
  [SMALL_STATE(239)] = 4057,
  [SMALL_STATE(240)] = 4068,
  [SMALL_STATE(241)] = 4079,
  [SMALL_STATE(242)] = 4090,
  [SMALL_STATE(243)] = 4101,
  [SMALL_STATE(244)] = 4112,
  [SMALL_STATE(245)] = 4123,
  [SMALL_STATE(246)] = 4132,
  [SMALL_STATE(247)] = 4143,
  [SMALL_STATE(248)] = 4154,
  [SMALL_STATE(249)] = 4165,
  [SMALL_STATE(250)] = 4176,
  [SMALL_STATE(251)] = 4187,
  [SMALL_STATE(252)] = 4198,
  [SMALL_STATE(253)] = 4209,
  [SMALL_STATE(254)] = 4220,
  [SMALL_STATE(255)] = 4231,
  [SMALL_STATE(256)] = 4242,
  [SMALL_STATE(257)] = 4253,
  [SMALL_STATE(258)] = 4264,
  [SMALL_STATE(259)] = 4275,
  [SMALL_STATE(260)] = 4286,
  [SMALL_STATE(261)] = 4297,
  [SMALL_STATE(262)] = 4308,
  [SMALL_STATE(263)] = 4319,
  [SMALL_STATE(264)] = 4330,
  [SMALL_STATE(265)] = 4341,
  [SMALL_STATE(266)] = 4349,
  [SMALL_STATE(267)] = 4357,
  [SMALL_STATE(268)] = 4365,
  [SMALL_STATE(269)] = 4373,
  [SMALL_STATE(270)] = 4381,
  [SMALL_STATE(271)] = 4389,
  [SMALL_STATE(272)] = 4397,
  [SMALL_STATE(273)] = 4405,
  [SMALL_STATE(274)] = 4413,
  [SMALL_STATE(275)] = 4421,
  [SMALL_STATE(276)] = 4429,
  [SMALL_STATE(277)] = 4437,
  [SMALL_STATE(278)] = 4445,
  [SMALL_STATE(279)] = 4453,
  [SMALL_STATE(280)] = 4461,
  [SMALL_STATE(281)] = 4469,
  [SMALL_STATE(282)] = 4477,
  [SMALL_STATE(283)] = 4485,
  [SMALL_STATE(284)] = 4493,
  [SMALL_STATE(285)] = 4501,
  [SMALL_STATE(286)] = 4509,
  [SMALL_STATE(287)] = 4517,
  [SMALL_STATE(288)] = 4525,
  [SMALL_STATE(289)] = 4533,
  [SMALL_STATE(290)] = 4541,
  [SMALL_STATE(291)] = 4549,
  [SMALL_STATE(292)] = 4557,
  [SMALL_STATE(293)] = 4565,
  [SMALL_STATE(294)] = 4573,
  [SMALL_STATE(295)] = 4581,
  [SMALL_STATE(296)] = 4589,
  [SMALL_STATE(297)] = 4597,
  [SMALL_STATE(298)] = 4605,
  [SMALL_STATE(299)] = 4613,
  [SMALL_STATE(300)] = 4621,
  [SMALL_STATE(301)] = 4629,
  [SMALL_STATE(302)] = 4637,
  [SMALL_STATE(303)] = 4645,
  [SMALL_STATE(304)] = 4653,
  [SMALL_STATE(305)] = 4661,
  [SMALL_STATE(306)] = 4669,
  [SMALL_STATE(307)] = 4677,
  [SMALL_STATE(308)] = 4685,
  [SMALL_STATE(309)] = 4693,
  [SMALL_STATE(310)] = 4701,
  [SMALL_STATE(311)] = 4709,
  [SMALL_STATE(312)] = 4717,
  [SMALL_STATE(313)] = 4725,
  [SMALL_STATE(314)] = 4733,
  [SMALL_STATE(315)] = 4741,
  [SMALL_STATE(316)] = 4749,
  [SMALL_STATE(317)] = 4757,
  [SMALL_STATE(318)] = 4765,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(305),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_body, 1),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(230),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(220),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(218),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(215),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(213),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23), SHIFT_REPEAT(195),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 2, .production_id = 23),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(293),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(246),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(291),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(249),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 17),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(267),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(292),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(281),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(288),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(287),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(279),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 29),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(147),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(160),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(42),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(146),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(145),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 4, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 4, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 7),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 34),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 34),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 33),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 33),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 32),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 32),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 31),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 31),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 30),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 30),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 29),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 14),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 14),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 15),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 15),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 16),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 16),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 8),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 21),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 21),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 8, .production_id = 9),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6, .production_id = 10),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 19),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 19),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 10, .production_id = 24),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 20),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 20),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 11, .production_id = 28),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 17),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 22),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 22),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 18),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 18),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 11),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 11),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 12),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 12),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 13),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_output_repeat1, 1, .production_id = 13),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 27),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 26),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat2, 2), SHIFT_REPEAT(283),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_output_repeat2, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 36),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(188),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(137),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 36),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 36),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(316),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 27),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 36),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 27),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 36),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 36),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 27),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 26),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 27),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(157),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 26),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 27),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 26),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(177),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(267),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 26),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 27),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 27),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 27),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 27),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 36),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 26),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 27),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 27),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 36),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 36),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 35),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 25),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 36),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 27),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 36),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 27),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2), SHIFT_REPEAT(276),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 36),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 27),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 27),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 26),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 26),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 27),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 36),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 27),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [704] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
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
