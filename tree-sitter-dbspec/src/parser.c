#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 327
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 41

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
  anon_sym_DOT = 15,
  anon_sym_Metadata = 16,
  anon_sym_for = 17,
  anon_sym_dbname = 18,
  anon_sym_description = 19,
  anon_sym_archiver = 20,
  anon_sym_archiverContact = 21,
  anon_sym_dataOwner = 22,
  anon_sym_dataOriginTimespan = 23,
  anon_sym_lobFolder = 24,
  anon_sym_Schema = 25,
  anon_sym_Type = 26,
  anon_sym_Table = 27,
  anon_sym_Column = 28,
  anon_sym_Field = 29,
  anon_sym_Key = 30,
  anon_sym_Check = 31,
  anon_sym_View = 32,
  anon_sym_For = 33,
  anon_sym_in = 34,
  anon_sym_LPAREN = 35,
  anon_sym_COMMA = 36,
  anon_sym_RPAREN = 37,
  sym_escape_sequence = 38,
  sym_short_description = 39,
  aux_sym__short_descr_token1 = 40,
  sym__newline = 41,
  sym__indent = 42,
  sym__dedent = 43,
  sym__inter_start = 44,
  sym__inter_end = 45,
  sym__raw = 46,
  sym__string_start = 47,
  sym__string_content = 48,
  sym__string_end = 49,
  sym__comment = 50,
  sym__end_of_file = 51,
  sym__skip = 52,
  sym_source_file = 53,
  sym_parameters = 54,
  sym_parameter = 55,
  sym__statement = 56,
  sym_nop = 57,
  sym_set = 58,
  sym__expression = 59,
  sym_execute_using = 60,
  sym_connection = 61,
  sym_execute_sql = 62,
  sym_query = 63,
  sym_siard_output = 64,
  sym_siard_metadata = 65,
  sym__siard_dbname = 66,
  sym__siard_description = 67,
  sym__siard_archiver = 68,
  sym__siard_archiverContact = 69,
  sym__siard_dataOwner = 70,
  sym__siard_dataOriginTimespan = 71,
  sym__siard_lobFolder = 72,
  sym_siard_schema = 73,
  sym_siard_type = 74,
  sym_siard_table = 75,
  sym_siard_column = 76,
  sym_siard_field = 77,
  sym_siard_key = 78,
  sym_siard_check = 79,
  sym_siard_view = 80,
  sym_for_loop = 81,
  sym_for_variables = 82,
  sym_for_body = 83,
  sym__basic_expression = 84,
  sym_variable_instance = 85,
  sym_string = 86,
  sym_string_content = 87,
  sym__short_descr = 88,
  sym__nl = 89,
  sym__ni = 90,
  sym__ded = 91,
  sym_interpolation = 92,
  sym_key_value_pairs = 93,
  sym_key_value_pair = 94,
  sym_raw = 95,
  sym_raw_content = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_parameters_repeat1 = 98,
  aux_sym_siard_metadata_repeat1 = 99,
  aux_sym_siard_schema_repeat1 = 100,
  aux_sym_siard_table_repeat1 = 101,
  aux_sym_siard_column_repeat1 = 102,
  aux_sym_siard_view_repeat1 = 103,
  aux_sym_for_variables_repeat1 = 104,
  aux_sym_string_repeat1 = 105,
  aux_sym_string_content_repeat1 = 106,
  aux_sym_key_value_pairs_repeat1 = 107,
  aux_sym_raw_repeat1 = 108,
  aux_sym_raw_content_repeat1 = 109,
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
  [anon_sym_DOT] = ".",
  [anon_sym_Metadata] = "Metadata",
  [anon_sym_for] = "for",
  [anon_sym_dbname] = "dbname",
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
  [sym_siard_metadata] = "siard_metadata",
  [sym__siard_dbname] = "_siard_dbname",
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
  [aux_sym_siard_metadata_repeat1] = "siard_metadata_repeat1",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Metadata] = anon_sym_Metadata,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_dbname] = anon_sym_dbname,
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
  [sym_siard_metadata] = sym_siard_metadata,
  [sym__siard_dbname] = sym__siard_dbname,
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
  [aux_sym_siard_metadata_repeat1] = aux_sym_siard_metadata_repeat1,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Metadata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dbname] = {
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
  [sym_siard_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym__siard_dbname] = {
    .visible = false,
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
  [aux_sym_siard_metadata_repeat1] = {
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
  field_dbname = 7,
  field_description = 8,
  field_file = 9,
  field_interpreter = 10,
  field_key = 11,
  field_lobFolder = 12,
  field_name = 13,
  field_properties = 14,
  field_result_set = 15,
  field_script = 16,
  field_sql = 17,
  field_url = 18,
  field_value = 19,
  field_variables = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_archiver] = "archiver",
  [field_archiverContact] = "archiverContact",
  [field_body] = "body",
  [field_connection] = "connection",
  [field_dataOriginTimespan] = "dataOriginTimespan",
  [field_dataOwner] = "dataOwner",
  [field_dbname] = "dbname",
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
  [8] = {.index = 13, .length = 3},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 1},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 24, .length = 1},
  [17] = {.index = 25, .length = 2},
  [18] = {.index = 27, .length = 3},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 1},
  [21] = {.index = 33, .length = 1},
  [22] = {.index = 34, .length = 1},
  [23] = {.index = 35, .length = 1},
  [24] = {.index = 36, .length = 1},
  [25] = {.index = 37, .length = 1},
  [26] = {.index = 38, .length = 1},
  [27] = {.index = 39, .length = 9},
  [28] = {.index = 48, .length = 14},
  [29] = {.index = 62, .length = 2},
  [30] = {.index = 64, .length = 1},
  [31] = {.index = 65, .length = 2},
  [32] = {.index = 67, .length = 1},
  [33] = {.index = 68, .length = 1},
  [34] = {.index = 69, .length = 1},
  [35] = {.index = 70, .length = 1},
  [36] = {.index = 71, .length = 1},
  [37] = {.index = 72, .length = 1},
  [38] = {.index = 73, .length = 1},
  [39] = {.index = 74, .length = 2},
  [40] = {.index = 76, .length = 2},
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
    {field_connection, 1},
    {field_file, 5},
    {field_name, 3},
  [16] =
    {field_properties, 4},
    {field_url, 2},
  [18] =
    {field_dbname, 0, .inherited = true},
  [19] =
    {field_description, 0, .inherited = true},
  [20] =
    {field_archiver, 0, .inherited = true},
  [21] =
    {field_archiverContact, 0, .inherited = true},
  [22] =
    {field_dataOwner, 0, .inherited = true},
  [23] =
    {field_dataOriginTimespan, 0, .inherited = true},
  [24] =
    {field_lobFolder, 0, .inherited = true},
  [25] =
    {field_connection, 2},
    {field_name, 4},
  [27] =
    {field_body, 6},
    {field_result_set, 3},
    {field_variables, 1},
  [30] =
    {field_properties, 5},
    {field_url, 2},
  [32] =
    {field_dbname, 1},
  [33] =
    {field_description, 1},
  [34] =
    {field_archiver, 1},
  [35] =
    {field_archiverContact, 1},
  [36] =
    {field_dataOwner, 1},
  [37] =
    {field_dataOriginTimespan, 1},
  [38] =
    {field_lobFolder, 1},
  [39] =
    {field_archiver, 7, .inherited = true},
    {field_archiverContact, 7, .inherited = true},
    {field_connection, 2},
    {field_dataOriginTimespan, 7, .inherited = true},
    {field_dataOwner, 7, .inherited = true},
    {field_dbname, 7, .inherited = true},
    {field_description, 7, .inherited = true},
    {field_lobFolder, 7, .inherited = true},
    {field_name, 4},
  [48] =
    {field_archiver, 0, .inherited = true},
    {field_archiver, 1, .inherited = true},
    {field_archiverContact, 0, .inherited = true},
    {field_archiverContact, 1, .inherited = true},
    {field_dataOriginTimespan, 0, .inherited = true},
    {field_dataOriginTimespan, 1, .inherited = true},
    {field_dataOwner, 0, .inherited = true},
    {field_dataOwner, 1, .inherited = true},
    {field_dbname, 0, .inherited = true},
    {field_dbname, 1, .inherited = true},
    {field_description, 0, .inherited = true},
    {field_description, 1, .inherited = true},
    {field_lobFolder, 0, .inherited = true},
    {field_lobFolder, 1, .inherited = true},
  [62] =
    {field_description, 2, .inherited = true},
    {field_name, 1},
  [64] =
    {field_name, 1},
  [65] =
    {field_key, 0},
    {field_value, 1},
  [67] =
    {field_dbname, 2},
  [68] =
    {field_description, 2},
  [69] =
    {field_archiver, 2},
  [70] =
    {field_archiverContact, 2},
  [71] =
    {field_dataOwner, 2},
  [72] =
    {field_dataOriginTimespan, 2},
  [73] =
    {field_lobFolder, 2},
  [74] =
    {field_key, 0},
    {field_value, 2},
  [76] =
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
  [5] = 4,
  [6] = 3,
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
  [17] = 10,
  [18] = 15,
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
  [36] = 28,
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
  [57] = 56,
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
  [71] = 66,
  [72] = 72,
  [73] = 65,
  [74] = 12,
  [75] = 75,
  [76] = 76,
  [77] = 60,
  [78] = 78,
  [79] = 65,
  [80] = 58,
  [81] = 81,
  [82] = 78,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 67,
  [87] = 65,
  [88] = 78,
  [89] = 78,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 61,
  [95] = 2,
  [96] = 68,
  [97] = 97,
  [98] = 72,
  [99] = 76,
  [100] = 70,
  [101] = 91,
  [102] = 81,
  [103] = 69,
  [104] = 85,
  [105] = 92,
  [106] = 93,
  [107] = 75,
  [108] = 90,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 112,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 126,
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
  [164] = 132,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 156,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 162,
  [182] = 153,
  [183] = 183,
  [184] = 183,
  [185] = 185,
  [186] = 185,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 60,
  [194] = 66,
  [195] = 67,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 197,
  [200] = 191,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 190,
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
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 204,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 241,
  [247] = 247,
  [248] = 232,
  [249] = 243,
  [250] = 250,
  [251] = 251,
  [252] = 250,
  [253] = 253,
  [254] = 251,
  [255] = 255,
  [256] = 236,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 259,
  [261] = 258,
  [262] = 262,
  [263] = 237,
  [264] = 262,
  [265] = 265,
  [266] = 66,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 67,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 60,
  [280] = 280,
  [281] = 267,
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
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 278,
  [302] = 302,
  [303] = 273,
  [304] = 272,
  [305] = 305,
  [306] = 286,
  [307] = 298,
  [308] = 308,
  [309] = 265,
  [310] = 288,
  [311] = 308,
  [312] = 299,
  [313] = 313,
  [314] = 277,
  [315] = 282,
  [316] = 280,
  [317] = 287,
  [318] = 318,
  [319] = 271,
  [320] = 276,
  [321] = 274,
  [322] = 297,
  [323] = 270,
  [324] = 268,
  [325] = 293,
  [326] = 318,
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
      if (eof) ADVANCE(17);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(7);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 7:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(26);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'U') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == ':') ADVANCE(18);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_short_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__short_descr_token1);
      if (lookahead == ' ') ADVANCE(29);
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
      if (lookahead == 'M') ADVANCE(5);
      if (lookahead == 'O') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'S') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'V') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(20);
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
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'w') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 69:
      if (lookahead == 'F') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_via);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 'k') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 103:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_dbname);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_Metadata);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(143);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_connection);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(155);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_dataOriginTimespan);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 16, .external_lex_state = 2},
  [2] = {.lex_state = 16, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 16, .external_lex_state = 3},
  [10] = {.lex_state = 16, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 16, .external_lex_state = 2},
  [15] = {.lex_state = 16, .external_lex_state = 2},
  [16] = {.lex_state = 16, .external_lex_state = 2},
  [17] = {.lex_state = 16, .external_lex_state = 2},
  [18] = {.lex_state = 16, .external_lex_state = 2},
  [19] = {.lex_state = 16, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 4},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 0, .external_lex_state = 3},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 4},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 5},
  [57] = {.lex_state = 0, .external_lex_state = 5},
  [58] = {.lex_state = 16, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 16, .external_lex_state = 3},
  [61] = {.lex_state = 16, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 6},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 6},
  [66] = {.lex_state = 16, .external_lex_state = 2},
  [67] = {.lex_state = 16, .external_lex_state = 3},
  [68] = {.lex_state = 16, .external_lex_state = 3},
  [69] = {.lex_state = 16, .external_lex_state = 3},
  [70] = {.lex_state = 16, .external_lex_state = 3},
  [71] = {.lex_state = 16, .external_lex_state = 3},
  [72] = {.lex_state = 16, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 6},
  [74] = {.lex_state = 16, .external_lex_state = 2},
  [75] = {.lex_state = 16, .external_lex_state = 3},
  [76] = {.lex_state = 16, .external_lex_state = 3},
  [77] = {.lex_state = 16, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 6},
  [79] = {.lex_state = 0, .external_lex_state = 6},
  [80] = {.lex_state = 16, .external_lex_state = 2},
  [81] = {.lex_state = 16, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 6},
  [83] = {.lex_state = 0, .external_lex_state = 5},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 16, .external_lex_state = 3},
  [86] = {.lex_state = 16, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 6},
  [88] = {.lex_state = 0, .external_lex_state = 6},
  [89] = {.lex_state = 0, .external_lex_state = 6},
  [90] = {.lex_state = 16, .external_lex_state = 3},
  [91] = {.lex_state = 16, .external_lex_state = 3},
  [92] = {.lex_state = 16, .external_lex_state = 3},
  [93] = {.lex_state = 16, .external_lex_state = 3},
  [94] = {.lex_state = 16, .external_lex_state = 2},
  [95] = {.lex_state = 16, .external_lex_state = 2},
  [96] = {.lex_state = 16, .external_lex_state = 2},
  [97] = {.lex_state = 16, .external_lex_state = 2},
  [98] = {.lex_state = 16, .external_lex_state = 2},
  [99] = {.lex_state = 16, .external_lex_state = 2},
  [100] = {.lex_state = 16, .external_lex_state = 2},
  [101] = {.lex_state = 16, .external_lex_state = 2},
  [102] = {.lex_state = 16, .external_lex_state = 2},
  [103] = {.lex_state = 16, .external_lex_state = 2},
  [104] = {.lex_state = 16, .external_lex_state = 2},
  [105] = {.lex_state = 16, .external_lex_state = 2},
  [106] = {.lex_state = 16, .external_lex_state = 2},
  [107] = {.lex_state = 16, .external_lex_state = 2},
  [108] = {.lex_state = 16, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 7},
  [110] = {.lex_state = 0, .external_lex_state = 7},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 8},
  [113] = {.lex_state = 0, .external_lex_state = 7},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 7},
  [116] = {.lex_state = 0, .external_lex_state = 7},
  [117] = {.lex_state = 0, .external_lex_state = 8},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 7},
  [122] = {.lex_state = 0, .external_lex_state = 7},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 3},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 7},
  [131] = {.lex_state = 0, .external_lex_state = 4},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 7},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 3},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 0, .external_lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 3},
  [145] = {.lex_state = 0, .external_lex_state = 3},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 3},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 0, .external_lex_state = 3},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 6},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0, .external_lex_state = 4},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 5},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0, .external_lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 4},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 6},
  [172] = {.lex_state = 0, .external_lex_state = 4},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 0, .external_lex_state = 5},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 3},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 0, .external_lex_state = 4},
  [182] = {.lex_state = 0, .external_lex_state = 4},
  [183] = {.lex_state = 0, .external_lex_state = 7},
  [184] = {.lex_state = 0, .external_lex_state = 7},
  [185] = {.lex_state = 0, .external_lex_state = 5},
  [186] = {.lex_state = 0, .external_lex_state = 6},
  [187] = {.lex_state = 0, .external_lex_state = 7},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 7},
  [191] = {.lex_state = 0, .external_lex_state = 7},
  [192] = {.lex_state = 0, .external_lex_state = 3},
  [193] = {.lex_state = 0, .external_lex_state = 7},
  [194] = {.lex_state = 0, .external_lex_state = 7},
  [195] = {.lex_state = 0, .external_lex_state = 7},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 3},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 3},
  [200] = {.lex_state = 0, .external_lex_state = 7},
  [201] = {.lex_state = 0, .external_lex_state = 3},
  [202] = {.lex_state = 0, .external_lex_state = 3},
  [203] = {.lex_state = 0, .external_lex_state = 3},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 7},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 7},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 3},
  [212] = {.lex_state = 0, .external_lex_state = 3},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 3},
  [216] = {.lex_state = 0, .external_lex_state = 3},
  [217] = {.lex_state = 0, .external_lex_state = 7},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 3},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 3},
  [222] = {.lex_state = 0, .external_lex_state = 7},
  [223] = {.lex_state = 0, .external_lex_state = 7},
  [224] = {.lex_state = 0, .external_lex_state = 7},
  [225] = {.lex_state = 0, .external_lex_state = 3},
  [226] = {.lex_state = 0, .external_lex_state = 3},
  [227] = {.lex_state = 0, .external_lex_state = 7},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 7},
  [230] = {.lex_state = 0, .external_lex_state = 7},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 9},
  [234] = {.lex_state = 0, .external_lex_state = 9},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 9},
  [241] = {.lex_state = 0, .external_lex_state = 9},
  [242] = {.lex_state = 0, .external_lex_state = 9},
  [243] = {.lex_state = 0, .external_lex_state = 9},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 9},
  [246] = {.lex_state = 0, .external_lex_state = 9},
  [247] = {.lex_state = 0, .external_lex_state = 9},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 9},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 9},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 9},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 9},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 9},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 9},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 10},
  [267] = {.lex_state = 0, .external_lex_state = 11},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 4, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 10},
  [276] = {.lex_state = 4, .external_lex_state = 2},
  [277] = {.lex_state = 0, .external_lex_state = 2},
  [278] = {.lex_state = 0, .external_lex_state = 2},
  [279] = {.lex_state = 0, .external_lex_state = 10},
  [280] = {.lex_state = 0, .external_lex_state = 9},
  [281] = {.lex_state = 0, .external_lex_state = 11},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 0, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 0, .external_lex_state = 10},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 0, .external_lex_state = 2},
  [292] = {.lex_state = 0, .external_lex_state = 2},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 2},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 28, .external_lex_state = 2},
  [297] = {.lex_state = 0, .external_lex_state = 2},
  [298] = {.lex_state = 0, .external_lex_state = 2},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 2},
  [303] = {.lex_state = 0, .external_lex_state = 2},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0, .external_lex_state = 2},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 2},
  [308] = {.lex_state = 0, .external_lex_state = 11},
  [309] = {.lex_state = 0, .external_lex_state = 2},
  [310] = {.lex_state = 0, .external_lex_state = 10},
  [311] = {.lex_state = 0, .external_lex_state = 11},
  [312] = {.lex_state = 0, .external_lex_state = 2},
  [313] = {.lex_state = 0, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 0, .external_lex_state = 2},
  [316] = {.lex_state = 0, .external_lex_state = 9},
  [317] = {.lex_state = 0, .external_lex_state = 2},
  [318] = {.lex_state = 0, .external_lex_state = 2},
  [319] = {.lex_state = 4, .external_lex_state = 2},
  [320] = {.lex_state = 4, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 0, .external_lex_state = 2},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 2},
  [326] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Metadata] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_dbname] = ACTIONS(1),
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
    [sym_source_file] = STATE(283),
    [sym_parameters] = STATE(14),
    [sym__statement] = STATE(16),
    [sym_nop] = STATE(16),
    [sym_set] = STATE(16),
    [sym_execute_using] = STATE(16),
    [sym_execute_sql] = STATE(16),
    [sym_siard_output] = STATE(16),
    [sym_siard_metadata] = STATE(16),
    [sym_for_loop] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Parameters] = ACTIONS(7),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_Execute] = ACTIONS(13),
    [anon_sym_Output] = ACTIONS(15),
    [anon_sym_Metadata] = ACTIONS(17),
    [anon_sym_For] = ACTIONS(19),
    [sym__comment] = ACTIONS(3),
    [sym__skip] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(23), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(21), 21,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiver,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
      anon_sym_For,
      sym_identifier,
  [33] = 19,
    ACTIONS(25), 1,
      anon_sym_dbname,
    ACTIONS(27), 1,
      anon_sym_description,
    ACTIONS(29), 1,
      anon_sym_archiver,
    ACTIONS(31), 1,
      anon_sym_archiverContact,
    ACTIONS(33), 1,
      anon_sym_dataOwner,
    ACTIONS(35), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(37), 1,
      anon_sym_lobFolder,
    ACTIONS(39), 1,
      anon_sym_Schema,
    STATE(24), 1,
      sym__siard_dataOriginTimespan,
    STATE(25), 1,
      sym__siard_dataOwner,
    STATE(26), 1,
      sym__siard_archiverContact,
    STATE(27), 1,
      sym__siard_archiver,
    STATE(29), 1,
      sym__siard_description,
    STATE(30), 1,
      sym__siard_dbname,
    STATE(37), 1,
      sym__siard_lobFolder,
    STATE(101), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(41), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(5), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [94] = 19,
    ACTIONS(25), 1,
      anon_sym_dbname,
    ACTIONS(27), 1,
      anon_sym_description,
    ACTIONS(29), 1,
      anon_sym_archiver,
    ACTIONS(31), 1,
      anon_sym_archiverContact,
    ACTIONS(33), 1,
      anon_sym_dataOwner,
    ACTIONS(35), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(37), 1,
      anon_sym_lobFolder,
    ACTIONS(39), 1,
      anon_sym_Schema,
    STATE(24), 1,
      sym__siard_dataOriginTimespan,
    STATE(25), 1,
      sym__siard_dataOwner,
    STATE(26), 1,
      sym__siard_archiverContact,
    STATE(27), 1,
      sym__siard_archiver,
    STATE(29), 1,
      sym__siard_description,
    STATE(30), 1,
      sym__siard_dbname,
    STATE(37), 1,
      sym__siard_lobFolder,
    STATE(75), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(43), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(7), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [155] = 19,
    ACTIONS(25), 1,
      anon_sym_dbname,
    ACTIONS(27), 1,
      anon_sym_description,
    ACTIONS(29), 1,
      anon_sym_archiver,
    ACTIONS(31), 1,
      anon_sym_archiverContact,
    ACTIONS(33), 1,
      anon_sym_dataOwner,
    ACTIONS(35), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(37), 1,
      anon_sym_lobFolder,
    ACTIONS(39), 1,
      anon_sym_Schema,
    STATE(24), 1,
      sym__siard_dataOriginTimespan,
    STATE(25), 1,
      sym__siard_dataOwner,
    STATE(26), 1,
      sym__siard_archiverContact,
    STATE(27), 1,
      sym__siard_archiver,
    STATE(29), 1,
      sym__siard_description,
    STATE(30), 1,
      sym__siard_dbname,
    STATE(37), 1,
      sym__siard_lobFolder,
    STATE(107), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(45), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(7), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [216] = 19,
    ACTIONS(25), 1,
      anon_sym_dbname,
    ACTIONS(27), 1,
      anon_sym_description,
    ACTIONS(29), 1,
      anon_sym_archiver,
    ACTIONS(31), 1,
      anon_sym_archiverContact,
    ACTIONS(33), 1,
      anon_sym_dataOwner,
    ACTIONS(35), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(37), 1,
      anon_sym_lobFolder,
    ACTIONS(39), 1,
      anon_sym_Schema,
    STATE(24), 1,
      sym__siard_dataOriginTimespan,
    STATE(25), 1,
      sym__siard_dataOwner,
    STATE(26), 1,
      sym__siard_archiverContact,
    STATE(27), 1,
      sym__siard_archiver,
    STATE(29), 1,
      sym__siard_description,
    STATE(30), 1,
      sym__siard_dbname,
    STATE(37), 1,
      sym__siard_lobFolder,
    STATE(91), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(47), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(4), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [277] = 18,
    ACTIONS(49), 1,
      anon_sym_dbname,
    ACTIONS(52), 1,
      anon_sym_description,
    ACTIONS(55), 1,
      anon_sym_archiver,
    ACTIONS(58), 1,
      anon_sym_archiverContact,
    ACTIONS(61), 1,
      anon_sym_dataOwner,
    ACTIONS(64), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(67), 1,
      anon_sym_lobFolder,
    ACTIONS(70), 1,
      anon_sym_Schema,
    STATE(24), 1,
      sym__siard_dataOriginTimespan,
    STATE(25), 1,
      sym__siard_dataOwner,
    STATE(26), 1,
      sym__siard_archiverContact,
    STATE(27), 1,
      sym__siard_archiver,
    STATE(29), 1,
      sym__siard_description,
    STATE(30), 1,
      sym__siard_dbname,
    STATE(37), 1,
      sym__siard_lobFolder,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(73), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(7), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [335] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(77), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(75), 16,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiver,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
      sym_identifier,
  [362] = 9,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(81), 1,
      anon_sym_Set,
    ACTIONS(83), 1,
      anon_sym_Execute,
    ACTIONS(85), 1,
      anon_sym_Output,
    ACTIONS(87), 1,
      anon_sym_Metadata,
    ACTIONS(89), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(91), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(10), 9,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [400] = 9,
    ACTIONS(93), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(96), 1,
      anon_sym_Set,
    ACTIONS(99), 1,
      anon_sym_Execute,
    ACTIONS(102), 1,
      anon_sym_Output,
    ACTIONS(105), 1,
      anon_sym_Metadata,
    ACTIONS(108), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(111), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(10), 9,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [438] = 3,
    ACTIONS(115), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(113), 16,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [464] = 3,
    ACTIONS(119), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(117), 16,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [490] = 3,
    ACTIONS(123), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(121), 16,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_Column,
      anon_sym_Field,
      anon_sym_Key,
      anon_sym_Check,
      anon_sym_View,
  [516] = 9,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Set,
    ACTIONS(13), 1,
      anon_sym_Execute,
    ACTIONS(15), 1,
      anon_sym_Output,
    ACTIONS(17), 1,
      anon_sym_Metadata,
    ACTIONS(19), 1,
      anon_sym_For,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(19), 9,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [553] = 9,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(81), 1,
      anon_sym_Set,
    ACTIONS(83), 1,
      anon_sym_Execute,
    ACTIONS(85), 1,
      anon_sym_Output,
    ACTIONS(87), 1,
      anon_sym_Metadata,
    ACTIONS(89), 1,
      anon_sym_For,
    STATE(197), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(9), 9,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [590] = 9,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Set,
    ACTIONS(13), 1,
      anon_sym_Execute,
    ACTIONS(15), 1,
      anon_sym_Output,
    ACTIONS(17), 1,
      anon_sym_Metadata,
    ACTIONS(19), 1,
      anon_sym_For,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(17), 9,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [627] = 9,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(130), 1,
      anon_sym_Set,
    ACTIONS(133), 1,
      anon_sym_Execute,
    ACTIONS(136), 1,
      anon_sym_Output,
    ACTIONS(139), 1,
      anon_sym_Metadata,
    ACTIONS(142), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(17), 9,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [664] = 9,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(81), 1,
      anon_sym_Set,
    ACTIONS(83), 1,
      anon_sym_Execute,
    ACTIONS(85), 1,
      anon_sym_Output,
    ACTIONS(87), 1,
      anon_sym_Metadata,
    ACTIONS(89), 1,
      anon_sym_For,
    STATE(199), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(9), 9,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [701] = 9,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Set,
    ACTIONS(13), 1,
      anon_sym_Execute,
    ACTIONS(15), 1,
      anon_sym_Output,
    ACTIONS(17), 1,
      anon_sym_Metadata,
    ACTIONS(19), 1,
      anon_sym_For,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(17), 9,
      sym__statement,
      sym_nop,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [738] = 9,
    ACTIONS(27), 1,
      anon_sym_description,
    ACTIONS(147), 1,
      anon_sym_Column,
    ACTIONS(149), 1,
      anon_sym_Key,
    ACTIONS(151), 1,
      anon_sym_Check,
    STATE(48), 1,
      sym__siard_description,
    STATE(152), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(153), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(22), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [771] = 9,
    ACTIONS(27), 1,
      anon_sym_description,
    ACTIONS(155), 1,
      anon_sym_Type,
    ACTIONS(157), 1,
      anon_sym_Table,
    ACTIONS(159), 1,
      anon_sym_View,
    STATE(47), 1,
      sym__siard_description,
    STATE(49), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(161), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(50), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [804] = 7,
    ACTIONS(147), 1,
      anon_sym_Column,
    ACTIONS(149), 1,
      anon_sym_Key,
    ACTIONS(151), 1,
      anon_sym_Check,
    STATE(169), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(163), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(55), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [831] = 3,
    ACTIONS(167), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(165), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [850] = 3,
    ACTIONS(171), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(169), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [869] = 3,
    ACTIONS(175), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(173), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [888] = 3,
    ACTIONS(179), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(177), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [907] = 3,
    ACTIONS(183), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(181), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [926] = 6,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_connection,
    ACTIONS(189), 1,
      anon_sym_result,
    ACTIONS(191), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(103), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [951] = 3,
    ACTIONS(195), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(193), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [970] = 3,
    ACTIONS(199), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(197), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [989] = 3,
    ACTIONS(203), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(201), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1008] = 3,
    ACTIONS(207), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(205), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1027] = 3,
    ACTIONS(211), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(209), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1046] = 3,
    ACTIONS(215), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(213), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1065] = 3,
    ACTIONS(219), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(217), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1084] = 6,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_connection,
    ACTIONS(225), 1,
      anon_sym_result,
    ACTIONS(227), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(69), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1109] = 3,
    ACTIONS(231), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(229), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1128] = 3,
    ACTIONS(235), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(233), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1147] = 3,
    ACTIONS(239), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(237), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1166] = 3,
    ACTIONS(243), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(241), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1185] = 3,
    ACTIONS(247), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(245), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1204] = 3,
    ACTIONS(251), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(249), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1223] = 3,
    ACTIONS(255), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(253), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1242] = 3,
    ACTIONS(259), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(257), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1261] = 3,
    ACTIONS(263), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(261), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1280] = 7,
    ACTIONS(147), 1,
      anon_sym_Column,
    ACTIONS(149), 1,
      anon_sym_Key,
    ACTIONS(151), 1,
      anon_sym_Check,
    STATE(144), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(265), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(55), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1307] = 7,
    ACTIONS(155), 1,
      anon_sym_Type,
    ACTIONS(157), 1,
      anon_sym_Table,
    ACTIONS(159), 1,
      anon_sym_View,
    STATE(52), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(267), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(54), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1334] = 7,
    ACTIONS(147), 1,
      anon_sym_Column,
    ACTIONS(149), 1,
      anon_sym_Key,
    ACTIONS(151), 1,
      anon_sym_Check,
    STATE(170), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(269), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(46), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1361] = 3,
    ACTIONS(273), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(271), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1380] = 7,
    ACTIONS(155), 1,
      anon_sym_Type,
    ACTIONS(157), 1,
      anon_sym_Table,
    ACTIONS(159), 1,
      anon_sym_View,
    STATE(53), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(275), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(59), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1407] = 3,
    ACTIONS(279), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(277), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1426] = 3,
    ACTIONS(283), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(281), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1445] = 3,
    ACTIONS(287), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(285), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1464] = 7,
    ACTIONS(155), 1,
      anon_sym_Type,
    ACTIONS(157), 1,
      anon_sym_Table,
    ACTIONS(159), 1,
      anon_sym_View,
    STATE(51), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(289), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(59), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1491] = 6,
    ACTIONS(291), 1,
      anon_sym_Column,
    ACTIONS(294), 1,
      anon_sym_Key,
    ACTIONS(297), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(300), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(55), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1515] = 7,
    ACTIONS(304), 1,
      sym__inter_start,
    ACTIONS(306), 1,
      sym__raw,
    STATE(95), 1,
      sym__ded,
    STATE(160), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(302), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(83), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1541] = 7,
    ACTIONS(304), 1,
      sym__inter_start,
    ACTIONS(306), 1,
      sym__raw,
    STATE(2), 1,
      sym__ded,
    STATE(160), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(308), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(83), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1567] = 3,
    ACTIONS(312), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(310), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1585] = 6,
    ACTIONS(314), 1,
      anon_sym_Type,
    ACTIONS(317), 1,
      anon_sym_Table,
    ACTIONS(320), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(323), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(59), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1609] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(325), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1624] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(327), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1639] = 7,
    ACTIONS(329), 1,
      sym_escape_sequence,
    ACTIONS(332), 1,
      sym__inter_start,
    ACTIONS(335), 1,
      sym__string_content,
    ACTIONS(338), 1,
      sym__string_end,
    STATE(171), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(62), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1664] = 7,
    ACTIONS(27), 1,
      anon_sym_description,
    ACTIONS(340), 1,
      anon_sym_Field,
    STATE(129), 1,
      sym__siard_description,
    STATE(141), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(342), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(125), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1689] = 7,
    ACTIONS(27), 1,
      anon_sym_description,
    ACTIONS(340), 1,
      anon_sym_Field,
    STATE(120), 1,
      sym__siard_description,
    STATE(219), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(344), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(119), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [1714] = 7,
    ACTIONS(346), 1,
      sym_escape_sequence,
    ACTIONS(348), 1,
      sym__inter_start,
    ACTIONS(350), 1,
      sym__string_content,
    ACTIONS(352), 1,
      sym__string_end,
    STATE(171), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(62), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1739] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1754] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1769] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(358), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1784] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(360), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1799] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(362), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1814] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1829] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(364), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1844] = 7,
    ACTIONS(346), 1,
      sym_escape_sequence,
    ACTIONS(348), 1,
      sym__inter_start,
    ACTIONS(350), 1,
      sym__string_content,
    ACTIONS(366), 1,
      sym__string_end,
    STATE(171), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(62), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1869] = 3,
    ACTIONS(117), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(119), 7,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_description,
      anon_sym_For,
      sym_identifier,
  [1886] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(368), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1901] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(370), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1916] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(325), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1931] = 7,
    ACTIONS(348), 1,
      sym__inter_start,
    ACTIONS(350), 1,
      sym__string_content,
    ACTIONS(372), 1,
      sym_escape_sequence,
    ACTIONS(374), 1,
      sym__string_end,
    STATE(171), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(79), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1956] = 7,
    ACTIONS(346), 1,
      sym_escape_sequence,
    ACTIONS(348), 1,
      sym__inter_start,
    ACTIONS(350), 1,
      sym__string_content,
    ACTIONS(376), 1,
      sym__string_end,
    STATE(171), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(62), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1981] = 3,
    ACTIONS(378), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(310), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1998] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(380), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2013] = 7,
    ACTIONS(348), 1,
      sym__inter_start,
    ACTIONS(350), 1,
      sym__string_content,
    ACTIONS(382), 1,
      sym_escape_sequence,
    ACTIONS(384), 1,
      sym__string_end,
    STATE(171), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(87), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2038] = 6,
    ACTIONS(388), 1,
      sym__inter_start,
    ACTIONS(391), 1,
      sym__raw,
    STATE(160), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(386), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(83), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2061] = 7,
    ACTIONS(27), 1,
      anon_sym_description,
    ACTIONS(147), 1,
      anon_sym_Column,
    STATE(111), 1,
      sym__siard_description,
    STATE(142), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(394), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(123), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2086] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(396), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2101] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2116] = 7,
    ACTIONS(346), 1,
      sym_escape_sequence,
    ACTIONS(348), 1,
      sym__inter_start,
    ACTIONS(350), 1,
      sym__string_content,
    ACTIONS(398), 1,
      sym__string_end,
    STATE(171), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(62), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2141] = 7,
    ACTIONS(348), 1,
      sym__inter_start,
    ACTIONS(350), 1,
      sym__string_content,
    ACTIONS(400), 1,
      sym_escape_sequence,
    ACTIONS(402), 1,
      sym__string_end,
    STATE(171), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(65), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2166] = 7,
    ACTIONS(348), 1,
      sym__inter_start,
    ACTIONS(350), 1,
      sym__string_content,
    ACTIONS(404), 1,
      sym_escape_sequence,
    ACTIONS(406), 1,
      sym__string_end,
    STATE(171), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(73), 3,
      sym_string_content,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2191] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(408), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2206] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(410), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2221] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(412), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2236] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(414), 8,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2251] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(327), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2265] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(23), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2279] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(358), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2293] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(416), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2307] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(364), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2321] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(370), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2335] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(362), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2349] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(410), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2363] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(380), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2377] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(360), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2391] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(396), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2405] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(412), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2419] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(414), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2433] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(368), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2447] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(408), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2461] = 6,
    ACTIONS(418), 1,
      anon_sym_COLON,
    ACTIONS(420), 1,
      aux_sym__short_descr_token1,
    STATE(173), 1,
      sym__short_descr,
    STATE(174), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(422), 2,
      sym__newline,
      sym__end_of_file,
  [2482] = 6,
    ACTIONS(420), 1,
      aux_sym__short_descr_token1,
    ACTIONS(424), 1,
      anon_sym_COLON,
    STATE(38), 1,
      sym__short_descr,
    STATE(39), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(426), 2,
      sym__newline,
      sym__end_of_file,
  [2503] = 5,
    ACTIONS(147), 1,
      anon_sym_Column,
    STATE(161), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(428), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(124), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2522] = 5,
    ACTIONS(304), 1,
      sym__inter_start,
    ACTIONS(306), 1,
      sym__raw,
    STATE(160), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(57), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2541] = 6,
    ACTIONS(420), 1,
      aux_sym__short_descr_token1,
    ACTIONS(430), 1,
      anon_sym_COLON,
    STATE(151), 1,
      sym__nl,
    STATE(154), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(432), 2,
      sym__newline,
      sym__end_of_file,
  [2562] = 5,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(97), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(436), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(163), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2581] = 6,
    ACTIONS(420), 1,
      aux_sym__short_descr_token1,
    ACTIONS(438), 1,
      anon_sym_COLON,
    STATE(149), 1,
      sym__nl,
    STATE(150), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(440), 2,
      sym__newline,
      sym__end_of_file,
  [2602] = 6,
    ACTIONS(420), 1,
      aux_sym__short_descr_token1,
    ACTIONS(442), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym__nl,
    STATE(147), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(444), 2,
      sym__newline,
      sym__end_of_file,
  [2623] = 5,
    ACTIONS(304), 1,
      sym__inter_start,
    ACTIONS(306), 1,
      sym__raw,
    STATE(160), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(56), 3,
      sym_interpolation,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2642] = 5,
    ACTIONS(340), 1,
      anon_sym_Field,
    STATE(211), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(446), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(138), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2661] = 5,
    ACTIONS(340), 1,
      anon_sym_Field,
    STATE(212), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(448), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(138), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2680] = 5,
    ACTIONS(340), 1,
      anon_sym_Field,
    STATE(216), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(450), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(118), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2699] = 6,
    ACTIONS(420), 1,
      aux_sym__short_descr_token1,
    ACTIONS(452), 1,
      anon_sym_COLON,
    STATE(179), 1,
      sym__short_descr,
    STATE(180), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(454), 2,
      sym__newline,
      sym__end_of_file,
  [2720] = 6,
    ACTIONS(420), 1,
      aux_sym__short_descr_token1,
    ACTIONS(456), 1,
      anon_sym_COLON,
    STATE(176), 1,
      sym__short_descr,
    STATE(177), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(458), 2,
      sym__newline,
      sym__end_of_file,
  [2741] = 5,
    ACTIONS(147), 1,
      anon_sym_Column,
    STATE(159), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(460), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(157), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2760] = 5,
    ACTIONS(147), 1,
      anon_sym_Column,
    STATE(143), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(462), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(157), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2779] = 5,
    ACTIONS(340), 1,
      anon_sym_Field,
    STATE(139), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(464), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(138), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2798] = 5,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(76), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(468), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(148), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [2817] = 5,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(99), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(470), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(148), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [2836] = 5,
    ACTIONS(340), 1,
      anon_sym_Field,
    STATE(168), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(472), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(138), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2855] = 5,
    ACTIONS(340), 1,
      anon_sym_Field,
    STATE(140), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(474), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(128), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2874] = 6,
    ACTIONS(420), 1,
      aux_sym__short_descr_token1,
    ACTIONS(476), 1,
      anon_sym_COLON,
    STATE(221), 1,
      sym__nl,
    STATE(226), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(478), 2,
      sym__newline,
      sym__end_of_file,
  [2895] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(223), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2911] = 4,
    ACTIONS(191), 1,
      sym__string_start,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(236), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2927] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(187), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2943] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(227), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2959] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(224), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2975] = 5,
    ACTIONS(420), 1,
      aux_sym__short_descr_token1,
    STATE(201), 1,
      sym__short_descr,
    STATE(202), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(486), 2,
      sym__newline,
      sym__end_of_file,
  [2993] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(222), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3009] = 4,
    ACTIONS(488), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(491), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(138), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3025] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(493), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3037] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(495), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3049] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(497), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3061] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(499), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3073] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(501), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3085] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(503), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3097] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(505), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3109] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(208), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3125] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(507), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3137] = 4,
    ACTIONS(509), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(512), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(148), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3153] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(514), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3165] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(516), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3177] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(518), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3189] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(520), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3201] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(191), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3217] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(522), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3229] = 4,
    ACTIONS(526), 1,
      sym__string_content,
    STATE(155), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(524), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [3245] = 4,
    ACTIONS(529), 1,
      sym_identifier,
    ACTIONS(531), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(288), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3261] = 4,
    ACTIONS(533), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(536), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(157), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3277] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(229), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3293] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(538), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3305] = 4,
    ACTIONS(542), 1,
      sym__raw,
    STATE(175), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(540), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [3321] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(544), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3333] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(184), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3349] = 4,
    ACTIONS(546), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(549), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(163), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [3365] = 4,
    ACTIONS(191), 1,
      sym__string_start,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(256), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3381] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(230), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3397] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(551), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3409] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(553), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3421] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(555), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3433] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(557), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3445] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(559), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3457] = 4,
    ACTIONS(563), 1,
      sym__string_content,
    STATE(155), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(561), 3,
      sym__inter_start,
      sym__string_end,
      sym_escape_sequence,
  [3473] = 4,
    ACTIONS(529), 1,
      sym_identifier,
    ACTIONS(531), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(310), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3489] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(565), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3501] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(567), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3513] = 4,
    ACTIONS(571), 1,
      sym__raw,
    STATE(175), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(569), 3,
      sym__dedent,
      sym__inter_start,
      sym__end_of_file,
  [3529] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(574), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3541] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(576), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3553] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(578), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3565] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(580), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3577] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(582), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3589] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(183), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3605] = 4,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(200), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3621] = 5,
    ACTIONS(584), 1,
      anon_sym_with,
    ACTIONS(586), 1,
      sym__newline,
    ACTIONS(588), 1,
      sym__end_of_file,
    STATE(61), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3638] = 5,
    ACTIONS(590), 1,
      anon_sym_with,
    ACTIONS(592), 1,
      sym__newline,
    ACTIONS(594), 1,
      sym__end_of_file,
    STATE(94), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3655] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(596), 4,
      sym__dedent,
      sym__inter_start,
      sym__raw,
      sym__end_of_file,
  [3666] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(596), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      sym_escape_sequence,
  [3677] = 3,
    STATE(41), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(598), 2,
      sym__newline,
      sym__end_of_file,
  [3689] = 3,
    STATE(167), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(600), 2,
      sym__dedent,
      sym__end_of_file,
  [3701] = 4,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3715] = 3,
    STATE(68), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(606), 2,
      sym__newline,
      sym__end_of_file,
  [3727] = 3,
    STATE(104), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(608), 2,
      sym__newline,
      sym__end_of_file,
  [3739] = 3,
    STATE(178), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(610), 2,
      sym__dedent,
      sym__end_of_file,
  [3751] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(325), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3761] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3771] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3781] = 3,
    ACTIONS(434), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(114), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [3793] = 3,
    STATE(92), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(612), 2,
      sym__dedent,
      sym__end_of_file,
  [3805] = 4,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3819] = 3,
    STATE(105), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(616), 2,
      sym__dedent,
      sym__end_of_file,
  [3831] = 3,
    STATE(85), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(618), 2,
      sym__newline,
      sym__end_of_file,
  [3843] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(620), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3853] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(622), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3863] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(624), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3873] = 3,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(126), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3885] = 4,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(628), 1,
      anon_sym_EQ,
    STATE(32), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3899] = 3,
    STATE(96), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(630), 2,
      sym__newline,
      sym__end_of_file,
  [3911] = 4,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(632), 1,
      anon_sym_EQ,
    STATE(11), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3925] = 3,
    STATE(203), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(634), 2,
      sym__newline,
      sym__end_of_file,
  [3937] = 4,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_EQ,
    STATE(35), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3951] = 4,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(638), 1,
      anon_sym_EQ,
    STATE(33), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3965] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(640), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [3975] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(642), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [3985] = 4,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_EQ,
    STATE(23), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3999] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4013] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(651), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4023] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(653), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4033] = 3,
    STATE(8), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(655), 2,
      sym__newline,
      sym__end_of_file,
  [4045] = 4,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(657), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4059] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(659), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4069] = 4,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(661), 1,
      anon_sym_EQ,
    STATE(34), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4083] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(663), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4093] = 3,
    STATE(45), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(665), 2,
      sym__newline,
      sym__end_of_file,
  [4105] = 3,
    STATE(44), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(667), 2,
      sym__newline,
      sym__end_of_file,
  [4117] = 3,
    STATE(43), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(669), 2,
      sym__newline,
      sym__end_of_file,
  [4129] = 3,
    STATE(166), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(671), 2,
      sym__dedent,
      sym__end_of_file,
  [4141] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(673), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4151] = 3,
    STATE(42), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(675), 2,
      sym__newline,
      sym__end_of_file,
  [4163] = 3,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(127), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4175] = 3,
    STATE(13), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(677), 2,
      sym__newline,
      sym__end_of_file,
  [4187] = 3,
    STATE(40), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(679), 2,
      sym__newline,
      sym__end_of_file,
  [4199] = 4,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(681), 1,
      anon_sym_EQ,
    STATE(215), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4213] = 3,
    ACTIONS(683), 1,
      anon_sym_using,
    ACTIONS(685), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4224] = 3,
    ACTIONS(687), 1,
      sym__newline,
    STATE(196), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4235] = 3,
    ACTIONS(689), 1,
      sym__newline,
    STATE(64), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4246] = 3,
    ACTIONS(27), 1,
      anon_sym_description,
    STATE(192), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4257] = 3,
    ACTIONS(626), 1,
      anon_sym_COLON,
    STATE(70), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4268] = 3,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    STATE(324), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4279] = 3,
    ACTIONS(27), 1,
      anon_sym_description,
    STATE(188), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4290] = 3,
    ACTIONS(27), 1,
      anon_sym_description,
    STATE(225), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4301] = 3,
    ACTIONS(689), 1,
      sym__newline,
    STATE(21), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4312] = 3,
    ACTIONS(687), 1,
      sym__newline,
    STATE(18), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4323] = 3,
    ACTIONS(687), 1,
      sym__newline,
    STATE(238), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4334] = 3,
    ACTIONS(687), 1,
      sym__newline,
    STATE(204), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4345] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(649), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4354] = 3,
    ACTIONS(687), 1,
      sym__newline,
    STATE(239), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4365] = 3,
    ACTIONS(687), 1,
      sym__newline,
    STATE(15), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4376] = 3,
    ACTIONS(689), 1,
      sym__newline,
    STATE(63), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4387] = 3,
    ACTIONS(693), 1,
      anon_sym_using,
    ACTIONS(695), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4398] = 3,
    ACTIONS(687), 1,
      sym__newline,
    STATE(228), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4409] = 3,
    ACTIONS(697), 1,
      anon_sym_COLON,
    STATE(106), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4420] = 3,
    ACTIONS(626), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4431] = 3,
    ACTIONS(699), 1,
      anon_sym_COLON,
    STATE(93), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4442] = 3,
    ACTIONS(687), 1,
      sym__newline,
    STATE(235), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4453] = 3,
    ACTIONS(701), 1,
      anon_sym_COLON,
    STATE(98), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4464] = 3,
    ACTIONS(689), 1,
      sym__newline,
    STATE(20), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4475] = 3,
    ACTIONS(701), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4486] = 3,
    ACTIONS(689), 1,
      sym__newline,
    STATE(84), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4497] = 3,
    ACTIONS(697), 1,
      anon_sym_COLON,
    STATE(108), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4508] = 3,
    ACTIONS(701), 1,
      anon_sym_COLON,
    STATE(102), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4519] = 3,
    ACTIONS(626), 1,
      anon_sym_COLON,
    STATE(81), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4530] = 3,
    ACTIONS(699), 1,
      anon_sym_COLON,
    STATE(90), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4541] = 3,
    ACTIONS(689), 1,
      sym__newline,
    STATE(3), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4552] = 3,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    STATE(268), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4563] = 3,
    ACTIONS(689), 1,
      sym__newline,
    STATE(6), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4574] = 2,
    ACTIONS(703), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4582] = 2,
    ACTIONS(354), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4590] = 2,
    ACTIONS(705), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4598] = 2,
    ACTIONS(707), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4606] = 2,
    ACTIONS(709), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4614] = 2,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4622] = 2,
    ACTIONS(713), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4630] = 2,
    ACTIONS(715), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4638] = 2,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4646] = 2,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4654] = 2,
    ACTIONS(356), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4662] = 2,
    ACTIONS(721), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4670] = 2,
    ACTIONS(723), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4678] = 2,
    ACTIONS(725), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4686] = 2,
    ACTIONS(325), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4694] = 2,
    ACTIONS(727), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4702] = 2,
    ACTIONS(729), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4710] = 2,
    ACTIONS(731), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4718] = 2,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4726] = 2,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4734] = 2,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4742] = 2,
    ACTIONS(739), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4750] = 2,
    ACTIONS(741), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4758] = 2,
    ACTIONS(743), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4766] = 2,
    ACTIONS(745), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4774] = 2,
    ACTIONS(747), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4782] = 2,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4790] = 2,
    ACTIONS(751), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4798] = 2,
    ACTIONS(753), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4806] = 2,
    ACTIONS(755), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4814] = 2,
    ACTIONS(757), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4822] = 2,
    ACTIONS(759), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4830] = 2,
    ACTIONS(761), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4838] = 2,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4846] = 2,
    ACTIONS(765), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4854] = 2,
    ACTIONS(767), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4862] = 2,
    ACTIONS(769), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4870] = 2,
    ACTIONS(771), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4878] = 2,
    ACTIONS(773), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4886] = 2,
    ACTIONS(775), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4894] = 2,
    ACTIONS(777), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4902] = 2,
    ACTIONS(779), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4910] = 2,
    ACTIONS(781), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4918] = 2,
    ACTIONS(783), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4926] = 2,
    ACTIONS(785), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4934] = 2,
    ACTIONS(787), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4942] = 2,
    ACTIONS(789), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4950] = 2,
    ACTIONS(791), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4958] = 2,
    ACTIONS(793), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4966] = 2,
    ACTIONS(795), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4974] = 2,
    ACTIONS(797), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4982] = 2,
    ACTIONS(799), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4990] = 2,
    ACTIONS(801), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4998] = 2,
    ACTIONS(803), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5006] = 2,
    ACTIONS(805), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5014] = 2,
    ACTIONS(807), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5022] = 2,
    ACTIONS(809), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5030] = 2,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5038] = 2,
    ACTIONS(813), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5046] = 2,
    ACTIONS(815), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5054] = 2,
    ACTIONS(817), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5062] = 2,
    ACTIONS(819), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 155,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 277,
  [SMALL_STATE(8)] = 335,
  [SMALL_STATE(9)] = 362,
  [SMALL_STATE(10)] = 400,
  [SMALL_STATE(11)] = 438,
  [SMALL_STATE(12)] = 464,
  [SMALL_STATE(13)] = 490,
  [SMALL_STATE(14)] = 516,
  [SMALL_STATE(15)] = 553,
  [SMALL_STATE(16)] = 590,
  [SMALL_STATE(17)] = 627,
  [SMALL_STATE(18)] = 664,
  [SMALL_STATE(19)] = 701,
  [SMALL_STATE(20)] = 738,
  [SMALL_STATE(21)] = 771,
  [SMALL_STATE(22)] = 804,
  [SMALL_STATE(23)] = 831,
  [SMALL_STATE(24)] = 850,
  [SMALL_STATE(25)] = 869,
  [SMALL_STATE(26)] = 888,
  [SMALL_STATE(27)] = 907,
  [SMALL_STATE(28)] = 926,
  [SMALL_STATE(29)] = 951,
  [SMALL_STATE(30)] = 970,
  [SMALL_STATE(31)] = 989,
  [SMALL_STATE(32)] = 1008,
  [SMALL_STATE(33)] = 1027,
  [SMALL_STATE(34)] = 1046,
  [SMALL_STATE(35)] = 1065,
  [SMALL_STATE(36)] = 1084,
  [SMALL_STATE(37)] = 1109,
  [SMALL_STATE(38)] = 1128,
  [SMALL_STATE(39)] = 1147,
  [SMALL_STATE(40)] = 1166,
  [SMALL_STATE(41)] = 1185,
  [SMALL_STATE(42)] = 1204,
  [SMALL_STATE(43)] = 1223,
  [SMALL_STATE(44)] = 1242,
  [SMALL_STATE(45)] = 1261,
  [SMALL_STATE(46)] = 1280,
  [SMALL_STATE(47)] = 1307,
  [SMALL_STATE(48)] = 1334,
  [SMALL_STATE(49)] = 1361,
  [SMALL_STATE(50)] = 1380,
  [SMALL_STATE(51)] = 1407,
  [SMALL_STATE(52)] = 1426,
  [SMALL_STATE(53)] = 1445,
  [SMALL_STATE(54)] = 1464,
  [SMALL_STATE(55)] = 1491,
  [SMALL_STATE(56)] = 1515,
  [SMALL_STATE(57)] = 1541,
  [SMALL_STATE(58)] = 1567,
  [SMALL_STATE(59)] = 1585,
  [SMALL_STATE(60)] = 1609,
  [SMALL_STATE(61)] = 1624,
  [SMALL_STATE(62)] = 1639,
  [SMALL_STATE(63)] = 1664,
  [SMALL_STATE(64)] = 1689,
  [SMALL_STATE(65)] = 1714,
  [SMALL_STATE(66)] = 1739,
  [SMALL_STATE(67)] = 1754,
  [SMALL_STATE(68)] = 1769,
  [SMALL_STATE(69)] = 1784,
  [SMALL_STATE(70)] = 1799,
  [SMALL_STATE(71)] = 1814,
  [SMALL_STATE(72)] = 1829,
  [SMALL_STATE(73)] = 1844,
  [SMALL_STATE(74)] = 1869,
  [SMALL_STATE(75)] = 1886,
  [SMALL_STATE(76)] = 1901,
  [SMALL_STATE(77)] = 1916,
  [SMALL_STATE(78)] = 1931,
  [SMALL_STATE(79)] = 1956,
  [SMALL_STATE(80)] = 1981,
  [SMALL_STATE(81)] = 1998,
  [SMALL_STATE(82)] = 2013,
  [SMALL_STATE(83)] = 2038,
  [SMALL_STATE(84)] = 2061,
  [SMALL_STATE(85)] = 2086,
  [SMALL_STATE(86)] = 2101,
  [SMALL_STATE(87)] = 2116,
  [SMALL_STATE(88)] = 2141,
  [SMALL_STATE(89)] = 2166,
  [SMALL_STATE(90)] = 2191,
  [SMALL_STATE(91)] = 2206,
  [SMALL_STATE(92)] = 2221,
  [SMALL_STATE(93)] = 2236,
  [SMALL_STATE(94)] = 2251,
  [SMALL_STATE(95)] = 2265,
  [SMALL_STATE(96)] = 2279,
  [SMALL_STATE(97)] = 2293,
  [SMALL_STATE(98)] = 2307,
  [SMALL_STATE(99)] = 2321,
  [SMALL_STATE(100)] = 2335,
  [SMALL_STATE(101)] = 2349,
  [SMALL_STATE(102)] = 2363,
  [SMALL_STATE(103)] = 2377,
  [SMALL_STATE(104)] = 2391,
  [SMALL_STATE(105)] = 2405,
  [SMALL_STATE(106)] = 2419,
  [SMALL_STATE(107)] = 2433,
  [SMALL_STATE(108)] = 2447,
  [SMALL_STATE(109)] = 2461,
  [SMALL_STATE(110)] = 2482,
  [SMALL_STATE(111)] = 2503,
  [SMALL_STATE(112)] = 2522,
  [SMALL_STATE(113)] = 2541,
  [SMALL_STATE(114)] = 2562,
  [SMALL_STATE(115)] = 2581,
  [SMALL_STATE(116)] = 2602,
  [SMALL_STATE(117)] = 2623,
  [SMALL_STATE(118)] = 2642,
  [SMALL_STATE(119)] = 2661,
  [SMALL_STATE(120)] = 2680,
  [SMALL_STATE(121)] = 2699,
  [SMALL_STATE(122)] = 2720,
  [SMALL_STATE(123)] = 2741,
  [SMALL_STATE(124)] = 2760,
  [SMALL_STATE(125)] = 2779,
  [SMALL_STATE(126)] = 2798,
  [SMALL_STATE(127)] = 2817,
  [SMALL_STATE(128)] = 2836,
  [SMALL_STATE(129)] = 2855,
  [SMALL_STATE(130)] = 2874,
  [SMALL_STATE(131)] = 2895,
  [SMALL_STATE(132)] = 2911,
  [SMALL_STATE(133)] = 2927,
  [SMALL_STATE(134)] = 2943,
  [SMALL_STATE(135)] = 2959,
  [SMALL_STATE(136)] = 2975,
  [SMALL_STATE(137)] = 2993,
  [SMALL_STATE(138)] = 3009,
  [SMALL_STATE(139)] = 3025,
  [SMALL_STATE(140)] = 3037,
  [SMALL_STATE(141)] = 3049,
  [SMALL_STATE(142)] = 3061,
  [SMALL_STATE(143)] = 3073,
  [SMALL_STATE(144)] = 3085,
  [SMALL_STATE(145)] = 3097,
  [SMALL_STATE(146)] = 3109,
  [SMALL_STATE(147)] = 3125,
  [SMALL_STATE(148)] = 3137,
  [SMALL_STATE(149)] = 3153,
  [SMALL_STATE(150)] = 3165,
  [SMALL_STATE(151)] = 3177,
  [SMALL_STATE(152)] = 3189,
  [SMALL_STATE(153)] = 3201,
  [SMALL_STATE(154)] = 3217,
  [SMALL_STATE(155)] = 3229,
  [SMALL_STATE(156)] = 3245,
  [SMALL_STATE(157)] = 3261,
  [SMALL_STATE(158)] = 3277,
  [SMALL_STATE(159)] = 3293,
  [SMALL_STATE(160)] = 3305,
  [SMALL_STATE(161)] = 3321,
  [SMALL_STATE(162)] = 3333,
  [SMALL_STATE(163)] = 3349,
  [SMALL_STATE(164)] = 3365,
  [SMALL_STATE(165)] = 3381,
  [SMALL_STATE(166)] = 3397,
  [SMALL_STATE(167)] = 3409,
  [SMALL_STATE(168)] = 3421,
  [SMALL_STATE(169)] = 3433,
  [SMALL_STATE(170)] = 3445,
  [SMALL_STATE(171)] = 3457,
  [SMALL_STATE(172)] = 3473,
  [SMALL_STATE(173)] = 3489,
  [SMALL_STATE(174)] = 3501,
  [SMALL_STATE(175)] = 3513,
  [SMALL_STATE(176)] = 3529,
  [SMALL_STATE(177)] = 3541,
  [SMALL_STATE(178)] = 3553,
  [SMALL_STATE(179)] = 3565,
  [SMALL_STATE(180)] = 3577,
  [SMALL_STATE(181)] = 3589,
  [SMALL_STATE(182)] = 3605,
  [SMALL_STATE(183)] = 3621,
  [SMALL_STATE(184)] = 3638,
  [SMALL_STATE(185)] = 3655,
  [SMALL_STATE(186)] = 3666,
  [SMALL_STATE(187)] = 3677,
  [SMALL_STATE(188)] = 3689,
  [SMALL_STATE(189)] = 3701,
  [SMALL_STATE(190)] = 3715,
  [SMALL_STATE(191)] = 3727,
  [SMALL_STATE(192)] = 3739,
  [SMALL_STATE(193)] = 3751,
  [SMALL_STATE(194)] = 3761,
  [SMALL_STATE(195)] = 3771,
  [SMALL_STATE(196)] = 3781,
  [SMALL_STATE(197)] = 3793,
  [SMALL_STATE(198)] = 3805,
  [SMALL_STATE(199)] = 3819,
  [SMALL_STATE(200)] = 3831,
  [SMALL_STATE(201)] = 3843,
  [SMALL_STATE(202)] = 3853,
  [SMALL_STATE(203)] = 3863,
  [SMALL_STATE(204)] = 3873,
  [SMALL_STATE(205)] = 3885,
  [SMALL_STATE(206)] = 3899,
  [SMALL_STATE(207)] = 3911,
  [SMALL_STATE(208)] = 3925,
  [SMALL_STATE(209)] = 3937,
  [SMALL_STATE(210)] = 3951,
  [SMALL_STATE(211)] = 3965,
  [SMALL_STATE(212)] = 3975,
  [SMALL_STATE(213)] = 3985,
  [SMALL_STATE(214)] = 3999,
  [SMALL_STATE(215)] = 4013,
  [SMALL_STATE(216)] = 4023,
  [SMALL_STATE(217)] = 4033,
  [SMALL_STATE(218)] = 4045,
  [SMALL_STATE(219)] = 4059,
  [SMALL_STATE(220)] = 4069,
  [SMALL_STATE(221)] = 4083,
  [SMALL_STATE(222)] = 4093,
  [SMALL_STATE(223)] = 4105,
  [SMALL_STATE(224)] = 4117,
  [SMALL_STATE(225)] = 4129,
  [SMALL_STATE(226)] = 4141,
  [SMALL_STATE(227)] = 4151,
  [SMALL_STATE(228)] = 4163,
  [SMALL_STATE(229)] = 4175,
  [SMALL_STATE(230)] = 4187,
  [SMALL_STATE(231)] = 4199,
  [SMALL_STATE(232)] = 4213,
  [SMALL_STATE(233)] = 4224,
  [SMALL_STATE(234)] = 4235,
  [SMALL_STATE(235)] = 4246,
  [SMALL_STATE(236)] = 4257,
  [SMALL_STATE(237)] = 4268,
  [SMALL_STATE(238)] = 4279,
  [SMALL_STATE(239)] = 4290,
  [SMALL_STATE(240)] = 4301,
  [SMALL_STATE(241)] = 4312,
  [SMALL_STATE(242)] = 4323,
  [SMALL_STATE(243)] = 4334,
  [SMALL_STATE(244)] = 4345,
  [SMALL_STATE(245)] = 4354,
  [SMALL_STATE(246)] = 4365,
  [SMALL_STATE(247)] = 4376,
  [SMALL_STATE(248)] = 4387,
  [SMALL_STATE(249)] = 4398,
  [SMALL_STATE(250)] = 4409,
  [SMALL_STATE(251)] = 4420,
  [SMALL_STATE(252)] = 4431,
  [SMALL_STATE(253)] = 4442,
  [SMALL_STATE(254)] = 4453,
  [SMALL_STATE(255)] = 4464,
  [SMALL_STATE(256)] = 4475,
  [SMALL_STATE(257)] = 4486,
  [SMALL_STATE(258)] = 4497,
  [SMALL_STATE(259)] = 4508,
  [SMALL_STATE(260)] = 4519,
  [SMALL_STATE(261)] = 4530,
  [SMALL_STATE(262)] = 4541,
  [SMALL_STATE(263)] = 4552,
  [SMALL_STATE(264)] = 4563,
  [SMALL_STATE(265)] = 4574,
  [SMALL_STATE(266)] = 4582,
  [SMALL_STATE(267)] = 4590,
  [SMALL_STATE(268)] = 4598,
  [SMALL_STATE(269)] = 4606,
  [SMALL_STATE(270)] = 4614,
  [SMALL_STATE(271)] = 4622,
  [SMALL_STATE(272)] = 4630,
  [SMALL_STATE(273)] = 4638,
  [SMALL_STATE(274)] = 4646,
  [SMALL_STATE(275)] = 4654,
  [SMALL_STATE(276)] = 4662,
  [SMALL_STATE(277)] = 4670,
  [SMALL_STATE(278)] = 4678,
  [SMALL_STATE(279)] = 4686,
  [SMALL_STATE(280)] = 4694,
  [SMALL_STATE(281)] = 4702,
  [SMALL_STATE(282)] = 4710,
  [SMALL_STATE(283)] = 4718,
  [SMALL_STATE(284)] = 4726,
  [SMALL_STATE(285)] = 4734,
  [SMALL_STATE(286)] = 4742,
  [SMALL_STATE(287)] = 4750,
  [SMALL_STATE(288)] = 4758,
  [SMALL_STATE(289)] = 4766,
  [SMALL_STATE(290)] = 4774,
  [SMALL_STATE(291)] = 4782,
  [SMALL_STATE(292)] = 4790,
  [SMALL_STATE(293)] = 4798,
  [SMALL_STATE(294)] = 4806,
  [SMALL_STATE(295)] = 4814,
  [SMALL_STATE(296)] = 4822,
  [SMALL_STATE(297)] = 4830,
  [SMALL_STATE(298)] = 4838,
  [SMALL_STATE(299)] = 4846,
  [SMALL_STATE(300)] = 4854,
  [SMALL_STATE(301)] = 4862,
  [SMALL_STATE(302)] = 4870,
  [SMALL_STATE(303)] = 4878,
  [SMALL_STATE(304)] = 4886,
  [SMALL_STATE(305)] = 4894,
  [SMALL_STATE(306)] = 4902,
  [SMALL_STATE(307)] = 4910,
  [SMALL_STATE(308)] = 4918,
  [SMALL_STATE(309)] = 4926,
  [SMALL_STATE(310)] = 4934,
  [SMALL_STATE(311)] = 4942,
  [SMALL_STATE(312)] = 4950,
  [SMALL_STATE(313)] = 4958,
  [SMALL_STATE(314)] = 4966,
  [SMALL_STATE(315)] = 4974,
  [SMALL_STATE(316)] = 4982,
  [SMALL_STATE(317)] = 4990,
  [SMALL_STATE(318)] = 4998,
  [SMALL_STATE(319)] = 5006,
  [SMALL_STATE(320)] = 5014,
  [SMALL_STATE(321)] = 5022,
  [SMALL_STATE(322)] = 5030,
  [SMALL_STATE(323)] = 5038,
  [SMALL_STATE(324)] = 5046,
  [SMALL_STATE(325)] = 5054,
  [SMALL_STATE(326)] = 5062,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(205),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(207),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(209),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(210),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(213),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(218),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(220),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(284),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_body, 1),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(322),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(325),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 21),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 21),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 33),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 33),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(248),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(297),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(293),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(263),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 24),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 24),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 12),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 12),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 11),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 11),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 10),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 10),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 25),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 25),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 2, .production_id = 20),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 2, .production_id = 20),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 23),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 23),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 26),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 26),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 22),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 22),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 29),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 29),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 30),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 30),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 4, .production_id = 32),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 4, .production_id = 32),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 34),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 34),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 35),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 35),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 36),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 36),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 37),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 37),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 38),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 38),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 30),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 5, .production_id = 30),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 40),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 7, .production_id = 40),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 40),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 40),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 30),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 30),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(292),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(291),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(290),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(305),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(302),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(300),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 7),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(62),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(172),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(171),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 4, .production_id = 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 4, .production_id = 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 9, .production_id = 27),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(156),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(160),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 7, .production_id = 8),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 9),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 8, .production_id = 17),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 8, .production_id = 18),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6, .production_id = 19),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(285),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 30),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 40),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 30),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 30),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 40),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 40),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 30),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 29),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(231),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 30),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 29),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 30),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 30),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 29),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(155),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(292),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 30),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 40),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(136),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 40),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 40),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 40),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 30),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 40),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 29),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 30),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(175),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 29),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 30),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 40),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 29),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 30),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 39),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 40),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 30),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2), SHIFT_REPEAT(289),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 31),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 40),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 30),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 30),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 29),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [733] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 4),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
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
