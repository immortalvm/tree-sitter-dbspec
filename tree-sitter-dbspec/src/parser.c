#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 350
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 41

enum {
  sym_identifier = 1,
  anon_sym_Parameters = 2,
  anon_sym_COLON = 3,
  anon_sym_DOT_DOT_DOT = 4,
  anon_sym_Log = 5,
  anon_sym_Interpolation = 6,
  anon_sym_symbol = 7,
  anon_sym_EQ = 8,
  anon_sym_SQUOTE = 9,
  anon_sym_Set = 10,
  anon_sym_Execute = 11,
  anon_sym_using = 12,
  anon_sym_connection = 13,
  anon_sym_to = 14,
  anon_sym_with = 15,
  anon_sym_result = 16,
  anon_sym_via = 17,
  anon_sym_Output = 18,
  anon_sym_DOT = 19,
  anon_sym_Metadata = 20,
  anon_sym_for = 21,
  anon_sym_dbname = 22,
  anon_sym_description = 23,
  anon_sym_archiver = 24,
  anon_sym_archiverContact = 25,
  anon_sym_dataOwner = 26,
  anon_sym_dataOriginTimespan = 27,
  anon_sym_lobFolder = 28,
  anon_sym_Schema = 29,
  anon_sym_Type = 30,
  anon_sym_Table = 31,
  anon_sym_Column = 32,
  anon_sym_Field = 33,
  anon_sym_Key = 34,
  anon_sym_Check = 35,
  anon_sym_View = 36,
  anon_sym_For = 37,
  anon_sym_in = 38,
  anon_sym_LPAREN = 39,
  anon_sym_COMMA = 40,
  anon_sym_RPAREN = 41,
  anon_sym_BSLASH = 42,
  aux_sym_escape_sequence_token1 = 43,
  aux_sym_escape_sequence_token2 = 44,
  aux_sym_escape_sequence_token3 = 45,
  aux_sym_escape_sequence_token4 = 46,
  aux_sym_escape_sequence_token5 = 47,
  aux_sym_escape_sequence_token6 = 48,
  sym_short_description = 49,
  aux_sym__short_descr_token1 = 50,
  sym__newline = 51,
  sym__indent = 52,
  sym__dedent = 53,
  sym__inter_start = 54,
  sym__inter_start2 = 55,
  sym__inter_end = 56,
  sym__raw = 57,
  sym__string_start = 58,
  sym__string_content = 59,
  sym__string_end = 60,
  sym__comment = 61,
  sym__end_of_file = 62,
  sym__skip = 63,
  sym__set_inter = 64,
  sym_source_file = 65,
  sym_parameters = 66,
  sym_parameter = 67,
  sym__statement = 68,
  sym_nop = 69,
  sym_log = 70,
  sym_set_inter = 71,
  sym_set = 72,
  sym__expression = 73,
  sym_execute_using = 74,
  sym_connection = 75,
  sym_execute_sql = 76,
  sym_query = 77,
  sym_siard_output = 78,
  sym_siard_metadata = 79,
  sym__siard_dbname = 80,
  sym__siard_description = 81,
  sym__siard_archiver = 82,
  sym__siard_archiverContact = 83,
  sym__siard_dataOwner = 84,
  sym__siard_dataOriginTimespan = 85,
  sym__siard_lobFolder = 86,
  sym_siard_schema = 87,
  sym_siard_type = 88,
  sym_siard_table = 89,
  sym_siard_column = 90,
  sym_siard_field = 91,
  sym_siard_key = 92,
  sym_siard_check = 93,
  sym_siard_view = 94,
  sym_for_loop = 95,
  sym_for_variables = 96,
  sym_for_body = 97,
  sym__basic_expression = 98,
  sym_variable_instance = 99,
  sym_string = 100,
  sym_string_content = 101,
  sym_escape_sequence = 102,
  sym__short_descr = 103,
  sym__nl = 104,
  sym__ni = 105,
  sym__ded = 106,
  sym_interpolation = 107,
  sym_interpolation2 = 108,
  sym_key_value_pairs = 109,
  sym_key_value_pair = 110,
  sym_raw = 111,
  sym_raw_content = 112,
  aux_sym_source_file_repeat1 = 113,
  aux_sym_parameters_repeat1 = 114,
  aux_sym_siard_metadata_repeat1 = 115,
  aux_sym_siard_schema_repeat1 = 116,
  aux_sym_siard_table_repeat1 = 117,
  aux_sym_siard_column_repeat1 = 118,
  aux_sym_siard_view_repeat1 = 119,
  aux_sym_for_variables_repeat1 = 120,
  aux_sym_string_repeat1 = 121,
  aux_sym_string_content_repeat1 = 122,
  aux_sym_key_value_pairs_repeat1 = 123,
  aux_sym_raw_repeat1 = 124,
  aux_sym_raw_content_repeat1 = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_Parameters] = "Parameters",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_Log] = "Log",
  [anon_sym_Interpolation] = "Interpolation",
  [anon_sym_symbol] = "symbol",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_Set] = "Set",
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
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [aux_sym_escape_sequence_token2] = "escape_sequence_token2",
  [aux_sym_escape_sequence_token3] = "escape_sequence_token3",
  [aux_sym_escape_sequence_token4] = "escape_sequence_token4",
  [aux_sym_escape_sequence_token5] = "escape_sequence_token5",
  [aux_sym_escape_sequence_token6] = "escape_sequence_token6",
  [sym_short_description] = "short_description",
  [aux_sym__short_descr_token1] = "_short_descr_token1",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__inter_start] = "_inter_start",
  [sym__inter_start2] = "_inter_start2",
  [sym__inter_end] = "_inter_end",
  [sym__raw] = "_raw",
  [sym__string_start] = "\"",
  [sym__string_content] = "_string_content",
  [sym__string_end] = "\"",
  [sym__comment] = "_comment",
  [sym__end_of_file] = "_end_of_file",
  [sym__skip] = "_skip",
  [sym__set_inter] = "_set_inter",
  [sym_source_file] = "source_file",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym__statement] = "_statement",
  [sym_nop] = "nop",
  [sym_log] = "log",
  [sym_set_inter] = "set_inter",
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
  [sym_escape_sequence] = "escape_sequence",
  [sym__short_descr] = "_short_descr",
  [sym__nl] = "_nl",
  [sym__ni] = "_ni",
  [sym__ded] = "_ded",
  [sym_interpolation] = "interpolation",
  [sym_interpolation2] = "interpolation2",
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
  [anon_sym_Log] = anon_sym_Log,
  [anon_sym_Interpolation] = anon_sym_Interpolation,
  [anon_sym_symbol] = anon_sym_symbol,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_Set] = anon_sym_Set,
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
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [aux_sym_escape_sequence_token2] = aux_sym_escape_sequence_token2,
  [aux_sym_escape_sequence_token3] = aux_sym_escape_sequence_token3,
  [aux_sym_escape_sequence_token4] = aux_sym_escape_sequence_token4,
  [aux_sym_escape_sequence_token5] = aux_sym_escape_sequence_token5,
  [aux_sym_escape_sequence_token6] = aux_sym_escape_sequence_token6,
  [sym_short_description] = sym_short_description,
  [aux_sym__short_descr_token1] = aux_sym__short_descr_token1,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__inter_start] = sym__inter_start,
  [sym__inter_start2] = sym__inter_start2,
  [sym__inter_end] = sym__inter_end,
  [sym__raw] = sym__raw,
  [sym__string_start] = sym__string_start,
  [sym__string_content] = sym__string_content,
  [sym__string_end] = sym__string_start,
  [sym__comment] = sym__comment,
  [sym__end_of_file] = sym__end_of_file,
  [sym__skip] = sym__skip,
  [sym__set_inter] = sym__set_inter,
  [sym_source_file] = sym_source_file,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym__statement] = sym__statement,
  [sym_nop] = sym_nop,
  [sym_log] = sym_log,
  [sym_set_inter] = sym_set_inter,
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
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__short_descr] = sym__short_descr,
  [sym__nl] = sym__nl,
  [sym__ni] = sym__ni,
  [sym__ded] = sym__ded,
  [sym_interpolation] = sym_interpolation,
  [sym_interpolation2] = sym_interpolation2,
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
  [anon_sym_Log] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Interpolation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Set] = {
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token6] = {
    .visible = false,
    .named = false,
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
  [sym__inter_start2] = {
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
  [sym__set_inter] = {
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
  [sym_log] = {
    .visible = true,
    .named = true,
  },
  [sym_set_inter] = {
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
  [sym_escape_sequence] = {
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
  [sym_interpolation2] = {
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 6,
  [11] = 7,
  [12] = 12,
  [13] = 4,
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
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
  [35] = 29,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 17,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 28,
  [50] = 50,
  [51] = 51,
  [52] = 30,
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
  [66] = 39,
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
  [79] = 23,
  [80] = 80,
  [81] = 81,
  [82] = 47,
  [83] = 26,
  [84] = 84,
  [85] = 73,
  [86] = 86,
  [87] = 87,
  [88] = 84,
  [89] = 86,
  [90] = 84,
  [91] = 71,
  [92] = 92,
  [93] = 59,
  [94] = 33,
  [95] = 86,
  [96] = 53,
  [97] = 64,
  [98] = 63,
  [99] = 99,
  [100] = 86,
  [101] = 38,
  [102] = 40,
  [103] = 62,
  [104] = 42,
  [105] = 41,
  [106] = 2,
  [107] = 107,
  [108] = 31,
  [109] = 84,
  [110] = 110,
  [111] = 111,
  [112] = 110,
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
  [132] = 132,
  [133] = 133,
  [134] = 119,
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
  [164] = 164,
  [165] = 165,
  [166] = 165,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 167,
  [176] = 176,
  [177] = 177,
  [178] = 176,
  [179] = 179,
  [180] = 158,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 164,
  [193] = 193,
  [194] = 194,
  [195] = 161,
  [196] = 193,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 197,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 30,
  [207] = 207,
  [208] = 29,
  [209] = 209,
  [210] = 28,
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
  [223] = 222,
  [224] = 209,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
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
  [242] = 201,
  [243] = 203,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 246,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 251,
  [258] = 258,
  [259] = 247,
  [260] = 260,
  [261] = 244,
  [262] = 262,
  [263] = 245,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 260,
  [269] = 269,
  [270] = 252,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 249,
  [275] = 267,
  [276] = 253,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
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
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 28,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 291,
  [303] = 301,
  [304] = 29,
  [305] = 305,
  [306] = 281,
  [307] = 305,
  [308] = 308,
  [309] = 309,
  [310] = 30,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 320,
  [322] = 322,
  [323] = 300,
  [324] = 324,
  [325] = 280,
  [326] = 279,
  [327] = 284,
  [328] = 309,
  [329] = 312,
  [330] = 313,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 289,
  [335] = 286,
  [336] = 278,
  [337] = 287,
  [338] = 282,
  [339] = 293,
  [340] = 308,
  [341] = 299,
  [342] = 285,
  [343] = 283,
  [344] = 322,
  [345] = 318,
  [346] = 297,
  [347] = 295,
  [348] = 317,
  [349] = 349,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'c'
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

static inline bool sym_identifier_character_set_3(int32_t c) {
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

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43642
    ? (c < 3784
      ? (c < 2759
        ? (c < 2048
          ? (c < 1155
            ? (c < 736
              ? (c < 183
                ? (c < 'g'
                  ? (c < '_'
                    ? (c >= 'G' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 183 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)))))
              : (c <= 740 || (c < 895
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)))
                : (c <= 895 || (c < 910
                  ? (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)))))))
            : (c <= 1159 || (c < 1552
              ? (c < 1471
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)))
                : (c <= 1471 || (c < 1479
                  ? (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)
                  : (c <= 1479 || (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)))))
              : (c <= 1562 || (c < 1791
                ? (c < 1749
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)
                  : (c <= 1756 || (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)))
                : (c <= 1791 || (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || (c < 2045
                    ? c == 2042
                    : c <= 2045)))))))))
          : (c <= 2093 || (c < 2561
            ? (c < 2474
              ? (c < 2275
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)
                  : (c <= 2183 || (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)))
                : (c <= 2403 || (c < 2437
                  ? (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)
                  : (c <= 2444 || (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)))))
              : (c <= 2480 || (c < 2519
                ? (c < 2492
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2500 || (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)))
                : (c <= 2519 || (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))))))
            : (c <= 2563 || (c < 2641
              ? (c < 2613
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))
                : (c <= 2614 || (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))))
              : (c <= 2641 || (c < 2703
                ? (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)))))))))))
        : (c <= 2761 || (c < 3174
          ? (c < 2962
            ? (c < 2869
              ? (c < 2817
                ? (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)))
                : (c <= 2819 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)))))
              : (c <= 2873 || (c < 2911
                ? (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)
                  : (c <= 2947 || (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)))))))
            : (c <= 2965 || (c < 3046
              ? (c < 2990
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)))
                : (c <= 3001 || (c < 3018
                  ? (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)
                  : (c <= 3021 || (c < 3031
                    ? c == 3024
                    : c <= 3031)))))
              : (c <= 3055 || (c < 3142
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)))
                : (c <= 3144 || (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3168
                    ? c == 3165
                    : c <= 3171)))))))))
          : (c <= 3183 || (c < 3457
            ? (c < 3296
              ? (c < 3253
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)
                  : (c <= 3216 || (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)))
                : (c <= 3257 || (c < 3274
                  ? (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)
                  : (c <= 3277 || (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)))))
              : (c <= 3299 || (c < 3398
                ? (c < 3328
                  ? (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)
                  : (c <= 3340 || (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)))
                : (c <= 3400 || (c < 3423
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)
                  : (c <= 3427 || (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)))))))
            : (c <= 3459 || (c < 3585
              ? (c < 3530
                ? (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || (c < 3520
                    ? c == 3517
                    : c <= 3526)))
                : (c <= 3530 || (c < 3544
                  ? (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)
                  : (c <= 3551 || (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)))))
              : (c <= 3642 || (c < 3724
                ? (c < 3713
                  ? (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)
                  : (c <= 3714 || (c < 3718
                    ? c == 3716
                    : c <= 3722)))
                : (c <= 3747 || (c < 3776
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))))))))))
      : (c <= 3789 || (c < 8027
        ? (c < 5919
          ? (c < 4696
            ? (c < 3974
              ? (c < 3893
                ? (c < 3840
                  ? (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)
                  : (c <= 3840 || (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)))
                : (c <= 3893 || (c < 3902
                  ? (c < 3897
                    ? c == 3895
                    : c <= 3897)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)))))
              : (c <= 3991 || (c < 4295
                ? (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)))))))
            : (c <= 4696 || (c < 4888
              ? (c < 4792
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)))
                : (c <= 4798 || (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)))))
              : (c <= 4954 || (c < 5121
                ? (c < 4992
                  ? (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4977)
                  : (c <= 5007 || (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)))))))))
          : (c <= 5940 || (c < 6752
            ? (c < 6272
              ? (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)))))
              : (c <= 6314 || (c < 6512
                ? (c < 6432
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6443 || (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)))))))
            : (c <= 6780 || (c < 7245
              ? (c < 6912
                ? (c < 6823
                  ? (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)
                  : (c <= 6823 || (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)))
                : (c <= 6988 || (c < 7040
                  ? (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)
                  : (c <= 7155 || (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)))))
              : (c <= 7293 || (c < 7424
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)))))))))))
        : (c <= 8027 || (c < 11728
          ? (c < 8469
            ? (c < 8182
              ? (c < 8130
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))))
              : (c <= 8188 || (c < 8400
                ? (c < 8305
                  ? (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)
                  : (c <= 8305 || (c < 8336
                    ? c == 8319
                    : c <= 8348)))
                : (c <= 8412 || (c < 8450
                  ? (c < 8421
                    ? c == 8417
                    : c <= 8432)
                  : (c <= 8450 || (c < 8458
                    ? c == 8455
                    : c <= 8467)))))))
            : (c <= 8469 || (c < 11520
              ? (c < 8508
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || (c < 8490
                    ? c == 8488
                    : c <= 8505)))
                : (c <= 8511 || (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)))))
              : (c <= 11557 || (c < 11680
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || (c < 11647
                    ? c == 11631
                    : c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)))))))))
          : (c <= 11734 || (c < 42775
            ? (c < 12549
              ? (c < 12344
                ? (c < 12293
                  ? (c < 11744
                    ? (c >= 11736 && c <= 11742)
                    : c <= 11775)
                  : (c <= 12295 || (c < 12337
                    ? (c >= 12321 && c <= 12335)
                    : c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c < 12441
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12442)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))))
              : (c <= 12591 || (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42560
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)
                  : (c <= 42607 || (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)))))))
            : (c <= 42783 || (c < 43259
              ? (c < 42994
                ? (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || (c < 42965
                    ? c == 42963
                    : c <= 42969)))
                : (c <= 43047 || (c < 43136
                  ? (c < 43072
                    ? c == 43052
                    : c <= 43123)
                  : (c <= 43205 || (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)))))
              : (c <= 43259 || (c < 43488
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)
                  : (c <= 43388 || (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)))
                : (c <= 43518 || (c < 43600
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43574)
                    : c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43638)))))))))))))))
    : (c <= 43714 || (c < 71472
      ? (c < 67644
        ? (c < 65382
          ? (c < 64318
            ? (c < 44012
              ? (c < 43793
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)
                  : (c <= 43766 || (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)))))
              : (c <= 44013 || (c < 64112
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)
                  : (c <= 55238 || (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64296 || (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)))))))
            : (c <= 64318 || (c < 65101
              ? (c < 64848
                ? (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)))
                : (c <= 64911 || (c < 65024
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65017)
                  : (c <= 65039 || (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)))))
              : (c <= 65103 || (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65313
                  ? (c < 65296
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c < 65345
                    ? c == 65343
                    : c <= 65370)))))))))
          : (c <= 65470 || (c < 66560
            ? (c < 65856
              ? (c < 65549
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)))
                : (c <= 65574 || (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)))))
              : (c <= 65908 || (c < 66349
                ? (c < 66208
                  ? (c < 66176
                    ? c == 66045
                    : c <= 66204)
                  : (c <= 66256 || (c < 66304
                    ? c == 66272
                    : c <= 66335)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))))))
            : (c <= 66717 || (c < 66995
              ? (c < 66928
                ? (c < 66776
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66811 || (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))))
              : (c <= 67001 || (c < 67463
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)))
                : (c <= 67504 || (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))))))))))
        : (c <= 67644 || (c < 69968
          ? (c < 68480
            ? (c < 68108
              ? (c < 67840
                ? (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))))
              : (c <= 68115 || (c < 68224
                ? (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || (c < 68192
                    ? c == 68159
                    : c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)
                  : (c <= 68405 || (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)))))))
            : (c <= 68497 || (c < 69488
              ? (c < 69248
                ? (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)))
                : (c <= 69289 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69456)))))
              : (c <= 69509 || (c < 69826
                ? (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c < 69759
                    ? (c >= 69734 && c <= 69749)
                    : c <= 69818)))
                : (c <= 69826 || (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))))))))
          : (c <= 70003 || (c < 70471
            ? (c < 70287
              ? (c < 70144
                ? (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))
                : (c <= 70161 || (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))))
              : (c <= 70301 || (c < 70415
                ? (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)))
                : (c <= 70416 || (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)))))))
            : (c <= 70472 || (c < 70864
              ? (c < 70512
                ? (c < 70487
                  ? (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)
                  : (c <= 70487 || (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)))
                : (c <= 70516 || (c < 70750
                  ? (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)
                  : (c <= 70753 || (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)))))
              : (c <= 70873 || (c < 71248
                ? (c < 71128
                  ? (c < 71096
                    ? (c >= 71040 && c <= 71093)
                    : c <= 71104)
                  : (c <= 71133 || (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)))
                : (c <= 71257 || (c < 71424
                  ? (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)
                  : (c <= 71450 || (c >= 71453 && c <= 71467)))))))))))))
      : (c <= 71481 || (c < 119973
        ? (c < 82944
          ? (c < 72784
            ? (c < 72096
              ? (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71738)
                  : (c <= 71913 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 72016
                    ? (c >= 71995 && c <= 72003)
                    : c <= 72025)))))
              : (c <= 72103 || (c < 72272
                ? (c < 72163
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72161)
                  : (c <= 72164 || (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)))
                : (c <= 72345 || (c < 72704
                  ? (c < 72368
                    ? c == 72349
                    : c <= 72440)
                  : (c <= 72712 || (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)))))))
            : (c <= 72793 || (c < 73063
              ? (c < 72971
                ? (c < 72873
                  ? (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)
                  : (c <= 72886 || (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)))
                : (c <= 73014 || (c < 73023
                  ? (c < 73020
                    ? c == 73018
                    : c <= 73021)
                  : (c <= 73031 || (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)))))
              : (c <= 73064 || (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73112 || (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))))))
          : (c <= 83526 || (c < 110581
            ? (c < 93053
              ? (c < 92880
                ? (c < 92768
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92777 || (c < 92864
                    ? (c >= 92784 && c <= 92862)
                    : c <= 92873)))
                : (c <= 92909 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))))
              : (c <= 93071 || (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94180 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))))
            : (c <= 110587 || (c < 118576
              ? (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c < 118528
                    ? (c >= 113821 && c <= 113822)
                    : c <= 118573)))))
              : (c <= 118598 || (c < 119362
                ? (c < 119163
                  ? (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)
                  : (c <= 119170 || (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)))
                : (c <= 119364 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
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
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == 'U') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(46);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'U') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(32);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(57);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(57);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(57);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(57);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(57);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_short_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__short_descr_token1);
      if (lookahead == ' ') ADVANCE(59);
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
      if (lookahead == 'I') ADVANCE(4);
      if (lookahead == 'K') ADVANCE(5);
      if (lookahead == 'L') ADVANCE(6);
      if (lookahead == 'M') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(8);
      if (lookahead == 'P') ADVANCE(9);
      if (lookahead == 'S') ADVANCE(10);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead == 'V') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Log);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_via);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 115:
      if (lookahead == 'v') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(134);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_dbname);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_Metadata);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_connection);
      END_STATE();
    case 171:
      if (lookahead == 'T') ADVANCE(175);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Interpolation);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_dataOriginTimespan);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 21, .external_lex_state = 2},
  [2] = {.lex_state = 21, .external_lex_state = 3},
  [3] = {.lex_state = 21, .external_lex_state = 3},
  [4] = {.lex_state = 21, .external_lex_state = 3},
  [5] = {.lex_state = 21, .external_lex_state = 2},
  [6] = {.lex_state = 21, .external_lex_state = 3},
  [7] = {.lex_state = 21, .external_lex_state = 2},
  [8] = {.lex_state = 21, .external_lex_state = 3},
  [9] = {.lex_state = 21, .external_lex_state = 2},
  [10] = {.lex_state = 21, .external_lex_state = 3},
  [11] = {.lex_state = 21, .external_lex_state = 2},
  [12] = {.lex_state = 21, .external_lex_state = 2},
  [13] = {.lex_state = 21, .external_lex_state = 2},
  [14] = {.lex_state = 21, .external_lex_state = 3},
  [15] = {.lex_state = 21, .external_lex_state = 3},
  [16] = {.lex_state = 21, .external_lex_state = 3},
  [17] = {.lex_state = 21, .external_lex_state = 3},
  [18] = {.lex_state = 21, .external_lex_state = 3},
  [19] = {.lex_state = 21, .external_lex_state = 3},
  [20] = {.lex_state = 21, .external_lex_state = 3},
  [21] = {.lex_state = 21, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 4},
  [23] = {.lex_state = 21, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 4},
  [25] = {.lex_state = 21, .external_lex_state = 3},
  [26] = {.lex_state = 21, .external_lex_state = 3},
  [27] = {.lex_state = 21, .external_lex_state = 3},
  [28] = {.lex_state = 21, .external_lex_state = 3},
  [29] = {.lex_state = 21, .external_lex_state = 3},
  [30] = {.lex_state = 21, .external_lex_state = 3},
  [31] = {.lex_state = 21, .external_lex_state = 3},
  [32] = {.lex_state = 21, .external_lex_state = 3},
  [33] = {.lex_state = 21, .external_lex_state = 3},
  [34] = {.lex_state = 21, .external_lex_state = 3},
  [35] = {.lex_state = 21, .external_lex_state = 2},
  [36] = {.lex_state = 21, .external_lex_state = 3},
  [37] = {.lex_state = 21, .external_lex_state = 3},
  [38] = {.lex_state = 21, .external_lex_state = 3},
  [39] = {.lex_state = 21, .external_lex_state = 5},
  [40] = {.lex_state = 21, .external_lex_state = 3},
  [41] = {.lex_state = 21, .external_lex_state = 3},
  [42] = {.lex_state = 21, .external_lex_state = 3},
  [43] = {.lex_state = 21, .external_lex_state = 3},
  [44] = {.lex_state = 21, .external_lex_state = 2},
  [45] = {.lex_state = 21, .external_lex_state = 3},
  [46] = {.lex_state = 21, .external_lex_state = 3},
  [47] = {.lex_state = 21, .external_lex_state = 3},
  [48] = {.lex_state = 21, .external_lex_state = 3},
  [49] = {.lex_state = 21, .external_lex_state = 2},
  [50] = {.lex_state = 21, .external_lex_state = 3},
  [51] = {.lex_state = 21, .external_lex_state = 3},
  [52] = {.lex_state = 21, .external_lex_state = 2},
  [53] = {.lex_state = 21, .external_lex_state = 3},
  [54] = {.lex_state = 21, .external_lex_state = 3},
  [55] = {.lex_state = 21, .external_lex_state = 3},
  [56] = {.lex_state = 21, .external_lex_state = 3},
  [57] = {.lex_state = 21, .external_lex_state = 3},
  [58] = {.lex_state = 21, .external_lex_state = 3},
  [59] = {.lex_state = 21, .external_lex_state = 3},
  [60] = {.lex_state = 21, .external_lex_state = 3},
  [61] = {.lex_state = 21, .external_lex_state = 3},
  [62] = {.lex_state = 21, .external_lex_state = 3},
  [63] = {.lex_state = 21, .external_lex_state = 3},
  [64] = {.lex_state = 21, .external_lex_state = 3},
  [65] = {.lex_state = 21, .external_lex_state = 3},
  [66] = {.lex_state = 21, .external_lex_state = 5},
  [67] = {.lex_state = 21, .external_lex_state = 3},
  [68] = {.lex_state = 21, .external_lex_state = 3},
  [69] = {.lex_state = 21, .external_lex_state = 3},
  [70] = {.lex_state = 21, .external_lex_state = 3},
  [71] = {.lex_state = 21, .external_lex_state = 3},
  [72] = {.lex_state = 21, .external_lex_state = 3},
  [73] = {.lex_state = 21, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 21, .external_lex_state = 3},
  [76] = {.lex_state = 21, .external_lex_state = 3},
  [77] = {.lex_state = 21, .external_lex_state = 3},
  [78] = {.lex_state = 21, .external_lex_state = 3},
  [79] = {.lex_state = 21, .external_lex_state = 2},
  [80] = {.lex_state = 21, .external_lex_state = 3},
  [81] = {.lex_state = 21, .external_lex_state = 3},
  [82] = {.lex_state = 21, .external_lex_state = 2},
  [83] = {.lex_state = 21, .external_lex_state = 2},
  [84] = {.lex_state = 21, .external_lex_state = 6},
  [85] = {.lex_state = 21, .external_lex_state = 2},
  [86] = {.lex_state = 21, .external_lex_state = 6},
  [87] = {.lex_state = 21, .external_lex_state = 3},
  [88] = {.lex_state = 21, .external_lex_state = 6},
  [89] = {.lex_state = 21, .external_lex_state = 6},
  [90] = {.lex_state = 21, .external_lex_state = 6},
  [91] = {.lex_state = 21, .external_lex_state = 2},
  [92] = {.lex_state = 21, .external_lex_state = 6},
  [93] = {.lex_state = 21, .external_lex_state = 2},
  [94] = {.lex_state = 21, .external_lex_state = 2},
  [95] = {.lex_state = 21, .external_lex_state = 6},
  [96] = {.lex_state = 21, .external_lex_state = 2},
  [97] = {.lex_state = 21, .external_lex_state = 2},
  [98] = {.lex_state = 21, .external_lex_state = 2},
  [99] = {.lex_state = 21, .external_lex_state = 3},
  [100] = {.lex_state = 21, .external_lex_state = 6},
  [101] = {.lex_state = 21, .external_lex_state = 2},
  [102] = {.lex_state = 21, .external_lex_state = 2},
  [103] = {.lex_state = 21, .external_lex_state = 2},
  [104] = {.lex_state = 21, .external_lex_state = 2},
  [105] = {.lex_state = 21, .external_lex_state = 2},
  [106] = {.lex_state = 21, .external_lex_state = 2},
  [107] = {.lex_state = 21, .external_lex_state = 2},
  [108] = {.lex_state = 21, .external_lex_state = 2},
  [109] = {.lex_state = 21, .external_lex_state = 6},
  [110] = {.lex_state = 0, .external_lex_state = 7},
  [111] = {.lex_state = 21, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 7},
  [113] = {.lex_state = 21, .external_lex_state = 3},
  [114] = {.lex_state = 21, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 21, .external_lex_state = 3},
  [117] = {.lex_state = 21, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 8},
  [119] = {.lex_state = 21, .external_lex_state = 3},
  [120] = {.lex_state = 21, .external_lex_state = 3},
  [121] = {.lex_state = 21, .external_lex_state = 3},
  [122] = {.lex_state = 0, .external_lex_state = 8},
  [123] = {.lex_state = 2, .external_lex_state = 2},
  [124] = {.lex_state = 21, .external_lex_state = 3},
  [125] = {.lex_state = 21, .external_lex_state = 3},
  [126] = {.lex_state = 21, .external_lex_state = 3},
  [127] = {.lex_state = 21, .external_lex_state = 3},
  [128] = {.lex_state = 0, .external_lex_state = 8},
  [129] = {.lex_state = 21, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 8},
  [131] = {.lex_state = 0, .external_lex_state = 8},
  [132] = {.lex_state = 21, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 21, .external_lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 8},
  [136] = {.lex_state = 0, .external_lex_state = 8},
  [137] = {.lex_state = 0, .external_lex_state = 8},
  [138] = {.lex_state = 21, .external_lex_state = 3},
  [139] = {.lex_state = 21, .external_lex_state = 3},
  [140] = {.lex_state = 21, .external_lex_state = 5},
  [141] = {.lex_state = 21, .external_lex_state = 3},
  [142] = {.lex_state = 21, .external_lex_state = 5},
  [143] = {.lex_state = 0, .external_lex_state = 8},
  [144] = {.lex_state = 21, .external_lex_state = 5},
  [145] = {.lex_state = 21, .external_lex_state = 5},
  [146] = {.lex_state = 21, .external_lex_state = 6},
  [147] = {.lex_state = 21, .external_lex_state = 3},
  [148] = {.lex_state = 21, .external_lex_state = 6},
  [149] = {.lex_state = 21, .external_lex_state = 3},
  [150] = {.lex_state = 21, .external_lex_state = 5},
  [151] = {.lex_state = 21, .external_lex_state = 3},
  [152] = {.lex_state = 21, .external_lex_state = 5},
  [153] = {.lex_state = 21, .external_lex_state = 3},
  [154] = {.lex_state = 21, .external_lex_state = 5},
  [155] = {.lex_state = 21, .external_lex_state = 3},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 21, .external_lex_state = 3},
  [158] = {.lex_state = 21, .external_lex_state = 5},
  [159] = {.lex_state = 21, .external_lex_state = 5},
  [160] = {.lex_state = 21, .external_lex_state = 3},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 21, .external_lex_state = 3},
  [163] = {.lex_state = 21, .external_lex_state = 3},
  [164] = {.lex_state = 21, .external_lex_state = 5},
  [165] = {.lex_state = 21, .external_lex_state = 5},
  [166] = {.lex_state = 21, .external_lex_state = 5},
  [167] = {.lex_state = 21, .external_lex_state = 5},
  [168] = {.lex_state = 21, .external_lex_state = 3},
  [169] = {.lex_state = 21, .external_lex_state = 3},
  [170] = {.lex_state = 21, .external_lex_state = 3},
  [171] = {.lex_state = 21, .external_lex_state = 3},
  [172] = {.lex_state = 21, .external_lex_state = 3},
  [173] = {.lex_state = 21, .external_lex_state = 3},
  [174] = {.lex_state = 21, .external_lex_state = 3},
  [175] = {.lex_state = 21, .external_lex_state = 5},
  [176] = {.lex_state = 21, .external_lex_state = 5},
  [177] = {.lex_state = 21, .external_lex_state = 3},
  [178] = {.lex_state = 21, .external_lex_state = 5},
  [179] = {.lex_state = 21, .external_lex_state = 3},
  [180] = {.lex_state = 21, .external_lex_state = 5},
  [181] = {.lex_state = 21, .external_lex_state = 5},
  [182] = {.lex_state = 21, .external_lex_state = 3},
  [183] = {.lex_state = 21, .external_lex_state = 3},
  [184] = {.lex_state = 21, .external_lex_state = 3},
  [185] = {.lex_state = 21, .external_lex_state = 3},
  [186] = {.lex_state = 21, .external_lex_state = 3},
  [187] = {.lex_state = 21, .external_lex_state = 3},
  [188] = {.lex_state = 21, .external_lex_state = 3},
  [189] = {.lex_state = 21, .external_lex_state = 3},
  [190] = {.lex_state = 21, .external_lex_state = 3},
  [191] = {.lex_state = 21, .external_lex_state = 3},
  [192] = {.lex_state = 21, .external_lex_state = 5},
  [193] = {.lex_state = 21, .external_lex_state = 8},
  [194] = {.lex_state = 21, .external_lex_state = 6},
  [195] = {.lex_state = 21, .external_lex_state = 6},
  [196] = {.lex_state = 21, .external_lex_state = 8},
  [197] = {.lex_state = 0, .external_lex_state = 8},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 3},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 3},
  [202] = {.lex_state = 0, .external_lex_state = 8},
  [203] = {.lex_state = 0, .external_lex_state = 8},
  [204] = {.lex_state = 21, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 21, .external_lex_state = 8},
  [207] = {.lex_state = 21, .external_lex_state = 3},
  [208] = {.lex_state = 21, .external_lex_state = 8},
  [209] = {.lex_state = 0, .external_lex_state = 8},
  [210] = {.lex_state = 21, .external_lex_state = 8},
  [211] = {.lex_state = 0, .external_lex_state = 8},
  [212] = {.lex_state = 21, .external_lex_state = 3},
  [213] = {.lex_state = 21, .external_lex_state = 3},
  [214] = {.lex_state = 0, .external_lex_state = 8},
  [215] = {.lex_state = 0, .external_lex_state = 8},
  [216] = {.lex_state = 0, .external_lex_state = 8},
  [217] = {.lex_state = 0, .external_lex_state = 8},
  [218] = {.lex_state = 0, .external_lex_state = 8},
  [219] = {.lex_state = 0, .external_lex_state = 8},
  [220] = {.lex_state = 0, .external_lex_state = 8},
  [221] = {.lex_state = 21, .external_lex_state = 3},
  [222] = {.lex_state = 21, .external_lex_state = 2},
  [223] = {.lex_state = 21, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 8},
  [225] = {.lex_state = 21, .external_lex_state = 3},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 21, .external_lex_state = 3},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 21, .external_lex_state = 3},
  [234] = {.lex_state = 21, .external_lex_state = 3},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 21, .external_lex_state = 3},
  [238] = {.lex_state = 21, .external_lex_state = 3},
  [239] = {.lex_state = 0, .external_lex_state = 3},
  [240] = {.lex_state = 0, .external_lex_state = 3},
  [241] = {.lex_state = 0, .external_lex_state = 8},
  [242] = {.lex_state = 0, .external_lex_state = 3},
  [243] = {.lex_state = 0, .external_lex_state = 8},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 9},
  [249] = {.lex_state = 0, .external_lex_state = 9},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 9},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 21, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 21, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 9},
  [258] = {.lex_state = 0, .external_lex_state = 9},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 9},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 9},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 9},
  [265] = {.lex_state = 0, .external_lex_state = 9},
  [266] = {.lex_state = 0, .external_lex_state = 9},
  [267] = {.lex_state = 21, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 9},
  [269] = {.lex_state = 0, .external_lex_state = 9},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 9},
  [272] = {.lex_state = 21, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 9},
  [274] = {.lex_state = 0, .external_lex_state = 9},
  [275] = {.lex_state = 21, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 21, .external_lex_state = 2},
  [278] = {.lex_state = 21, .external_lex_state = 2},
  [279] = {.lex_state = 21, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 10},
  [281] = {.lex_state = 0, .external_lex_state = 11},
  [282] = {.lex_state = 21, .external_lex_state = 2},
  [283] = {.lex_state = 21, .external_lex_state = 2},
  [284] = {.lex_state = 21, .external_lex_state = 2},
  [285] = {.lex_state = 2, .external_lex_state = 2},
  [286] = {.lex_state = 21, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 9},
  [288] = {.lex_state = 21, .external_lex_state = 2},
  [289] = {.lex_state = 21, .external_lex_state = 2},
  [290] = {.lex_state = 21, .external_lex_state = 2},
  [291] = {.lex_state = 0, .external_lex_state = 12},
  [292] = {.lex_state = 21, .external_lex_state = 2},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 58, .external_lex_state = 2},
  [295] = {.lex_state = 21, .external_lex_state = 2},
  [296] = {.lex_state = 21, .external_lex_state = 2},
  [297] = {.lex_state = 21, .external_lex_state = 2},
  [298] = {.lex_state = 0, .external_lex_state = 11},
  [299] = {.lex_state = 2, .external_lex_state = 2},
  [300] = {.lex_state = 21, .external_lex_state = 2},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 12},
  [303] = {.lex_state = 0, .external_lex_state = 2},
  [304] = {.lex_state = 0, .external_lex_state = 11},
  [305] = {.lex_state = 21, .external_lex_state = 2},
  [306] = {.lex_state = 0, .external_lex_state = 11},
  [307] = {.lex_state = 21, .external_lex_state = 2},
  [308] = {.lex_state = 0, .external_lex_state = 2},
  [309] = {.lex_state = 21, .external_lex_state = 2},
  [310] = {.lex_state = 0, .external_lex_state = 11},
  [311] = {.lex_state = 0, .external_lex_state = 2},
  [312] = {.lex_state = 0, .external_lex_state = 12},
  [313] = {.lex_state = 0, .external_lex_state = 2},
  [314] = {.lex_state = 21, .external_lex_state = 2},
  [315] = {.lex_state = 0, .external_lex_state = 11},
  [316] = {.lex_state = 21, .external_lex_state = 2},
  [317] = {.lex_state = 21, .external_lex_state = 2},
  [318] = {.lex_state = 21, .external_lex_state = 2},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 21, .external_lex_state = 2},
  [321] = {.lex_state = 21, .external_lex_state = 2},
  [322] = {.lex_state = 21, .external_lex_state = 2},
  [323] = {.lex_state = 21, .external_lex_state = 2},
  [324] = {.lex_state = 21, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 10},
  [326] = {.lex_state = 21, .external_lex_state = 2},
  [327] = {.lex_state = 21, .external_lex_state = 2},
  [328] = {.lex_state = 21, .external_lex_state = 2},
  [329] = {.lex_state = 0, .external_lex_state = 12},
  [330] = {.lex_state = 0, .external_lex_state = 2},
  [331] = {.lex_state = 21, .external_lex_state = 2},
  [332] = {.lex_state = 21, .external_lex_state = 2},
  [333] = {.lex_state = 21, .external_lex_state = 2},
  [334] = {.lex_state = 21, .external_lex_state = 2},
  [335] = {.lex_state = 21, .external_lex_state = 2},
  [336] = {.lex_state = 21, .external_lex_state = 2},
  [337] = {.lex_state = 0, .external_lex_state = 9},
  [338] = {.lex_state = 21, .external_lex_state = 2},
  [339] = {.lex_state = 0, .external_lex_state = 2},
  [340] = {.lex_state = 0, .external_lex_state = 2},
  [341] = {.lex_state = 2, .external_lex_state = 2},
  [342] = {.lex_state = 2, .external_lex_state = 2},
  [343] = {.lex_state = 21, .external_lex_state = 2},
  [344] = {.lex_state = 21, .external_lex_state = 2},
  [345] = {.lex_state = 21, .external_lex_state = 2},
  [346] = {.lex_state = 21, .external_lex_state = 2},
  [347] = {.lex_state = 21, .external_lex_state = 2},
  [348] = {.lex_state = 21, .external_lex_state = 2},
  [349] = {.lex_state = 21, .external_lex_state = 2},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__inter_start = 3,
  ts_external_token__inter_start2 = 4,
  ts_external_token__inter_end = 5,
  ts_external_token__raw = 6,
  ts_external_token__string_start = 7,
  ts_external_token__string_content = 8,
  ts_external_token__string_end = 9,
  ts_external_token__comment = 10,
  ts_external_token__end_of_file = 11,
  ts_external_token__skip = 12,
  ts_external_token__set_inter = 13,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__inter_start] = sym__inter_start,
  [ts_external_token__inter_start2] = sym__inter_start2,
  [ts_external_token__inter_end] = sym__inter_end,
  [ts_external_token__raw] = sym__raw,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token__string_end] = sym__string_end,
  [ts_external_token__comment] = sym__comment,
  [ts_external_token__end_of_file] = sym__end_of_file,
  [ts_external_token__skip] = sym__skip,
  [ts_external_token__set_inter] = sym__set_inter,
};

