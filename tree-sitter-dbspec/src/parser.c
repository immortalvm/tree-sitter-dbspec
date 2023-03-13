#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 346
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 41

enum {
  sym_identifier = 1,
  anon_sym_Parameters = 2,
  anon_sym_COLON = 3,
  anon_sym_DOT_DOT_DOT = 4,
  anon_sym_Interpolation = 5,
  anon_sym_symbol = 6,
  anon_sym_EQ = 7,
  anon_sym_SQUOTE = 8,
  anon_sym_Set = 9,
  anon_sym_Execute = 10,
  anon_sym_using = 11,
  anon_sym_connection = 12,
  anon_sym_to = 13,
  anon_sym_with = 14,
  anon_sym_result = 15,
  anon_sym_via = 16,
  anon_sym_Output = 17,
  anon_sym_DOT = 18,
  anon_sym_Metadata = 19,
  anon_sym_for = 20,
  anon_sym_dbname = 21,
  anon_sym_description = 22,
  anon_sym_archiver = 23,
  anon_sym_archiverContact = 24,
  anon_sym_dataOwner = 25,
  anon_sym_dataOriginTimespan = 26,
  anon_sym_lobFolder = 27,
  anon_sym_Schema = 28,
  anon_sym_Type = 29,
  anon_sym_Table = 30,
  anon_sym_Column = 31,
  anon_sym_Field = 32,
  anon_sym_Key = 33,
  anon_sym_Check = 34,
  anon_sym_View = 35,
  anon_sym_For = 36,
  anon_sym_in = 37,
  anon_sym_LPAREN = 38,
  anon_sym_COMMA = 39,
  anon_sym_RPAREN = 40,
  anon_sym_BSLASH = 41,
  aux_sym_escape_sequence_token1 = 42,
  aux_sym_escape_sequence_token2 = 43,
  aux_sym_escape_sequence_token3 = 44,
  aux_sym_escape_sequence_token4 = 45,
  aux_sym_escape_sequence_token5 = 46,
  aux_sym_escape_sequence_token6 = 47,
  sym_short_description = 48,
  aux_sym__short_descr_token1 = 49,
  sym__newline = 50,
  sym__indent = 51,
  sym__dedent = 52,
  sym__inter_start = 53,
  sym__inter_start2 = 54,
  sym__inter_end = 55,
  sym__raw = 56,
  sym__string_start = 57,
  sym__string_content = 58,
  sym__string_end = 59,
  sym__comment = 60,
  sym__end_of_file = 61,
  sym__skip = 62,
  sym__set_inter = 63,
  sym_source_file = 64,
  sym_parameters = 65,
  sym_parameter = 66,
  sym__statement = 67,
  sym_nop = 68,
  sym_set_inter = 69,
  sym_set = 70,
  sym__expression = 71,
  sym_execute_using = 72,
  sym_connection = 73,
  sym_execute_sql = 74,
  sym_query = 75,
  sym_siard_output = 76,
  sym_siard_metadata = 77,
  sym__siard_dbname = 78,
  sym__siard_description = 79,
  sym__siard_archiver = 80,
  sym__siard_archiverContact = 81,
  sym__siard_dataOwner = 82,
  sym__siard_dataOriginTimespan = 83,
  sym__siard_lobFolder = 84,
  sym_siard_schema = 85,
  sym_siard_type = 86,
  sym_siard_table = 87,
  sym_siard_column = 88,
  sym_siard_field = 89,
  sym_siard_key = 90,
  sym_siard_check = 91,
  sym_siard_view = 92,
  sym_for_loop = 93,
  sym_for_variables = 94,
  sym_for_body = 95,
  sym__basic_expression = 96,
  sym_variable_instance = 97,
  sym_string = 98,
  sym_string_content = 99,
  sym_escape_sequence = 100,
  sym__short_descr = 101,
  sym__nl = 102,
  sym__ni = 103,
  sym__ded = 104,
  sym_interpolation = 105,
  sym_interpolation2 = 106,
  sym_key_value_pairs = 107,
  sym_key_value_pair = 108,
  sym_raw = 109,
  sym_raw_content = 110,
  aux_sym_source_file_repeat1 = 111,
  aux_sym_parameters_repeat1 = 112,
  aux_sym_siard_metadata_repeat1 = 113,
  aux_sym_siard_schema_repeat1 = 114,
  aux_sym_siard_table_repeat1 = 115,
  aux_sym_siard_column_repeat1 = 116,
  aux_sym_siard_view_repeat1 = 117,
  aux_sym_for_variables_repeat1 = 118,
  aux_sym_string_repeat1 = 119,
  aux_sym_string_content_repeat1 = 120,
  aux_sym_key_value_pairs_repeat1 = 121,
  aux_sym_raw_repeat1 = 122,
  aux_sym_raw_content_repeat1 = 123,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_Parameters] = "Parameters",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT_DOT_DOT] = "...",
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
  [5] = 4,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 8,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
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
  [57] = 24,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 65,
  [66] = 56,
  [67] = 62,
  [68] = 64,
  [69] = 19,
  [70] = 62,
  [71] = 64,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 74,
  [77] = 73,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 72,
  [84] = 84,
  [85] = 85,
  [86] = 64,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 60,
  [93] = 79,
  [94] = 78,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 88,
  [100] = 89,
  [101] = 87,
  [102] = 59,
  [103] = 103,
  [104] = 85,
  [105] = 90,
  [106] = 82,
  [107] = 2,
  [108] = 108,
  [109] = 75,
  [110] = 91,
  [111] = 81,
  [112] = 80,
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
  [134] = 134,
  [135] = 133,
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
  [146] = 138,
  [147] = 147,
  [148] = 148,
  [149] = 141,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 140,
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
  [181] = 139,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 154,
  [192] = 190,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 195,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 72,
  [203] = 73,
  [204] = 204,
  [205] = 74,
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
  [216] = 196,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 212,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 217,
  [231] = 231,
  [232] = 232,
  [233] = 214,
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
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 252,
  [262] = 251,
  [263] = 263,
  [264] = 260,
  [265] = 253,
  [266] = 255,
  [267] = 242,
  [268] = 247,
  [269] = 241,
  [270] = 245,
  [271] = 271,
  [272] = 244,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
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
  [295] = 289,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 287,
  [302] = 302,
  [303] = 284,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 72,
  [308] = 308,
  [309] = 73,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 290,
  [317] = 317,
  [318] = 302,
  [319] = 276,
  [320] = 281,
  [321] = 74,
  [322] = 314,
  [323] = 285,
  [324] = 278,
  [325] = 275,
  [326] = 326,
  [327] = 327,
  [328] = 283,
  [329] = 329,
  [330] = 280,
  [331] = 298,
  [332] = 286,
  [333] = 315,
  [334] = 313,
  [335] = 297,
  [336] = 310,
  [337] = 311,
  [338] = 338,
  [339] = 329,
  [340] = 296,
  [341] = 279,
  [342] = 317,
  [343] = 291,
  [344] = 277,
  [345] = 338,
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
      if (lookahead == 'M') ADVANCE(6);
      if (lookahead == 'O') ADVANCE(7);
      if (lookahead == 'P') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'V') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 74:
      if (lookahead == 'F') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_via);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'O') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(128);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_dbname);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_Metadata);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(158);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_connection);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(172);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_Interpolation);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 186:
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
  [5] = {.lex_state = 21, .external_lex_state = 3},
  [6] = {.lex_state = 21, .external_lex_state = 3},
  [7] = {.lex_state = 21, .external_lex_state = 3},
  [8] = {.lex_state = 21, .external_lex_state = 3},
  [9] = {.lex_state = 21, .external_lex_state = 3},
  [10] = {.lex_state = 21, .external_lex_state = 2},
  [11] = {.lex_state = 21, .external_lex_state = 2},
  [12] = {.lex_state = 21, .external_lex_state = 3},
  [13] = {.lex_state = 21, .external_lex_state = 2},
  [14] = {.lex_state = 21, .external_lex_state = 2},
  [15] = {.lex_state = 21, .external_lex_state = 2},
  [16] = {.lex_state = 21, .external_lex_state = 2},
  [17] = {.lex_state = 21, .external_lex_state = 3},
  [18] = {.lex_state = 21, .external_lex_state = 3},
  [19] = {.lex_state = 21, .external_lex_state = 3},
  [20] = {.lex_state = 21, .external_lex_state = 3},
  [21] = {.lex_state = 21, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 4},
  [23] = {.lex_state = 0, .external_lex_state = 4},
  [24] = {.lex_state = 21, .external_lex_state = 5},
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
  [35] = {.lex_state = 21, .external_lex_state = 3},
  [36] = {.lex_state = 21, .external_lex_state = 3},
  [37] = {.lex_state = 21, .external_lex_state = 3},
  [38] = {.lex_state = 21, .external_lex_state = 3},
  [39] = {.lex_state = 21, .external_lex_state = 3},
  [40] = {.lex_state = 21, .external_lex_state = 3},
  [41] = {.lex_state = 21, .external_lex_state = 3},
  [42] = {.lex_state = 21, .external_lex_state = 3},
  [43] = {.lex_state = 21, .external_lex_state = 3},
  [44] = {.lex_state = 21, .external_lex_state = 3},
  [45] = {.lex_state = 21, .external_lex_state = 3},
  [46] = {.lex_state = 21, .external_lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 4},
  [48] = {.lex_state = 21, .external_lex_state = 3},
  [49] = {.lex_state = 21, .external_lex_state = 3},
  [50] = {.lex_state = 21, .external_lex_state = 3},
  [51] = {.lex_state = 21, .external_lex_state = 3},
  [52] = {.lex_state = 21, .external_lex_state = 3},
  [53] = {.lex_state = 21, .external_lex_state = 3},
  [54] = {.lex_state = 21, .external_lex_state = 3},
  [55] = {.lex_state = 21, .external_lex_state = 3},
  [56] = {.lex_state = 21, .external_lex_state = 3},
  [57] = {.lex_state = 21, .external_lex_state = 5},
  [58] = {.lex_state = 21, .external_lex_state = 3},
  [59] = {.lex_state = 21, .external_lex_state = 3},
  [60] = {.lex_state = 21, .external_lex_state = 3},
  [61] = {.lex_state = 21, .external_lex_state = 3},
  [62] = {.lex_state = 21, .external_lex_state = 6},
  [63] = {.lex_state = 21, .external_lex_state = 6},
  [64] = {.lex_state = 21, .external_lex_state = 6},
  [65] = {.lex_state = 21, .external_lex_state = 3},
  [66] = {.lex_state = 21, .external_lex_state = 2},
  [67] = {.lex_state = 21, .external_lex_state = 6},
  [68] = {.lex_state = 21, .external_lex_state = 6},
  [69] = {.lex_state = 21, .external_lex_state = 2},
  [70] = {.lex_state = 21, .external_lex_state = 6},
  [71] = {.lex_state = 21, .external_lex_state = 6},
  [72] = {.lex_state = 21, .external_lex_state = 3},
  [73] = {.lex_state = 21, .external_lex_state = 3},
  [74] = {.lex_state = 21, .external_lex_state = 3},
  [75] = {.lex_state = 21, .external_lex_state = 3},
  [76] = {.lex_state = 21, .external_lex_state = 2},
  [77] = {.lex_state = 21, .external_lex_state = 2},
  [78] = {.lex_state = 21, .external_lex_state = 3},
  [79] = {.lex_state = 21, .external_lex_state = 3},
  [80] = {.lex_state = 21, .external_lex_state = 3},
  [81] = {.lex_state = 21, .external_lex_state = 3},
  [82] = {.lex_state = 21, .external_lex_state = 3},
  [83] = {.lex_state = 21, .external_lex_state = 2},
  [84] = {.lex_state = 21, .external_lex_state = 6},
  [85] = {.lex_state = 21, .external_lex_state = 3},
  [86] = {.lex_state = 21, .external_lex_state = 6},
  [87] = {.lex_state = 21, .external_lex_state = 3},
  [88] = {.lex_state = 21, .external_lex_state = 3},
  [89] = {.lex_state = 21, .external_lex_state = 3},
  [90] = {.lex_state = 21, .external_lex_state = 3},
  [91] = {.lex_state = 21, .external_lex_state = 3},
  [92] = {.lex_state = 21, .external_lex_state = 2},
  [93] = {.lex_state = 21, .external_lex_state = 2},
  [94] = {.lex_state = 21, .external_lex_state = 2},
  [95] = {.lex_state = 21, .external_lex_state = 2},
  [96] = {.lex_state = 21, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 7},
  [98] = {.lex_state = 0, .external_lex_state = 7},
  [99] = {.lex_state = 21, .external_lex_state = 2},
  [100] = {.lex_state = 21, .external_lex_state = 2},
  [101] = {.lex_state = 21, .external_lex_state = 2},
  [102] = {.lex_state = 21, .external_lex_state = 2},
  [103] = {.lex_state = 21, .external_lex_state = 3},
  [104] = {.lex_state = 21, .external_lex_state = 2},
  [105] = {.lex_state = 21, .external_lex_state = 2},
  [106] = {.lex_state = 21, .external_lex_state = 2},
  [107] = {.lex_state = 21, .external_lex_state = 2},
  [108] = {.lex_state = 21, .external_lex_state = 3},
  [109] = {.lex_state = 21, .external_lex_state = 2},
  [110] = {.lex_state = 21, .external_lex_state = 2},
  [111] = {.lex_state = 21, .external_lex_state = 2},
  [112] = {.lex_state = 21, .external_lex_state = 2},
  [113] = {.lex_state = 21, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 8},
  [117] = {.lex_state = 21, .external_lex_state = 3},
  [118] = {.lex_state = 21, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 8},
  [120] = {.lex_state = 0, .external_lex_state = 8},
  [121] = {.lex_state = 0, .external_lex_state = 8},
  [122] = {.lex_state = 21, .external_lex_state = 3},
  [123] = {.lex_state = 21, .external_lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 8},
  [125] = {.lex_state = 21, .external_lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 8},
  [127] = {.lex_state = 2, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 8},
  [129] = {.lex_state = 21, .external_lex_state = 3},
  [130] = {.lex_state = 21, .external_lex_state = 3},
  [131] = {.lex_state = 21, .external_lex_state = 3},
  [132] = {.lex_state = 21, .external_lex_state = 3},
  [133] = {.lex_state = 21, .external_lex_state = 3},
  [134] = {.lex_state = 0, .external_lex_state = 8},
  [135] = {.lex_state = 21, .external_lex_state = 3},
  [136] = {.lex_state = 21, .external_lex_state = 5},
  [137] = {.lex_state = 21, .external_lex_state = 3},
  [138] = {.lex_state = 21, .external_lex_state = 5},
  [139] = {.lex_state = 21, .external_lex_state = 5},
  [140] = {.lex_state = 21, .external_lex_state = 5},
  [141] = {.lex_state = 21, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 21, .external_lex_state = 5},
  [144] = {.lex_state = 21, .external_lex_state = 5},
  [145] = {.lex_state = 21, .external_lex_state = 3},
  [146] = {.lex_state = 21, .external_lex_state = 5},
  [147] = {.lex_state = 21, .external_lex_state = 5},
  [148] = {.lex_state = 21, .external_lex_state = 5},
  [149] = {.lex_state = 21, .external_lex_state = 5},
  [150] = {.lex_state = 21, .external_lex_state = 5},
  [151] = {.lex_state = 21, .external_lex_state = 6},
  [152] = {.lex_state = 21, .external_lex_state = 5},
  [153] = {.lex_state = 21, .external_lex_state = 5},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 21, .external_lex_state = 3},
  [156] = {.lex_state = 21, .external_lex_state = 3},
  [157] = {.lex_state = 21, .external_lex_state = 3},
  [158] = {.lex_state = 21, .external_lex_state = 3},
  [159] = {.lex_state = 21, .external_lex_state = 3},
  [160] = {.lex_state = 21, .external_lex_state = 3},
  [161] = {.lex_state = 21, .external_lex_state = 5},
  [162] = {.lex_state = 21, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 8},
  [164] = {.lex_state = 21, .external_lex_state = 5},
  [165] = {.lex_state = 21, .external_lex_state = 3},
  [166] = {.lex_state = 21, .external_lex_state = 3},
  [167] = {.lex_state = 21, .external_lex_state = 3},
  [168] = {.lex_state = 21, .external_lex_state = 3},
  [169] = {.lex_state = 21, .external_lex_state = 3},
  [170] = {.lex_state = 21, .external_lex_state = 3},
  [171] = {.lex_state = 21, .external_lex_state = 3},
  [172] = {.lex_state = 21, .external_lex_state = 3},
  [173] = {.lex_state = 21, .external_lex_state = 3},
  [174] = {.lex_state = 21, .external_lex_state = 3},
  [175] = {.lex_state = 21, .external_lex_state = 3},
  [176] = {.lex_state = 21, .external_lex_state = 3},
  [177] = {.lex_state = 21, .external_lex_state = 3},
  [178] = {.lex_state = 21, .external_lex_state = 3},
  [179] = {.lex_state = 21, .external_lex_state = 3},
  [180] = {.lex_state = 21, .external_lex_state = 3},
  [181] = {.lex_state = 21, .external_lex_state = 5},
  [182] = {.lex_state = 21, .external_lex_state = 6},
  [183] = {.lex_state = 21, .external_lex_state = 3},
  [184] = {.lex_state = 21, .external_lex_state = 3},
  [185] = {.lex_state = 21, .external_lex_state = 3},
  [186] = {.lex_state = 21, .external_lex_state = 3},
  [187] = {.lex_state = 21, .external_lex_state = 3},
  [188] = {.lex_state = 21, .external_lex_state = 3},
  [189] = {.lex_state = 21, .external_lex_state = 6},
  [190] = {.lex_state = 21, .external_lex_state = 8},
  [191] = {.lex_state = 21, .external_lex_state = 6},
  [192] = {.lex_state = 21, .external_lex_state = 8},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 8},
  [196] = {.lex_state = 21, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 8},
  [199] = {.lex_state = 0, .external_lex_state = 3},
  [200] = {.lex_state = 21, .external_lex_state = 3},
  [201] = {.lex_state = 21, .external_lex_state = 3},
  [202] = {.lex_state = 21, .external_lex_state = 8},
  [203] = {.lex_state = 21, .external_lex_state = 8},
  [204] = {.lex_state = 21, .external_lex_state = 3},
  [205] = {.lex_state = 21, .external_lex_state = 8},
  [206] = {.lex_state = 0, .external_lex_state = 8},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 21, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 21, .external_lex_state = 3},
  [212] = {.lex_state = 0, .external_lex_state = 8},
  [213] = {.lex_state = 0, .external_lex_state = 8},
  [214] = {.lex_state = 0, .external_lex_state = 8},
  [215] = {.lex_state = 0, .external_lex_state = 8},
  [216] = {.lex_state = 21, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 3},
  [218] = {.lex_state = 0, .external_lex_state = 8},
  [219] = {.lex_state = 21, .external_lex_state = 3},
  [220] = {.lex_state = 0, .external_lex_state = 8},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 8},
  [223] = {.lex_state = 0, .external_lex_state = 8},
  [224] = {.lex_state = 0, .external_lex_state = 8},
  [225] = {.lex_state = 21, .external_lex_state = 3},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 21, .external_lex_state = 3},
  [228] = {.lex_state = 21, .external_lex_state = 3},
  [229] = {.lex_state = 21, .external_lex_state = 3},
  [230] = {.lex_state = 0, .external_lex_state = 3},
  [231] = {.lex_state = 0, .external_lex_state = 8},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 8},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 8},
  [236] = {.lex_state = 21, .external_lex_state = 3},
  [237] = {.lex_state = 0, .external_lex_state = 3},
  [238] = {.lex_state = 0, .external_lex_state = 3},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 9},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 9},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 21, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 9},
  [247] = {.lex_state = 0, .external_lex_state = 9},
  [248] = {.lex_state = 0, .external_lex_state = 9},
  [249] = {.lex_state = 21, .external_lex_state = 2},
  [250] = {.lex_state = 21, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 9},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 9},
  [254] = {.lex_state = 0, .external_lex_state = 9},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 9},
  [257] = {.lex_state = 0, .external_lex_state = 9},
  [258] = {.lex_state = 0, .external_lex_state = 9},
  [259] = {.lex_state = 0, .external_lex_state = 9},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 9},
  [263] = {.lex_state = 21, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 9},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 9},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 21, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 58, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 10},
  [277] = {.lex_state = 21, .external_lex_state = 2},
  [278] = {.lex_state = 0, .external_lex_state = 11},
  [279] = {.lex_state = 21, .external_lex_state = 2},
  [280] = {.lex_state = 21, .external_lex_state = 2},
  [281] = {.lex_state = 21, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 12},
  [283] = {.lex_state = 21, .external_lex_state = 2},
  [284] = {.lex_state = 0, .external_lex_state = 12},
  [285] = {.lex_state = 21, .external_lex_state = 2},
  [286] = {.lex_state = 21, .external_lex_state = 2},
  [287] = {.lex_state = 21, .external_lex_state = 2},
  [288] = {.lex_state = 21, .external_lex_state = 2},
  [289] = {.lex_state = 0, .external_lex_state = 11},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 21, .external_lex_state = 2},
  [292] = {.lex_state = 21, .external_lex_state = 2},
  [293] = {.lex_state = 21, .external_lex_state = 2},
  [294] = {.lex_state = 21, .external_lex_state = 2},
  [295] = {.lex_state = 0, .external_lex_state = 11},
  [296] = {.lex_state = 21, .external_lex_state = 2},
  [297] = {.lex_state = 0, .external_lex_state = 2},
  [298] = {.lex_state = 21, .external_lex_state = 2},
  [299] = {.lex_state = 21, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 21, .external_lex_state = 2},
  [302] = {.lex_state = 21, .external_lex_state = 2},
  [303] = {.lex_state = 0, .external_lex_state = 12},
  [304] = {.lex_state = 21, .external_lex_state = 2},
  [305] = {.lex_state = 21, .external_lex_state = 2},
  [306] = {.lex_state = 21, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 12},
  [308] = {.lex_state = 21, .external_lex_state = 2},
  [309] = {.lex_state = 0, .external_lex_state = 12},
  [310] = {.lex_state = 0, .external_lex_state = 2},
  [311] = {.lex_state = 2, .external_lex_state = 2},
  [312] = {.lex_state = 21, .external_lex_state = 2},
  [313] = {.lex_state = 21, .external_lex_state = 2},
  [314] = {.lex_state = 21, .external_lex_state = 2},
  [315] = {.lex_state = 0, .external_lex_state = 9},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 21, .external_lex_state = 2},
  [318] = {.lex_state = 21, .external_lex_state = 2},
  [319] = {.lex_state = 0, .external_lex_state = 10},
  [320] = {.lex_state = 21, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 12},
  [322] = {.lex_state = 21, .external_lex_state = 2},
  [323] = {.lex_state = 21, .external_lex_state = 2},
  [324] = {.lex_state = 0, .external_lex_state = 11},
  [325] = {.lex_state = 0, .external_lex_state = 2},
  [326] = {.lex_state = 21, .external_lex_state = 2},
  [327] = {.lex_state = 21, .external_lex_state = 2},
  [328] = {.lex_state = 21, .external_lex_state = 2},
  [329] = {.lex_state = 21, .external_lex_state = 2},
  [330] = {.lex_state = 21, .external_lex_state = 2},
  [331] = {.lex_state = 21, .external_lex_state = 2},
  [332] = {.lex_state = 21, .external_lex_state = 2},
  [333] = {.lex_state = 0, .external_lex_state = 9},
  [334] = {.lex_state = 21, .external_lex_state = 2},
  [335] = {.lex_state = 0, .external_lex_state = 2},
  [336] = {.lex_state = 0, .external_lex_state = 2},
  [337] = {.lex_state = 2, .external_lex_state = 2},
  [338] = {.lex_state = 2, .external_lex_state = 2},
  [339] = {.lex_state = 21, .external_lex_state = 2},
  [340] = {.lex_state = 21, .external_lex_state = 2},
  [341] = {.lex_state = 21, .external_lex_state = 2},
  [342] = {.lex_state = 21, .external_lex_state = 2},
  [343] = {.lex_state = 21, .external_lex_state = 2},
  [344] = {.lex_state = 21, .external_lex_state = 2},
  [345] = {.lex_state = 2, .external_lex_state = 2},
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
    [ts_external_token__indent] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [12] = {
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
    [sym_source_file] = STATE(274),
    [sym_parameters] = STATE(14),
    [sym__statement] = STATE(15),
    [sym_nop] = STATE(15),
    [sym_set_inter] = STATE(15),
    [sym_set] = STATE(15),
    [sym_execute_using] = STATE(15),
    [sym_execute_sql] = STATE(15),
    [sym_siard_output] = STATE(15),
    [sym_siard_metadata] = STATE(15),
    [sym_for_loop] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Parameters] = ACTIONS(7),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_Interpolation] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(13),
    [anon_sym_Execute] = ACTIONS(15),
    [anon_sym_Output] = ACTIONS(17),
    [anon_sym_Metadata] = ACTIONS(19),
    [anon_sym_For] = ACTIONS(21),
    [sym__comment] = ACTIONS(3),
    [sym__skip] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(25), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(23), 22,
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
  [34] = 19,
    ACTIONS(27), 1,
      anon_sym_dbname,
    ACTIONS(29), 1,
      anon_sym_description,
    ACTIONS(31), 1,
      anon_sym_archiver,
    ACTIONS(33), 1,
      anon_sym_archiverContact,
    ACTIONS(35), 1,
      anon_sym_dataOwner,
    ACTIONS(37), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(39), 1,
      anon_sym_lobFolder,
    ACTIONS(41), 1,
      anon_sym_Schema,
    STATE(34), 1,
      sym__siard_lobFolder,
    STATE(48), 1,
      sym__siard_dbname,
    STATE(50), 1,
      sym__siard_description,
    STATE(51), 1,
      sym__siard_archiver,
    STATE(53), 1,
      sym__siard_archiverContact,
    STATE(55), 1,
      sym__siard_dataOwner,
    STATE(58), 1,
      sym__siard_dataOriginTimespan,
    STATE(78), 1,
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
  [95] = 19,
    ACTIONS(27), 1,
      anon_sym_dbname,
    ACTIONS(29), 1,
      anon_sym_description,
    ACTIONS(31), 1,
      anon_sym_archiver,
    ACTIONS(33), 1,
      anon_sym_archiverContact,
    ACTIONS(35), 1,
      anon_sym_dataOwner,
    ACTIONS(37), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(39), 1,
      anon_sym_lobFolder,
    ACTIONS(41), 1,
      anon_sym_Schema,
    STATE(34), 1,
      sym__siard_lobFolder,
    STATE(48), 1,
      sym__siard_dbname,
    STATE(50), 1,
      sym__siard_description,
    STATE(51), 1,
      sym__siard_archiver,
    STATE(53), 1,
      sym__siard_archiverContact,
    STATE(55), 1,
      sym__siard_dataOwner,
    STATE(58), 1,
      sym__siard_dataOriginTimespan,
    STATE(81), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(45), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(3), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [156] = 19,
    ACTIONS(27), 1,
      anon_sym_dbname,
    ACTIONS(29), 1,
      anon_sym_description,
    ACTIONS(31), 1,
      anon_sym_archiver,
    ACTIONS(33), 1,
      anon_sym_archiverContact,
    ACTIONS(35), 1,
      anon_sym_dataOwner,
    ACTIONS(37), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(39), 1,
      anon_sym_lobFolder,
    ACTIONS(41), 1,
      anon_sym_Schema,
    STATE(34), 1,
      sym__siard_lobFolder,
    STATE(48), 1,
      sym__siard_dbname,
    STATE(50), 1,
      sym__siard_description,
    STATE(51), 1,
      sym__siard_archiver,
    STATE(53), 1,
      sym__siard_archiverContact,
    STATE(55), 1,
      sym__siard_dataOwner,
    STATE(58), 1,
      sym__siard_dataOriginTimespan,
    STATE(111), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(47), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(6), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [217] = 19,
    ACTIONS(27), 1,
      anon_sym_dbname,
    ACTIONS(29), 1,
      anon_sym_description,
    ACTIONS(31), 1,
      anon_sym_archiver,
    ACTIONS(33), 1,
      anon_sym_archiverContact,
    ACTIONS(35), 1,
      anon_sym_dataOwner,
    ACTIONS(37), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(39), 1,
      anon_sym_lobFolder,
    ACTIONS(41), 1,
      anon_sym_Schema,
    STATE(34), 1,
      sym__siard_lobFolder,
    STATE(48), 1,
      sym__siard_dbname,
    STATE(50), 1,
      sym__siard_description,
    STATE(51), 1,
      sym__siard_archiver,
    STATE(53), 1,
      sym__siard_archiverContact,
    STATE(55), 1,
      sym__siard_dataOwner,
    STATE(58), 1,
      sym__siard_dataOriginTimespan,
    STATE(94), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(49), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(7), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [278] = 18,
    ACTIONS(51), 1,
      anon_sym_dbname,
    ACTIONS(54), 1,
      anon_sym_description,
    ACTIONS(57), 1,
      anon_sym_archiver,
    ACTIONS(60), 1,
      anon_sym_archiverContact,
    ACTIONS(63), 1,
      anon_sym_dataOwner,
    ACTIONS(66), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(69), 1,
      anon_sym_lobFolder,
    ACTIONS(72), 1,
      anon_sym_Schema,
    STATE(34), 1,
      sym__siard_lobFolder,
    STATE(48), 1,
      sym__siard_dbname,
    STATE(50), 1,
      sym__siard_description,
    STATE(51), 1,
      sym__siard_archiver,
    STATE(53), 1,
      sym__siard_archiverContact,
    STATE(55), 1,
      sym__siard_dataOwner,
    STATE(58), 1,
      sym__siard_dataOriginTimespan,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(75), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(7), 2,
      sym_siard_schema,
      aux_sym_siard_metadata_repeat1,
  [336] = 10,
    ACTIONS(77), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(80), 1,
      anon_sym_Interpolation,
    ACTIONS(83), 1,
      anon_sym_Set,
    ACTIONS(86), 1,
      anon_sym_Execute,
    ACTIONS(89), 1,
      anon_sym_Output,
    ACTIONS(92), 1,
      anon_sym_Metadata,
    ACTIONS(95), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(98), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(8), 10,
      sym__statement,
      sym_nop,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [378] = 10,
    ACTIONS(100), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(102), 1,
      anon_sym_Interpolation,
    ACTIONS(104), 1,
      anon_sym_Set,
    ACTIONS(106), 1,
      anon_sym_Execute,
    ACTIONS(108), 1,
      anon_sym_Output,
    ACTIONS(110), 1,
      anon_sym_Metadata,
    ACTIONS(112), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(114), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(8), 10,
      sym__statement,
      sym_nop,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [420] = 10,
    ACTIONS(100), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(102), 1,
      anon_sym_Interpolation,
    ACTIONS(104), 1,
      anon_sym_Set,
    ACTIONS(106), 1,
      anon_sym_Execute,
    ACTIONS(108), 1,
      anon_sym_Output,
    ACTIONS(110), 1,
      anon_sym_Metadata,
    ACTIONS(112), 1,
      anon_sym_For,
    STATE(217), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(9), 10,
      sym__statement,
      sym_nop,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [461] = 10,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Interpolation,
    ACTIONS(13), 1,
      anon_sym_Set,
    ACTIONS(15), 1,
      anon_sym_Execute,
    ACTIONS(17), 1,
      anon_sym_Output,
    ACTIONS(19), 1,
      anon_sym_Metadata,
    ACTIONS(21), 1,
      anon_sym_For,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(16), 10,
      sym__statement,
      sym_nop,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [502] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(120), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(118), 16,
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
  [529] = 10,
    ACTIONS(100), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(102), 1,
      anon_sym_Interpolation,
    ACTIONS(104), 1,
      anon_sym_Set,
    ACTIONS(106), 1,
      anon_sym_Execute,
    ACTIONS(108), 1,
      anon_sym_Output,
    ACTIONS(110), 1,
      anon_sym_Metadata,
    ACTIONS(112), 1,
      anon_sym_For,
    STATE(230), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(9), 10,
      sym__statement,
      sym_nop,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [570] = 10,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Interpolation,
    ACTIONS(13), 1,
      anon_sym_Set,
    ACTIONS(15), 1,
      anon_sym_Execute,
    ACTIONS(17), 1,
      anon_sym_Output,
    ACTIONS(19), 1,
      anon_sym_Metadata,
    ACTIONS(21), 1,
      anon_sym_For,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(11), 10,
      sym__statement,
      sym_nop,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [611] = 10,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Interpolation,
    ACTIONS(13), 1,
      anon_sym_Set,
    ACTIONS(15), 1,
      anon_sym_Execute,
    ACTIONS(17), 1,
      anon_sym_Output,
    ACTIONS(19), 1,
      anon_sym_Metadata,
    ACTIONS(21), 1,
      anon_sym_For,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(16), 10,
      sym__statement,
      sym_nop,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [652] = 10,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(127), 1,
      anon_sym_Interpolation,
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
    STATE(16), 10,
      sym__statement,
      sym_nop,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [693] = 3,
    ACTIONS(147), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(145), 16,
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
  [719] = 3,
    ACTIONS(151), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(149), 16,
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
  [745] = 3,
    ACTIONS(155), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(153), 16,
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
  [771] = 9,
    ACTIONS(29), 1,
      anon_sym_description,
    ACTIONS(157), 1,
      anon_sym_Column,
    ACTIONS(159), 1,
      anon_sym_Key,
    ACTIONS(161), 1,
      anon_sym_Check,
    STATE(49), 1,
      sym__siard_description,
    STATE(180), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(163), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(52), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [804] = 9,
    ACTIONS(29), 1,
      anon_sym_description,
    ACTIONS(165), 1,
      anon_sym_Type,
    ACTIONS(167), 1,
      anon_sym_Table,
    ACTIONS(169), 1,
      anon_sym_View,
    STATE(27), 1,
      sym__ded,
    STATE(28), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(171), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(26), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [837] = 8,
    ACTIONS(175), 1,
      sym__inter_start,
    ACTIONS(177), 1,
      sym__inter_start2,
    ACTIONS(179), 1,
      sym__raw,
    STATE(107), 1,
      sym__ded,
    STATE(114), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(173), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(47), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [867] = 8,
    ACTIONS(175), 1,
      sym__inter_start,
    ACTIONS(177), 1,
      sym__inter_start2,
    ACTIONS(179), 1,
      sym__raw,
    STATE(2), 1,
      sym__ded,
    STATE(114), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(181), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(47), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [897] = 6,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_connection,
    ACTIONS(187), 1,
      anon_sym_result,
    ACTIONS(189), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(110), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [922] = 3,
    ACTIONS(193), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(191), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [941] = 7,
    ACTIONS(165), 1,
      anon_sym_Type,
    ACTIONS(167), 1,
      anon_sym_Table,
    ACTIONS(169), 1,
      anon_sym_View,
    STATE(44), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(195), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(61), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [968] = 3,
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
  [987] = 7,
    ACTIONS(165), 1,
      anon_sym_Type,
    ACTIONS(167), 1,
      anon_sym_Table,
    ACTIONS(169), 1,
      anon_sym_View,
    STATE(41), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(201), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(38), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1014] = 3,
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
  [1033] = 3,
    ACTIONS(209), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(207), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1052] = 3,
    ACTIONS(213), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(211), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1071] = 3,
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
  [1090] = 3,
    ACTIONS(221), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(219), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1109] = 3,
    ACTIONS(225), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(223), 9,
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
  [1147] = 3,
    ACTIONS(233), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(231), 9,
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
    ACTIONS(237), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(235), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1185] = 7,
    ACTIONS(165), 1,
      anon_sym_Type,
    ACTIONS(167), 1,
      anon_sym_Table,
    ACTIONS(169), 1,
      anon_sym_View,
    STATE(46), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(239), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(61), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1212] = 3,
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
  [1231] = 3,
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
  [1250] = 3,
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
  [1269] = 3,
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
  [1288] = 3,
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
  [1307] = 3,
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
  [1326] = 3,
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
  [1345] = 3,
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
  [1364] = 7,
    ACTIONS(275), 1,
      sym__inter_start,
    ACTIONS(278), 1,
      sym__inter_start2,
    ACTIONS(281), 1,
      sym__raw,
    STATE(114), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(273), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(47), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1391] = 3,
    ACTIONS(286), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(284), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1410] = 7,
    ACTIONS(157), 1,
      anon_sym_Column,
    ACTIONS(159), 1,
      anon_sym_Key,
    ACTIONS(161), 1,
      anon_sym_Check,
    STATE(177), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(288), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(54), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1437] = 3,
    ACTIONS(292), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(290), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1456] = 3,
    ACTIONS(296), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(294), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1475] = 7,
    ACTIONS(157), 1,
      anon_sym_Column,
    ACTIONS(159), 1,
      anon_sym_Key,
    ACTIONS(161), 1,
      anon_sym_Check,
    STATE(176), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(298), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(65), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1502] = 3,
    ACTIONS(302), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(300), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1521] = 7,
    ACTIONS(157), 1,
      anon_sym_Column,
    ACTIONS(159), 1,
      anon_sym_Key,
    ACTIONS(161), 1,
      anon_sym_Check,
    STATE(165), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(304), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(65), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1548] = 3,
    ACTIONS(308), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(306), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1567] = 3,
    ACTIONS(312), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(310), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1586] = 6,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(316), 1,
      anon_sym_connection,
    ACTIONS(318), 1,
      anon_sym_result,
    ACTIONS(320), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(91), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1611] = 3,
    ACTIONS(324), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(322), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
  [1630] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(326), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1646] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(328), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1662] = 6,
    ACTIONS(330), 1,
      anon_sym_Type,
    ACTIONS(333), 1,
      anon_sym_Table,
    ACTIONS(336), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(339), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(61), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1686] = 7,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      sym__inter_start,
    ACTIONS(345), 1,
      sym__string_content,
    ACTIONS(347), 1,
      sym__string_end,
    STATE(182), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(84), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1712] = 7,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      sym__inter_start,
    ACTIONS(345), 1,
      sym__string_content,
    ACTIONS(349), 1,
      sym__string_end,
    STATE(182), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(84), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1738] = 7,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      sym__inter_start,
    ACTIONS(345), 1,
      sym__string_content,
    ACTIONS(351), 1,
      sym__string_end,
    STATE(182), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(63), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1764] = 6,
    ACTIONS(353), 1,
      anon_sym_Column,
    ACTIONS(356), 1,
      anon_sym_Key,
    ACTIONS(359), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(362), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(65), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1788] = 3,
    ACTIONS(364), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1806] = 7,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      sym__inter_start,
    ACTIONS(345), 1,
      sym__string_content,
    ACTIONS(366), 1,
      sym__string_end,
    STATE(182), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(84), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1832] = 7,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      sym__inter_start,
    ACTIONS(345), 1,
      sym__string_content,
    ACTIONS(368), 1,
      sym__string_end,
    STATE(182), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(67), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1858] = 3,
    ACTIONS(153), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(155), 8,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_description,
      anon_sym_For,
      sym_identifier,
  [1876] = 7,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      sym__inter_start,
    ACTIONS(345), 1,
      sym__string_content,
    ACTIONS(370), 1,
      sym__string_end,
    STATE(182), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(84), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1902] = 7,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      sym__inter_start,
    ACTIONS(345), 1,
      sym__string_content,
    ACTIONS(372), 1,
      sym__string_end,
    STATE(182), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(70), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [1928] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(374), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1944] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(376), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1960] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(378), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1976] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(380), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1992] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(378), 9,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2008] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(376), 9,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2024] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(382), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2040] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(384), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2056] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(386), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2072] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(388), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2088] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(390), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2104] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(374), 9,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2120] = 7,
    ACTIONS(392), 1,
      anon_sym_BSLASH,
    ACTIONS(395), 1,
      sym__inter_start,
    ACTIONS(398), 1,
      sym__string_content,
    ACTIONS(401), 1,
      sym__string_end,
    STATE(182), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(84), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2146] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(403), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2162] = 7,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      sym__inter_start,
    ACTIONS(345), 1,
      sym__string_content,
    ACTIONS(405), 1,
      sym__string_end,
    STATE(182), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(62), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2188] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(407), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2204] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(409), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2220] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(411), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2236] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(413), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2252] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(415), 9,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2268] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2283] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(384), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2298] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(382), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2313] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(417), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2328] = 7,
    ACTIONS(29), 1,
      anon_sym_description,
    ACTIONS(419), 1,
      anon_sym_Field,
    STATE(129), 1,
      sym__siard_description,
    STATE(236), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(421), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(131), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2353] = 6,
    ACTIONS(175), 1,
      sym__inter_start,
    ACTIONS(177), 1,
      sym__inter_start2,
    ACTIONS(179), 1,
      sym__raw,
    STATE(114), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(23), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2376] = 6,
    ACTIONS(175), 1,
      sym__inter_start,
    ACTIONS(177), 1,
      sym__inter_start2,
    ACTIONS(179), 1,
      sym__raw,
    STATE(114), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(22), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2399] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(409), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2414] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(411), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2429] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(407), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2444] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2459] = 7,
    ACTIONS(29), 1,
      anon_sym_description,
    ACTIONS(419), 1,
      anon_sym_Field,
    STATE(125), 1,
      sym__siard_description,
    STATE(160), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(423), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(123), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2484] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(403), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2499] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(413), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2514] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(390), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2529] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2544] = 7,
    ACTIONS(29), 1,
      anon_sym_description,
    ACTIONS(157), 1,
      anon_sym_Column,
    STATE(118), 1,
      sym__siard_description,
    STATE(179), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(425), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(117), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2569] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(380), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2584] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(415), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2599] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(388), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2614] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(386), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2629] = 5,
    ACTIONS(419), 1,
      anon_sym_Field,
    STATE(155), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(427), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(158), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2648] = 4,
    ACTIONS(431), 1,
      sym__raw,
    STATE(115), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(429), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [2665] = 4,
    ACTIONS(435), 1,
      sym__raw,
    STATE(115), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(433), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [2682] = 6,
    ACTIONS(438), 1,
      anon_sym_COLON,
    ACTIONS(440), 1,
      aux_sym__short_descr_token1,
    STATE(171), 1,
      sym__nl,
    STATE(172), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(442), 2,
      sym__newline,
      sym__end_of_file,
  [2703] = 5,
    ACTIONS(157), 1,
      anon_sym_Column,
    STATE(174), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(444), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(173), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2722] = 5,
    ACTIONS(157), 1,
      anon_sym_Column,
    STATE(175), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(446), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(122), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2741] = 6,
    ACTIONS(440), 1,
      aux_sym__short_descr_token1,
    ACTIONS(448), 1,
      anon_sym_COLON,
    STATE(227), 1,
      sym__short_descr,
    STATE(229), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(450), 2,
      sym__newline,
      sym__end_of_file,
  [2762] = 6,
    ACTIONS(440), 1,
      aux_sym__short_descr_token1,
    ACTIONS(452), 1,
      anon_sym_COLON,
    STATE(187), 1,
      sym__nl,
    STATE(188), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(454), 2,
      sym__newline,
      sym__end_of_file,
  [2783] = 6,
    ACTIONS(440), 1,
      aux_sym__short_descr_token1,
    ACTIONS(456), 1,
      anon_sym_COLON,
    STATE(183), 1,
      sym__nl,
    STATE(184), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(458), 2,
      sym__newline,
      sym__end_of_file,
  [2804] = 5,
    ACTIONS(157), 1,
      anon_sym_Column,
    STATE(162), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(460), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(173), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2823] = 5,
    ACTIONS(419), 1,
      anon_sym_Field,
    STATE(137), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(462), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(158), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2842] = 6,
    ACTIONS(440), 1,
      aux_sym__short_descr_token1,
    ACTIONS(464), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym__nl,
    STATE(168), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(466), 2,
      sym__newline,
      sym__end_of_file,
  [2863] = 5,
    ACTIONS(419), 1,
      anon_sym_Field,
    STATE(159), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(468), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(113), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2882] = 6,
    ACTIONS(440), 1,
      aux_sym__short_descr_token1,
    ACTIONS(470), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym__nl,
    STATE(170), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(472), 2,
      sym__newline,
      sym__end_of_file,
  [2903] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(474), 6,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
      aux_sym_escape_sequence_token3,
      aux_sym_escape_sequence_token4,
      aux_sym_escape_sequence_token5,
      aux_sym_escape_sequence_token6,
  [2916] = 6,
    ACTIONS(440), 1,
      aux_sym__short_descr_token1,
    ACTIONS(476), 1,
      anon_sym_COLON,
    STATE(36), 1,
      sym__nl,
    STATE(37), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(478), 2,
      sym__newline,
      sym__end_of_file,
  [2937] = 5,
    ACTIONS(419), 1,
      anon_sym_Field,
    STATE(225), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(480), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(132), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2956] = 5,
    ACTIONS(482), 1,
      sym_identifier,
    STATE(95), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(484), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(145), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2975] = 5,
    ACTIONS(419), 1,
      anon_sym_Field,
    STATE(219), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(486), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(158), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2994] = 5,
    ACTIONS(419), 1,
      anon_sym_Field,
    STATE(211), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(488), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(158), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3013] = 5,
    ACTIONS(490), 1,
      sym_identifier,
    STATE(109), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(492), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(166), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3032] = 6,
    ACTIONS(440), 1,
      aux_sym__short_descr_token1,
    ACTIONS(494), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym__short_descr,
    STATE(186), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(496), 2,
      sym__newline,
      sym__end_of_file,
  [3053] = 5,
    ACTIONS(490), 1,
      sym_identifier,
    STATE(75), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(498), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(166), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3072] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(223), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3088] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(504), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3100] = 4,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(508), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(303), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3116] = 4,
    ACTIONS(189), 1,
      sym__string_start,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(269), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3132] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(212), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3148] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(192), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3164] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(512), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [3176] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(231), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3192] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(224), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3208] = 4,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(517), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(145), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [3224] = 4,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(508), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(284), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3240] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(222), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3256] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(213), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3272] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(190), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3288] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(235), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3304] = 4,
    ACTIONS(521), 1,
      sym__string_content,
    STATE(151), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(519), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [3320] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(215), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3336] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(220), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3352] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(524), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [3364] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(526), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3376] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(528), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3388] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(530), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3400] = 4,
    ACTIONS(532), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(535), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(158), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3416] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(537), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3428] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(539), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3440] = 4,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(508), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(282), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3456] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(541), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3468] = 5,
    ACTIONS(440), 1,
      aux_sym__short_descr_token1,
    STATE(200), 1,
      sym__short_descr,
    STATE(201), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(543), 2,
      sym__newline,
      sym__end_of_file,
  [3486] = 4,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(218), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3502] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(545), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3514] = 4,
    ACTIONS(547), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(550), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(166), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3530] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(552), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3542] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(554), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3554] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(556), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3566] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(558), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3578] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(560), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3590] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(562), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3602] = 4,
    ACTIONS(564), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(567), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(173), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3618] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(569), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3630] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(571), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3642] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(573), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3654] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(575), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3666] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(577), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3678] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(579), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3690] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(581), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3702] = 4,
    ACTIONS(189), 1,
      sym__string_start,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(241), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3718] = 4,
    ACTIONS(585), 1,
      sym__string_content,
    STATE(151), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(583), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [3734] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(587), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3746] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(589), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3758] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(591), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3770] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(593), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3782] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(595), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3794] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(597), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3806] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(599), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [3817] = 5,
    ACTIONS(601), 1,
      anon_sym_with,
    ACTIONS(603), 1,
      sym__newline,
    ACTIONS(605), 1,
      sym__end_of_file,
    STATE(101), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3834] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(524), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [3845] = 5,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      sym__newline,
    ACTIONS(611), 1,
      sym__end_of_file,
    STATE(87), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3862] = 4,
    ACTIONS(613), 1,
      anon_sym_COLON,
    ACTIONS(615), 1,
      anon_sym_EQ,
    STATE(228), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3876] = 4,
    ACTIONS(613), 1,
      anon_sym_COLON,
    ACTIONS(617), 1,
      anon_sym_EQ,
    STATE(42), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3890] = 3,
    STATE(102), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(619), 2,
      sym__newline,
      sym__end_of_file,
  [3902] = 3,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(133), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3914] = 4,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [3928] = 3,
    STATE(59), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(625), 2,
      sym__newline,
      sym__end_of_file,
  [3940] = 3,
    STATE(178), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(627), 2,
      sym__dedent,
      sym__end_of_file,
  [3952] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(629), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3962] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(631), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [3972] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(374), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3982] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(376), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [3992] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(633), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4002] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(378), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [4012] = 3,
    STATE(12), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(635), 2,
      sym__newline,
      sym__end_of_file,
  [4024] = 4,
    ACTIONS(613), 1,
      anon_sym_COLON,
    ACTIONS(637), 1,
      anon_sym_EQ,
    STATE(43), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4038] = 3,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(130), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4050] = 4,
    ACTIONS(613), 1,
      anon_sym_COLON,
    ACTIONS(639), 1,
      anon_sym_EQ,
    STATE(17), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4064] = 4,
    ACTIONS(613), 1,
      anon_sym_COLON,
    ACTIONS(641), 1,
      anon_sym_EQ,
    STATE(45), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4078] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(643), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4088] = 3,
    STATE(85), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(645), 2,
      sym__newline,
      sym__end_of_file,
  [4100] = 3,
    STATE(31), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(647), 2,
      sym__newline,
      sym__end_of_file,
  [4112] = 3,
    STATE(88), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(649), 2,
      sym__newline,
      sym__end_of_file,
  [4124] = 3,
    STATE(29), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(651), 2,
      sym__newline,
      sym__end_of_file,
  [4136] = 3,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(135), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4148] = 3,
    STATE(80), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(653), 2,
      sym__dedent,
      sym__end_of_file,
  [4160] = 3,
    STATE(204), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(655), 2,
      sym__newline,
      sym__end_of_file,
  [4172] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(657), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4182] = 3,
    STATE(104), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(659), 2,
      sym__newline,
      sym__end_of_file,
  [4194] = 4,
    ACTIONS(613), 1,
      anon_sym_COLON,
    ACTIONS(661), 1,
      anon_sym_EQ,
    STATE(25), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4208] = 3,
    STATE(32), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(663), 2,
      sym__newline,
      sym__end_of_file,
  [4220] = 3,
    STATE(33), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(665), 2,
      sym__newline,
      sym__end_of_file,
  [4232] = 3,
    STATE(18), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(667), 2,
      sym__newline,
      sym__end_of_file,
  [4244] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(669), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4254] = 4,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4268] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(673), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4278] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(675), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4288] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(677), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4298] = 3,
    STATE(112), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(679), 2,
      sym__dedent,
      sym__end_of_file,
  [4310] = 3,
    STATE(35), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(681), 2,
      sym__newline,
      sym__end_of_file,
  [4322] = 4,
    ACTIONS(613), 1,
      anon_sym_COLON,
    ACTIONS(683), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4336] = 3,
    STATE(99), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(685), 2,
      sym__newline,
      sym__end_of_file,
  [4348] = 4,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4362] = 3,
    STATE(30), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(692), 2,
      sym__newline,
      sym__end_of_file,
  [4374] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(694), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4384] = 3,
    STATE(157), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(696), 2,
      sym__dedent,
      sym__end_of_file,
  [4396] = 3,
    STATE(156), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(698), 2,
      sym__dedent,
      sym__end_of_file,
  [4408] = 4,
    ACTIONS(613), 1,
      anon_sym_COLON,
    ACTIONS(700), 1,
      anon_sym_EQ,
    STATE(39), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4422] = 3,
    ACTIONS(702), 1,
      sym__newline,
    STATE(21), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4433] = 3,
    ACTIONS(704), 1,
      anon_sym_COLON,
    STATE(105), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4444] = 3,
    ACTIONS(704), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4455] = 3,
    ACTIONS(706), 1,
      sym__newline,
    STATE(249), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4466] = 3,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(343), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4477] = 3,
    ACTIONS(710), 1,
      anon_sym_using,
    ACTIONS(712), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4488] = 3,
    ACTIONS(706), 1,
      sym__newline,
    STATE(250), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4499] = 3,
    ACTIONS(706), 1,
      sym__newline,
    STATE(216), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4510] = 3,
    ACTIONS(702), 1,
      sym__newline,
    STATE(20), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4521] = 3,
    ACTIONS(29), 1,
      anon_sym_description,
    STATE(237), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4532] = 3,
    ACTIONS(29), 1,
      anon_sym_description,
    STATE(238), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4543] = 3,
    ACTIONS(706), 1,
      sym__newline,
    STATE(10), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4554] = 3,
    ACTIONS(714), 1,
      anon_sym_COLON,
    STATE(106), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4565] = 3,
    ACTIONS(702), 1,
      sym__newline,
    STATE(5), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4576] = 3,
    ACTIONS(702), 1,
      sym__newline,
    STATE(96), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4587] = 3,
    ACTIONS(704), 1,
      anon_sym_COLON,
    STATE(92), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4598] = 3,
    ACTIONS(702), 1,
      sym__newline,
    STATE(108), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4609] = 3,
    ACTIONS(702), 1,
      sym__newline,
    STATE(103), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4620] = 3,
    ACTIONS(706), 1,
      sym__newline,
    STATE(263), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4631] = 3,
    ACTIONS(706), 1,
      sym__newline,
    STATE(208), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4642] = 3,
    ACTIONS(716), 1,
      anon_sym_COLON,
    STATE(79), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4653] = 3,
    ACTIONS(716), 1,
      anon_sym_COLON,
    STATE(82), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4664] = 3,
    ACTIONS(706), 1,
      sym__newline,
    STATE(13), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4675] = 3,
    ACTIONS(29), 1,
      anon_sym_description,
    STATE(199), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4686] = 3,
    ACTIONS(714), 1,
      anon_sym_COLON,
    STATE(93), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4697] = 3,
    ACTIONS(702), 1,
      sym__newline,
    STATE(4), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4708] = 3,
    ACTIONS(613), 1,
      anon_sym_COLON,
    STATE(60), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4719] = 3,
    ACTIONS(613), 1,
      anon_sym_COLON,
    STATE(89), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4730] = 3,
    ACTIONS(706), 1,
      sym__newline,
    STATE(196), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4741] = 3,
    ACTIONS(613), 1,
      anon_sym_COLON,
    STATE(90), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4752] = 3,
    ACTIONS(718), 1,
      anon_sym_using,
    ACTIONS(720), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4763] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(690), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4772] = 3,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(291), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4783] = 2,
    ACTIONS(722), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4791] = 2,
    ACTIONS(724), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4799] = 2,
    ACTIONS(726), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4807] = 2,
    ACTIONS(728), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4815] = 2,
    ACTIONS(730), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4823] = 2,
    ACTIONS(732), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4831] = 2,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4839] = 2,
    ACTIONS(736), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4847] = 2,
    ACTIONS(738), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4855] = 2,
    ACTIONS(740), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4863] = 2,
    ACTIONS(742), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4871] = 2,
    ACTIONS(744), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4879] = 2,
    ACTIONS(746), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4887] = 2,
    ACTIONS(748), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4895] = 2,
    ACTIONS(750), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4903] = 2,
    ACTIONS(752), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4911] = 2,
    ACTIONS(754), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4919] = 2,
    ACTIONS(756), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4927] = 2,
    ACTIONS(758), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4935] = 2,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4943] = 2,
    ACTIONS(762), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4951] = 2,
    ACTIONS(764), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4959] = 2,
    ACTIONS(766), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4967] = 2,
    ACTIONS(768), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4975] = 2,
    ACTIONS(770), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4983] = 2,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4991] = 2,
    ACTIONS(774), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4999] = 2,
    ACTIONS(776), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5007] = 2,
    ACTIONS(778), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5015] = 2,
    ACTIONS(780), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5023] = 2,
    ACTIONS(782), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5031] = 2,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5039] = 2,
    ACTIONS(786), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5047] = 2,
    ACTIONS(788), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5055] = 2,
    ACTIONS(374), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5063] = 2,
    ACTIONS(790), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5071] = 2,
    ACTIONS(376), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5079] = 2,
    ACTIONS(792), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5087] = 2,
    ACTIONS(794), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5095] = 2,
    ACTIONS(796), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5103] = 2,
    ACTIONS(798), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5111] = 2,
    ACTIONS(800), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5119] = 2,
    ACTIONS(802), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5127] = 2,
    ACTIONS(804), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5135] = 2,
    ACTIONS(806), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5143] = 2,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5151] = 2,
    ACTIONS(810), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5159] = 2,
    ACTIONS(812), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5167] = 2,
    ACTIONS(378), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5175] = 2,
    ACTIONS(814), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5183] = 2,
    ACTIONS(816), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5191] = 2,
    ACTIONS(818), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5199] = 2,
    ACTIONS(820), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5207] = 2,
    ACTIONS(822), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5215] = 2,
    ACTIONS(824), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5223] = 2,
    ACTIONS(826), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5231] = 2,
    ACTIONS(828), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5239] = 2,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5247] = 2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5255] = 2,
    ACTIONS(834), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5263] = 2,
    ACTIONS(836), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5271] = 2,
    ACTIONS(838), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5279] = 2,
    ACTIONS(840), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5287] = 2,
    ACTIONS(842), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5295] = 2,
    ACTIONS(844), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5303] = 2,
    ACTIONS(846), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5311] = 2,
    ACTIONS(848), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5319] = 2,
    ACTIONS(850), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5327] = 2,
    ACTIONS(852), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5335] = 2,
    ACTIONS(854), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5343] = 2,
    ACTIONS(856), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5351] = 2,
    ACTIONS(858), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5359] = 2,
    ACTIONS(860), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 95,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 217,
  [SMALL_STATE(7)] = 278,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 378,
  [SMALL_STATE(10)] = 420,
  [SMALL_STATE(11)] = 461,
  [SMALL_STATE(12)] = 502,
  [SMALL_STATE(13)] = 529,
  [SMALL_STATE(14)] = 570,
  [SMALL_STATE(15)] = 611,
  [SMALL_STATE(16)] = 652,
  [SMALL_STATE(17)] = 693,
  [SMALL_STATE(18)] = 719,
  [SMALL_STATE(19)] = 745,
  [SMALL_STATE(20)] = 771,
  [SMALL_STATE(21)] = 804,
  [SMALL_STATE(22)] = 837,
  [SMALL_STATE(23)] = 867,
  [SMALL_STATE(24)] = 897,
  [SMALL_STATE(25)] = 922,
  [SMALL_STATE(26)] = 941,
  [SMALL_STATE(27)] = 968,
  [SMALL_STATE(28)] = 987,
  [SMALL_STATE(29)] = 1014,
  [SMALL_STATE(30)] = 1033,
  [SMALL_STATE(31)] = 1052,
  [SMALL_STATE(32)] = 1071,
  [SMALL_STATE(33)] = 1090,
  [SMALL_STATE(34)] = 1109,
  [SMALL_STATE(35)] = 1128,
  [SMALL_STATE(36)] = 1147,
  [SMALL_STATE(37)] = 1166,
  [SMALL_STATE(38)] = 1185,
  [SMALL_STATE(39)] = 1212,
  [SMALL_STATE(40)] = 1231,
  [SMALL_STATE(41)] = 1250,
  [SMALL_STATE(42)] = 1269,
  [SMALL_STATE(43)] = 1288,
  [SMALL_STATE(44)] = 1307,
  [SMALL_STATE(45)] = 1326,
  [SMALL_STATE(46)] = 1345,
  [SMALL_STATE(47)] = 1364,
  [SMALL_STATE(48)] = 1391,
  [SMALL_STATE(49)] = 1410,
  [SMALL_STATE(50)] = 1437,
  [SMALL_STATE(51)] = 1456,
  [SMALL_STATE(52)] = 1475,
  [SMALL_STATE(53)] = 1502,
  [SMALL_STATE(54)] = 1521,
  [SMALL_STATE(55)] = 1548,
  [SMALL_STATE(56)] = 1567,
  [SMALL_STATE(57)] = 1586,
  [SMALL_STATE(58)] = 1611,
  [SMALL_STATE(59)] = 1630,
  [SMALL_STATE(60)] = 1646,
  [SMALL_STATE(61)] = 1662,
  [SMALL_STATE(62)] = 1686,
  [SMALL_STATE(63)] = 1712,
  [SMALL_STATE(64)] = 1738,
  [SMALL_STATE(65)] = 1764,
  [SMALL_STATE(66)] = 1788,
  [SMALL_STATE(67)] = 1806,
  [SMALL_STATE(68)] = 1832,
  [SMALL_STATE(69)] = 1858,
  [SMALL_STATE(70)] = 1876,
  [SMALL_STATE(71)] = 1902,
  [SMALL_STATE(72)] = 1928,
  [SMALL_STATE(73)] = 1944,
  [SMALL_STATE(74)] = 1960,
  [SMALL_STATE(75)] = 1976,
  [SMALL_STATE(76)] = 1992,
  [SMALL_STATE(77)] = 2008,
  [SMALL_STATE(78)] = 2024,
  [SMALL_STATE(79)] = 2040,
  [SMALL_STATE(80)] = 2056,
  [SMALL_STATE(81)] = 2072,
  [SMALL_STATE(82)] = 2088,
  [SMALL_STATE(83)] = 2104,
  [SMALL_STATE(84)] = 2120,
  [SMALL_STATE(85)] = 2146,
  [SMALL_STATE(86)] = 2162,
  [SMALL_STATE(87)] = 2188,
  [SMALL_STATE(88)] = 2204,
  [SMALL_STATE(89)] = 2220,
  [SMALL_STATE(90)] = 2236,
  [SMALL_STATE(91)] = 2252,
  [SMALL_STATE(92)] = 2268,
  [SMALL_STATE(93)] = 2283,
  [SMALL_STATE(94)] = 2298,
  [SMALL_STATE(95)] = 2313,
  [SMALL_STATE(96)] = 2328,
  [SMALL_STATE(97)] = 2353,
  [SMALL_STATE(98)] = 2376,
  [SMALL_STATE(99)] = 2399,
  [SMALL_STATE(100)] = 2414,
  [SMALL_STATE(101)] = 2429,
  [SMALL_STATE(102)] = 2444,
  [SMALL_STATE(103)] = 2459,
  [SMALL_STATE(104)] = 2484,
  [SMALL_STATE(105)] = 2499,
  [SMALL_STATE(106)] = 2514,
  [SMALL_STATE(107)] = 2529,
  [SMALL_STATE(108)] = 2544,
  [SMALL_STATE(109)] = 2569,
  [SMALL_STATE(110)] = 2584,
  [SMALL_STATE(111)] = 2599,
  [SMALL_STATE(112)] = 2614,
  [SMALL_STATE(113)] = 2629,
  [SMALL_STATE(114)] = 2648,
  [SMALL_STATE(115)] = 2665,
  [SMALL_STATE(116)] = 2682,
  [SMALL_STATE(117)] = 2703,
  [SMALL_STATE(118)] = 2722,
  [SMALL_STATE(119)] = 2741,
  [SMALL_STATE(120)] = 2762,
  [SMALL_STATE(121)] = 2783,
  [SMALL_STATE(122)] = 2804,
  [SMALL_STATE(123)] = 2823,
  [SMALL_STATE(124)] = 2842,
  [SMALL_STATE(125)] = 2863,
  [SMALL_STATE(126)] = 2882,
  [SMALL_STATE(127)] = 2903,
  [SMALL_STATE(128)] = 2916,
  [SMALL_STATE(129)] = 2937,
  [SMALL_STATE(130)] = 2956,
  [SMALL_STATE(131)] = 2975,
  [SMALL_STATE(132)] = 2994,
  [SMALL_STATE(133)] = 3013,
  [SMALL_STATE(134)] = 3032,
  [SMALL_STATE(135)] = 3053,
  [SMALL_STATE(136)] = 3072,
  [SMALL_STATE(137)] = 3088,
  [SMALL_STATE(138)] = 3100,
  [SMALL_STATE(139)] = 3116,
  [SMALL_STATE(140)] = 3132,
  [SMALL_STATE(141)] = 3148,
  [SMALL_STATE(142)] = 3164,
  [SMALL_STATE(143)] = 3176,
  [SMALL_STATE(144)] = 3192,
  [SMALL_STATE(145)] = 3208,
  [SMALL_STATE(146)] = 3224,
  [SMALL_STATE(147)] = 3240,
  [SMALL_STATE(148)] = 3256,
  [SMALL_STATE(149)] = 3272,
  [SMALL_STATE(150)] = 3288,
  [SMALL_STATE(151)] = 3304,
  [SMALL_STATE(152)] = 3320,
  [SMALL_STATE(153)] = 3336,
  [SMALL_STATE(154)] = 3352,
  [SMALL_STATE(155)] = 3364,
  [SMALL_STATE(156)] = 3376,
  [SMALL_STATE(157)] = 3388,
  [SMALL_STATE(158)] = 3400,
  [SMALL_STATE(159)] = 3416,
  [SMALL_STATE(160)] = 3428,
  [SMALL_STATE(161)] = 3440,
  [SMALL_STATE(162)] = 3456,
  [SMALL_STATE(163)] = 3468,
  [SMALL_STATE(164)] = 3486,
  [SMALL_STATE(165)] = 3502,
  [SMALL_STATE(166)] = 3514,
  [SMALL_STATE(167)] = 3530,
  [SMALL_STATE(168)] = 3542,
  [SMALL_STATE(169)] = 3554,
  [SMALL_STATE(170)] = 3566,
  [SMALL_STATE(171)] = 3578,
  [SMALL_STATE(172)] = 3590,
  [SMALL_STATE(173)] = 3602,
  [SMALL_STATE(174)] = 3618,
  [SMALL_STATE(175)] = 3630,
  [SMALL_STATE(176)] = 3642,
  [SMALL_STATE(177)] = 3654,
  [SMALL_STATE(178)] = 3666,
  [SMALL_STATE(179)] = 3678,
  [SMALL_STATE(180)] = 3690,
  [SMALL_STATE(181)] = 3702,
  [SMALL_STATE(182)] = 3718,
  [SMALL_STATE(183)] = 3734,
  [SMALL_STATE(184)] = 3746,
  [SMALL_STATE(185)] = 3758,
  [SMALL_STATE(186)] = 3770,
  [SMALL_STATE(187)] = 3782,
  [SMALL_STATE(188)] = 3794,
  [SMALL_STATE(189)] = 3806,
  [SMALL_STATE(190)] = 3817,
  [SMALL_STATE(191)] = 3834,
  [SMALL_STATE(192)] = 3845,
  [SMALL_STATE(193)] = 3862,
  [SMALL_STATE(194)] = 3876,
  [SMALL_STATE(195)] = 3890,
  [SMALL_STATE(196)] = 3902,
  [SMALL_STATE(197)] = 3914,
  [SMALL_STATE(198)] = 3928,
  [SMALL_STATE(199)] = 3940,
  [SMALL_STATE(200)] = 3952,
  [SMALL_STATE(201)] = 3962,
  [SMALL_STATE(202)] = 3972,
  [SMALL_STATE(203)] = 3982,
  [SMALL_STATE(204)] = 3992,
  [SMALL_STATE(205)] = 4002,
  [SMALL_STATE(206)] = 4012,
  [SMALL_STATE(207)] = 4024,
  [SMALL_STATE(208)] = 4038,
  [SMALL_STATE(209)] = 4050,
  [SMALL_STATE(210)] = 4064,
  [SMALL_STATE(211)] = 4078,
  [SMALL_STATE(212)] = 4088,
  [SMALL_STATE(213)] = 4100,
  [SMALL_STATE(214)] = 4112,
  [SMALL_STATE(215)] = 4124,
  [SMALL_STATE(216)] = 4136,
  [SMALL_STATE(217)] = 4148,
  [SMALL_STATE(218)] = 4160,
  [SMALL_STATE(219)] = 4172,
  [SMALL_STATE(220)] = 4182,
  [SMALL_STATE(221)] = 4194,
  [SMALL_STATE(222)] = 4208,
  [SMALL_STATE(223)] = 4220,
  [SMALL_STATE(224)] = 4232,
  [SMALL_STATE(225)] = 4244,
  [SMALL_STATE(226)] = 4254,
  [SMALL_STATE(227)] = 4268,
  [SMALL_STATE(228)] = 4278,
  [SMALL_STATE(229)] = 4288,
  [SMALL_STATE(230)] = 4298,
  [SMALL_STATE(231)] = 4310,
  [SMALL_STATE(232)] = 4322,
  [SMALL_STATE(233)] = 4336,
  [SMALL_STATE(234)] = 4348,
  [SMALL_STATE(235)] = 4362,
  [SMALL_STATE(236)] = 4374,
  [SMALL_STATE(237)] = 4384,
  [SMALL_STATE(238)] = 4396,
  [SMALL_STATE(239)] = 4408,
  [SMALL_STATE(240)] = 4422,
  [SMALL_STATE(241)] = 4433,
  [SMALL_STATE(242)] = 4444,
  [SMALL_STATE(243)] = 4455,
  [SMALL_STATE(244)] = 4466,
  [SMALL_STATE(245)] = 4477,
  [SMALL_STATE(246)] = 4488,
  [SMALL_STATE(247)] = 4499,
  [SMALL_STATE(248)] = 4510,
  [SMALL_STATE(249)] = 4521,
  [SMALL_STATE(250)] = 4532,
  [SMALL_STATE(251)] = 4543,
  [SMALL_STATE(252)] = 4554,
  [SMALL_STATE(253)] = 4565,
  [SMALL_STATE(254)] = 4576,
  [SMALL_STATE(255)] = 4587,
  [SMALL_STATE(256)] = 4598,
  [SMALL_STATE(257)] = 4609,
  [SMALL_STATE(258)] = 4620,
  [SMALL_STATE(259)] = 4631,
  [SMALL_STATE(260)] = 4642,
  [SMALL_STATE(261)] = 4653,
  [SMALL_STATE(262)] = 4664,
  [SMALL_STATE(263)] = 4675,
  [SMALL_STATE(264)] = 4686,
  [SMALL_STATE(265)] = 4697,
  [SMALL_STATE(266)] = 4708,
  [SMALL_STATE(267)] = 4719,
  [SMALL_STATE(268)] = 4730,
  [SMALL_STATE(269)] = 4741,
  [SMALL_STATE(270)] = 4752,
  [SMALL_STATE(271)] = 4763,
  [SMALL_STATE(272)] = 4772,
  [SMALL_STATE(273)] = 4783,
  [SMALL_STATE(274)] = 4791,
  [SMALL_STATE(275)] = 4799,
  [SMALL_STATE(276)] = 4807,
  [SMALL_STATE(277)] = 4815,
  [SMALL_STATE(278)] = 4823,
  [SMALL_STATE(279)] = 4831,
  [SMALL_STATE(280)] = 4839,
  [SMALL_STATE(281)] = 4847,
  [SMALL_STATE(282)] = 4855,
  [SMALL_STATE(283)] = 4863,
  [SMALL_STATE(284)] = 4871,
  [SMALL_STATE(285)] = 4879,
  [SMALL_STATE(286)] = 4887,
  [SMALL_STATE(287)] = 4895,
  [SMALL_STATE(288)] = 4903,
  [SMALL_STATE(289)] = 4911,
  [SMALL_STATE(290)] = 4919,
  [SMALL_STATE(291)] = 4927,
  [SMALL_STATE(292)] = 4935,
  [SMALL_STATE(293)] = 4943,
  [SMALL_STATE(294)] = 4951,
  [SMALL_STATE(295)] = 4959,
  [SMALL_STATE(296)] = 4967,
  [SMALL_STATE(297)] = 4975,
  [SMALL_STATE(298)] = 4983,
  [SMALL_STATE(299)] = 4991,
  [SMALL_STATE(300)] = 4999,
  [SMALL_STATE(301)] = 5007,
  [SMALL_STATE(302)] = 5015,
  [SMALL_STATE(303)] = 5023,
  [SMALL_STATE(304)] = 5031,
  [SMALL_STATE(305)] = 5039,
  [SMALL_STATE(306)] = 5047,
  [SMALL_STATE(307)] = 5055,
  [SMALL_STATE(308)] = 5063,
  [SMALL_STATE(309)] = 5071,
  [SMALL_STATE(310)] = 5079,
  [SMALL_STATE(311)] = 5087,
  [SMALL_STATE(312)] = 5095,
  [SMALL_STATE(313)] = 5103,
  [SMALL_STATE(314)] = 5111,
  [SMALL_STATE(315)] = 5119,
  [SMALL_STATE(316)] = 5127,
  [SMALL_STATE(317)] = 5135,
  [SMALL_STATE(318)] = 5143,
  [SMALL_STATE(319)] = 5151,
  [SMALL_STATE(320)] = 5159,
  [SMALL_STATE(321)] = 5167,
  [SMALL_STATE(322)] = 5175,
  [SMALL_STATE(323)] = 5183,
  [SMALL_STATE(324)] = 5191,
  [SMALL_STATE(325)] = 5199,
  [SMALL_STATE(326)] = 5207,
  [SMALL_STATE(327)] = 5215,
  [SMALL_STATE(328)] = 5223,
  [SMALL_STATE(329)] = 5231,
  [SMALL_STATE(330)] = 5239,
  [SMALL_STATE(331)] = 5247,
  [SMALL_STATE(332)] = 5255,
  [SMALL_STATE(333)] = 5263,
  [SMALL_STATE(334)] = 5271,
  [SMALL_STATE(335)] = 5279,
  [SMALL_STATE(336)] = 5287,
  [SMALL_STATE(337)] = 5295,
  [SMALL_STATE(338)] = 5303,
  [SMALL_STATE(339)] = 5311,
  [SMALL_STATE(340)] = 5319,
  [SMALL_STATE(341)] = 5327,
  [SMALL_STATE(342)] = 5335,
  [SMALL_STATE(343)] = 5343,
  [SMALL_STATE(344)] = 5351,
  [SMALL_STATE(345)] = 5359,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(210),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(209),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(207),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(194),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(221),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(232),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(239),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(304),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(328),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(341),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(344),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_body, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(296),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(283),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 21),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 21),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 33),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 33),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 24),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 24),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 30),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 5, .production_id = 30),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 38),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 38),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 37),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 37),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 36),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 36),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 35),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 35),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 34),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 34),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 4, .production_id = 32),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 4, .production_id = 32),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 30),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 30),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 29),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 29),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 26),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 26),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 25),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 25),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 40),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 40),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 23),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 23),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 22),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 22),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 30),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 30),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 2, .production_id = 20),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 2, .production_id = 20),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 40),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 7, .production_id = 40),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(138),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(161),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(114),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 10),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 10),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 11),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 11),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 12),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 12),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 3),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(326),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(305),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(299),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(294),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(293),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(292),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 9, .production_id = 27),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6, .production_id = 19),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 8, .production_id = 18),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 8, .production_id = 17),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 9),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(127),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(146),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(182),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 7, .production_id = 8),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 7),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_inter, 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 4, .production_id = 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 4, .production_id = 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(115),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 30),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation2, 3),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(163),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(151),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 40),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 40),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 40),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(327),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 40),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 30),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 40),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 40),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(193),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 30),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 29),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 30),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 29),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 30),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 29),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(294),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 30),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 40),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 30),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 40),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 40),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 30),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 30),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 30),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 29),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 29),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 30),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 30),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 29),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 39),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 40),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 30),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 40),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 29),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 31),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 30),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2), SHIFT_REPEAT(312),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 30),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [724] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
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
