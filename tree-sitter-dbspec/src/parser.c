#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 379
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 47

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
  anon_sym_Command = 37,
  anon_sym_title = 38,
  anon_sym_Body = 39,
  anon_sym_For = 40,
  anon_sym_in = 41,
  anon_sym_LPAREN = 42,
  anon_sym_COMMA = 43,
  anon_sym_RPAREN = 44,
  anon_sym_BSLASH = 45,
  aux_sym_escape_sequence_token1 = 46,
  aux_sym_escape_sequence_token2 = 47,
  aux_sym_escape_sequence_token3 = 48,
  aux_sym_escape_sequence_token4 = 49,
  aux_sym_escape_sequence_token5 = 50,
  aux_sym_escape_sequence_token6 = 51,
  sym_integer = 52,
  sym_short_description = 53,
  aux_sym__short_descr_token1 = 54,
  sym__newline = 55,
  sym__indent = 56,
  sym__dedent = 57,
  sym__inter_start = 58,
  sym__inter_start2 = 59,
  sym__inter_end = 60,
  sym__raw = 61,
  sym__string_start = 62,
  sym__string_content = 63,
  sym__string_end = 64,
  sym__comment = 65,
  sym__end_of_file = 66,
  sym__skip = 67,
  sym__set_inter = 68,
  sym_source_file = 69,
  sym_parameters = 70,
  sym_parameter = 71,
  sym__statement = 72,
  sym_nop = 73,
  sym_log = 74,
  sym_set_inter = 75,
  sym_set = 76,
  sym__expression = 77,
  sym_execute_using = 78,
  sym_connection = 79,
  sym_execute_sql = 80,
  sym_query = 81,
  sym_siard_output = 82,
  sym_siard_metadata = 83,
  sym__siard_dbname = 84,
  sym__siard_description = 85,
  sym__siard_archiver = 86,
  sym__siard_archiverContact = 87,
  sym__siard_dataOwner = 88,
  sym__siard_dataOriginTimespan = 89,
  sym__siard_lobFolder = 90,
  sym_siard_schema = 91,
  sym_siard_type = 92,
  sym_siard_table = 93,
  sym_siard_column = 94,
  sym_siard_field = 95,
  sym_siard_key = 96,
  sym_siard_check = 97,
  sym_siard_view = 98,
  sym_command_declaration = 99,
  sym_for_loop = 100,
  sym_for_variables = 101,
  sym_for_body = 102,
  sym__basic_expression = 103,
  sym_variable_instance = 104,
  sym_string = 105,
  sym_string_content = 106,
  sym_escape_sequence = 107,
  sym__short_descr = 108,
  sym__nl = 109,
  sym__ni = 110,
  sym__ded = 111,
  sym_interpolation = 112,
  sym_interpolation2 = 113,
  sym_key_value_pairs = 114,
  sym_key_value_pair = 115,
  sym_raw = 116,
  sym_raw_content = 117,
  aux_sym_source_file_repeat1 = 118,
  aux_sym_parameters_repeat1 = 119,
  aux_sym_siard_metadata_repeat1 = 120,
  aux_sym_siard_schema_repeat1 = 121,
  aux_sym_siard_table_repeat1 = 122,
  aux_sym_siard_column_repeat1 = 123,
  aux_sym_siard_view_repeat1 = 124,
  aux_sym_for_variables_repeat1 = 125,
  aux_sym_string_repeat1 = 126,
  aux_sym_string_content_repeat1 = 127,
  aux_sym_key_value_pairs_repeat1 = 128,
  aux_sym_raw_repeat1 = 129,
  aux_sym_raw_content_repeat1 = 130,
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
  [anon_sym_Command] = "Command",
  [anon_sym_title] = "title",
  [anon_sym_Body] = "Body",
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
  [sym_integer] = "integer",
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
  [sym_command_declaration] = "command_declaration",
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
  [anon_sym_Command] = anon_sym_Command,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_Body] = anon_sym_Body,
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
  [sym_integer] = sym_integer,
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
  [sym_command_declaration] = sym_command_declaration,
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
  [anon_sym_Command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Body] = {
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
  [sym_integer] = {
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
  [sym_command_declaration] = {
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
  field_parameters = 14,
  field_properties = 15,
  field_result_set = 16,
  field_script = 17,
  field_sql = 18,
  field_title = 19,
  field_url = 20,
  field_value = 21,
  field_variables = 22,
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
  [field_parameters] = "parameters",
  [field_properties] = "properties",
  [field_result_set] = "result_set",
  [field_script] = "script",
  [field_sql] = "sql",
  [field_title] = "title",
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
  [41] = {.index = 78, .length = 1},
  [42] = {.index = 79, .length = 2},
  [43] = {.index = 81, .length = 2},
  [44] = {.index = 83, .length = 3},
  [45] = {.index = 86, .length = 2},
  [46] = {.index = 88, .length = 3},
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
  [78] =
    {field_body, 4},
  [79] =
    {field_body, 5},
    {field_parameters, 3},
  [81] =
    {field_body, 6},
    {field_title, 4},
  [83] =
    {field_body, 7},
    {field_parameters, 5},
    {field_title, 4},
  [86] =
    {field_body, 8},
    {field_title, 5},
  [88] =
    {field_body, 9},
    {field_parameters, 7},
    {field_title, 5},
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
  [4] = 3,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 7,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 2,
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
  [42] = 31,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 37,
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
  [67] = 65,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 63,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 24,
  [88] = 88,
  [89] = 64,
  [90] = 85,
  [91] = 91,
  [92] = 69,
  [93] = 84,
  [94] = 88,
  [95] = 83,
  [96] = 96,
  [97] = 70,
  [98] = 61,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 80,
  [103] = 100,
  [104] = 100,
  [105] = 99,
  [106] = 79,
  [107] = 81,
  [108] = 78,
  [109] = 82,
  [110] = 71,
  [111] = 99,
  [112] = 100,
  [113] = 99,
  [114] = 75,
  [115] = 73,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 116,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 125,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 124,
  [133] = 133,
  [134] = 123,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 127,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 129,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 126,
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
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 197,
  [202] = 202,
  [203] = 203,
  [204] = 200,
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
  [223] = 223,
  [224] = 224,
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
  [236] = 212,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 231,
  [247] = 227,
  [248] = 248,
  [249] = 208,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 63,
  [254] = 209,
  [255] = 255,
  [256] = 256,
  [257] = 64,
  [258] = 258,
  [259] = 259,
  [260] = 65,
  [261] = 261,
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
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 267,
  [280] = 262,
  [281] = 281,
  [282] = 282,
  [283] = 273,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 264,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 271,
  [297] = 284,
  [298] = 272,
  [299] = 278,
  [300] = 282,
  [301] = 294,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 63,
  [308] = 308,
  [309] = 64,
  [310] = 310,
  [311] = 65,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 320,
  [331] = 312,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 302,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 346,
  [351] = 351,
  [352] = 317,
  [353] = 353,
  [354] = 318,
  [355] = 321,
  [356] = 339,
  [357] = 357,
  [358] = 310,
  [359] = 334,
  [360] = 360,
  [361] = 361,
  [362] = 336,
  [363] = 306,
  [364] = 304,
  [365] = 322,
  [366] = 328,
  [367] = 341,
  [368] = 351,
  [369] = 324,
  [370] = 316,
  [371] = 303,
  [372] = 305,
  [373] = 347,
  [374] = 340,
  [375] = 315,
  [376] = 313,
  [377] = 332,
  [378] = 357,
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
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == 'U') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(50);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(41);
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
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(42);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(61);
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
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(61);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(61);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(61);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(61);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_short_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__short_descr_token1);
      if (lookahead == ' ') ADVANCE(63);
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
      if (lookahead == 'B') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(2);
      if (lookahead == 'E') ADVANCE(3);
      if (lookahead == 'F') ADVANCE(4);
      if (lookahead == 'I') ADVANCE(5);
      if (lookahead == 'K') ADVANCE(6);
      if (lookahead == 'L') ADVANCE(7);
      if (lookahead == 'M') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(9);
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == 'V') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Log);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'w') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 82:
      if (lookahead == 'F') ADVANCE(108);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_via);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Body);
      END_STATE();
    case 90:
      if (lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_dbname);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Command);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_Metadata);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(174);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_connection);
      END_STATE();
    case 184:
      if (lookahead == 'T') ADVANCE(188);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_Interpolation);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 202:
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
  [12] = {.lex_state = 21, .external_lex_state = 2},
  [13] = {.lex_state = 21, .external_lex_state = 2},
  [14] = {.lex_state = 21, .external_lex_state = 2},
  [15] = {.lex_state = 21, .external_lex_state = 2},
  [16] = {.lex_state = 21, .external_lex_state = 3},
  [17] = {.lex_state = 21, .external_lex_state = 3},
  [18] = {.lex_state = 21, .external_lex_state = 3},
  [19] = {.lex_state = 21, .external_lex_state = 3},
  [20] = {.lex_state = 21, .external_lex_state = 2},
  [21] = {.lex_state = 21, .external_lex_state = 3},
  [22] = {.lex_state = 21, .external_lex_state = 3},
  [23] = {.lex_state = 21, .external_lex_state = 3},
  [24] = {.lex_state = 21, .external_lex_state = 3},
  [25] = {.lex_state = 21, .external_lex_state = 3},
  [26] = {.lex_state = 21, .external_lex_state = 3},
  [27] = {.lex_state = 21, .external_lex_state = 3},
  [28] = {.lex_state = 21, .external_lex_state = 2},
  [29] = {.lex_state = 21, .external_lex_state = 3},
  [30] = {.lex_state = 21, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 4},
  [32] = {.lex_state = 21, .external_lex_state = 3},
  [33] = {.lex_state = 21, .external_lex_state = 3},
  [34] = {.lex_state = 21, .external_lex_state = 3},
  [35] = {.lex_state = 21, .external_lex_state = 3},
  [36] = {.lex_state = 21, .external_lex_state = 3},
  [37] = {.lex_state = 21, .external_lex_state = 5},
  [38] = {.lex_state = 21, .external_lex_state = 3},
  [39] = {.lex_state = 21, .external_lex_state = 3},
  [40] = {.lex_state = 21, .external_lex_state = 3},
  [41] = {.lex_state = 21, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 4},
  [43] = {.lex_state = 21, .external_lex_state = 3},
  [44] = {.lex_state = 21, .external_lex_state = 3},
  [45] = {.lex_state = 21, .external_lex_state = 3},
  [46] = {.lex_state = 21, .external_lex_state = 3},
  [47] = {.lex_state = 21, .external_lex_state = 3},
  [48] = {.lex_state = 21, .external_lex_state = 3},
  [49] = {.lex_state = 21, .external_lex_state = 3},
  [50] = {.lex_state = 21, .external_lex_state = 5},
  [51] = {.lex_state = 21, .external_lex_state = 3},
  [52] = {.lex_state = 21, .external_lex_state = 3},
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
  [66] = {.lex_state = 0, .external_lex_state = 4},
  [67] = {.lex_state = 21, .external_lex_state = 2},
  [68] = {.lex_state = 21, .external_lex_state = 2},
  [69] = {.lex_state = 21, .external_lex_state = 3},
  [70] = {.lex_state = 21, .external_lex_state = 3},
  [71] = {.lex_state = 21, .external_lex_state = 3},
  [72] = {.lex_state = 21, .external_lex_state = 3},
  [73] = {.lex_state = 21, .external_lex_state = 3},
  [74] = {.lex_state = 21, .external_lex_state = 3},
  [75] = {.lex_state = 21, .external_lex_state = 3},
  [76] = {.lex_state = 21, .external_lex_state = 3},
  [77] = {.lex_state = 21, .external_lex_state = 2},
  [78] = {.lex_state = 21, .external_lex_state = 3},
  [79] = {.lex_state = 21, .external_lex_state = 3},
  [80] = {.lex_state = 21, .external_lex_state = 3},
  [81] = {.lex_state = 21, .external_lex_state = 3},
  [82] = {.lex_state = 21, .external_lex_state = 3},
  [83] = {.lex_state = 21, .external_lex_state = 3},
  [84] = {.lex_state = 21, .external_lex_state = 3},
  [85] = {.lex_state = 21, .external_lex_state = 3},
  [86] = {.lex_state = 21, .external_lex_state = 3},
  [87] = {.lex_state = 21, .external_lex_state = 2},
  [88] = {.lex_state = 21, .external_lex_state = 3},
  [89] = {.lex_state = 21, .external_lex_state = 2},
  [90] = {.lex_state = 21, .external_lex_state = 2},
  [91] = {.lex_state = 21, .external_lex_state = 3},
  [92] = {.lex_state = 21, .external_lex_state = 2},
  [93] = {.lex_state = 21, .external_lex_state = 2},
  [94] = {.lex_state = 21, .external_lex_state = 2},
  [95] = {.lex_state = 21, .external_lex_state = 2},
  [96] = {.lex_state = 21, .external_lex_state = 6},
  [97] = {.lex_state = 21, .external_lex_state = 2},
  [98] = {.lex_state = 21, .external_lex_state = 2},
  [99] = {.lex_state = 21, .external_lex_state = 6},
  [100] = {.lex_state = 21, .external_lex_state = 6},
  [101] = {.lex_state = 21, .external_lex_state = 3},
  [102] = {.lex_state = 21, .external_lex_state = 2},
  [103] = {.lex_state = 21, .external_lex_state = 6},
  [104] = {.lex_state = 21, .external_lex_state = 6},
  [105] = {.lex_state = 21, .external_lex_state = 6},
  [106] = {.lex_state = 21, .external_lex_state = 2},
  [107] = {.lex_state = 21, .external_lex_state = 2},
  [108] = {.lex_state = 21, .external_lex_state = 2},
  [109] = {.lex_state = 21, .external_lex_state = 2},
  [110] = {.lex_state = 21, .external_lex_state = 2},
  [111] = {.lex_state = 21, .external_lex_state = 6},
  [112] = {.lex_state = 21, .external_lex_state = 6},
  [113] = {.lex_state = 21, .external_lex_state = 6},
  [114] = {.lex_state = 21, .external_lex_state = 2},
  [115] = {.lex_state = 21, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 7},
  [117] = {.lex_state = 21, .external_lex_state = 3},
  [118] = {.lex_state = 21, .external_lex_state = 3},
  [119] = {.lex_state = 21, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 7},
  [121] = {.lex_state = 21, .external_lex_state = 3},
  [122] = {.lex_state = 0, .external_lex_state = 8},
  [123] = {.lex_state = 21, .external_lex_state = 5},
  [124] = {.lex_state = 21, .external_lex_state = 5},
  [125] = {.lex_state = 21, .external_lex_state = 5},
  [126] = {.lex_state = 21, .external_lex_state = 5},
  [127] = {.lex_state = 21, .external_lex_state = 5},
  [128] = {.lex_state = 21, .external_lex_state = 5},
  [129] = {.lex_state = 21, .external_lex_state = 3},
  [130] = {.lex_state = 21, .external_lex_state = 3},
  [131] = {.lex_state = 21, .external_lex_state = 5},
  [132] = {.lex_state = 21, .external_lex_state = 5},
  [133] = {.lex_state = 21, .external_lex_state = 5},
  [134] = {.lex_state = 21, .external_lex_state = 5},
  [135] = {.lex_state = 21, .external_lex_state = 5},
  [136] = {.lex_state = 2, .external_lex_state = 2},
  [137] = {.lex_state = 21, .external_lex_state = 5},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 21, .external_lex_state = 5},
  [140] = {.lex_state = 0, .external_lex_state = 8},
  [141] = {.lex_state = 21, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 8},
  [143] = {.lex_state = 21, .external_lex_state = 5},
  [144] = {.lex_state = 21, .external_lex_state = 5},
  [145] = {.lex_state = 0, .external_lex_state = 8},
  [146] = {.lex_state = 0, .external_lex_state = 8},
  [147] = {.lex_state = 21, .external_lex_state = 3},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 8},
  [150] = {.lex_state = 21, .external_lex_state = 3},
  [151] = {.lex_state = 21, .external_lex_state = 3},
  [152] = {.lex_state = 21, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 8},
  [154] = {.lex_state = 21, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 8},
  [156] = {.lex_state = 21, .external_lex_state = 5},
  [157] = {.lex_state = 21, .external_lex_state = 5},
  [158] = {.lex_state = 21, .external_lex_state = 3},
  [159] = {.lex_state = 21, .external_lex_state = 5},
  [160] = {.lex_state = 21, .external_lex_state = 3},
  [161] = {.lex_state = 21, .external_lex_state = 3},
  [162] = {.lex_state = 21, .external_lex_state = 5},
  [163] = {.lex_state = 21, .external_lex_state = 3},
  [164] = {.lex_state = 21, .external_lex_state = 3},
  [165] = {.lex_state = 21, .external_lex_state = 3},
  [166] = {.lex_state = 0, .external_lex_state = 4},
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
  [181] = {.lex_state = 21, .external_lex_state = 3},
  [182] = {.lex_state = 21, .external_lex_state = 3},
  [183] = {.lex_state = 21, .external_lex_state = 3},
  [184] = {.lex_state = 21, .external_lex_state = 3},
  [185] = {.lex_state = 21, .external_lex_state = 3},
  [186] = {.lex_state = 21, .external_lex_state = 3},
  [187] = {.lex_state = 21, .external_lex_state = 3},
  [188] = {.lex_state = 21, .external_lex_state = 3},
  [189] = {.lex_state = 21, .external_lex_state = 3},
  [190] = {.lex_state = 21, .external_lex_state = 6},
  [191] = {.lex_state = 21, .external_lex_state = 3},
  [192] = {.lex_state = 21, .external_lex_state = 3},
  [193] = {.lex_state = 21, .external_lex_state = 3},
  [194] = {.lex_state = 0, .external_lex_state = 8},
  [195] = {.lex_state = 21, .external_lex_state = 3},
  [196] = {.lex_state = 21, .external_lex_state = 3},
  [197] = {.lex_state = 0, .external_lex_state = 4},
  [198] = {.lex_state = 21, .external_lex_state = 3},
  [199] = {.lex_state = 21, .external_lex_state = 6},
  [200] = {.lex_state = 21, .external_lex_state = 8},
  [201] = {.lex_state = 21, .external_lex_state = 6},
  [202] = {.lex_state = 21, .external_lex_state = 6},
  [203] = {.lex_state = 21, .external_lex_state = 2},
  [204] = {.lex_state = 21, .external_lex_state = 8},
  [205] = {.lex_state = 0, .external_lex_state = 3},
  [206] = {.lex_state = 21, .external_lex_state = 3},
  [207] = {.lex_state = 21, .external_lex_state = 3},
  [208] = {.lex_state = 0, .external_lex_state = 8},
  [209] = {.lex_state = 0, .external_lex_state = 8},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 8},
  [212] = {.lex_state = 0, .external_lex_state = 3},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 3},
  [215] = {.lex_state = 21, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 8},
  [217] = {.lex_state = 21, .external_lex_state = 3},
  [218] = {.lex_state = 21, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 3},
  [220] = {.lex_state = 21, .external_lex_state = 3},
  [221] = {.lex_state = 21, .external_lex_state = 3},
  [222] = {.lex_state = 0, .external_lex_state = 8},
  [223] = {.lex_state = 21, .external_lex_state = 3},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 21, .external_lex_state = 3},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 8},
  [228] = {.lex_state = 0, .external_lex_state = 3},
  [229] = {.lex_state = 0, .external_lex_state = 3},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 21, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 8},
  [233] = {.lex_state = 21, .external_lex_state = 3},
  [234] = {.lex_state = 0, .external_lex_state = 8},
  [235] = {.lex_state = 0, .external_lex_state = 3},
  [236] = {.lex_state = 0, .external_lex_state = 3},
  [237] = {.lex_state = 0, .external_lex_state = 8},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 21, .external_lex_state = 2},
  [242] = {.lex_state = 21, .external_lex_state = 3},
  [243] = {.lex_state = 0, .external_lex_state = 8},
  [244] = {.lex_state = 0, .external_lex_state = 8},
  [245] = {.lex_state = 21, .external_lex_state = 3},
  [246] = {.lex_state = 21, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 8},
  [248] = {.lex_state = 0, .external_lex_state = 3},
  [249] = {.lex_state = 0, .external_lex_state = 8},
  [250] = {.lex_state = 0, .external_lex_state = 3},
  [251] = {.lex_state = 0, .external_lex_state = 8},
  [252] = {.lex_state = 0, .external_lex_state = 3},
  [253] = {.lex_state = 21, .external_lex_state = 8},
  [254] = {.lex_state = 0, .external_lex_state = 8},
  [255] = {.lex_state = 0, .external_lex_state = 8},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 21, .external_lex_state = 8},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 21, .external_lex_state = 8},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 21, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 9},
  [265] = {.lex_state = 0, .external_lex_state = 9},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 9},
  [269] = {.lex_state = 0, .external_lex_state = 9},
  [270] = {.lex_state = 0, .external_lex_state = 9},
  [271] = {.lex_state = 0, .external_lex_state = 9},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 9},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 21, .external_lex_state = 2},
  [277] = {.lex_state = 0, .external_lex_state = 9},
  [278] = {.lex_state = 0, .external_lex_state = 2},
  [279] = {.lex_state = 0, .external_lex_state = 2},
  [280] = {.lex_state = 21, .external_lex_state = 2},
  [281] = {.lex_state = 21, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 0, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 21, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 0, .external_lex_state = 9},
  [289] = {.lex_state = 0, .external_lex_state = 9},
  [290] = {.lex_state = 0, .external_lex_state = 9},
  [291] = {.lex_state = 0, .external_lex_state = 2},
  [292] = {.lex_state = 0, .external_lex_state = 9},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 9},
  [295] = {.lex_state = 0, .external_lex_state = 9},
  [296] = {.lex_state = 0, .external_lex_state = 9},
  [297] = {.lex_state = 0, .external_lex_state = 2},
  [298] = {.lex_state = 0, .external_lex_state = 2},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 0, .external_lex_state = 9},
  [302] = {.lex_state = 0, .external_lex_state = 10},
  [303] = {.lex_state = 2, .external_lex_state = 2},
  [304] = {.lex_state = 21, .external_lex_state = 2},
  [305] = {.lex_state = 21, .external_lex_state = 2},
  [306] = {.lex_state = 21, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 10},
  [308] = {.lex_state = 0, .external_lex_state = 10},
  [309] = {.lex_state = 0, .external_lex_state = 10},
  [310] = {.lex_state = 0, .external_lex_state = 11},
  [311] = {.lex_state = 0, .external_lex_state = 10},
  [312] = {.lex_state = 0, .external_lex_state = 11},
  [313] = {.lex_state = 21, .external_lex_state = 2},
  [314] = {.lex_state = 21, .external_lex_state = 2},
  [315] = {.lex_state = 21, .external_lex_state = 2},
  [316] = {.lex_state = 2, .external_lex_state = 2},
  [317] = {.lex_state = 21, .external_lex_state = 2},
  [318] = {.lex_state = 0, .external_lex_state = 12},
  [319] = {.lex_state = 21, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 21, .external_lex_state = 2},
  [322] = {.lex_state = 21, .external_lex_state = 2},
  [323] = {.lex_state = 21, .external_lex_state = 2},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 21, .external_lex_state = 2},
  [326] = {.lex_state = 0, .external_lex_state = 2},
  [327] = {.lex_state = 21, .external_lex_state = 2},
  [328] = {.lex_state = 0, .external_lex_state = 9},
  [329] = {.lex_state = 21, .external_lex_state = 2},
  [330] = {.lex_state = 0, .external_lex_state = 2},
  [331] = {.lex_state = 0, .external_lex_state = 11},
  [332] = {.lex_state = 21, .external_lex_state = 2},
  [333] = {.lex_state = 21, .external_lex_state = 2},
  [334] = {.lex_state = 0, .external_lex_state = 2},
  [335] = {.lex_state = 0, .external_lex_state = 10},
  [336] = {.lex_state = 21, .external_lex_state = 2},
  [337] = {.lex_state = 0, .external_lex_state = 2},
  [338] = {.lex_state = 21, .external_lex_state = 2},
  [339] = {.lex_state = 21, .external_lex_state = 2},
  [340] = {.lex_state = 21, .external_lex_state = 2},
  [341] = {.lex_state = 21, .external_lex_state = 2},
  [342] = {.lex_state = 21, .external_lex_state = 2},
  [343] = {.lex_state = 21, .external_lex_state = 2},
  [344] = {.lex_state = 0, .external_lex_state = 2},
  [345] = {.lex_state = 21, .external_lex_state = 2},
  [346] = {.lex_state = 21, .external_lex_state = 2},
  [347] = {.lex_state = 21, .external_lex_state = 2},
  [348] = {.lex_state = 21, .external_lex_state = 2},
  [349] = {.lex_state = 21, .external_lex_state = 2},
  [350] = {.lex_state = 21, .external_lex_state = 2},
  [351] = {.lex_state = 0, .external_lex_state = 2},
  [352] = {.lex_state = 21, .external_lex_state = 2},
  [353] = {.lex_state = 21, .external_lex_state = 2},
  [354] = {.lex_state = 0, .external_lex_state = 12},
  [355] = {.lex_state = 21, .external_lex_state = 2},
  [356] = {.lex_state = 21, .external_lex_state = 2},
  [357] = {.lex_state = 21, .external_lex_state = 2},
  [358] = {.lex_state = 0, .external_lex_state = 11},
  [359] = {.lex_state = 0, .external_lex_state = 2},
  [360] = {.lex_state = 62, .external_lex_state = 2},
  [361] = {.lex_state = 21, .external_lex_state = 2},
  [362] = {.lex_state = 21, .external_lex_state = 2},
  [363] = {.lex_state = 21, .external_lex_state = 2},
  [364] = {.lex_state = 21, .external_lex_state = 2},
  [365] = {.lex_state = 21, .external_lex_state = 2},
  [366] = {.lex_state = 0, .external_lex_state = 9},
  [367] = {.lex_state = 21, .external_lex_state = 2},
  [368] = {.lex_state = 0, .external_lex_state = 2},
  [369] = {.lex_state = 0, .external_lex_state = 2},
  [370] = {.lex_state = 2, .external_lex_state = 2},
  [371] = {.lex_state = 2, .external_lex_state = 2},
  [372] = {.lex_state = 21, .external_lex_state = 2},
  [373] = {.lex_state = 21, .external_lex_state = 2},
  [374] = {.lex_state = 21, .external_lex_state = 2},
  [375] = {.lex_state = 21, .external_lex_state = 2},
  [376] = {.lex_state = 21, .external_lex_state = 2},
  [377] = {.lex_state = 21, .external_lex_state = 2},
  [378] = {.lex_state = 21, .external_lex_state = 2},
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
    [ts_external_token__inter_end] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [11] = {
    [ts_external_token__indent] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [12] = {
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
    [ts_external_token__set_inter] = true,
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
    [anon_sym_Command] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_Body] = ACTIONS(1),
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
    [sym_integer] = ACTIONS(1),
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
    [sym_source_file] = STATE(326),
    [sym_parameters] = STATE(12),
    [sym__statement] = STATE(13),
    [sym_nop] = STATE(13),
    [sym_log] = STATE(13),
    [sym_set_inter] = STATE(13),
    [sym_set] = STATE(13),
    [sym_execute_using] = STATE(13),
    [sym_execute_sql] = STATE(13),
    [sym_siard_output] = STATE(13),
    [sym_siard_metadata] = STATE(13),
    [sym_for_loop] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
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
    ACTIONS(25), 24,
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
      anon_sym_Command,
      anon_sym_For,
      sym_identifier,
  [36] = 20,
    ACTIONS(29), 1,
      anon_sym_dbname,
    ACTIONS(31), 1,
      anon_sym_description,
    ACTIONS(33), 1,
      anon_sym_archiver,
    ACTIONS(35), 1,
      anon_sym_archiverContact,
    ACTIONS(37), 1,
      anon_sym_dataOwner,
    ACTIONS(39), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(41), 1,
      anon_sym_lobFolder,
    ACTIONS(43), 1,
      anon_sym_Schema,
    ACTIONS(45), 1,
      anon_sym_Command,
    STATE(25), 1,
      sym__siard_archiver,
    STATE(32), 1,
      sym__siard_dataOwner,
    STATE(35), 1,
      sym__siard_dataOriginTimespan,
    STATE(36), 1,
      sym__siard_lobFolder,
    STATE(45), 1,
      sym__siard_dbname,
    STATE(48), 1,
      sym__siard_description,
    STATE(59), 1,
      sym__siard_archiverContact,
    STATE(70), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(47), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(8), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [101] = 20,
    ACTIONS(29), 1,
      anon_sym_dbname,
    ACTIONS(31), 1,
      anon_sym_description,
    ACTIONS(33), 1,
      anon_sym_archiver,
    ACTIONS(35), 1,
      anon_sym_archiverContact,
    ACTIONS(37), 1,
      anon_sym_dataOwner,
    ACTIONS(39), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(41), 1,
      anon_sym_lobFolder,
    ACTIONS(43), 1,
      anon_sym_Schema,
    ACTIONS(45), 1,
      anon_sym_Command,
    STATE(25), 1,
      sym__siard_archiver,
    STATE(32), 1,
      sym__siard_dataOwner,
    STATE(35), 1,
      sym__siard_dataOriginTimespan,
    STATE(36), 1,
      sym__siard_lobFolder,
    STATE(45), 1,
      sym__siard_dbname,
    STATE(48), 1,
      sym__siard_description,
    STATE(59), 1,
      sym__siard_archiverContact,
    STATE(97), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(49), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(8), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [166] = 20,
    ACTIONS(29), 1,
      anon_sym_dbname,
    ACTIONS(31), 1,
      anon_sym_description,
    ACTIONS(33), 1,
      anon_sym_archiver,
    ACTIONS(35), 1,
      anon_sym_archiverContact,
    ACTIONS(37), 1,
      anon_sym_dataOwner,
    ACTIONS(39), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(41), 1,
      anon_sym_lobFolder,
    ACTIONS(43), 1,
      anon_sym_Schema,
    ACTIONS(45), 1,
      anon_sym_Command,
    STATE(25), 1,
      sym__siard_archiver,
    STATE(32), 1,
      sym__siard_dataOwner,
    STATE(35), 1,
      sym__siard_dataOriginTimespan,
    STATE(36), 1,
      sym__siard_lobFolder,
    STATE(45), 1,
      sym__siard_dbname,
    STATE(48), 1,
      sym__siard_description,
    STATE(59), 1,
      sym__siard_archiverContact,
    STATE(75), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(51), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(3), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [231] = 20,
    ACTIONS(29), 1,
      anon_sym_dbname,
    ACTIONS(31), 1,
      anon_sym_description,
    ACTIONS(33), 1,
      anon_sym_archiver,
    ACTIONS(35), 1,
      anon_sym_archiverContact,
    ACTIONS(37), 1,
      anon_sym_dataOwner,
    ACTIONS(39), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(41), 1,
      anon_sym_lobFolder,
    ACTIONS(43), 1,
      anon_sym_Schema,
    ACTIONS(45), 1,
      anon_sym_Command,
    STATE(25), 1,
      sym__siard_archiver,
    STATE(32), 1,
      sym__siard_dataOwner,
    STATE(35), 1,
      sym__siard_dataOriginTimespan,
    STATE(36), 1,
      sym__siard_lobFolder,
    STATE(45), 1,
      sym__siard_dbname,
    STATE(48), 1,
      sym__siard_description,
    STATE(59), 1,
      sym__siard_archiverContact,
    STATE(114), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(53), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(4), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [296] = 11,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(58), 1,
      anon_sym_Log,
    ACTIONS(61), 1,
      anon_sym_Interpolation,
    ACTIONS(64), 1,
      anon_sym_Set,
    ACTIONS(67), 1,
      anon_sym_Execute,
    ACTIONS(70), 1,
      anon_sym_Output,
    ACTIONS(73), 1,
      anon_sym_Metadata,
    ACTIONS(76), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(79), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(7), 11,
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
  [342] = 19,
    ACTIONS(81), 1,
      anon_sym_dbname,
    ACTIONS(84), 1,
      anon_sym_description,
    ACTIONS(87), 1,
      anon_sym_archiver,
    ACTIONS(90), 1,
      anon_sym_archiverContact,
    ACTIONS(93), 1,
      anon_sym_dataOwner,
    ACTIONS(96), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(99), 1,
      anon_sym_lobFolder,
    ACTIONS(102), 1,
      anon_sym_Schema,
    ACTIONS(105), 1,
      anon_sym_Command,
    STATE(25), 1,
      sym__siard_archiver,
    STATE(32), 1,
      sym__siard_dataOwner,
    STATE(35), 1,
      sym__siard_dataOriginTimespan,
    STATE(36), 1,
      sym__siard_lobFolder,
    STATE(45), 1,
      sym__siard_dbname,
    STATE(48), 1,
      sym__siard_description,
    STATE(59), 1,
      sym__siard_archiverContact,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(108), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(8), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [404] = 11,
    ACTIONS(110), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(112), 1,
      anon_sym_Log,
    ACTIONS(114), 1,
      anon_sym_Interpolation,
    ACTIONS(116), 1,
      anon_sym_Set,
    ACTIONS(118), 1,
      anon_sym_Execute,
    ACTIONS(120), 1,
      anon_sym_Output,
    ACTIONS(122), 1,
      anon_sym_Metadata,
    ACTIONS(124), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(126), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(7), 11,
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
  [450] = 11,
    ACTIONS(110), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(112), 1,
      anon_sym_Log,
    ACTIONS(114), 1,
      anon_sym_Interpolation,
    ACTIONS(116), 1,
      anon_sym_Set,
    ACTIONS(118), 1,
      anon_sym_Execute,
    ACTIONS(120), 1,
      anon_sym_Output,
    ACTIONS(122), 1,
      anon_sym_Metadata,
    ACTIONS(124), 1,
      anon_sym_For,
    STATE(236), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(9), 11,
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
  [495] = 11,
    ACTIONS(110), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(112), 1,
      anon_sym_Log,
    ACTIONS(114), 1,
      anon_sym_Interpolation,
    ACTIONS(116), 1,
      anon_sym_Set,
    ACTIONS(118), 1,
      anon_sym_Execute,
    ACTIONS(120), 1,
      anon_sym_Output,
    ACTIONS(122), 1,
      anon_sym_Metadata,
    ACTIONS(124), 1,
      anon_sym_For,
    STATE(212), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(9), 11,
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
  [540] = 11,
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
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(15), 11,
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
  [585] = 11,
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
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(14), 11,
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
  [630] = 11,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(133), 1,
      anon_sym_Log,
    ACTIONS(136), 1,
      anon_sym_Interpolation,
    ACTIONS(139), 1,
      anon_sym_Set,
    ACTIONS(142), 1,
      anon_sym_Execute,
    ACTIONS(145), 1,
      anon_sym_Output,
    ACTIONS(148), 1,
      anon_sym_Metadata,
    ACTIONS(151), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(14), 11,
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
  [675] = 11,
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
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(14), 11,
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
  [720] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(158), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(156), 17,
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
      anon_sym_Command,
      sym_identifier,
  [748] = 3,
    ACTIONS(162), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(160), 17,
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
      anon_sym_Command,
  [775] = 3,
    ACTIONS(166), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(164), 17,
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
      anon_sym_Command,
  [802] = 3,
    ACTIONS(170), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(168), 17,
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
      anon_sym_Command,
  [829] = 3,
    ACTIONS(160), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(162), 12,
      anon_sym_Parameters,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_description,
      anon_sym_title,
      anon_sym_Body,
      anon_sym_For,
      sym_identifier,
  [851] = 9,
    ACTIONS(31), 1,
      anon_sym_description,
    ACTIONS(172), 1,
      anon_sym_Type,
    ACTIONS(174), 1,
      anon_sym_Table,
    ACTIONS(176), 1,
      anon_sym_View,
    STATE(49), 1,
      sym__ded,
    STATE(76), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(178), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(74), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [884] = 9,
    ACTIONS(31), 1,
      anon_sym_description,
    ACTIONS(180), 1,
      anon_sym_Column,
    ACTIONS(182), 1,
      anon_sym_Key,
    ACTIONS(184), 1,
      anon_sym_Check,
    STATE(62), 1,
      sym__siard_description,
    STATE(198), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(186), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(86), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [917] = 3,
    ACTIONS(190), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(188), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [937] = 3,
    ACTIONS(194), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(192), 10,
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
  [957] = 3,
    ACTIONS(198), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(196), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [977] = 3,
    ACTIONS(202), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(200), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [997] = 3,
    ACTIONS(206), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(204), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1017] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(27), 11,
      ts_builtin_sym_end,
      anon_sym_Parameters,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_Body,
      anon_sym_For,
  [1035] = 3,
    ACTIONS(210), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(208), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1055] = 3,
    ACTIONS(214), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(212), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1075] = 8,
    ACTIONS(218), 1,
      sym__inter_start,
    ACTIONS(220), 1,
      sym__inter_start2,
    ACTIONS(222), 1,
      sym__raw,
    STATE(2), 1,
      sym__ded,
    STATE(148), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(216), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(66), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1105] = 3,
    ACTIONS(226), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(224), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1125] = 3,
    ACTIONS(230), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(228), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1145] = 3,
    ACTIONS(234), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(232), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1165] = 3,
    ACTIONS(238), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(236), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1185] = 3,
    ACTIONS(242), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(240), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1205] = 7,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_connection,
    ACTIONS(248), 1,
      anon_sym_result,
    ACTIONS(250), 1,
      sym_integer,
    ACTIONS(252), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(102), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1233] = 3,
    ACTIONS(256), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(254), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1253] = 3,
    ACTIONS(260), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(258), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1273] = 3,
    ACTIONS(264), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(262), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1293] = 3,
    ACTIONS(268), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(266), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1313] = 8,
    ACTIONS(218), 1,
      sym__inter_start,
    ACTIONS(220), 1,
      sym__inter_start2,
    ACTIONS(222), 1,
      sym__raw,
    STATE(28), 1,
      sym__ded,
    STATE(148), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(270), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(66), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1343] = 3,
    ACTIONS(274), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(272), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1363] = 3,
    ACTIONS(278), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(276), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1383] = 3,
    ACTIONS(282), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(280), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1403] = 3,
    ACTIONS(286), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(284), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1423] = 3,
    ACTIONS(290), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(288), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1443] = 3,
    ACTIONS(294), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(292), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1463] = 3,
    ACTIONS(298), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(296), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1483] = 7,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_connection,
    ACTIONS(304), 1,
      anon_sym_result,
    ACTIONS(306), 1,
      sym_integer,
    ACTIONS(308), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(80), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1511] = 3,
    ACTIONS(312), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(310), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1531] = 3,
    ACTIONS(316), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(314), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1551] = 3,
    ACTIONS(320), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(318), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1571] = 3,
    ACTIONS(324), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(322), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1591] = 3,
    ACTIONS(328), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(326), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1611] = 3,
    ACTIONS(332), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(330), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1631] = 3,
    ACTIONS(336), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(334), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1651] = 3,
    ACTIONS(340), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(338), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1671] = 3,
    ACTIONS(344), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(342), 10,
      sym__dedent,
      sym__end_of_file,
      anon_sym_dbname,
      anon_sym_description,
      anon_sym_archiverContact,
      anon_sym_dataOwner,
      anon_sym_dataOriginTimespan,
      anon_sym_lobFolder,
      anon_sym_Schema,
      anon_sym_Command,
  [1691] = 7,
    ACTIONS(180), 1,
      anon_sym_Column,
    ACTIONS(182), 1,
      anon_sym_Key,
    ACTIONS(184), 1,
      anon_sym_Check,
    STATE(171), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(346), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(101), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1718] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(348), 10,
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
  [1735] = 7,
    ACTIONS(180), 1,
      anon_sym_Column,
    ACTIONS(182), 1,
      anon_sym_Key,
    ACTIONS(184), 1,
      anon_sym_Check,
    STATE(165), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(350), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(60), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1762] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(352), 10,
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
  [1779] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 10,
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
  [1796] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 10,
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
  [1813] = 7,
    ACTIONS(360), 1,
      sym__inter_start,
    ACTIONS(363), 1,
      sym__inter_start2,
    ACTIONS(366), 1,
      sym__raw,
    STATE(148), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(358), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(66), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1840] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 10,
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
  [1857] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(369), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_Body,
      anon_sym_For,
  [1874] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(371), 10,
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
  [1891] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(373), 10,
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
  [1908] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(375), 10,
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
  [1925] = 7,
    ACTIONS(172), 1,
      anon_sym_Type,
    ACTIONS(174), 1,
      anon_sym_Table,
    ACTIONS(176), 1,
      anon_sym_View,
    STATE(55), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(377), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(91), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1952] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(379), 10,
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
  [1969] = 7,
    ACTIONS(172), 1,
      anon_sym_Type,
    ACTIONS(174), 1,
      anon_sym_Table,
    ACTIONS(176), 1,
      anon_sym_View,
    STATE(51), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(381), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(91), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1996] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(383), 10,
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
  [2013] = 7,
    ACTIONS(172), 1,
      anon_sym_Type,
    ACTIONS(174), 1,
      anon_sym_Table,
    ACTIONS(176), 1,
      anon_sym_View,
    STATE(43), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(385), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(72), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2040] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(352), 10,
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
  [2057] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(387), 10,
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
  [2074] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(389), 10,
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
  [2091] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(391), 10,
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
  [2108] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(393), 10,
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
  [2125] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(395), 10,
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
  [2142] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(397), 10,
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
  [2159] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(399), 10,
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
  [2176] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(401), 10,
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
  [2193] = 7,
    ACTIONS(180), 1,
      anon_sym_Column,
    ACTIONS(182), 1,
      anon_sym_Key,
    ACTIONS(184), 1,
      anon_sym_Check,
    STATE(182), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(403), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(101), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2220] = 3,
    ACTIONS(405), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2239] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(407), 10,
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
  [2256] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 10,
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
  [2273] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(401), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2289] = 6,
    ACTIONS(409), 1,
      anon_sym_Type,
    ACTIONS(412), 1,
      anon_sym_Table,
    ACTIONS(415), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(418), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(91), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2313] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2329] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(399), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2345] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(407), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2361] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(397), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2377] = 7,
    ACTIONS(420), 1,
      anon_sym_BSLASH,
    ACTIONS(423), 1,
      sym__inter_start,
    ACTIONS(426), 1,
      sym__string_content,
    ACTIONS(429), 1,
      sym__string_end,
    STATE(199), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(96), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2403] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(373), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2419] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(348), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2435] = 7,
    ACTIONS(431), 1,
      anon_sym_BSLASH,
    ACTIONS(433), 1,
      sym__inter_start,
    ACTIONS(435), 1,
      sym__string_content,
    ACTIONS(437), 1,
      sym__string_end,
    STATE(199), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(96), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2461] = 7,
    ACTIONS(431), 1,
      anon_sym_BSLASH,
    ACTIONS(433), 1,
      sym__inter_start,
    ACTIONS(435), 1,
      sym__string_content,
    ACTIONS(439), 1,
      sym__string_end,
    STATE(199), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(99), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2487] = 6,
    ACTIONS(441), 1,
      anon_sym_Column,
    ACTIONS(444), 1,
      anon_sym_Key,
    ACTIONS(447), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(450), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(101), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2511] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2527] = 7,
    ACTIONS(431), 1,
      anon_sym_BSLASH,
    ACTIONS(433), 1,
      sym__inter_start,
    ACTIONS(435), 1,
      sym__string_content,
    ACTIONS(452), 1,
      sym__string_end,
    STATE(199), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(105), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2553] = 7,
    ACTIONS(431), 1,
      anon_sym_BSLASH,
    ACTIONS(433), 1,
      sym__inter_start,
    ACTIONS(435), 1,
      sym__string_content,
    ACTIONS(454), 1,
      sym__string_end,
    STATE(199), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(111), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2579] = 7,
    ACTIONS(431), 1,
      anon_sym_BSLASH,
    ACTIONS(433), 1,
      sym__inter_start,
    ACTIONS(435), 1,
      sym__string_content,
    ACTIONS(456), 1,
      sym__string_end,
    STATE(199), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(96), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2605] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(389), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2621] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(393), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2637] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2653] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(395), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2669] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(375), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2685] = 7,
    ACTIONS(431), 1,
      anon_sym_BSLASH,
    ACTIONS(433), 1,
      sym__inter_start,
    ACTIONS(435), 1,
      sym__string_content,
    ACTIONS(458), 1,
      sym__string_end,
    STATE(199), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(96), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2711] = 7,
    ACTIONS(431), 1,
      anon_sym_BSLASH,
    ACTIONS(433), 1,
      sym__inter_start,
    ACTIONS(435), 1,
      sym__string_content,
    ACTIONS(460), 1,
      sym__string_end,
    STATE(199), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(113), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2737] = 7,
    ACTIONS(431), 1,
      anon_sym_BSLASH,
    ACTIONS(433), 1,
      sym__inter_start,
    ACTIONS(435), 1,
      sym__string_content,
    ACTIONS(462), 1,
      sym__string_end,
    STATE(199), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(96), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2763] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(383), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2779] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(379), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2795] = 6,
    ACTIONS(218), 1,
      sym__inter_start,
    ACTIONS(220), 1,
      sym__inter_start2,
    ACTIONS(222), 1,
      sym__raw,
    STATE(148), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(31), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2818] = 7,
    ACTIONS(31), 1,
      anon_sym_description,
    ACTIONS(180), 1,
      anon_sym_Column,
    STATE(130), 1,
      sym__siard_description,
    STATE(168), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(464), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(154), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [2843] = 7,
    ACTIONS(31), 1,
      anon_sym_description,
    ACTIONS(466), 1,
      anon_sym_Field,
    STATE(161), 1,
      sym__siard_description,
    STATE(167), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(468), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(163), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2868] = 7,
    ACTIONS(31), 1,
      anon_sym_description,
    ACTIONS(466), 1,
      anon_sym_Field,
    STATE(121), 1,
      sym__siard_description,
    STATE(233), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(470), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(152), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2893] = 6,
    ACTIONS(218), 1,
      sym__inter_start,
    ACTIONS(220), 1,
      sym__inter_start2,
    ACTIONS(222), 1,
      sym__raw,
    STATE(148), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(42), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2916] = 5,
    ACTIONS(466), 1,
      anon_sym_Field,
    STATE(225), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(472), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(151), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [2935] = 6,
    ACTIONS(474), 1,
      anon_sym_COLON,
    ACTIONS(476), 1,
      aux_sym__short_descr_token1,
    STATE(176), 1,
      sym__nl,
    STATE(177), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(478), 2,
      sym__newline,
      sym__end_of_file,
  [2956] = 5,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 1,
      sym_integer,
    ACTIONS(484), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(335), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2975] = 5,
    ACTIONS(252), 1,
      sym__string_start,
    ACTIONS(486), 1,
      sym_identifier,
    ACTIONS(488), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(282), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [2994] = 5,
    ACTIONS(252), 1,
      sym__string_start,
    ACTIONS(486), 1,
      sym_identifier,
    ACTIONS(490), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(106), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3013] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(494), 1,
      sym_integer,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(208), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3032] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(498), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(200), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3051] = 5,
    ACTIONS(308), 1,
      sym__string_start,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(79), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3070] = 5,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(69), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(506), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3089] = 5,
    ACTIONS(180), 1,
      anon_sym_Column,
    STATE(181), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(508), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(158), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3108] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(510), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(216), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3127] = 5,
    ACTIONS(252), 1,
      sym__string_start,
    ACTIONS(486), 1,
      sym_identifier,
    ACTIONS(512), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(300), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3146] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(514), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(222), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3165] = 5,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(484), 1,
      sym__string_start,
    ACTIONS(516), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(302), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3184] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(518), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(232), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3203] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(520), 6,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
      aux_sym_escape_sequence_token3,
      aux_sym_escape_sequence_token4,
      aux_sym_escape_sequence_token5,
      aux_sym_escape_sequence_token6,
  [3216] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(522), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(234), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3235] = 4,
    ACTIONS(526), 1,
      sym__raw,
    STATE(138), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(524), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [3252] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(529), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(237), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3271] = 6,
    ACTIONS(476), 1,
      aux_sym__short_descr_token1,
    ACTIONS(531), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym__nl,
    STATE(175), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(533), 2,
      sym__newline,
      sym__end_of_file,
  [3292] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(535), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(243), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3311] = 6,
    ACTIONS(476), 1,
      aux_sym__short_descr_token1,
    ACTIONS(537), 1,
      anon_sym_COLON,
    STATE(206), 1,
      sym__nl,
    STATE(242), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(539), 2,
      sym__newline,
      sym__end_of_file,
  [3332] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(541), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(244), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3351] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(543), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(204), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3370] = 6,
    ACTIONS(476), 1,
      aux_sym__short_descr_token1,
    ACTIONS(545), 1,
      anon_sym_COLON,
    STATE(26), 1,
      sym__short_descr,
    STATE(33), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(547), 2,
      sym__newline,
      sym__end_of_file,
  [3391] = 6,
    ACTIONS(476), 1,
      aux_sym__short_descr_token1,
    ACTIONS(549), 1,
      anon_sym_COLON,
    STATE(192), 1,
      sym__short_descr,
    STATE(193), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(551), 2,
      sym__newline,
      sym__end_of_file,
  [3412] = 5,
    ACTIONS(553), 1,
      sym_identifier,
    STATE(68), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(555), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(195), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [3431] = 4,
    ACTIONS(559), 1,
      sym__raw,
    STATE(138), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(557), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [3448] = 6,
    ACTIONS(476), 1,
      aux_sym__short_descr_token1,
    ACTIONS(561), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym__short_descr,
    STATE(187), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(563), 2,
      sym__newline,
      sym__end_of_file,
  [3469] = 5,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(92), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(565), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3488] = 5,
    ACTIONS(466), 1,
      anon_sym_Field,
    STATE(217), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(567), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(184), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3507] = 5,
    ACTIONS(466), 1,
      anon_sym_Field,
    STATE(220), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(569), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(184), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3526] = 6,
    ACTIONS(476), 1,
      aux_sym__short_descr_token1,
    ACTIONS(571), 1,
      anon_sym_COLON,
    STATE(180), 1,
      sym__nl,
    STATE(191), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(573), 2,
      sym__newline,
      sym__end_of_file,
  [3547] = 5,
    ACTIONS(180), 1,
      anon_sym_Column,
    STATE(179), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(575), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(178), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3566] = 6,
    ACTIONS(476), 1,
      aux_sym__short_descr_token1,
    ACTIONS(577), 1,
      anon_sym_COLON,
    STATE(172), 1,
      sym__nl,
    STATE(173), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(579), 2,
      sym__newline,
      sym__end_of_file,
  [3587] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(581), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(211), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3606] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(583), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(249), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3625] = 5,
    ACTIONS(180), 1,
      anon_sym_Column,
    STATE(170), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(585), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(178), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3644] = 5,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(484), 1,
      sym__string_start,
    ACTIONS(587), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(308), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3663] = 5,
    ACTIONS(466), 1,
      anon_sym_Field,
    STATE(189), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(589), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(184), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3682] = 5,
    ACTIONS(466), 1,
      anon_sym_Field,
    STATE(164), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(591), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(160), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3701] = 5,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym__string_start,
    ACTIONS(593), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(251), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3720] = 5,
    ACTIONS(466), 1,
      anon_sym_Field,
    STATE(183), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(595), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(184), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3739] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(597), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3751] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(599), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3763] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(601), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [3775] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(603), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3787] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(605), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3799] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(607), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3811] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(609), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3823] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(611), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3835] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(613), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3847] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(615), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3859] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(617), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3871] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(619), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3883] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(621), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3895] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(623), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3907] = 4,
    ACTIONS(625), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(628), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(178), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3923] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(630), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3935] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(632), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3947] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(634), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3959] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(636), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [3971] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(638), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [3983] = 4,
    ACTIONS(640), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(643), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(184), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3999] = 4,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(648), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4015] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(650), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4027] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(652), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4039] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(654), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4051] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(656), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4063] = 4,
    ACTIONS(660), 1,
      sym__string_content,
    STATE(190), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(658), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [4079] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(663), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4091] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(665), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4103] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(667), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4115] = 5,
    ACTIONS(476), 1,
      aux_sym__short_descr_token1,
    STATE(221), 1,
      sym__nl,
    STATE(223), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(669), 2,
      sym__newline,
      sym__end_of_file,
  [4133] = 4,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(674), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(195), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4149] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(676), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4161] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(678), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4173] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(680), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4185] = 4,
    ACTIONS(684), 1,
      sym__string_content,
    STATE(190), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(682), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [4201] = 5,
    ACTIONS(686), 1,
      anon_sym_with,
    ACTIONS(688), 1,
      sym__newline,
    ACTIONS(690), 1,
      sym__end_of_file,
    STATE(84), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4218] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(678), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [4229] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(692), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [4240] = 5,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(694), 1,
      anon_sym_title,
    ACTIONS(696), 1,
      anon_sym_Body,
    STATE(325), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4257] = 5,
    ACTIONS(698), 1,
      anon_sym_with,
    ACTIONS(700), 1,
      sym__newline,
    ACTIONS(702), 1,
      sym__end_of_file,
    STATE(93), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4274] = 3,
    STATE(52), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(704), 2,
      sym__dedent,
      sym__end_of_file,
  [4286] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(706), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4296] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(708), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4306] = 3,
    STATE(61), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(710), 2,
      sym__newline,
      sym__end_of_file,
  [4318] = 3,
    STATE(83), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(712), 2,
      sym__newline,
      sym__end_of_file,
  [4330] = 4,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4344] = 3,
    STATE(218), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(718), 2,
      sym__newline,
      sym__end_of_file,
  [4356] = 3,
    STATE(115), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(720), 2,
      sym__dedent,
      sym__end_of_file,
  [4368] = 4,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(724), 1,
      anon_sym_EQ,
    STATE(245), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4382] = 3,
    STATE(56), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(726), 2,
      sym__dedent,
      sym__end_of_file,
  [4394] = 3,
    ACTIONS(553), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(147), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4406] = 3,
    STATE(34), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(728), 2,
      sym__newline,
      sym__end_of_file,
  [4418] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(730), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4428] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(732), 1,
      anon_sym_Body,
    STATE(353), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4442] = 3,
    STATE(41), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(734), 2,
      sym__dedent,
      sym__end_of_file,
  [4454] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(736), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4464] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(738), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4474] = 3,
    STATE(18), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(740), 2,
      sym__newline,
      sym__end_of_file,
  [4486] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(742), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4496] = 4,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(744), 1,
      anon_sym_EQ,
    STATE(39), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4510] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(746), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4520] = 4,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(748), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4534] = 3,
    STATE(108), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(750), 2,
      sym__newline,
      sym__end_of_file,
  [4546] = 3,
    STATE(44), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(752), 2,
      sym__dedent,
      sym__end_of_file,
  [4558] = 3,
    STATE(196), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(754), 2,
      sym__dedent,
      sym__end_of_file,
  [4570] = 4,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(756), 1,
      anon_sym_EQ,
    STATE(57), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4584] = 3,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(129), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4596] = 3,
    STATE(38), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(758), 2,
      sym__newline,
      sym__end_of_file,
  [4608] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(760), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4618] = 3,
    STATE(23), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(762), 2,
      sym__newline,
      sym__end_of_file,
  [4630] = 3,
    STATE(54), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(764), 2,
      sym__dedent,
      sym__end_of_file,
  [4642] = 3,
    STATE(73), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(766), 2,
      sym__dedent,
      sym__end_of_file,
  [4654] = 3,
    STATE(40), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(768), 2,
      sym__newline,
      sym__end_of_file,
  [4666] = 4,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(770), 1,
      anon_sym_EQ,
    STATE(27), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4680] = 4,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(772), 1,
      anon_sym_EQ,
    STATE(29), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4694] = 4,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(774), 1,
      anon_sym_EQ,
    STATE(30), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4708] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(776), 1,
      anon_sym_Body,
    STATE(361), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4722] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(778), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [4732] = 3,
    STATE(58), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(780), 2,
      sym__newline,
      sym__end_of_file,
  [4744] = 3,
    STATE(46), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(782), 2,
      sym__newline,
      sym__end_of_file,
  [4756] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(784), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4766] = 3,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(150), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4778] = 3,
    STATE(78), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(786), 2,
      sym__newline,
      sym__end_of_file,
  [4790] = 3,
    STATE(53), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(788), 2,
      sym__dedent,
      sym__end_of_file,
  [4802] = 3,
    STATE(98), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(790), 2,
      sym__newline,
      sym__end_of_file,
  [4814] = 3,
    STATE(188), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(792), 2,
      sym__dedent,
      sym__end_of_file,
  [4826] = 3,
    STATE(207), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(794), 2,
      sym__newline,
      sym__end_of_file,
  [4838] = 3,
    STATE(186), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(796), 2,
      sym__dedent,
      sym__end_of_file,
  [4850] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(352), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [4860] = 3,
    STATE(95), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(798), 2,
      sym__newline,
      sym__end_of_file,
  [4872] = 3,
    STATE(16), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(800), 2,
      sym__newline,
      sym__end_of_file,
  [4884] = 4,
    ACTIONS(802), 1,
      anon_sym_COLON,
    ACTIONS(804), 1,
      anon_sym_EQ,
    STATE(241), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4898] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [4908] = 4,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4922] = 4,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(811), 1,
      anon_sym_EQ,
    STATE(19), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4936] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [4946] = 4,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4960] = 3,
    ACTIONS(815), 1,
      anon_sym_using,
    ACTIONS(817), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4971] = 3,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(248), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4982] = 3,
    ACTIONS(819), 1,
      sym__newline,
    STATE(11), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4993] = 3,
    ACTIONS(819), 1,
      sym__newline,
    STATE(281), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5004] = 3,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(205), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5015] = 3,
    ACTIONS(802), 1,
      anon_sym_COLON,
    STATE(94), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5026] = 3,
    ACTIONS(819), 1,
      sym__newline,
    STATE(276), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5037] = 3,
    ACTIONS(819), 1,
      sym__newline,
    STATE(215), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5048] = 3,
    ACTIONS(821), 1,
      sym__newline,
    STATE(118), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5059] = 3,
    ACTIONS(821), 1,
      sym__newline,
    STATE(6), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5070] = 3,
    ACTIONS(823), 1,
      anon_sym_LPAREN,
    STATE(313), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5081] = 3,
    ACTIONS(825), 1,
      anon_sym_COLON,
    STATE(90), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5092] = 3,
    ACTIONS(821), 1,
      sym__newline,
    STATE(21), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5103] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(809), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5112] = 3,
    ACTIONS(31), 1,
      anon_sym_description,
    STATE(252), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5123] = 3,
    ACTIONS(821), 1,
      sym__newline,
    STATE(119), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5134] = 3,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(82), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5145] = 3,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(88), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5156] = 3,
    ACTIONS(827), 1,
      anon_sym_using,
    ACTIONS(829), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5167] = 3,
    ACTIONS(31), 1,
      anon_sym_description,
    STATE(250), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5178] = 3,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(81), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5189] = 3,
    ACTIONS(831), 1,
      anon_sym_COLON,
    STATE(85), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5200] = 3,
    ACTIONS(831), 1,
      anon_sym_COLON,
    STATE(71), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5211] = 3,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(235), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5222] = 3,
    ACTIONS(31), 1,
      anon_sym_description,
    STATE(229), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5233] = 3,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(228), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5244] = 3,
    ACTIONS(821), 1,
      sym__newline,
    STATE(117), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5255] = 3,
    ACTIONS(821), 1,
      sym__newline,
    STATE(22), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5266] = 3,
    ACTIONS(819), 1,
      sym__newline,
    STATE(286), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5277] = 3,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(214), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5288] = 3,
    ACTIONS(819), 1,
      sym__newline,
    STATE(10), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5299] = 3,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(219), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5310] = 3,
    ACTIONS(819), 1,
      sym__newline,
    STATE(231), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5321] = 3,
    ACTIONS(819), 1,
      sym__newline,
    STATE(203), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5332] = 3,
    ACTIONS(821), 1,
      sym__newline,
    STATE(5), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5343] = 3,
    ACTIONS(825), 1,
      anon_sym_COLON,
    STATE(110), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5354] = 3,
    ACTIONS(823), 1,
      anon_sym_LPAREN,
    STATE(376), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5365] = 3,
    ACTIONS(802), 1,
      anon_sym_COLON,
    STATE(109), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5376] = 3,
    ACTIONS(802), 1,
      anon_sym_COLON,
    STATE(107), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5387] = 3,
    ACTIONS(819), 1,
      sym__newline,
    STATE(246), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5398] = 2,
    ACTIONS(833), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5406] = 2,
    ACTIONS(835), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5414] = 2,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5422] = 2,
    ACTIONS(839), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5430] = 2,
    ACTIONS(841), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5438] = 2,
    ACTIONS(352), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5446] = 2,
    ACTIONS(843), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5454] = 2,
    ACTIONS(354), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5462] = 2,
    ACTIONS(845), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5470] = 2,
    ACTIONS(356), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5478] = 2,
    ACTIONS(847), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5486] = 2,
    ACTIONS(849), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5494] = 2,
    ACTIONS(851), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5502] = 2,
    ACTIONS(853), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5510] = 2,
    ACTIONS(855), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5518] = 2,
    ACTIONS(857), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5526] = 2,
    ACTIONS(859), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5534] = 2,
    ACTIONS(861), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5542] = 2,
    ACTIONS(863), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5550] = 2,
    ACTIONS(865), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5558] = 2,
    ACTIONS(867), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5566] = 2,
    ACTIONS(869), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5574] = 2,
    ACTIONS(871), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5582] = 2,
    ACTIONS(873), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5590] = 2,
    ACTIONS(875), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5598] = 2,
    ACTIONS(877), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5606] = 2,
    ACTIONS(879), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5614] = 2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5622] = 2,
    ACTIONS(883), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5630] = 2,
    ACTIONS(885), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5638] = 2,
    ACTIONS(887), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5646] = 2,
    ACTIONS(889), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5654] = 2,
    ACTIONS(891), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5662] = 2,
    ACTIONS(893), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5670] = 2,
    ACTIONS(895), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5678] = 2,
    ACTIONS(897), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5686] = 2,
    ACTIONS(899), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5694] = 2,
    ACTIONS(901), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5702] = 2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5710] = 2,
    ACTIONS(905), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5718] = 2,
    ACTIONS(907), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5726] = 2,
    ACTIONS(909), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5734] = 2,
    ACTIONS(911), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5742] = 2,
    ACTIONS(913), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5750] = 2,
    ACTIONS(915), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5758] = 2,
    ACTIONS(917), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5766] = 2,
    ACTIONS(919), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5774] = 2,
    ACTIONS(921), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5782] = 2,
    ACTIONS(923), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5790] = 2,
    ACTIONS(925), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5798] = 2,
    ACTIONS(927), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5806] = 2,
    ACTIONS(929), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5814] = 2,
    ACTIONS(931), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5822] = 2,
    ACTIONS(933), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5830] = 2,
    ACTIONS(935), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5838] = 2,
    ACTIONS(937), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5846] = 2,
    ACTIONS(939), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5854] = 2,
    ACTIONS(941), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5862] = 2,
    ACTIONS(943), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5870] = 2,
    ACTIONS(945), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5878] = 2,
    ACTIONS(947), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5886] = 2,
    ACTIONS(949), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5894] = 2,
    ACTIONS(951), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5902] = 2,
    ACTIONS(953), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5910] = 2,
    ACTIONS(955), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5918] = 2,
    ACTIONS(957), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5926] = 2,
    ACTIONS(959), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5934] = 2,
    ACTIONS(961), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5942] = 2,
    ACTIONS(963), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5950] = 2,
    ACTIONS(965), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5958] = 2,
    ACTIONS(967), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5966] = 2,
    ACTIONS(969), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5974] = 2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5982] = 2,
    ACTIONS(973), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5990] = 2,
    ACTIONS(975), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5998] = 2,
    ACTIONS(977), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6006] = 2,
    ACTIONS(979), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 101,
  [SMALL_STATE(5)] = 166,
  [SMALL_STATE(6)] = 231,
  [SMALL_STATE(7)] = 296,
  [SMALL_STATE(8)] = 342,
  [SMALL_STATE(9)] = 404,
  [SMALL_STATE(10)] = 450,
  [SMALL_STATE(11)] = 495,
  [SMALL_STATE(12)] = 540,
  [SMALL_STATE(13)] = 585,
  [SMALL_STATE(14)] = 630,
  [SMALL_STATE(15)] = 675,
  [SMALL_STATE(16)] = 720,
  [SMALL_STATE(17)] = 748,
  [SMALL_STATE(18)] = 775,
  [SMALL_STATE(19)] = 802,
  [SMALL_STATE(20)] = 829,
  [SMALL_STATE(21)] = 851,
  [SMALL_STATE(22)] = 884,
  [SMALL_STATE(23)] = 917,
  [SMALL_STATE(24)] = 937,
  [SMALL_STATE(25)] = 957,
  [SMALL_STATE(26)] = 977,
  [SMALL_STATE(27)] = 997,
  [SMALL_STATE(28)] = 1017,
  [SMALL_STATE(29)] = 1035,
  [SMALL_STATE(30)] = 1055,
  [SMALL_STATE(31)] = 1075,
  [SMALL_STATE(32)] = 1105,
  [SMALL_STATE(33)] = 1125,
  [SMALL_STATE(34)] = 1145,
  [SMALL_STATE(35)] = 1165,
  [SMALL_STATE(36)] = 1185,
  [SMALL_STATE(37)] = 1205,
  [SMALL_STATE(38)] = 1233,
  [SMALL_STATE(39)] = 1253,
  [SMALL_STATE(40)] = 1273,
  [SMALL_STATE(41)] = 1293,
  [SMALL_STATE(42)] = 1313,
  [SMALL_STATE(43)] = 1343,
  [SMALL_STATE(44)] = 1363,
  [SMALL_STATE(45)] = 1383,
  [SMALL_STATE(46)] = 1403,
  [SMALL_STATE(47)] = 1423,
  [SMALL_STATE(48)] = 1443,
  [SMALL_STATE(49)] = 1463,
  [SMALL_STATE(50)] = 1483,
  [SMALL_STATE(51)] = 1511,
  [SMALL_STATE(52)] = 1531,
  [SMALL_STATE(53)] = 1551,
  [SMALL_STATE(54)] = 1571,
  [SMALL_STATE(55)] = 1591,
  [SMALL_STATE(56)] = 1611,
  [SMALL_STATE(57)] = 1631,
  [SMALL_STATE(58)] = 1651,
  [SMALL_STATE(59)] = 1671,
  [SMALL_STATE(60)] = 1691,
  [SMALL_STATE(61)] = 1718,
  [SMALL_STATE(62)] = 1735,
  [SMALL_STATE(63)] = 1762,
  [SMALL_STATE(64)] = 1779,
  [SMALL_STATE(65)] = 1796,
  [SMALL_STATE(66)] = 1813,
  [SMALL_STATE(67)] = 1840,
  [SMALL_STATE(68)] = 1857,
  [SMALL_STATE(69)] = 1874,
  [SMALL_STATE(70)] = 1891,
  [SMALL_STATE(71)] = 1908,
  [SMALL_STATE(72)] = 1925,
  [SMALL_STATE(73)] = 1952,
  [SMALL_STATE(74)] = 1969,
  [SMALL_STATE(75)] = 1996,
  [SMALL_STATE(76)] = 2013,
  [SMALL_STATE(77)] = 2040,
  [SMALL_STATE(78)] = 2057,
  [SMALL_STATE(79)] = 2074,
  [SMALL_STATE(80)] = 2091,
  [SMALL_STATE(81)] = 2108,
  [SMALL_STATE(82)] = 2125,
  [SMALL_STATE(83)] = 2142,
  [SMALL_STATE(84)] = 2159,
  [SMALL_STATE(85)] = 2176,
  [SMALL_STATE(86)] = 2193,
  [SMALL_STATE(87)] = 2220,
  [SMALL_STATE(88)] = 2239,
  [SMALL_STATE(89)] = 2256,
  [SMALL_STATE(90)] = 2273,
  [SMALL_STATE(91)] = 2289,
  [SMALL_STATE(92)] = 2313,
  [SMALL_STATE(93)] = 2329,
  [SMALL_STATE(94)] = 2345,
  [SMALL_STATE(95)] = 2361,
  [SMALL_STATE(96)] = 2377,
  [SMALL_STATE(97)] = 2403,
  [SMALL_STATE(98)] = 2419,
  [SMALL_STATE(99)] = 2435,
  [SMALL_STATE(100)] = 2461,
  [SMALL_STATE(101)] = 2487,
  [SMALL_STATE(102)] = 2511,
  [SMALL_STATE(103)] = 2527,
  [SMALL_STATE(104)] = 2553,
  [SMALL_STATE(105)] = 2579,
  [SMALL_STATE(106)] = 2605,
  [SMALL_STATE(107)] = 2621,
  [SMALL_STATE(108)] = 2637,
  [SMALL_STATE(109)] = 2653,
  [SMALL_STATE(110)] = 2669,
  [SMALL_STATE(111)] = 2685,
  [SMALL_STATE(112)] = 2711,
  [SMALL_STATE(113)] = 2737,
  [SMALL_STATE(114)] = 2763,
  [SMALL_STATE(115)] = 2779,
  [SMALL_STATE(116)] = 2795,
  [SMALL_STATE(117)] = 2818,
  [SMALL_STATE(118)] = 2843,
  [SMALL_STATE(119)] = 2868,
  [SMALL_STATE(120)] = 2893,
  [SMALL_STATE(121)] = 2916,
  [SMALL_STATE(122)] = 2935,
  [SMALL_STATE(123)] = 2956,
  [SMALL_STATE(124)] = 2975,
  [SMALL_STATE(125)] = 2994,
  [SMALL_STATE(126)] = 3013,
  [SMALL_STATE(127)] = 3032,
  [SMALL_STATE(128)] = 3051,
  [SMALL_STATE(129)] = 3070,
  [SMALL_STATE(130)] = 3089,
  [SMALL_STATE(131)] = 3108,
  [SMALL_STATE(132)] = 3127,
  [SMALL_STATE(133)] = 3146,
  [SMALL_STATE(134)] = 3165,
  [SMALL_STATE(135)] = 3184,
  [SMALL_STATE(136)] = 3203,
  [SMALL_STATE(137)] = 3216,
  [SMALL_STATE(138)] = 3235,
  [SMALL_STATE(139)] = 3252,
  [SMALL_STATE(140)] = 3271,
  [SMALL_STATE(141)] = 3292,
  [SMALL_STATE(142)] = 3311,
  [SMALL_STATE(143)] = 3332,
  [SMALL_STATE(144)] = 3351,
  [SMALL_STATE(145)] = 3370,
  [SMALL_STATE(146)] = 3391,
  [SMALL_STATE(147)] = 3412,
  [SMALL_STATE(148)] = 3431,
  [SMALL_STATE(149)] = 3448,
  [SMALL_STATE(150)] = 3469,
  [SMALL_STATE(151)] = 3488,
  [SMALL_STATE(152)] = 3507,
  [SMALL_STATE(153)] = 3526,
  [SMALL_STATE(154)] = 3547,
  [SMALL_STATE(155)] = 3566,
  [SMALL_STATE(156)] = 3587,
  [SMALL_STATE(157)] = 3606,
  [SMALL_STATE(158)] = 3625,
  [SMALL_STATE(159)] = 3644,
  [SMALL_STATE(160)] = 3663,
  [SMALL_STATE(161)] = 3682,
  [SMALL_STATE(162)] = 3701,
  [SMALL_STATE(163)] = 3720,
  [SMALL_STATE(164)] = 3739,
  [SMALL_STATE(165)] = 3751,
  [SMALL_STATE(166)] = 3763,
  [SMALL_STATE(167)] = 3775,
  [SMALL_STATE(168)] = 3787,
  [SMALL_STATE(169)] = 3799,
  [SMALL_STATE(170)] = 3811,
  [SMALL_STATE(171)] = 3823,
  [SMALL_STATE(172)] = 3835,
  [SMALL_STATE(173)] = 3847,
  [SMALL_STATE(174)] = 3859,
  [SMALL_STATE(175)] = 3871,
  [SMALL_STATE(176)] = 3883,
  [SMALL_STATE(177)] = 3895,
  [SMALL_STATE(178)] = 3907,
  [SMALL_STATE(179)] = 3923,
  [SMALL_STATE(180)] = 3935,
  [SMALL_STATE(181)] = 3947,
  [SMALL_STATE(182)] = 3959,
  [SMALL_STATE(183)] = 3971,
  [SMALL_STATE(184)] = 3983,
  [SMALL_STATE(185)] = 3999,
  [SMALL_STATE(186)] = 4015,
  [SMALL_STATE(187)] = 4027,
  [SMALL_STATE(188)] = 4039,
  [SMALL_STATE(189)] = 4051,
  [SMALL_STATE(190)] = 4063,
  [SMALL_STATE(191)] = 4079,
  [SMALL_STATE(192)] = 4091,
  [SMALL_STATE(193)] = 4103,
  [SMALL_STATE(194)] = 4115,
  [SMALL_STATE(195)] = 4133,
  [SMALL_STATE(196)] = 4149,
  [SMALL_STATE(197)] = 4161,
  [SMALL_STATE(198)] = 4173,
  [SMALL_STATE(199)] = 4185,
  [SMALL_STATE(200)] = 4201,
  [SMALL_STATE(201)] = 4218,
  [SMALL_STATE(202)] = 4229,
  [SMALL_STATE(203)] = 4240,
  [SMALL_STATE(204)] = 4257,
  [SMALL_STATE(205)] = 4274,
  [SMALL_STATE(206)] = 4286,
  [SMALL_STATE(207)] = 4296,
  [SMALL_STATE(208)] = 4306,
  [SMALL_STATE(209)] = 4318,
  [SMALL_STATE(210)] = 4330,
  [SMALL_STATE(211)] = 4344,
  [SMALL_STATE(212)] = 4356,
  [SMALL_STATE(213)] = 4368,
  [SMALL_STATE(214)] = 4382,
  [SMALL_STATE(215)] = 4394,
  [SMALL_STATE(216)] = 4406,
  [SMALL_STATE(217)] = 4418,
  [SMALL_STATE(218)] = 4428,
  [SMALL_STATE(219)] = 4442,
  [SMALL_STATE(220)] = 4454,
  [SMALL_STATE(221)] = 4464,
  [SMALL_STATE(222)] = 4474,
  [SMALL_STATE(223)] = 4486,
  [SMALL_STATE(224)] = 4496,
  [SMALL_STATE(225)] = 4510,
  [SMALL_STATE(226)] = 4520,
  [SMALL_STATE(227)] = 4534,
  [SMALL_STATE(228)] = 4546,
  [SMALL_STATE(229)] = 4558,
  [SMALL_STATE(230)] = 4570,
  [SMALL_STATE(231)] = 4584,
  [SMALL_STATE(232)] = 4596,
  [SMALL_STATE(233)] = 4608,
  [SMALL_STATE(234)] = 4618,
  [SMALL_STATE(235)] = 4630,
  [SMALL_STATE(236)] = 4642,
  [SMALL_STATE(237)] = 4654,
  [SMALL_STATE(238)] = 4666,
  [SMALL_STATE(239)] = 4680,
  [SMALL_STATE(240)] = 4694,
  [SMALL_STATE(241)] = 4708,
  [SMALL_STATE(242)] = 4722,
  [SMALL_STATE(243)] = 4732,
  [SMALL_STATE(244)] = 4744,
  [SMALL_STATE(245)] = 4756,
  [SMALL_STATE(246)] = 4766,
  [SMALL_STATE(247)] = 4778,
  [SMALL_STATE(248)] = 4790,
  [SMALL_STATE(249)] = 4802,
  [SMALL_STATE(250)] = 4814,
  [SMALL_STATE(251)] = 4826,
  [SMALL_STATE(252)] = 4838,
  [SMALL_STATE(253)] = 4850,
  [SMALL_STATE(254)] = 4860,
  [SMALL_STATE(255)] = 4872,
  [SMALL_STATE(256)] = 4884,
  [SMALL_STATE(257)] = 4898,
  [SMALL_STATE(258)] = 4908,
  [SMALL_STATE(259)] = 4922,
  [SMALL_STATE(260)] = 4936,
  [SMALL_STATE(261)] = 4946,
  [SMALL_STATE(262)] = 4960,
  [SMALL_STATE(263)] = 4971,
  [SMALL_STATE(264)] = 4982,
  [SMALL_STATE(265)] = 4993,
  [SMALL_STATE(266)] = 5004,
  [SMALL_STATE(267)] = 5015,
  [SMALL_STATE(268)] = 5026,
  [SMALL_STATE(269)] = 5037,
  [SMALL_STATE(270)] = 5048,
  [SMALL_STATE(271)] = 5059,
  [SMALL_STATE(272)] = 5070,
  [SMALL_STATE(273)] = 5081,
  [SMALL_STATE(274)] = 5092,
  [SMALL_STATE(275)] = 5103,
  [SMALL_STATE(276)] = 5112,
  [SMALL_STATE(277)] = 5123,
  [SMALL_STATE(278)] = 5134,
  [SMALL_STATE(279)] = 5145,
  [SMALL_STATE(280)] = 5156,
  [SMALL_STATE(281)] = 5167,
  [SMALL_STATE(282)] = 5178,
  [SMALL_STATE(283)] = 5189,
  [SMALL_STATE(284)] = 5200,
  [SMALL_STATE(285)] = 5211,
  [SMALL_STATE(286)] = 5222,
  [SMALL_STATE(287)] = 5233,
  [SMALL_STATE(288)] = 5244,
  [SMALL_STATE(289)] = 5255,
  [SMALL_STATE(290)] = 5266,
  [SMALL_STATE(291)] = 5277,
  [SMALL_STATE(292)] = 5288,
  [SMALL_STATE(293)] = 5299,
  [SMALL_STATE(294)] = 5310,
  [SMALL_STATE(295)] = 5321,
  [SMALL_STATE(296)] = 5332,
  [SMALL_STATE(297)] = 5343,
  [SMALL_STATE(298)] = 5354,
  [SMALL_STATE(299)] = 5365,
  [SMALL_STATE(300)] = 5376,
  [SMALL_STATE(301)] = 5387,
  [SMALL_STATE(302)] = 5398,
  [SMALL_STATE(303)] = 5406,
  [SMALL_STATE(304)] = 5414,
  [SMALL_STATE(305)] = 5422,
  [SMALL_STATE(306)] = 5430,
  [SMALL_STATE(307)] = 5438,
  [SMALL_STATE(308)] = 5446,
  [SMALL_STATE(309)] = 5454,
  [SMALL_STATE(310)] = 5462,
  [SMALL_STATE(311)] = 5470,
  [SMALL_STATE(312)] = 5478,
  [SMALL_STATE(313)] = 5486,
  [SMALL_STATE(314)] = 5494,
  [SMALL_STATE(315)] = 5502,
  [SMALL_STATE(316)] = 5510,
  [SMALL_STATE(317)] = 5518,
  [SMALL_STATE(318)] = 5526,
  [SMALL_STATE(319)] = 5534,
  [SMALL_STATE(320)] = 5542,
  [SMALL_STATE(321)] = 5550,
  [SMALL_STATE(322)] = 5558,
  [SMALL_STATE(323)] = 5566,
  [SMALL_STATE(324)] = 5574,
  [SMALL_STATE(325)] = 5582,
  [SMALL_STATE(326)] = 5590,
  [SMALL_STATE(327)] = 5598,
  [SMALL_STATE(328)] = 5606,
  [SMALL_STATE(329)] = 5614,
  [SMALL_STATE(330)] = 5622,
  [SMALL_STATE(331)] = 5630,
  [SMALL_STATE(332)] = 5638,
  [SMALL_STATE(333)] = 5646,
  [SMALL_STATE(334)] = 5654,
  [SMALL_STATE(335)] = 5662,
  [SMALL_STATE(336)] = 5670,
  [SMALL_STATE(337)] = 5678,
  [SMALL_STATE(338)] = 5686,
  [SMALL_STATE(339)] = 5694,
  [SMALL_STATE(340)] = 5702,
  [SMALL_STATE(341)] = 5710,
  [SMALL_STATE(342)] = 5718,
  [SMALL_STATE(343)] = 5726,
  [SMALL_STATE(344)] = 5734,
  [SMALL_STATE(345)] = 5742,
  [SMALL_STATE(346)] = 5750,
  [SMALL_STATE(347)] = 5758,
  [SMALL_STATE(348)] = 5766,
  [SMALL_STATE(349)] = 5774,
  [SMALL_STATE(350)] = 5782,
  [SMALL_STATE(351)] = 5790,
  [SMALL_STATE(352)] = 5798,
  [SMALL_STATE(353)] = 5806,
  [SMALL_STATE(354)] = 5814,
  [SMALL_STATE(355)] = 5822,
  [SMALL_STATE(356)] = 5830,
  [SMALL_STATE(357)] = 5838,
  [SMALL_STATE(358)] = 5846,
  [SMALL_STATE(359)] = 5854,
  [SMALL_STATE(360)] = 5862,
  [SMALL_STATE(361)] = 5870,
  [SMALL_STATE(362)] = 5878,
  [SMALL_STATE(363)] = 5886,
  [SMALL_STATE(364)] = 5894,
  [SMALL_STATE(365)] = 5902,
  [SMALL_STATE(366)] = 5910,
  [SMALL_STATE(367)] = 5918,
  [SMALL_STATE(368)] = 5926,
  [SMALL_STATE(369)] = 5934,
  [SMALL_STATE(370)] = 5942,
  [SMALL_STATE(371)] = 5950,
  [SMALL_STATE(372)] = 5958,
  [SMALL_STATE(373)] = 5966,
  [SMALL_STATE(374)] = 5974,
  [SMALL_STATE(375)] = 5982,
  [SMALL_STATE(376)] = 5990,
  [SMALL_STATE(377)] = 5998,
  [SMALL_STATE(378)] = 6006,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(373),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(350),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(374),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(377),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(298),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(240),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(259),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(239),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(238),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(224),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(226),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(230),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(338),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28), SHIFT_REPEAT(337),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 28),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_body, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(347),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(346),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(332),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 6),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 33),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 33),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 21),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 21),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 35),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 35),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 12),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 12),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 29),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 29),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 23),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 23),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 22),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 22),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 2, .production_id = 20),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 2, .production_id = 20),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 30),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 30),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 4, .production_id = 32),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 4, .production_id = 32),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 34),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 34),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 24),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 24),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 36),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 36),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 8, .production_id = 43),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 8, .production_id = 43),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 40),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 40),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 9, .production_id = 44),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 9, .production_id = 44),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 10),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 10),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 38),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 38),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 25),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 25),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 11),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 11),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 30),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 5, .production_id = 30),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 30),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 30),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 6, .production_id = 41),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 6, .production_id = 41),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 11, .production_id = 46),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 11, .production_id = 46),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 10, .production_id = 45),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 10, .production_id = 45),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 40),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 7, .production_id = 40),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 7, .production_id = 42),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 7, .production_id = 42),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 26),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 26),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 37),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 37),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 7, .production_id = 8),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(123),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(159),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(148),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 9, .production_id = 27),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6, .production_id = 19),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 8, .production_id = 18),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 8, .production_id = 17),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 4, .production_id = 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 4, .production_id = 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_inter, 7),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 7),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 9),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 3),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(327),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(329),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(333),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(136),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(134),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(199),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(349),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(348),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(345),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(138),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 40),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 40),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation2, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 30),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 30),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 29),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 40),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 40),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 30),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 29),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 30),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 29),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 30),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 29),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(349),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 30),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 30),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 40),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 30),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 30),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(319),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(213),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 40),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 30),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 40),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 40),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(190),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 29),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 29),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 30),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(194),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 40),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 30),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 30),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 39),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 40),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 30),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 40),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 30),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 29),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 31),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2), SHIFT_REPEAT(342),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 4),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [875] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 3),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
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