static const bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__inter_start] = true,
    [ts_external_token__inter_start2] = true,
    [ts_external_token__inter_end] = true,
    [ts_external_token__raw] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__end_of_file] = true,
    [ts_external_token__skip] = true,
    [ts_external_token__set_inter] = true,
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
    [ts_external_token__inter_start2] = true,
    [ts_external_token__raw] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__end_of_file] = true,
    [ts_external_token__skip] = true,
  },
  [5] = {
    [ts_external_token__string_start] = true,
    [ts_external_token__comment] = true,
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
    [ts_external_token__inter_start2] = true,
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
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
    [ts_external_token__set_inter] = true,
  },
  [11] = {
    [ts_external_token__inter_end] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [12] = {
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
    [anon_sym_Log] = ACTIONS(1),
    [anon_sym_Interpolation] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
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
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(1),
    [aux_sym_escape_sequence_token2] = ACTIONS(1),
    [aux_sym_escape_sequence_token3] = ACTIONS(1),
    [aux_sym_escape_sequence_token4] = ACTIONS(1),
    [aux_sym_escape_sequence_token5] = ACTIONS(1),
    [aux_sym_escape_sequence_token6] = ACTIONS(1),
    [aux_sym__short_descr_token1] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__inter_start] = ACTIONS(1),
    [sym__inter_start2] = ACTIONS(1),
    [sym__inter_end] = ACTIONS(1),
    [sym__raw] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [sym__end_of_file] = ACTIONS(1),
    [sym__skip] = ACTIONS(3),
    [sym__set_inter] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(311),
    [sym_parameters] = STATE(5),
    [sym__statement] = STATE(9),
    [sym_nop] = STATE(9),
    [sym_log] = STATE(9),
    [sym_set_inter] = STATE(9),
    [sym_set] = STATE(9),
    [sym_execute_using] = STATE(9),
    [sym_execute_sql] = STATE(9),
    [sym_siard_output] = STATE(9),
    [sym_siard_metadata] = STATE(9),
    [sym_for_loop] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Parameters] = ACTIONS(7),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_Log] = ACTIONS(11),
    [anon_sym_Interpolation] = ACTIONS(13),
    [anon_sym_Set] = ACTIONS(15),
    [anon_sym_Execute] = ACTIONS(17),
    [anon_sym_Output] = ACTIONS(19),
    [anon_sym_Metadata] = ACTIONS(21),
    [anon_sym_For] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
    [sym__skip] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(27), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(25), 23,
      anon_sym_Log,
      anon_sym_Interpolation,
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
  [35] = 11,
    ACTIONS(29), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(31), 1,
      anon_sym_Log,
    ACTIONS(33), 1,
      anon_sym_Interpolation,
    ACTIONS(35), 1,
      anon_sym_Set,
    ACTIONS(37), 1,
      anon_sym_Execute,
    ACTIONS(39), 1,
      anon_sym_Output,
    ACTIONS(41), 1,
      anon_sym_Metadata,
    ACTIONS(43), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(45), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(4), 11,
      sym__statement,
      sym_nop,
      sym_log,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [81] = 11,
    ACTIONS(47), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(50), 1,
      anon_sym_Log,
    ACTIONS(53), 1,
      anon_sym_Interpolation,
    ACTIONS(56), 1,
      anon_sym_Set,
    ACTIONS(59), 1,
      anon_sym_Execute,
    ACTIONS(62), 1,
      anon_sym_Output,
    ACTIONS(65), 1,
      anon_sym_Metadata,
    ACTIONS(68), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(71), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(4), 11,
      sym__statement,
      sym_nop,
      sym_log,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [127] = 11,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Log,
    ACTIONS(13), 1,
      anon_sym_Interpolation,
    ACTIONS(15), 1,
      anon_sym_Set,
    ACTIONS(17), 1,
      anon_sym_Execute,
    ACTIONS(19), 1,
      anon_sym_Output,
    ACTIONS(21), 1,
      anon_sym_Metadata,
    ACTIONS(23), 1,
      anon_sym_For,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(12), 11,
      sym__statement,
      sym_nop,
      sym_log,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [172] = 19,
    ACTIONS(75), 1,
      anon_sym_dbname,
    ACTIONS(77), 1,
      anon_sym_description,
    ACTIONS(79), 1,
      anon_sym_archiver,
    ACTIONS(81), 1,
      anon_sym_archiverContact,
    ACTIONS(83), 1,
      anon_sym_dataOwner,
    ACTIONS(85), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(87), 1,
      anon_sym_lobFolder,
    ACTIONS(89), 1,
      anon_sym_Schema,
    STATE(58), 1,
      sym__siard_lobFolder,
    STATE(60), 1,
      sym__siard_dataOriginTimespan,
    STATE(61), 1,
      sym__siard_dataOwner,
    STATE(68), 1,
      sym__siard_archiverContact,
    STATE(69), 1,
      sym__siard_archiver,
    STATE(70), 1,
      sym__siard_description,
    STATE(72), 1,
      sym__siard_dbname,
    STATE(105), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(91), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(8), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [233] = 11,
    ACTIONS(29), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(31), 1,
      anon_sym_Log,
    ACTIONS(33), 1,
      anon_sym_Interpolation,
    ACTIONS(35), 1,
      anon_sym_Set,
    ACTIONS(37), 1,
      anon_sym_Execute,
    ACTIONS(39), 1,
      anon_sym_Output,
    ACTIONS(41), 1,
      anon_sym_Metadata,
    ACTIONS(43), 1,
      anon_sym_For,
    STATE(201), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(3), 11,
      sym__statement,
      sym_nop,
      sym_log,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [278] = 19,
    ACTIONS(75), 1,
      anon_sym_dbname,
    ACTIONS(77), 1,
      anon_sym_description,
    ACTIONS(79), 1,
      anon_sym_archiver,
    ACTIONS(81), 1,
      anon_sym_archiverContact,
    ACTIONS(83), 1,
      anon_sym_dataOwner,
    ACTIONS(85), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(87), 1,
      anon_sym_lobFolder,
    ACTIONS(89), 1,
      anon_sym_Schema,
    STATE(58), 1,
      sym__siard_lobFolder,
    STATE(60), 1,
      sym__siard_dataOriginTimespan,
    STATE(61), 1,
      sym__siard_dataOwner,
    STATE(68), 1,
      sym__siard_archiverContact,
    STATE(69), 1,
      sym__siard_archiver,
    STATE(70), 1,
      sym__siard_description,
    STATE(72), 1,
      sym__siard_dbname,
    STATE(94), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(93), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(15), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [339] = 11,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Log,
    ACTIONS(13), 1,
      anon_sym_Interpolation,
    ACTIONS(15), 1,
      anon_sym_Set,
    ACTIONS(17), 1,
      anon_sym_Execute,
    ACTIONS(19), 1,
      anon_sym_Output,
    ACTIONS(21), 1,
      anon_sym_Metadata,
    ACTIONS(23), 1,
      anon_sym_For,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(13), 11,
      sym__statement,
      sym_nop,
      sym_log,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [384] = 19,
    ACTIONS(75), 1,
      anon_sym_dbname,
    ACTIONS(77), 1,
      anon_sym_description,
    ACTIONS(79), 1,
      anon_sym_archiver,
    ACTIONS(81), 1,
      anon_sym_archiverContact,
    ACTIONS(83), 1,
      anon_sym_dataOwner,
    ACTIONS(85), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(87), 1,
      anon_sym_lobFolder,
    ACTIONS(89), 1,
      anon_sym_Schema,
    STATE(41), 1,
      sym__ded,
    STATE(58), 1,
      sym__siard_lobFolder,
    STATE(60), 1,
      sym__siard_dataOriginTimespan,
    STATE(61), 1,
      sym__siard_dataOwner,
    STATE(68), 1,
      sym__siard_archiverContact,
    STATE(69), 1,
      sym__siard_archiver,
    STATE(70), 1,
      sym__siard_description,
    STATE(72), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(95), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(14), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [445] = 11,
    ACTIONS(29), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(31), 1,
      anon_sym_Log,
    ACTIONS(33), 1,
      anon_sym_Interpolation,
    ACTIONS(35), 1,
      anon_sym_Set,
    ACTIONS(37), 1,
      anon_sym_Execute,
    ACTIONS(39), 1,
      anon_sym_Output,
    ACTIONS(41), 1,
      anon_sym_Metadata,
    ACTIONS(43), 1,
      anon_sym_For,
    STATE(242), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(3), 11,
      sym__statement,
      sym_nop,
      sym_log,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [490] = 11,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Log,
    ACTIONS(13), 1,
      anon_sym_Interpolation,
    ACTIONS(15), 1,
      anon_sym_Set,
    ACTIONS(17), 1,
      anon_sym_Execute,
    ACTIONS(19), 1,
      anon_sym_Output,
    ACTIONS(21), 1,
      anon_sym_Metadata,
    ACTIONS(23), 1,
      anon_sym_For,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(13), 11,
      sym__statement,
      sym_nop,
      sym_log,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [535] = 11,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(102), 1,
      anon_sym_Log,
    ACTIONS(105), 1,
      anon_sym_Interpolation,
    ACTIONS(108), 1,
      anon_sym_Set,
    ACTIONS(111), 1,
      anon_sym_Execute,
    ACTIONS(114), 1,
      anon_sym_Output,
    ACTIONS(117), 1,
      anon_sym_Metadata,
    ACTIONS(120), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(13), 11,
      sym__statement,
      sym_nop,
      sym_log,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [580] = 19,
    ACTIONS(75), 1,
      anon_sym_dbname,
    ACTIONS(77), 1,
      anon_sym_description,
    ACTIONS(79), 1,
      anon_sym_archiver,
    ACTIONS(81), 1,
      anon_sym_archiverContact,
    ACTIONS(83), 1,
      anon_sym_dataOwner,
    ACTIONS(85), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(87), 1,
      anon_sym_lobFolder,
    ACTIONS(89), 1,
      anon_sym_Schema,
    STATE(33), 1,
      sym__ded,
    STATE(58), 1,
      sym__siard_lobFolder,
    STATE(60), 1,
      sym__siard_dataOriginTimespan,
    STATE(61), 1,
      sym__siard_dataOwner,
    STATE(68), 1,
      sym__siard_archiverContact,
    STATE(69), 1,
      sym__siard_archiver,
    STATE(70), 1,
      sym__siard_description,
    STATE(72), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(123), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(15), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [641] = 18,
    ACTIONS(125), 1,
      anon_sym_dbname,
    ACTIONS(128), 1,
      anon_sym_description,
    ACTIONS(131), 1,
      anon_sym_archiver,
    ACTIONS(134), 1,
      anon_sym_archiverContact,
    ACTIONS(137), 1,
      anon_sym_dataOwner,
    ACTIONS(140), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(143), 1,
      anon_sym_lobFolder,
    ACTIONS(146), 1,
      anon_sym_Schema,
    STATE(58), 1,
      sym__siard_lobFolder,
    STATE(60), 1,
      sym__siard_dataOriginTimespan,
    STATE(61), 1,
      sym__siard_dataOwner,
    STATE(68), 1,
      sym__siard_archiverContact,
    STATE(69), 1,
      sym__siard_archiver,
    STATE(70), 1,
      sym__siard_description,
    STATE(72), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(149), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(15), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [699] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(153), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(151), 16,
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
  [726] = 3,
    ACTIONS(157), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(155), 16,
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
  [752] = 3,
    ACTIONS(161), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(159), 16,
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
  [778] = 3,
    ACTIONS(165), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(163), 16,
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
  [804] = 9,
    ACTIONS(77), 1,
      anon_sym_description,
    ACTIONS(167), 1,
      anon_sym_Column,
    ACTIONS(169), 1,
      anon_sym_Key,
    ACTIONS(171), 1,
      anon_sym_Check,
    STATE(81), 1,
      sym__siard_description,
    STATE(189), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(173), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(80), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [837] = 9,
    ACTIONS(77), 1,
      anon_sym_description,
    ACTIONS(175), 1,
      anon_sym_Type,
    ACTIONS(177), 1,
      anon_sym_Table,
    ACTIONS(179), 1,
      anon_sym_View,
    STATE(65), 1,
      sym__siard_description,
    STATE(67), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(181), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(75), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [870] = 8,
    ACTIONS(185), 1,
      sym__inter_start,
    ACTIONS(187), 1,
      sym__inter_start2,
    ACTIONS(189), 1,
      sym__raw,
    STATE(106), 1,
      sym__ded,
    STATE(133), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(183), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(74), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [900] = 3,
    ACTIONS(193), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(191), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [920] = 8,
    ACTIONS(185), 1,
      sym__inter_start,
    ACTIONS(187), 1,
      sym__inter_start2,
    ACTIONS(189), 1,
      sym__raw,
    STATE(2), 1,
      sym__ded,
    STATE(133), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(195), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(74), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [950] = 3,
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
  [969] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(201), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [986] = 3,
    ACTIONS(205), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(203), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1005] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(207), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1022] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(209), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1039] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(211), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1056] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(213), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1073] = 3,
    ACTIONS(217), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(215), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1092] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(219), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1109] = 3,
    ACTIONS(223), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(221), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1128] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(209), 10,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1145] = 7,
    ACTIONS(167), 1,
      anon_sym_Column,
    ACTIONS(169), 1,
      anon_sym_Key,
    ACTIONS(171), 1,
      anon_sym_Check,
    STATE(138), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(225), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(99), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1172] = 3,
    ACTIONS(229), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(227), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1191] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(231), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1208] = 6,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_connection,
    ACTIONS(237), 1,
      anon_sym_result,
    ACTIONS(239), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(97), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1233] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(241), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1250] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(243), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1267] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(245), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1284] = 3,
    ACTIONS(249), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(247), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1303] = 3,
    ACTIONS(155), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(157), 9,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_description,
      anon_sym_For,
      sym_identifier,
  [1322] = 3,
    ACTIONS(253), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(251), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1341] = 3,
    ACTIONS(257), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(255), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1360] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(259), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1377] = 3,
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
  [1396] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(207), 10,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1413] = 3,
    ACTIONS(267), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(265), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1432] = 3,
    ACTIONS(271), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(269), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1451] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(211), 10,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1468] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(273), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1485] = 3,
    ACTIONS(277), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(275), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1504] = 3,
    ACTIONS(281), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(279), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1523] = 3,
    ACTIONS(285), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(283), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1542] = 3,
    ACTIONS(289), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(287), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1561] = 3,
    ACTIONS(293), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(291), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1580] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(295), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1597] = 3,
    ACTIONS(299), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(297), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1616] = 3,
    ACTIONS(303), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(301), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1635] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(305), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1652] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(307), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1669] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(309), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1686] = 7,
    ACTIONS(175), 1,
      anon_sym_Type,
    ACTIONS(177), 1,
      anon_sym_Table,
    ACTIONS(179), 1,
      anon_sym_View,
    STATE(76), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(311), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(77), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1713] = 6,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_connection,
    ACTIONS(317), 1,
      anon_sym_result,
    ACTIONS(319), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(64), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1738] = 3,
    ACTIONS(323), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(321), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1757] = 3,
    ACTIONS(327), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(325), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1776] = 3,
    ACTIONS(331), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(329), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1795] = 3,
    ACTIONS(335), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(333), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1814] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(337), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1831] = 3,
    ACTIONS(341), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(339), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1850] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(343), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1867] = 7,
    ACTIONS(347), 1,
      sym__inter_start,
    ACTIONS(350), 1,
      sym__inter_start2,
    ACTIONS(353), 1,
      sym__raw,
    STATE(133), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(345), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(74), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1894] = 7,
    ACTIONS(175), 1,
      anon_sym_Type,
    ACTIONS(177), 1,
      anon_sym_Table,
    ACTIONS(179), 1,
      anon_sym_View,
    STATE(78), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(87), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1921] = 3,
    ACTIONS(360), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(358), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1940] = 7,
    ACTIONS(175), 1,
      anon_sym_Type,
    ACTIONS(177), 1,
      anon_sym_Table,
    ACTIONS(179), 1,
      anon_sym_View,
    STATE(43), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(362), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(87), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1967] = 3,
    ACTIONS(366), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(364), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1986] = 3,
    ACTIONS(368), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(191), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2005] = 7,
    ACTIONS(167), 1,
      anon_sym_Column,
    ACTIONS(169), 1,
      anon_sym_Key,
    ACTIONS(171), 1,
      anon_sym_Check,
    STATE(153), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(370), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(99), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2032] = 7,
    ACTIONS(167), 1,
      anon_sym_Column,
    ACTIONS(169), 1,
      anon_sym_Key,
    ACTIONS(171), 1,
      anon_sym_Check,
    STATE(155), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(372), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(36), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2059] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(259), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2075] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(201), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2091] = 7,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      sym__inter_start,
    ACTIONS(378), 1,
      sym__string_content,
    ACTIONS(380), 1,
      sym__string_end,
    STATE(146), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(100), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2117] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(343), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2133] = 7,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      sym__inter_start,
    ACTIONS(378), 1,
      sym__string_content,
    ACTIONS(382), 1,
      sym__string_end,
    STATE(146), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(92), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2159] = 6,
    ACTIONS(384), 1,
      anon_sym_Type,
    ACTIONS(387), 1,
      anon_sym_Table,
    ACTIONS(390), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(393), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(87), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2183] = 7,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      sym__inter_start,
    ACTIONS(378), 1,
      sym__string_content,
    ACTIONS(395), 1,
      sym__string_end,
    STATE(146), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(86), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2209] = 7,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      sym__inter_start,
    ACTIONS(378), 1,
      sym__string_content,
    ACTIONS(397), 1,
      sym__string_end,
    STATE(146), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(92), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2235] = 7,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      sym__inter_start,
    ACTIONS(378), 1,
      sym__string_content,
    ACTIONS(399), 1,
      sym__string_end,
    STATE(146), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(89), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2261] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(337), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2277] = 7,
    ACTIONS(401), 1,
      anon_sym_BSLASH,
    ACTIONS(404), 1,
      sym__inter_start,
    ACTIONS(407), 1,
      sym__string_content,
    ACTIONS(410), 1,
      sym__string_end,
    STATE(146), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(92), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2303] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(295), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2319] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(219), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2335] = 7,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      sym__inter_start,
    ACTIONS(378), 1,
      sym__string_content,
    ACTIONS(412), 1,
      sym__string_end,
    STATE(146), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(92), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2361] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(273), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2377] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(309), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2393] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(307), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2409] = 6,
    ACTIONS(414), 1,
      anon_sym_Column,
    ACTIONS(417), 1,
      anon_sym_Key,
    ACTIONS(420), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(423), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(99), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2433] = 7,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      sym__inter_start,
    ACTIONS(378), 1,
      sym__string_content,
    ACTIONS(425), 1,
      sym__string_end,
    STATE(146), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(92), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2459] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(231), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2475] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(241), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2491] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(305), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2507] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(245), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2523] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(243), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2539] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(27), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2555] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(427), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2571] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(213), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2587] = 7,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      sym__inter_start,
    ACTIONS(378), 1,
      sym__string_content,
    ACTIONS(429), 1,
      sym__string_end,
    STATE(146), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(95), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2613] = 6,
    ACTIONS(185), 1,
      sym__inter_start,
    ACTIONS(187), 1,
      sym__inter_start2,
    ACTIONS(189), 1,
      sym__raw,
    STATE(133), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(22), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2636] = 7,
    ACTIONS(77), 1,
      anon_sym_description,
    ACTIONS(431), 1,
      anon_sym_Field,
    STATE(125), 1,
      sym__siard_description,
    STATE(179), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(433), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(127), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2661] = 6,
    ACTIONS(185), 1,
      sym__inter_start,
    ACTIONS(187), 1,
      sym__inter_start2,
    ACTIONS(189), 1,
      sym__raw,
    STATE(133), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(24), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2684] = 7,
    ACTIONS(77), 1,
      anon_sym_description,
    ACTIONS(431), 1,
      anon_sym_Field,
    STATE(120), 1,
      sym__siard_description,
    STATE(234), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(435), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(129), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2709] = 7,
    ACTIONS(77), 1,
      anon_sym_description,
    ACTIONS(167), 1,
      anon_sym_Column,
    STATE(126), 1,
      sym__siard_description,
    STATE(174), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(437), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(121), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2734] = 4,
    ACTIONS(441), 1,
      sym__raw,
    STATE(115), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(439), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [2751] = 5,
    ACTIONS(431), 1,
      anon_sym_Field,
    STATE(141), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(444), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2770] = 5,
    ACTIONS(431), 1,
      anon_sym_Field,
    STATE(225), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(446), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2789] = 6,
    ACTIONS(448), 1,
      anon_sym_COLON,
    ACTIONS(450), 1,
      aux_sym__short_descr_token1,
    STATE(139), 1,
      sym__nl,
    STATE(157), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(452), 2,
      sym__newline,
      sym__end_of_file,
  [2810] = 5,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(31), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(456), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(162), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [2829] = 5,
    ACTIONS(431), 1,
      anon_sym_Field,
    STATE(233), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(458), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(117), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2848] = 5,
    ACTIONS(167), 1,
      anon_sym_Column,
    STATE(149), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(460), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(147), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2867] = 6,
    ACTIONS(450), 1,
      aux_sym__short_descr_token1,
    ACTIONS(462), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym__short_descr,
    STATE(170), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(464), 2,
      sym__newline,
      sym__end_of_file,
  [2888] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(466), 6,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
      aux_sym_escape_sequence_token3,
      aux_sym_escape_sequence_token4,
      aux_sym_escape_sequence_token5,
      aux_sym_escape_sequence_token6,
  [2901] = 5,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(107), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(470), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(163), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2920] = 5,
    ACTIONS(431), 1,
      anon_sym_Field,
    STATE(182), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(472), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(116), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2939] = 5,
    ACTIONS(167), 1,
      anon_sym_Column,
    STATE(151), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(474), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(132), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2958] = 5,
    ACTIONS(431), 1,
      anon_sym_Field,
    STATE(183), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(476), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2977] = 6,
    ACTIONS(450), 1,
      aux_sym__short_descr_token1,
    ACTIONS(478), 1,
      anon_sym_COLON,
    STATE(171), 1,
      sym__short_descr,
    STATE(173), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(480), 2,
      sym__newline,
      sym__end_of_file,
  [2998] = 5,
    ACTIONS(431), 1,
      anon_sym_Field,
    STATE(227), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(482), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3017] = 6,
    ACTIONS(450), 1,
      aux_sym__short_descr_token1,
    ACTIONS(484), 1,
      anon_sym_COLON,
    STATE(237), 1,
      sym__nl,
    STATE(238), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(486), 2,
      sym__newline,
      sym__end_of_file,
  [3038] = 6,
    ACTIONS(450), 1,
      aux_sym__short_descr_token1,
    ACTIONS(488), 1,
      anon_sym_COLON,
    STATE(187), 1,
      sym__short_descr,
    STATE(188), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(490), 2,
      sym__newline,
      sym__end_of_file,
  [3059] = 5,
    ACTIONS(167), 1,
      anon_sym_Column,
    STATE(177), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(492), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(147), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3078] = 4,
    ACTIONS(496), 1,
      sym__raw,
    STATE(115), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(494), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [3095] = 5,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(108), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(498), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(162), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3114] = 6,
    ACTIONS(450), 1,
      aux_sym__short_descr_token1,
    ACTIONS(500), 1,
      anon_sym_COLON,
    STATE(190), 1,
      sym__short_descr,
    STATE(191), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(502), 2,
      sym__newline,
      sym__end_of_file,
  [3135] = 6,
    ACTIONS(450), 1,
      aux_sym__short_descr_token1,
    ACTIONS(504), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym__nl,
    STATE(34), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(506), 2,
      sym__newline,
      sym__end_of_file,
  [3156] = 6,
    ACTIONS(450), 1,
      aux_sym__short_descr_token1,
    ACTIONS(508), 1,
      anon_sym_COLON,
    STATE(168), 1,
      sym__nl,
    STATE(184), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(510), 2,
      sym__newline,
      sym__end_of_file,
  [3177] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(512), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3189] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(514), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3201] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(215), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3217] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(520), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3229] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(214), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3245] = 5,
    ACTIONS(450), 1,
      aux_sym__short_descr_token1,
    STATE(213), 1,
      sym__short_descr,
    STATE(221), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(522), 2,
      sym__newline,
      sym__end_of_file,
  [3263] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(216), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3279] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(217), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3295] = 4,
    ACTIONS(526), 1,
      sym__string_content,
    STATE(148), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(524), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [3311] = 4,
    ACTIONS(528), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(531), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(147), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3327] = 4,
    ACTIONS(535), 1,
      sym__string_content,
    STATE(148), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(533), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [3343] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(538), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3355] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(218), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3371] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(540), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3383] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(219), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3399] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(542), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3411] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(220), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3427] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(544), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3439] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(546), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [3451] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(548), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3463] = 4,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(552), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(281), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3479] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(211), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3495] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(554), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3507] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(556), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [3519] = 4,
    ACTIONS(558), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(561), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(162), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3535] = 4,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(566), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(163), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [3551] = 4,
    ACTIONS(319), 1,
      sym__string_start,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(71), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3567] = 4,
    ACTIONS(239), 1,
      sym__string_start,
    ACTIONS(570), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(245), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3583] = 4,
    ACTIONS(239), 1,
      sym__string_start,
    ACTIONS(570), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(263), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3599] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(193), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3615] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(572), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3627] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(574), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3639] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(576), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3651] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(578), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3663] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(580), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3675] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(582), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3687] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(584), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3699] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(196), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3715] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(202), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3731] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(586), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3743] = 4,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(197), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3759] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(588), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3771] = 4,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(552), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(306), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3787] = 4,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(552), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(315), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3803] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(590), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3815] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(592), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3827] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(594), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3839] = 4,
    ACTIONS(596), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(599), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3855] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(601), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3867] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(603), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3879] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(605), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3891] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(607), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3903] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(609), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3915] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(611), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3927] = 4,
    ACTIONS(239), 1,
      sym__string_start,
    ACTIONS(570), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(91), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3943] = 5,
    ACTIONS(613), 1,
      anon_sym_with,
    ACTIONS(615), 1,
      sym__newline,
    ACTIONS(617), 1,
      sym__end_of_file,
    STATE(83), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3960] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(619), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [3971] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(556), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [3982] = 5,
    ACTIONS(621), 1,
      anon_sym_with,
    ACTIONS(623), 1,
      sym__newline,
    ACTIONS(625), 1,
      sym__end_of_file,
    STATE(26), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3999] = 3,
    STATE(82), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(627), 2,
      sym__newline,
      sym__end_of_file,
  [4011] = 4,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(631), 1,
      anon_sym_EQ,
    STATE(55), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4025] = 3,
    STATE(172), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(633), 2,
      sym__dedent,
      sym__end_of_file,
  [4037] = 4,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4051] = 3,
    STATE(40), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(639), 2,
      sym__dedent,
      sym__end_of_file,
  [4063] = 3,
    STATE(47), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(641), 2,
      sym__newline,
      sym__end_of_file,
  [4075] = 3,
    STATE(59), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(643), 2,
      sym__newline,
      sym__end_of_file,
  [4087] = 3,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(124), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4099] = 4,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4113] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(211), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [4123] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(647), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4133] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(209), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [4143] = 3,
    STATE(85), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(649), 2,
      sym__newline,
      sym__end_of_file,
  [4155] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(207), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [4165] = 3,
    STATE(207), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(651), 2,
      sym__newline,
      sym__end_of_file,
  [4177] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(653), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4187] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(655), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4197] = 3,
    STATE(57), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(657), 2,
      sym__newline,
      sym__end_of_file,
  [4209] = 3,
    STATE(56), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(659), 2,
      sym__newline,
      sym__end_of_file,
  [4221] = 3,
    STATE(51), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(661), 2,
      sym__newline,
      sym__end_of_file,
  [4233] = 3,
    STATE(25), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(663), 2,
      sym__newline,
      sym__end_of_file,
  [4245] = 3,
    STATE(54), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(665), 2,
      sym__newline,
      sym__end_of_file,
  [4257] = 3,
    STATE(19), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(667), 2,
      sym__newline,
      sym__end_of_file,
  [4269] = 3,
    STATE(27), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(669), 2,
      sym__newline,
      sym__end_of_file,
  [4281] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(671), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4291] = 3,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(119), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4303] = 3,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(134), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4315] = 3,
    STATE(73), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(673), 2,
      sym__newline,
      sym__end_of_file,
  [4327] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(675), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4337] = 4,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(677), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4351] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(679), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4361] = 4,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(681), 1,
      anon_sym_EQ,
    STATE(45), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4375] = 4,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(683), 1,
      anon_sym_EQ,
    STATE(46), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4389] = 4,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(685), 1,
      anon_sym_EQ,
    STATE(48), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4403] = 4,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(687), 1,
      anon_sym_EQ,
    STATE(50), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4417] = 4,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(689), 1,
      anon_sym_EQ,
    STATE(18), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4431] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(691), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4441] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(693), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4451] = 4,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(695), 1,
      anon_sym_EQ,
    STATE(212), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4465] = 4,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4479] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(702), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4489] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(704), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4499] = 3,
    STATE(186), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(706), 2,
      sym__dedent,
      sym__end_of_file,
  [4511] = 3,
    STATE(160), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(708), 2,
      sym__dedent,
      sym__end_of_file,
  [4523] = 3,
    STATE(16), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(710), 2,
      sym__newline,
      sym__end_of_file,
  [4535] = 3,
    STATE(102), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(712), 2,
      sym__dedent,
      sym__end_of_file,
  [4547] = 3,
    STATE(93), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(714), 2,
      sym__newline,
      sym__end_of_file,
  [4559] = 3,
    ACTIONS(629), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4570] = 3,
    ACTIONS(716), 1,
      anon_sym_COLON,
    STATE(98), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4581] = 3,
    ACTIONS(718), 1,
      anon_sym_COLON,
    STATE(104), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4592] = 3,
    ACTIONS(718), 1,
      anon_sym_COLON,
    STATE(101), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4603] = 3,
    ACTIONS(720), 1,
      sym__newline,
    STATE(113), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4614] = 3,
    ACTIONS(722), 1,
      sym__newline,
    STATE(223), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4625] = 3,
    ACTIONS(724), 1,
      anon_sym_COLON,
    STATE(42), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4636] = 3,
    ACTIONS(720), 1,
      sym__newline,
    STATE(6), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4647] = 3,
    ACTIONS(716), 1,
      anon_sym_COLON,
    STATE(103), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4658] = 3,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4669] = 3,
    ACTIONS(77), 1,
      anon_sym_description,
    STATE(240), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4680] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(700), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4689] = 3,
    ACTIONS(77), 1,
      anon_sym_description,
    STATE(239), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4700] = 3,
    ACTIONS(720), 1,
      sym__newline,
    STATE(10), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4711] = 3,
    ACTIONS(722), 1,
      sym__newline,
    STATE(254), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4722] = 3,
    ACTIONS(724), 1,
      anon_sym_COLON,
    STATE(38), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4733] = 3,
    ACTIONS(722), 1,
      sym__newline,
    STATE(11), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4744] = 3,
    ACTIONS(716), 1,
      anon_sym_COLON,
    STATE(96), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4755] = 3,
    ACTIONS(720), 1,
      sym__newline,
    STATE(20), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4766] = 3,
    ACTIONS(629), 1,
      anon_sym_COLON,
    STATE(63), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4777] = 3,
    ACTIONS(722), 1,
      sym__newline,
    STATE(256), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4788] = 3,
    ACTIONS(720), 1,
      sym__newline,
    STATE(111), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4799] = 3,
    ACTIONS(720), 1,
      sym__newline,
    STATE(21), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4810] = 3,
    ACTIONS(728), 1,
      anon_sym_using,
    ACTIONS(730), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4821] = 3,
    ACTIONS(722), 1,
      sym__newline,
    STATE(7), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4832] = 3,
    ACTIONS(722), 1,
      sym__newline,
    STATE(272), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4843] = 3,
    ACTIONS(629), 1,
      anon_sym_COLON,
    STATE(62), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4854] = 3,
    ACTIONS(720), 1,
      sym__newline,
    STATE(114), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4865] = 3,
    ACTIONS(77), 1,
      anon_sym_description,
    STATE(199), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4876] = 3,
    ACTIONS(722), 1,
      sym__newline,
    STATE(204), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4887] = 3,
    ACTIONS(722), 1,
      sym__newline,
    STATE(222), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4898] = 3,
    ACTIONS(732), 1,
      anon_sym_using,
    ACTIONS(734), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4909] = 3,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(347), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4920] = 2,
    ACTIONS(736), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4928] = 2,
    ACTIONS(738), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4936] = 2,
    ACTIONS(740), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4944] = 2,
    ACTIONS(742), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4952] = 2,
    ACTIONS(744), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4960] = 2,
    ACTIONS(746), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4968] = 2,
    ACTIONS(748), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4976] = 2,
    ACTIONS(750), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4984] = 2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4992] = 2,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5000] = 2,
    ACTIONS(756), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5008] = 2,
    ACTIONS(758), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5016] = 2,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5024] = 2,
    ACTIONS(762), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5032] = 2,
    ACTIONS(764), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5040] = 2,
    ACTIONS(766), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5048] = 2,
    ACTIONS(768), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5056] = 2,
    ACTIONS(770), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5064] = 2,
    ACTIONS(772), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5072] = 2,
    ACTIONS(774), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5080] = 2,
    ACTIONS(776), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5088] = 2,
    ACTIONS(207), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5096] = 2,
    ACTIONS(778), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5104] = 2,
    ACTIONS(780), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5112] = 2,
    ACTIONS(782), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5120] = 2,
    ACTIONS(784), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5128] = 2,
    ACTIONS(786), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5136] = 2,
    ACTIONS(209), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5144] = 2,
    ACTIONS(788), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5152] = 2,
    ACTIONS(790), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5160] = 2,
    ACTIONS(792), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5168] = 2,
    ACTIONS(794), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5176] = 2,
    ACTIONS(796), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5184] = 2,
    ACTIONS(211), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5192] = 2,
    ACTIONS(798), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5200] = 2,
    ACTIONS(800), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5208] = 2,
    ACTIONS(802), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5216] = 2,
    ACTIONS(804), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5224] = 2,
    ACTIONS(806), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5232] = 2,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5240] = 2,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5248] = 2,
    ACTIONS(812), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5256] = 2,
    ACTIONS(814), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5264] = 2,
    ACTIONS(816), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5272] = 2,
    ACTIONS(818), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5280] = 2,
    ACTIONS(820), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5288] = 2,
    ACTIONS(822), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5296] = 2,
    ACTIONS(824), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5304] = 2,
    ACTIONS(826), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5312] = 2,
    ACTIONS(828), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5320] = 2,
    ACTIONS(830), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5328] = 2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5336] = 2,
    ACTIONS(834), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5344] = 2,
    ACTIONS(836), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5352] = 2,
    ACTIONS(838), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5360] = 2,
    ACTIONS(840), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5368] = 2,
    ACTIONS(842), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5376] = 2,
    ACTIONS(844), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5384] = 2,
    ACTIONS(846), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5392] = 2,
    ACTIONS(848), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5400] = 2,
    ACTIONS(850), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5408] = 2,
    ACTIONS(852), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5416] = 2,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5424] = 2,
    ACTIONS(856), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5432] = 2,
    ACTIONS(858), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5440] = 2,
    ACTIONS(860), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5448] = 2,
    ACTIONS(862), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5456] = 2,
    ACTIONS(864), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5464] = 2,
    ACTIONS(866), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5472] = 2,
    ACTIONS(868), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5480] = 2,
    ACTIONS(870), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5488] = 2,
    ACTIONS(872), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5496] = 2,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 233,
  [SMALL_STATE(8)] = 278,
  [SMALL_STATE(9)] = 339,
  [SMALL_STATE(10)] = 384,
  [SMALL_STATE(11)] = 445,
  [SMALL_STATE(12)] = 490,
  [SMALL_STATE(13)] = 535,
  [SMALL_STATE(14)] = 580,
  [SMALL_STATE(15)] = 641,
  [SMALL_STATE(16)] = 699,
  [SMALL_STATE(17)] = 726,
  [SMALL_STATE(18)] = 752,
  [SMALL_STATE(19)] = 778,
  [SMALL_STATE(20)] = 804,
  [SMALL_STATE(21)] = 837,
  [SMALL_STATE(22)] = 870,
  [SMALL_STATE(23)] = 900,
  [SMALL_STATE(24)] = 920,
  [SMALL_STATE(25)] = 950,
  [SMALL_STATE(26)] = 969,
  [SMALL_STATE(27)] = 986,
  [SMALL_STATE(28)] = 1005,
  [SMALL_STATE(29)] = 1022,
  [SMALL_STATE(30)] = 1039,
  [SMALL_STATE(31)] = 1056,
  [SMALL_STATE(32)] = 1073,
  [SMALL_STATE(33)] = 1092,
  [SMALL_STATE(34)] = 1109,
  [SMALL_STATE(35)] = 1128,
  [SMALL_STATE(36)] = 1145,
  [SMALL_STATE(37)] = 1172,
  [SMALL_STATE(38)] = 1191,
  [SMALL_STATE(39)] = 1208,
  [SMALL_STATE(40)] = 1233,
  [SMALL_STATE(41)] = 1250,
  [SMALL_STATE(42)] = 1267,
  [SMALL_STATE(43)] = 1284,
  [SMALL_STATE(44)] = 1303,
  [SMALL_STATE(45)] = 1322,
  [SMALL_STATE(46)] = 1341,
  [SMALL_STATE(47)] = 1360,
  [SMALL_STATE(48)] = 1377,
  [SMALL_STATE(49)] = 1396,
  [SMALL_STATE(50)] = 1413,
  [SMALL_STATE(51)] = 1432,
  [SMALL_STATE(52)] = 1451,
  [SMALL_STATE(53)] = 1468,
  [SMALL_STATE(54)] = 1485,
  [SMALL_STATE(55)] = 1504,
  [SMALL_STATE(56)] = 1523,
  [SMALL_STATE(57)] = 1542,
  [SMALL_STATE(58)] = 1561,
  [SMALL_STATE(59)] = 1580,
  [SMALL_STATE(60)] = 1597,
  [SMALL_STATE(61)] = 1616,
  [SMALL_STATE(62)] = 1635,
  [SMALL_STATE(63)] = 1652,
  [SMALL_STATE(64)] = 1669,
  [SMALL_STATE(65)] = 1686,
  [SMALL_STATE(66)] = 1713,
  [SMALL_STATE(67)] = 1738,
  [SMALL_STATE(68)] = 1757,
  [SMALL_STATE(69)] = 1776,
  [SMALL_STATE(70)] = 1795,
  [SMALL_STATE(71)] = 1814,
  [SMALL_STATE(72)] = 1831,
  [SMALL_STATE(73)] = 1850,
  [SMALL_STATE(74)] = 1867,
  [SMALL_STATE(75)] = 1894,
  [SMALL_STATE(76)] = 1921,
  [SMALL_STATE(77)] = 1940,
  [SMALL_STATE(78)] = 1967,
  [SMALL_STATE(79)] = 1986,
  [SMALL_STATE(80)] = 2005,
  [SMALL_STATE(81)] = 2032,
  [SMALL_STATE(82)] = 2059,
  [SMALL_STATE(83)] = 2075,
  [SMALL_STATE(84)] = 2091,
  [SMALL_STATE(85)] = 2117,
  [SMALL_STATE(86)] = 2133,
  [SMALL_STATE(87)] = 2159,
  [SMALL_STATE(88)] = 2183,
  [SMALL_STATE(89)] = 2209,
  [SMALL_STATE(90)] = 2235,
  [SMALL_STATE(91)] = 2261,
  [SMALL_STATE(92)] = 2277,
  [SMALL_STATE(93)] = 2303,
  [SMALL_STATE(94)] = 2319,
  [SMALL_STATE(95)] = 2335,
  [SMALL_STATE(96)] = 2361,
  [SMALL_STATE(97)] = 2377,
  [SMALL_STATE(98)] = 2393,
  [SMALL_STATE(99)] = 2409,
  [SMALL_STATE(100)] = 2433,
  [SMALL_STATE(101)] = 2459,
  [SMALL_STATE(102)] = 2475,
  [SMALL_STATE(103)] = 2491,
  [SMALL_STATE(104)] = 2507,
  [SMALL_STATE(105)] = 2523,
  [SMALL_STATE(106)] = 2539,
  [SMALL_STATE(107)] = 2555,
  [SMALL_STATE(108)] = 2571,
  [SMALL_STATE(109)] = 2587,
  [SMALL_STATE(110)] = 2613,
  [SMALL_STATE(111)] = 2636,
  [SMALL_STATE(112)] = 2661,
  [SMALL_STATE(113)] = 2684,
  [SMALL_STATE(114)] = 2709,
  [SMALL_STATE(115)] = 2734,
  [SMALL_STATE(116)] = 2751,
  [SMALL_STATE(117)] = 2770,
  [SMALL_STATE(118)] = 2789,
  [SMALL_STATE(119)] = 2810,
  [SMALL_STATE(120)] = 2829,
  [SMALL_STATE(121)] = 2848,
  [SMALL_STATE(122)] = 2867,
  [SMALL_STATE(123)] = 2888,
  [SMALL_STATE(124)] = 2901,
  [SMALL_STATE(125)] = 2920,
  [SMALL_STATE(126)] = 2939,
  [SMALL_STATE(127)] = 2958,
  [SMALL_STATE(128)] = 2977,
  [SMALL_STATE(129)] = 2998,
  [SMALL_STATE(130)] = 3017,
  [SMALL_STATE(131)] = 3038,
  [SMALL_STATE(132)] = 3059,
  [SMALL_STATE(133)] = 3078,
  [SMALL_STATE(134)] = 3095,
  [SMALL_STATE(135)] = 3114,
  [SMALL_STATE(136)] = 3135,
  [SMALL_STATE(137)] = 3156,
  [SMALL_STATE(138)] = 3177,
  [SMALL_STATE(139)] = 3189,
  [SMALL_STATE(140)] = 3201,
  [SMALL_STATE(141)] = 3217,
  [SMALL_STATE(142)] = 3229,
  [SMALL_STATE(143)] = 3245,
  [SMALL_STATE(144)] = 3263,
  [SMALL_STATE(145)] = 3279,
  [SMALL_STATE(146)] = 3295,
  [SMALL_STATE(147)] = 3311,
  [SMALL_STATE(148)] = 3327,
  [SMALL_STATE(149)] = 3343,
  [SMALL_STATE(150)] = 3355,
  [SMALL_STATE(151)] = 3371,
  [SMALL_STATE(152)] = 3383,
  [SMALL_STATE(153)] = 3399,
  [SMALL_STATE(154)] = 3411,
  [SMALL_STATE(155)] = 3427,
  [SMALL_STATE(156)] = 3439,
  [SMALL_STATE(157)] = 3451,
  [SMALL_STATE(158)] = 3463,
  [SMALL_STATE(159)] = 3479,
  [SMALL_STATE(160)] = 3495,
  [SMALL_STATE(161)] = 3507,
  [SMALL_STATE(162)] = 3519,
  [SMALL_STATE(163)] = 3535,
  [SMALL_STATE(164)] = 3551,
  [SMALL_STATE(165)] = 3567,
  [SMALL_STATE(166)] = 3583,
  [SMALL_STATE(167)] = 3599,
  [SMALL_STATE(168)] = 3615,
  [SMALL_STATE(169)] = 3627,
  [SMALL_STATE(170)] = 3639,
  [SMALL_STATE(171)] = 3651,
  [SMALL_STATE(172)] = 3663,
  [SMALL_STATE(173)] = 3675,
  [SMALL_STATE(174)] = 3687,
  [SMALL_STATE(175)] = 3699,
  [SMALL_STATE(176)] = 3715,
  [SMALL_STATE(177)] = 3731,
  [SMALL_STATE(178)] = 3743,
  [SMALL_STATE(179)] = 3759,
  [SMALL_STATE(180)] = 3771,
  [SMALL_STATE(181)] = 3787,
  [SMALL_STATE(182)] = 3803,
  [SMALL_STATE(183)] = 3815,
  [SMALL_STATE(184)] = 3827,
  [SMALL_STATE(185)] = 3839,
  [SMALL_STATE(186)] = 3855,
  [SMALL_STATE(187)] = 3867,
  [SMALL_STATE(188)] = 3879,
  [SMALL_STATE(189)] = 3891,
  [SMALL_STATE(190)] = 3903,
  [SMALL_STATE(191)] = 3915,
  [SMALL_STATE(192)] = 3927,
  [SMALL_STATE(193)] = 3943,
  [SMALL_STATE(194)] = 3960,
  [SMALL_STATE(195)] = 3971,
  [SMALL_STATE(196)] = 3982,
  [SMALL_STATE(197)] = 3999,
  [SMALL_STATE(198)] = 4011,
  [SMALL_STATE(199)] = 4025,
  [SMALL_STATE(200)] = 4037,
  [SMALL_STATE(201)] = 4051,
  [SMALL_STATE(202)] = 4063,
  [SMALL_STATE(203)] = 4075,
  [SMALL_STATE(204)] = 4087,
  [SMALL_STATE(205)] = 4099,
  [SMALL_STATE(206)] = 4113,
  [SMALL_STATE(207)] = 4123,
  [SMALL_STATE(208)] = 4133,
  [SMALL_STATE(209)] = 4143,
  [SMALL_STATE(210)] = 4155,
  [SMALL_STATE(211)] = 4165,
  [SMALL_STATE(212)] = 4177,
  [SMALL_STATE(213)] = 4187,
  [SMALL_STATE(214)] = 4197,
  [SMALL_STATE(215)] = 4209,
  [SMALL_STATE(216)] = 4221,
  [SMALL_STATE(217)] = 4233,
  [SMALL_STATE(218)] = 4245,
  [SMALL_STATE(219)] = 4257,
  [SMALL_STATE(220)] = 4269,
  [SMALL_STATE(221)] = 4281,
  [SMALL_STATE(222)] = 4291,
  [SMALL_STATE(223)] = 4303,
  [SMALL_STATE(224)] = 4315,
  [SMALL_STATE(225)] = 4327,
  [SMALL_STATE(226)] = 4337,
  [SMALL_STATE(227)] = 4351,
  [SMALL_STATE(228)] = 4361,
  [SMALL_STATE(229)] = 4375,
  [SMALL_STATE(230)] = 4389,
  [SMALL_STATE(231)] = 4403,
  [SMALL_STATE(232)] = 4417,
  [SMALL_STATE(233)] = 4431,
  [SMALL_STATE(234)] = 4441,
  [SMALL_STATE(235)] = 4451,
  [SMALL_STATE(236)] = 4465,
  [SMALL_STATE(237)] = 4479,
  [SMALL_STATE(238)] = 4489,
  [SMALL_STATE(239)] = 4499,
  [SMALL_STATE(240)] = 4511,
  [SMALL_STATE(241)] = 4523,
  [SMALL_STATE(242)] = 4535,
  [SMALL_STATE(243)] = 4547,
  [SMALL_STATE(244)] = 4559,
  [SMALL_STATE(245)] = 4570,
  [SMALL_STATE(246)] = 4581,
  [SMALL_STATE(247)] = 4592,
  [SMALL_STATE(248)] = 4603,
  [SMALL_STATE(249)] = 4614,
  [SMALL_STATE(250)] = 4625,
  [SMALL_STATE(251)] = 4636,
  [SMALL_STATE(252)] = 4647,
  [SMALL_STATE(253)] = 4658,
  [SMALL_STATE(254)] = 4669,
  [SMALL_STATE(255)] = 4680,
  [SMALL_STATE(256)] = 4689,
  [SMALL_STATE(257)] = 4700,
  [SMALL_STATE(258)] = 4711,
  [SMALL_STATE(259)] = 4722,
  [SMALL_STATE(260)] = 4733,
  [SMALL_STATE(261)] = 4744,
  [SMALL_STATE(262)] = 4755,
  [SMALL_STATE(263)] = 4766,
  [SMALL_STATE(264)] = 4777,
  [SMALL_STATE(265)] = 4788,
  [SMALL_STATE(266)] = 4799,
  [SMALL_STATE(267)] = 4810,
  [SMALL_STATE(268)] = 4821,
  [SMALL_STATE(269)] = 4832,
  [SMALL_STATE(270)] = 4843,
  [SMALL_STATE(271)] = 4854,
  [SMALL_STATE(272)] = 4865,
  [SMALL_STATE(273)] = 4876,
  [SMALL_STATE(274)] = 4887,
  [SMALL_STATE(275)] = 4898,
  [SMALL_STATE(276)] = 4909,
  [SMALL_STATE(277)] = 4920,
  [SMALL_STATE(278)] = 4928,
  [SMALL_STATE(279)] = 4936,
  [SMALL_STATE(280)] = 4944,
  [SMALL_STATE(281)] = 4952,
  [SMALL_STATE(282)] = 4960,
  [SMALL_STATE(283)] = 4968,
  [SMALL_STATE(284)] = 4976,
  [SMALL_STATE(285)] = 4984,
  [SMALL_STATE(286)] = 4992,
  [SMALL_STATE(287)] = 5000,
  [SMALL_STATE(288)] = 5008,
  [SMALL_STATE(289)] = 5016,
  [SMALL_STATE(290)] = 5024,
  [SMALL_STATE(291)] = 5032,
  [SMALL_STATE(292)] = 5040,
  [SMALL_STATE(293)] = 5048,
  [SMALL_STATE(294)] = 5056,
  [SMALL_STATE(295)] = 5064,
  [SMALL_STATE(296)] = 5072,
  [SMALL_STATE(297)] = 5080,
  [SMALL_STATE(298)] = 5088,
  [SMALL_STATE(299)] = 5096,
  [SMALL_STATE(300)] = 5104,
  [SMALL_STATE(301)] = 5112,
  [SMALL_STATE(302)] = 5120,
  [SMALL_STATE(303)] = 5128,
  [SMALL_STATE(304)] = 5136,
  [SMALL_STATE(305)] = 5144,
  [SMALL_STATE(306)] = 5152,
  [SMALL_STATE(307)] = 5160,
  [SMALL_STATE(308)] = 5168,
  [SMALL_STATE(309)] = 5176,
  [SMALL_STATE(310)] = 5184,
  [SMALL_STATE(311)] = 5192,
  [SMALL_STATE(312)] = 5200,
  [SMALL_STATE(313)] = 5208,
  [SMALL_STATE(314)] = 5216,
  [SMALL_STATE(315)] = 5224,
  [SMALL_STATE(316)] = 5232,
  [SMALL_STATE(317)] = 5240,
  [SMALL_STATE(318)] = 5248,
  [SMALL_STATE(319)] = 5256,
  [SMALL_STATE(320)] = 5264,
  [SMALL_STATE(321)] = 5272,
  [SMALL_STATE(322)] = 5280,
  [SMALL_STATE(323)] = 5288,
  [SMALL_STATE(324)] = 5296,
  [SMALL_STATE(325)] = 5304,
  [SMALL_STATE(326)] = 5312,
  [SMALL_STATE(327)] = 5320,
  [SMALL_STATE(328)] = 5328,
  [SMALL_STATE(329)] = 5336,
  [SMALL_STATE(330)] = 5344,
  [SMALL_STATE(331)] = 5352,
  [SMALL_STATE(332)] = 5360,
  [SMALL_STATE(333)] = 5368,
  [SMALL_STATE(334)] = 5376,
  [SMALL_STATE(335)] = 5384,
  [SMALL_STATE(336)] = 5392,
  [SMALL_STATE(337)] = 5400,
  [SMALL_STATE(338)] = 5408,
  [SMALL_STATE(339)] = 5416,
  [SMALL_STATE(340)] = 5424,
  [SMALL_STATE(341)] = 5432,
  [SMALL_STATE(342)] = 5440,
  [SMALL_STATE(343)] = 5448,
  [SMALL_STATE(344)] = 5456,
  [SMALL_STATE(345)] = 5464,
  [SMALL_STATE(346)] = 5472,
  [SMALL_STATE(347)] = 5480,
  [SMALL_STATE(348)] = 5488,
  [SMALL_STATE(349)] = 5496,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_body, 1),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(344),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(321),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(345),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(348),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(322),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(320),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(267),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(317),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(198),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(232),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(231),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(230),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(229),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(228),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(226),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(316),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 21),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 21),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 33),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 33),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 35),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 35),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 7),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 4, .production_id = 32),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 4, .production_id = 32),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 30),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 30),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 9, .production_id = 27),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 29),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 29),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 26),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 26),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6, .production_id = 19),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 8, .production_id = 18),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 8, .production_id = 17),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 9),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 40),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 7, .production_id = 40),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 25),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 25),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 24),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 24),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 7, .production_id = 8),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 23),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 23),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 22),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 22),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 36),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 36),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 34),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 34),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 2, .production_id = 20),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 2, .production_id = 20),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 37),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 37),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 38),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 38),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_inter, 7),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 4, .production_id = 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 4, .production_id = 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 30),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 5, .production_id = 30),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 12),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 12),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 11),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 11),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 10),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 10),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(180),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(181),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(133),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 40),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 40),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 30),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 30),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(324),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(331),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(332),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(123),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(158),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(146),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(288),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(349),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(333),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(115),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 40),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 30),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 40),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(288),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(148),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 30),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 40),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 30),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 40),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation2, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 29),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 40),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(235),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(143),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 30),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 29),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 30),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 29),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 40),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 30),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 30),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 40),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 30),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 40),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 30),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 29),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(277),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 40),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 29),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 30),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 30),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 29),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 30),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 39),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 31),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 40),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 30),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 40),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 30),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2), SHIFT_REPEAT(290),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 30),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 29),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 3),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [798] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 4),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
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
