#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 390
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 48

enum {
  sym_identifier = 1,
  anon_sym_Parameters = 2,
  anon_sym_COLON = 3,
  anon_sym_DOT_DOT_DOT = 4,
  anon_sym_Log = 5,
  anon_sym_Assert = 6,
  anon_sym_Interpolation = 7,
  anon_sym_symbol = 8,
  anon_sym_EQ = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_Set = 11,
  anon_sym_Execute = 12,
  anon_sym_using = 13,
  anon_sym_connection = 14,
  anon_sym_to = 15,
  anon_sym_with = 16,
  anon_sym_result = 17,
  anon_sym_via = 18,
  anon_sym_Output = 19,
  anon_sym_DOT = 20,
  anon_sym_Metadata = 21,
  anon_sym_for = 22,
  anon_sym_dbname = 23,
  anon_sym_description = 24,
  anon_sym_archiver = 25,
  anon_sym_archiverContact = 26,
  anon_sym_dataOwner = 27,
  anon_sym_dataOriginTimespan = 28,
  anon_sym_lobFolder = 29,
  anon_sym_Schema = 30,
  anon_sym_Type = 31,
  anon_sym_Table = 32,
  anon_sym_Column = 33,
  anon_sym_Field = 34,
  anon_sym_Key = 35,
  anon_sym_Check = 36,
  anon_sym_View = 37,
  anon_sym_Command = 38,
  anon_sym_title = 39,
  anon_sym_Body = 40,
  anon_sym_For = 41,
  anon_sym_in = 42,
  anon_sym_LPAREN = 43,
  anon_sym_COMMA = 44,
  anon_sym_RPAREN = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_LT = 48,
  anon_sym_GT = 49,
  anon_sym_LT_EQ = 50,
  anon_sym_GT_EQ = 51,
  anon_sym_BSLASH = 52,
  aux_sym_escape_sequence_token1 = 53,
  aux_sym_escape_sequence_token2 = 54,
  aux_sym_escape_sequence_token3 = 55,
  aux_sym_escape_sequence_token4 = 56,
  aux_sym_escape_sequence_token5 = 57,
  aux_sym_escape_sequence_token6 = 58,
  sym_integer = 59,
  sym_short_description = 60,
  aux_sym__short_descr_token1 = 61,
  sym__newline = 62,
  sym__indent = 63,
  sym__dedent = 64,
  sym__inter_start = 65,
  sym__inter_start2 = 66,
  sym__inter_end = 67,
  sym__raw = 68,
  sym__string_start = 69,
  sym__string_content = 70,
  sym__string_end = 71,
  sym__comment = 72,
  sym__end_of_file = 73,
  sym__skip = 74,
  sym__set_inter = 75,
  sym_source_file = 76,
  sym_parameters = 77,
  sym_parameter = 78,
  sym__statement = 79,
  sym_nop = 80,
  sym_log = 81,
  sym_assert = 82,
  sym_set_inter = 83,
  sym_set = 84,
  sym__expression = 85,
  sym_execute_using = 86,
  sym_connection = 87,
  sym_execute_sql = 88,
  sym_query = 89,
  sym_siard_output = 90,
  sym_siard_metadata = 91,
  sym__siard_dbname = 92,
  sym__siard_description = 93,
  sym__siard_archiver = 94,
  sym__siard_archiverContact = 95,
  sym__siard_dataOwner = 96,
  sym__siard_dataOriginTimespan = 97,
  sym__siard_lobFolder = 98,
  sym_siard_schema = 99,
  sym_siard_type = 100,
  sym_siard_table = 101,
  sym_siard_column = 102,
  sym_siard_field = 103,
  sym_siard_key = 104,
  sym_siard_check = 105,
  sym_siard_view = 106,
  sym_command_declaration = 107,
  sym_for_loop = 108,
  sym_for_variables = 109,
  sym_for_body = 110,
  sym__boolean_expression = 111,
  sym_comparison = 112,
  sym_comparison_operator = 113,
  sym__basic_expression = 114,
  sym_variable_instance = 115,
  sym_string = 116,
  sym_string_content = 117,
  sym_escape_sequence = 118,
  sym__short_descr = 119,
  sym__nl = 120,
  sym__ni = 121,
  sym__ded = 122,
  sym_interpolation = 123,
  sym_interpolation2 = 124,
  sym_key_value_pairs = 125,
  sym_key_value_pair = 126,
  sym_raw = 127,
  sym_raw_content = 128,
  aux_sym_source_file_repeat1 = 129,
  aux_sym_parameters_repeat1 = 130,
  aux_sym_siard_metadata_repeat1 = 131,
  aux_sym_siard_schema_repeat1 = 132,
  aux_sym_siard_table_repeat1 = 133,
  aux_sym_siard_column_repeat1 = 134,
  aux_sym_siard_view_repeat1 = 135,
  aux_sym_for_variables_repeat1 = 136,
  aux_sym_string_repeat1 = 137,
  aux_sym_string_content_repeat1 = 138,
  aux_sym_key_value_pairs_repeat1 = 139,
  aux_sym_raw_repeat1 = 140,
  aux_sym_raw_content_repeat1 = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_Parameters] = "Parameters",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_Log] = "Log",
  [anon_sym_Assert] = "Assert",
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
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
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
  [sym_assert] = "assert",
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
  [sym__boolean_expression] = "_boolean_expression",
  [sym_comparison] = "comparison",
  [sym_comparison_operator] = "comparison_operator",
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
  [anon_sym_Assert] = anon_sym_Assert,
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
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
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
  [sym_assert] = sym_assert,
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
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_comparison] = sym_comparison,
  [sym_comparison_operator] = sym_comparison_operator,
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
  [anon_sym_Assert] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
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
  [sym_assert] = {
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
  [sym__boolean_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
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
  field_left = 12,
  field_lobFolder = 13,
  field_name = 14,
  field_operator = 15,
  field_parameters = 16,
  field_properties = 17,
  field_result_set = 18,
  field_right = 19,
  field_script = 20,
  field_sql = 21,
  field_title = 22,
  field_url = 23,
  field_value = 24,
  field_variables = 25,
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
  [field_left] = "left",
  [field_lobFolder] = "lobFolder",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_properties] = "properties",
  [field_result_set] = "result_set",
  [field_right] = "right",
  [field_script] = "script",
  [field_sql] = "sql",
  [field_title] = "title",
  [field_url] = "url",
  [field_value] = "value",
  [field_variables] = "variables",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 2},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 2},
  [6] = {.index = 11, .length = 1},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 1},
  [9] = {.index = 16, .length = 3},
  [10] = {.index = 19, .length = 2},
  [11] = {.index = 21, .length = 1},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 1},
  [15] = {.index = 25, .length = 1},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 1},
  [18] = {.index = 28, .length = 2},
  [19] = {.index = 30, .length = 3},
  [20] = {.index = 33, .length = 2},
  [21] = {.index = 35, .length = 1},
  [22] = {.index = 36, .length = 1},
  [23] = {.index = 37, .length = 1},
  [24] = {.index = 38, .length = 1},
  [25] = {.index = 39, .length = 1},
  [26] = {.index = 40, .length = 1},
  [27] = {.index = 41, .length = 1},
  [28] = {.index = 42, .length = 9},
  [29] = {.index = 51, .length = 14},
  [30] = {.index = 65, .length = 2},
  [31] = {.index = 67, .length = 1},
  [32] = {.index = 68, .length = 2},
  [33] = {.index = 70, .length = 1},
  [34] = {.index = 71, .length = 1},
  [35] = {.index = 72, .length = 1},
  [36] = {.index = 73, .length = 1},
  [37] = {.index = 74, .length = 1},
  [38] = {.index = 75, .length = 1},
  [39] = {.index = 76, .length = 1},
  [40] = {.index = 77, .length = 2},
  [41] = {.index = 79, .length = 2},
  [42] = {.index = 81, .length = 1},
  [43] = {.index = 82, .length = 2},
  [44] = {.index = 84, .length = 2},
  [45] = {.index = 86, .length = 3},
  [46] = {.index = 89, .length = 2},
  [47] = {.index = 91, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [3] =
    {field_name, 1},
    {field_value, 3},
  [5] =
    {field_interpreter, 2},
    {field_script, 3},
  [7] =
    {field_connection, 2},
    {field_sql, 3},
  [9] =
    {field_description, 1, .inherited = true},
    {field_name, 0},
  [11] =
    {field_name, 0},
  [12] =
    {field_description, 0},
    {field_description, 1},
    {field_description, 2},
  [15] =
    {field_url, 2},
  [16] =
    {field_connection, 1},
    {field_file, 5},
    {field_name, 3},
  [19] =
    {field_properties, 4},
    {field_url, 2},
  [21] =
    {field_dbname, 0, .inherited = true},
  [22] =
    {field_description, 0, .inherited = true},
  [23] =
    {field_archiver, 0, .inherited = true},
  [24] =
    {field_archiverContact, 0, .inherited = true},
  [25] =
    {field_dataOwner, 0, .inherited = true},
  [26] =
    {field_dataOriginTimespan, 0, .inherited = true},
  [27] =
    {field_lobFolder, 0, .inherited = true},
  [28] =
    {field_connection, 2},
    {field_name, 4},
  [30] =
    {field_body, 6},
    {field_result_set, 3},
    {field_variables, 1},
  [33] =
    {field_properties, 5},
    {field_url, 2},
  [35] =
    {field_dbname, 1},
  [36] =
    {field_description, 1},
  [37] =
    {field_archiver, 1},
  [38] =
    {field_archiverContact, 1},
  [39] =
    {field_dataOwner, 1},
  [40] =
    {field_dataOriginTimespan, 1},
  [41] =
    {field_lobFolder, 1},
  [42] =
    {field_archiver, 7, .inherited = true},
    {field_archiverContact, 7, .inherited = true},
    {field_connection, 2},
    {field_dataOriginTimespan, 7, .inherited = true},
    {field_dataOwner, 7, .inherited = true},
    {field_dbname, 7, .inherited = true},
    {field_description, 7, .inherited = true},
    {field_lobFolder, 7, .inherited = true},
    {field_name, 4},
  [51] =
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
  [65] =
    {field_description, 2, .inherited = true},
    {field_name, 1},
  [67] =
    {field_name, 1},
  [68] =
    {field_key, 0},
    {field_value, 1},
  [70] =
    {field_dbname, 2},
  [71] =
    {field_description, 2},
  [72] =
    {field_archiver, 2},
  [73] =
    {field_archiverContact, 2},
  [74] =
    {field_dataOwner, 2},
  [75] =
    {field_dataOriginTimespan, 2},
  [76] =
    {field_lobFolder, 2},
  [77] =
    {field_key, 0},
    {field_value, 2},
  [79] =
    {field_description, 4, .inherited = true},
    {field_name, 1},
  [81] =
    {field_body, 4},
  [82] =
    {field_body, 5},
    {field_parameters, 3},
  [84] =
    {field_body, 6},
    {field_title, 4},
  [86] =
    {field_body, 7},
    {field_parameters, 5},
    {field_title, 4},
  [89] =
    {field_body, 8},
    {field_title, 5},
  [91] =
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 4,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 18,
  [24] = 24,
  [25] = 2,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 21,
  [35] = 20,
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
  [53] = 47,
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
  [67] = 44,
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
  [82] = 22,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 41,
  [87] = 87,
  [88] = 88,
  [89] = 40,
  [90] = 39,
  [91] = 55,
  [92] = 54,
  [93] = 38,
  [94] = 51,
  [95] = 50,
  [96] = 48,
  [97] = 97,
  [98] = 36,
  [99] = 46,
  [100] = 45,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 42,
  [105] = 49,
  [106] = 29,
  [107] = 52,
  [108] = 37,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 110,
  [115] = 111,
  [116] = 111,
  [117] = 117,
  [118] = 110,
  [119] = 110,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 120,
  [125] = 125,
  [126] = 123,
  [127] = 127,
  [128] = 127,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 133,
  [137] = 137,
  [138] = 132,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 131,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 146,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 140,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 135,
  [163] = 134,
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
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 179,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 211,
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
  [225] = 224,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 219,
  [230] = 230,
  [231] = 231,
  [232] = 22,
  [233] = 21,
  [234] = 20,
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
  [248] = 241,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 247,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 249,
  [270] = 270,
  [271] = 271,
  [272] = 272,
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
  [286] = 279,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 284,
  [291] = 277,
  [292] = 292,
  [293] = 293,
  [294] = 288,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 292,
  [299] = 275,
  [300] = 300,
  [301] = 278,
  [302] = 302,
  [303] = 289,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 297,
  [312] = 296,
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
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 22,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 21,
  [339] = 339,
  [340] = 340,
  [341] = 334,
  [342] = 323,
  [343] = 343,
  [344] = 344,
  [345] = 20,
  [346] = 340,
  [347] = 331,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 350,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 353,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 314,
  [363] = 329,
  [364] = 364,
  [365] = 348,
  [366] = 366,
  [367] = 367,
  [368] = 349,
  [369] = 356,
  [370] = 359,
  [371] = 367,
  [372] = 372,
  [373] = 373,
  [374] = 315,
  [375] = 322,
  [376] = 354,
  [377] = 366,
  [378] = 378,
  [379] = 379,
  [380] = 335,
  [381] = 327,
  [382] = 328,
  [383] = 332,
  [384] = 358,
  [385] = 313,
  [386] = 326,
  [387] = 324,
  [388] = 343,
  [389] = 379,
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
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == 'U') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(59);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == 'U') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_short_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__short_descr_token1);
      if (lookahead == ' ') ADVANCE(72);
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
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'C') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'I') ADVANCE(6);
      if (lookahead == 'K') ADVANCE(7);
      if (lookahead == 'L') ADVANCE(8);
      if (lookahead == 'M') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'S') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(13);
      if (lookahead == 'V') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_Log);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_via);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Body);
      END_STATE();
    case 94:
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 130:
      if (lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Assert);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_dbname);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Command);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 165:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_Metadata);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(180);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_connection);
      END_STATE();
    case 190:
      if (lookahead == 'T') ADVANCE(194);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 198:
      if (lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_Interpolation);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_dataOriginTimespan);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 23, .external_lex_state = 2},
  [2] = {.lex_state = 23, .external_lex_state = 3},
  [3] = {.lex_state = 23, .external_lex_state = 3},
  [4] = {.lex_state = 23, .external_lex_state = 3},
  [5] = {.lex_state = 23, .external_lex_state = 2},
  [6] = {.lex_state = 23, .external_lex_state = 2},
  [7] = {.lex_state = 23, .external_lex_state = 2},
  [8] = {.lex_state = 23, .external_lex_state = 3},
  [9] = {.lex_state = 23, .external_lex_state = 2},
  [10] = {.lex_state = 23, .external_lex_state = 3},
  [11] = {.lex_state = 23, .external_lex_state = 2},
  [12] = {.lex_state = 23, .external_lex_state = 3},
  [13] = {.lex_state = 23, .external_lex_state = 2},
  [14] = {.lex_state = 23, .external_lex_state = 3},
  [15] = {.lex_state = 23, .external_lex_state = 3},
  [16] = {.lex_state = 23, .external_lex_state = 3},
  [17] = {.lex_state = 23, .external_lex_state = 3},
  [18] = {.lex_state = 23, .external_lex_state = 3},
  [19] = {.lex_state = 23, .external_lex_state = 3},
  [20] = {.lex_state = 23, .external_lex_state = 2},
  [21] = {.lex_state = 23, .external_lex_state = 2},
  [22] = {.lex_state = 23, .external_lex_state = 2},
  [23] = {.lex_state = 23, .external_lex_state = 2},
  [24] = {.lex_state = 23, .external_lex_state = 3},
  [25] = {.lex_state = 23, .external_lex_state = 2},
  [26] = {.lex_state = 23, .external_lex_state = 3},
  [27] = {.lex_state = 23, .external_lex_state = 3},
  [28] = {.lex_state = 23, .external_lex_state = 2},
  [29] = {.lex_state = 23, .external_lex_state = 3},
  [30] = {.lex_state = 23, .external_lex_state = 3},
  [31] = {.lex_state = 23, .external_lex_state = 3},
  [32] = {.lex_state = 23, .external_lex_state = 3},
  [33] = {.lex_state = 23, .external_lex_state = 3},
  [34] = {.lex_state = 23, .external_lex_state = 3},
  [35] = {.lex_state = 23, .external_lex_state = 3},
  [36] = {.lex_state = 23, .external_lex_state = 3},
  [37] = {.lex_state = 23, .external_lex_state = 3},
  [38] = {.lex_state = 23, .external_lex_state = 3},
  [39] = {.lex_state = 23, .external_lex_state = 3},
  [40] = {.lex_state = 23, .external_lex_state = 3},
  [41] = {.lex_state = 23, .external_lex_state = 3},
  [42] = {.lex_state = 23, .external_lex_state = 3},
  [43] = {.lex_state = 23, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 4},
  [45] = {.lex_state = 23, .external_lex_state = 3},
  [46] = {.lex_state = 23, .external_lex_state = 3},
  [47] = {.lex_state = 23, .external_lex_state = 5},
  [48] = {.lex_state = 23, .external_lex_state = 3},
  [49] = {.lex_state = 23, .external_lex_state = 3},
  [50] = {.lex_state = 23, .external_lex_state = 3},
  [51] = {.lex_state = 23, .external_lex_state = 3},
  [52] = {.lex_state = 23, .external_lex_state = 3},
  [53] = {.lex_state = 23, .external_lex_state = 5},
  [54] = {.lex_state = 23, .external_lex_state = 3},
  [55] = {.lex_state = 23, .external_lex_state = 3},
  [56] = {.lex_state = 23, .external_lex_state = 3},
  [57] = {.lex_state = 23, .external_lex_state = 3},
  [58] = {.lex_state = 23, .external_lex_state = 3},
  [59] = {.lex_state = 23, .external_lex_state = 3},
  [60] = {.lex_state = 23, .external_lex_state = 3},
  [61] = {.lex_state = 23, .external_lex_state = 3},
  [62] = {.lex_state = 23, .external_lex_state = 3},
  [63] = {.lex_state = 23, .external_lex_state = 3},
  [64] = {.lex_state = 23, .external_lex_state = 3},
  [65] = {.lex_state = 23, .external_lex_state = 3},
  [66] = {.lex_state = 23, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 4},
  [68] = {.lex_state = 23, .external_lex_state = 3},
  [69] = {.lex_state = 23, .external_lex_state = 3},
  [70] = {.lex_state = 23, .external_lex_state = 3},
  [71] = {.lex_state = 23, .external_lex_state = 3},
  [72] = {.lex_state = 23, .external_lex_state = 3},
  [73] = {.lex_state = 23, .external_lex_state = 3},
  [74] = {.lex_state = 23, .external_lex_state = 2},
  [75] = {.lex_state = 23, .external_lex_state = 3},
  [76] = {.lex_state = 23, .external_lex_state = 3},
  [77] = {.lex_state = 23, .external_lex_state = 3},
  [78] = {.lex_state = 23, .external_lex_state = 3},
  [79] = {.lex_state = 23, .external_lex_state = 3},
  [80] = {.lex_state = 23, .external_lex_state = 3},
  [81] = {.lex_state = 23, .external_lex_state = 3},
  [82] = {.lex_state = 23, .external_lex_state = 3},
  [83] = {.lex_state = 23, .external_lex_state = 3},
  [84] = {.lex_state = 23, .external_lex_state = 3},
  [85] = {.lex_state = 23, .external_lex_state = 3},
  [86] = {.lex_state = 23, .external_lex_state = 2},
  [87] = {.lex_state = 23, .external_lex_state = 3},
  [88] = {.lex_state = 23, .external_lex_state = 3},
  [89] = {.lex_state = 23, .external_lex_state = 2},
  [90] = {.lex_state = 23, .external_lex_state = 2},
  [91] = {.lex_state = 23, .external_lex_state = 2},
  [92] = {.lex_state = 23, .external_lex_state = 2},
  [93] = {.lex_state = 23, .external_lex_state = 2},
  [94] = {.lex_state = 23, .external_lex_state = 2},
  [95] = {.lex_state = 23, .external_lex_state = 2},
  [96] = {.lex_state = 23, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 23, .external_lex_state = 2},
  [99] = {.lex_state = 23, .external_lex_state = 2},
  [100] = {.lex_state = 23, .external_lex_state = 2},
  [101] = {.lex_state = 23, .external_lex_state = 3},
  [102] = {.lex_state = 23, .external_lex_state = 3},
  [103] = {.lex_state = 23, .external_lex_state = 3},
  [104] = {.lex_state = 23, .external_lex_state = 2},
  [105] = {.lex_state = 23, .external_lex_state = 2},
  [106] = {.lex_state = 23, .external_lex_state = 2},
  [107] = {.lex_state = 23, .external_lex_state = 2},
  [108] = {.lex_state = 23, .external_lex_state = 2},
  [109] = {.lex_state = 23, .external_lex_state = 3},
  [110] = {.lex_state = 23, .external_lex_state = 6},
  [111] = {.lex_state = 23, .external_lex_state = 6},
  [112] = {.lex_state = 23, .external_lex_state = 6},
  [113] = {.lex_state = 23, .external_lex_state = 6},
  [114] = {.lex_state = 23, .external_lex_state = 6},
  [115] = {.lex_state = 23, .external_lex_state = 6},
  [116] = {.lex_state = 23, .external_lex_state = 6},
  [117] = {.lex_state = 23, .external_lex_state = 3},
  [118] = {.lex_state = 23, .external_lex_state = 6},
  [119] = {.lex_state = 23, .external_lex_state = 6},
  [120] = {.lex_state = 0, .external_lex_state = 7},
  [121] = {.lex_state = 23, .external_lex_state = 3},
  [122] = {.lex_state = 23, .external_lex_state = 3},
  [123] = {.lex_state = 23, .external_lex_state = 5},
  [124] = {.lex_state = 0, .external_lex_state = 7},
  [125] = {.lex_state = 23, .external_lex_state = 3},
  [126] = {.lex_state = 23, .external_lex_state = 5},
  [127] = {.lex_state = 23, .external_lex_state = 2},
  [128] = {.lex_state = 23, .external_lex_state = 2},
  [129] = {.lex_state = 23, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 8},
  [131] = {.lex_state = 23, .external_lex_state = 5},
  [132] = {.lex_state = 23, .external_lex_state = 5},
  [133] = {.lex_state = 23, .external_lex_state = 5},
  [134] = {.lex_state = 23, .external_lex_state = 5},
  [135] = {.lex_state = 23, .external_lex_state = 5},
  [136] = {.lex_state = 23, .external_lex_state = 5},
  [137] = {.lex_state = 23, .external_lex_state = 5},
  [138] = {.lex_state = 23, .external_lex_state = 5},
  [139] = {.lex_state = 23, .external_lex_state = 5},
  [140] = {.lex_state = 23, .external_lex_state = 3},
  [141] = {.lex_state = 23, .external_lex_state = 5},
  [142] = {.lex_state = 23, .external_lex_state = 5},
  [143] = {.lex_state = 23, .external_lex_state = 5},
  [144] = {.lex_state = 2, .external_lex_state = 2},
  [145] = {.lex_state = 23, .external_lex_state = 5},
  [146] = {.lex_state = 23, .external_lex_state = 5},
  [147] = {.lex_state = 23, .external_lex_state = 5},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 23, .external_lex_state = 5},
  [150] = {.lex_state = 23, .external_lex_state = 3},
  [151] = {.lex_state = 0, .external_lex_state = 8},
  [152] = {.lex_state = 23, .external_lex_state = 5},
  [153] = {.lex_state = 23, .external_lex_state = 3},
  [154] = {.lex_state = 23, .external_lex_state = 3},
  [155] = {.lex_state = 23, .external_lex_state = 3},
  [156] = {.lex_state = 23, .external_lex_state = 3},
  [157] = {.lex_state = 0, .external_lex_state = 8},
  [158] = {.lex_state = 23, .external_lex_state = 3},
  [159] = {.lex_state = 23, .external_lex_state = 3},
  [160] = {.lex_state = 23, .external_lex_state = 3},
  [161] = {.lex_state = 0, .external_lex_state = 8},
  [162] = {.lex_state = 23, .external_lex_state = 5},
  [163] = {.lex_state = 23, .external_lex_state = 5},
  [164] = {.lex_state = 0, .external_lex_state = 8},
  [165] = {.lex_state = 23, .external_lex_state = 5},
  [166] = {.lex_state = 0, .external_lex_state = 4},
  [167] = {.lex_state = 23, .external_lex_state = 3},
  [168] = {.lex_state = 23, .external_lex_state = 5},
  [169] = {.lex_state = 0, .external_lex_state = 8},
  [170] = {.lex_state = 23, .external_lex_state = 5},
  [171] = {.lex_state = 0, .external_lex_state = 8},
  [172] = {.lex_state = 23, .external_lex_state = 3},
  [173] = {.lex_state = 0, .external_lex_state = 8},
  [174] = {.lex_state = 23, .external_lex_state = 3},
  [175] = {.lex_state = 23, .external_lex_state = 3},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 23, .external_lex_state = 6},
  [178] = {.lex_state = 23, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 4},
  [180] = {.lex_state = 23, .external_lex_state = 3},
  [181] = {.lex_state = 0, .external_lex_state = 8},
  [182] = {.lex_state = 23, .external_lex_state = 3},
  [183] = {.lex_state = 23, .external_lex_state = 3},
  [184] = {.lex_state = 23, .external_lex_state = 6},
  [185] = {.lex_state = 23, .external_lex_state = 3},
  [186] = {.lex_state = 23, .external_lex_state = 3},
  [187] = {.lex_state = 23, .external_lex_state = 3},
  [188] = {.lex_state = 23, .external_lex_state = 3},
  [189] = {.lex_state = 23, .external_lex_state = 3},
  [190] = {.lex_state = 23, .external_lex_state = 3},
  [191] = {.lex_state = 23, .external_lex_state = 3},
  [192] = {.lex_state = 23, .external_lex_state = 3},
  [193] = {.lex_state = 23, .external_lex_state = 3},
  [194] = {.lex_state = 23, .external_lex_state = 3},
  [195] = {.lex_state = 23, .external_lex_state = 3},
  [196] = {.lex_state = 23, .external_lex_state = 3},
  [197] = {.lex_state = 23, .external_lex_state = 3},
  [198] = {.lex_state = 23, .external_lex_state = 3},
  [199] = {.lex_state = 23, .external_lex_state = 3},
  [200] = {.lex_state = 23, .external_lex_state = 3},
  [201] = {.lex_state = 23, .external_lex_state = 3},
  [202] = {.lex_state = 23, .external_lex_state = 3},
  [203] = {.lex_state = 23, .external_lex_state = 3},
  [204] = {.lex_state = 23, .external_lex_state = 3},
  [205] = {.lex_state = 23, .external_lex_state = 3},
  [206] = {.lex_state = 23, .external_lex_state = 3},
  [207] = {.lex_state = 23, .external_lex_state = 3},
  [208] = {.lex_state = 23, .external_lex_state = 3},
  [209] = {.lex_state = 23, .external_lex_state = 3},
  [210] = {.lex_state = 23, .external_lex_state = 6},
  [211] = {.lex_state = 23, .external_lex_state = 8},
  [212] = {.lex_state = 23, .external_lex_state = 6},
  [213] = {.lex_state = 23, .external_lex_state = 2},
  [214] = {.lex_state = 23, .external_lex_state = 8},
  [215] = {.lex_state = 23, .external_lex_state = 3},
  [216] = {.lex_state = 0, .external_lex_state = 8},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 2, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 8},
  [220] = {.lex_state = 23, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 3},
  [222] = {.lex_state = 2, .external_lex_state = 2},
  [223] = {.lex_state = 23, .external_lex_state = 3},
  [224] = {.lex_state = 23, .external_lex_state = 2},
  [225] = {.lex_state = 23, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 8},
  [227] = {.lex_state = 0, .external_lex_state = 8},
  [228] = {.lex_state = 2, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 8},
  [230] = {.lex_state = 0, .external_lex_state = 3},
  [231] = {.lex_state = 2, .external_lex_state = 2},
  [232] = {.lex_state = 23, .external_lex_state = 8},
  [233] = {.lex_state = 23, .external_lex_state = 8},
  [234] = {.lex_state = 23, .external_lex_state = 8},
  [235] = {.lex_state = 23, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 3},
  [237] = {.lex_state = 2, .external_lex_state = 2},
  [238] = {.lex_state = 23, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 8},
  [240] = {.lex_state = 2, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 3},
  [242] = {.lex_state = 23, .external_lex_state = 3},
  [243] = {.lex_state = 0, .external_lex_state = 3},
  [244] = {.lex_state = 0, .external_lex_state = 3},
  [245] = {.lex_state = 2, .external_lex_state = 2},
  [246] = {.lex_state = 23, .external_lex_state = 5},
  [247] = {.lex_state = 0, .external_lex_state = 8},
  [248] = {.lex_state = 0, .external_lex_state = 3},
  [249] = {.lex_state = 0, .external_lex_state = 8},
  [250] = {.lex_state = 0, .external_lex_state = 3},
  [251] = {.lex_state = 23, .external_lex_state = 3},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 8},
  [255] = {.lex_state = 23, .external_lex_state = 3},
  [256] = {.lex_state = 23, .external_lex_state = 3},
  [257] = {.lex_state = 0, .external_lex_state = 3},
  [258] = {.lex_state = 23, .external_lex_state = 3},
  [259] = {.lex_state = 0, .external_lex_state = 3},
  [260] = {.lex_state = 0, .external_lex_state = 3},
  [261] = {.lex_state = 0, .external_lex_state = 8},
  [262] = {.lex_state = 0, .external_lex_state = 8},
  [263] = {.lex_state = 23, .external_lex_state = 3},
  [264] = {.lex_state = 0, .external_lex_state = 8},
  [265] = {.lex_state = 0, .external_lex_state = 8},
  [266] = {.lex_state = 2, .external_lex_state = 2},
  [267] = {.lex_state = 2, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 8},
  [269] = {.lex_state = 0, .external_lex_state = 8},
  [270] = {.lex_state = 23, .external_lex_state = 3},
  [271] = {.lex_state = 0, .external_lex_state = 8},
  [272] = {.lex_state = 23, .external_lex_state = 3},
  [273] = {.lex_state = 0, .external_lex_state = 9},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 9},
  [277] = {.lex_state = 23, .external_lex_state = 2},
  [278] = {.lex_state = 0, .external_lex_state = 9},
  [279] = {.lex_state = 0, .external_lex_state = 9},
  [280] = {.lex_state = 0, .external_lex_state = 9},
  [281] = {.lex_state = 23, .external_lex_state = 2},
  [282] = {.lex_state = 23, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 0, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 9},
  [287] = {.lex_state = 0, .external_lex_state = 9},
  [288] = {.lex_state = 0, .external_lex_state = 2},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 23, .external_lex_state = 2},
  [292] = {.lex_state = 0, .external_lex_state = 9},
  [293] = {.lex_state = 0, .external_lex_state = 9},
  [294] = {.lex_state = 0, .external_lex_state = 2},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 0, .external_lex_state = 2},
  [298] = {.lex_state = 0, .external_lex_state = 9},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 9},
  [301] = {.lex_state = 0, .external_lex_state = 9},
  [302] = {.lex_state = 0, .external_lex_state = 9},
  [303] = {.lex_state = 0, .external_lex_state = 2},
  [304] = {.lex_state = 0, .external_lex_state = 9},
  [305] = {.lex_state = 0, .external_lex_state = 9},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 23, .external_lex_state = 2},
  [308] = {.lex_state = 0, .external_lex_state = 2},
  [309] = {.lex_state = 0, .external_lex_state = 9},
  [310] = {.lex_state = 0, .external_lex_state = 2},
  [311] = {.lex_state = 0, .external_lex_state = 2},
  [312] = {.lex_state = 0, .external_lex_state = 2},
  [313] = {.lex_state = 23, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 9},
  [315] = {.lex_state = 23, .external_lex_state = 2},
  [316] = {.lex_state = 0, .external_lex_state = 10},
  [317] = {.lex_state = 23, .external_lex_state = 2},
  [318] = {.lex_state = 23, .external_lex_state = 2},
  [319] = {.lex_state = 23, .external_lex_state = 2},
  [320] = {.lex_state = 23, .external_lex_state = 2},
  [321] = {.lex_state = 23, .external_lex_state = 2},
  [322] = {.lex_state = 23, .external_lex_state = 2},
  [323] = {.lex_state = 0, .external_lex_state = 11},
  [324] = {.lex_state = 23, .external_lex_state = 2},
  [325] = {.lex_state = 23, .external_lex_state = 2},
  [326] = {.lex_state = 23, .external_lex_state = 2},
  [327] = {.lex_state = 2, .external_lex_state = 2},
  [328] = {.lex_state = 2, .external_lex_state = 2},
  [329] = {.lex_state = 23, .external_lex_state = 2},
  [330] = {.lex_state = 23, .external_lex_state = 2},
  [331] = {.lex_state = 23, .external_lex_state = 2},
  [332] = {.lex_state = 23, .external_lex_state = 2},
  [333] = {.lex_state = 0, .external_lex_state = 10},
  [334] = {.lex_state = 2, .external_lex_state = 2},
  [335] = {.lex_state = 2, .external_lex_state = 2},
  [336] = {.lex_state = 23, .external_lex_state = 2},
  [337] = {.lex_state = 23, .external_lex_state = 2},
  [338] = {.lex_state = 0, .external_lex_state = 10},
  [339] = {.lex_state = 0, .external_lex_state = 2},
  [340] = {.lex_state = 0, .external_lex_state = 10},
  [341] = {.lex_state = 2, .external_lex_state = 2},
  [342] = {.lex_state = 0, .external_lex_state = 11},
  [343] = {.lex_state = 23, .external_lex_state = 2},
  [344] = {.lex_state = 0, .external_lex_state = 2},
  [345] = {.lex_state = 0, .external_lex_state = 10},
  [346] = {.lex_state = 0, .external_lex_state = 10},
  [347] = {.lex_state = 23, .external_lex_state = 2},
  [348] = {.lex_state = 0, .external_lex_state = 12},
  [349] = {.lex_state = 23, .external_lex_state = 2},
  [350] = {.lex_state = 23, .external_lex_state = 2},
  [351] = {.lex_state = 23, .external_lex_state = 2},
  [352] = {.lex_state = 0, .external_lex_state = 2},
  [353] = {.lex_state = 23, .external_lex_state = 2},
  [354] = {.lex_state = 23, .external_lex_state = 2},
  [355] = {.lex_state = 23, .external_lex_state = 2},
  [356] = {.lex_state = 0, .external_lex_state = 11},
  [357] = {.lex_state = 23, .external_lex_state = 2},
  [358] = {.lex_state = 23, .external_lex_state = 2},
  [359] = {.lex_state = 0, .external_lex_state = 2},
  [360] = {.lex_state = 23, .external_lex_state = 2},
  [361] = {.lex_state = 23, .external_lex_state = 2},
  [362] = {.lex_state = 0, .external_lex_state = 9},
  [363] = {.lex_state = 23, .external_lex_state = 2},
  [364] = {.lex_state = 23, .external_lex_state = 2},
  [365] = {.lex_state = 0, .external_lex_state = 12},
  [366] = {.lex_state = 23, .external_lex_state = 2},
  [367] = {.lex_state = 23, .external_lex_state = 2},
  [368] = {.lex_state = 23, .external_lex_state = 2},
  [369] = {.lex_state = 0, .external_lex_state = 11},
  [370] = {.lex_state = 0, .external_lex_state = 2},
  [371] = {.lex_state = 23, .external_lex_state = 2},
  [372] = {.lex_state = 23, .external_lex_state = 2},
  [373] = {.lex_state = 23, .external_lex_state = 2},
  [374] = {.lex_state = 23, .external_lex_state = 2},
  [375] = {.lex_state = 23, .external_lex_state = 2},
  [376] = {.lex_state = 23, .external_lex_state = 2},
  [377] = {.lex_state = 23, .external_lex_state = 2},
  [378] = {.lex_state = 71, .external_lex_state = 2},
  [379] = {.lex_state = 0, .external_lex_state = 2},
  [380] = {.lex_state = 2, .external_lex_state = 2},
  [381] = {.lex_state = 2, .external_lex_state = 2},
  [382] = {.lex_state = 2, .external_lex_state = 2},
  [383] = {.lex_state = 23, .external_lex_state = 2},
  [384] = {.lex_state = 23, .external_lex_state = 2},
  [385] = {.lex_state = 23, .external_lex_state = 2},
  [386] = {.lex_state = 23, .external_lex_state = 2},
  [387] = {.lex_state = 23, .external_lex_state = 2},
  [388] = {.lex_state = 23, .external_lex_state = 2},
  [389] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_Assert] = ACTIONS(1),
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
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(339),
    [sym_parameters] = STATE(11),
    [sym__statement] = STATE(5),
    [sym_nop] = STATE(5),
    [sym_log] = STATE(5),
    [sym_assert] = STATE(5),
    [sym_set_inter] = STATE(5),
    [sym_set] = STATE(5),
    [sym_execute_using] = STATE(5),
    [sym_execute_sql] = STATE(5),
    [sym_siard_output] = STATE(5),
    [sym_siard_metadata] = STATE(5),
    [sym_for_loop] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Parameters] = ACTIONS(7),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_Log] = ACTIONS(11),
    [anon_sym_Assert] = ACTIONS(13),
    [anon_sym_Interpolation] = ACTIONS(15),
    [anon_sym_Set] = ACTIONS(17),
    [anon_sym_Execute] = ACTIONS(19),
    [anon_sym_Output] = ACTIONS(21),
    [anon_sym_Metadata] = ACTIONS(23),
    [anon_sym_For] = ACTIONS(25),
    [sym__comment] = ACTIONS(3),
    [sym__skip] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(29), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(27), 25,
      anon_sym_Log,
      anon_sym_Assert,
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
  [37] = 12,
    ACTIONS(31), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(33), 1,
      anon_sym_Log,
    ACTIONS(35), 1,
      anon_sym_Assert,
    ACTIONS(37), 1,
      anon_sym_Interpolation,
    ACTIONS(39), 1,
      anon_sym_Set,
    ACTIONS(41), 1,
      anon_sym_Execute,
    ACTIONS(43), 1,
      anon_sym_Output,
    ACTIONS(45), 1,
      anon_sym_Metadata,
    ACTIONS(47), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(49), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(4), 12,
      sym__statement,
      sym_nop,
      sym_log,
      sym_assert,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [87] = 12,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(54), 1,
      anon_sym_Log,
    ACTIONS(57), 1,
      anon_sym_Assert,
    ACTIONS(60), 1,
      anon_sym_Interpolation,
    ACTIONS(63), 1,
      anon_sym_Set,
    ACTIONS(66), 1,
      anon_sym_Execute,
    ACTIONS(69), 1,
      anon_sym_Output,
    ACTIONS(72), 1,
      anon_sym_Metadata,
    ACTIONS(75), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(78), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(4), 12,
      sym__statement,
      sym_nop,
      sym_log,
      sym_assert,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [137] = 12,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Log,
    ACTIONS(13), 1,
      anon_sym_Assert,
    ACTIONS(15), 1,
      anon_sym_Interpolation,
    ACTIONS(17), 1,
      anon_sym_Set,
    ACTIONS(19), 1,
      anon_sym_Execute,
    ACTIONS(21), 1,
      anon_sym_Output,
    ACTIONS(23), 1,
      anon_sym_Metadata,
    ACTIONS(25), 1,
      anon_sym_For,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(13), 12,
      sym__statement,
      sym_nop,
      sym_log,
      sym_assert,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [186] = 12,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Log,
    ACTIONS(13), 1,
      anon_sym_Assert,
    ACTIONS(15), 1,
      anon_sym_Interpolation,
    ACTIONS(17), 1,
      anon_sym_Set,
    ACTIONS(19), 1,
      anon_sym_Execute,
    ACTIONS(21), 1,
      anon_sym_Output,
    ACTIONS(23), 1,
      anon_sym_Metadata,
    ACTIONS(25), 1,
      anon_sym_For,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(13), 12,
      sym__statement,
      sym_nop,
      sym_log,
      sym_assert,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [235] = 12,
    ACTIONS(31), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(33), 1,
      anon_sym_Log,
    ACTIONS(35), 1,
      anon_sym_Assert,
    ACTIONS(37), 1,
      anon_sym_Interpolation,
    ACTIONS(39), 1,
      anon_sym_Set,
    ACTIONS(41), 1,
      anon_sym_Execute,
    ACTIONS(43), 1,
      anon_sym_Output,
    ACTIONS(45), 1,
      anon_sym_Metadata,
    ACTIONS(47), 1,
      anon_sym_For,
    STATE(241), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(3), 12,
      sym__statement,
      sym_nop,
      sym_log,
      sym_assert,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [284] = 20,
    ACTIONS(84), 1,
      anon_sym_dbname,
    ACTIONS(86), 1,
      anon_sym_description,
    ACTIONS(88), 1,
      anon_sym_archiver,
    ACTIONS(90), 1,
      anon_sym_archiverContact,
    ACTIONS(92), 1,
      anon_sym_dataOwner,
    ACTIONS(94), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(96), 1,
      anon_sym_lobFolder,
    ACTIONS(98), 1,
      anon_sym_Schema,
    ACTIONS(100), 1,
      anon_sym_Command,
    STATE(30), 1,
      sym__siard_dataOwner,
    STATE(31), 1,
      sym__siard_archiverContact,
    STATE(32), 1,
      sym__siard_archiver,
    STATE(33), 1,
      sym__siard_description,
    STATE(43), 1,
      sym__siard_dbname,
    STATE(56), 1,
      sym__siard_lobFolder,
    STATE(70), 1,
      sym__siard_dataOriginTimespan,
    STATE(89), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(102), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(14), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [349] = 12,
    ACTIONS(31), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(33), 1,
      anon_sym_Log,
    ACTIONS(35), 1,
      anon_sym_Assert,
    ACTIONS(37), 1,
      anon_sym_Interpolation,
    ACTIONS(39), 1,
      anon_sym_Set,
    ACTIONS(41), 1,
      anon_sym_Execute,
    ACTIONS(43), 1,
      anon_sym_Output,
    ACTIONS(45), 1,
      anon_sym_Metadata,
    ACTIONS(47), 1,
      anon_sym_For,
    STATE(248), 1,
      sym_for_body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(3), 12,
      sym__statement,
      sym_nop,
      sym_log,
      sym_assert,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [398] = 20,
    ACTIONS(84), 1,
      anon_sym_dbname,
    ACTIONS(86), 1,
      anon_sym_description,
    ACTIONS(88), 1,
      anon_sym_archiver,
    ACTIONS(90), 1,
      anon_sym_archiverContact,
    ACTIONS(92), 1,
      anon_sym_dataOwner,
    ACTIONS(94), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(96), 1,
      anon_sym_lobFolder,
    ACTIONS(98), 1,
      anon_sym_Schema,
    ACTIONS(100), 1,
      anon_sym_Command,
    STATE(30), 1,
      sym__siard_dataOwner,
    STATE(31), 1,
      sym__siard_archiverContact,
    STATE(32), 1,
      sym__siard_archiver,
    STATE(33), 1,
      sym__siard_description,
    STATE(40), 1,
      sym__ded,
    STATE(43), 1,
      sym__siard_dbname,
    STATE(56), 1,
      sym__siard_lobFolder,
    STATE(70), 1,
      sym__siard_dataOriginTimespan,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(104), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(12), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [463] = 12,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(11), 1,
      anon_sym_Log,
    ACTIONS(13), 1,
      anon_sym_Assert,
    ACTIONS(15), 1,
      anon_sym_Interpolation,
    ACTIONS(17), 1,
      anon_sym_Set,
    ACTIONS(19), 1,
      anon_sym_Execute,
    ACTIONS(21), 1,
      anon_sym_Output,
    ACTIONS(23), 1,
      anon_sym_Metadata,
    ACTIONS(25), 1,
      anon_sym_For,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(6), 12,
      sym__statement,
      sym_nop,
      sym_log,
      sym_assert,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [512] = 20,
    ACTIONS(84), 1,
      anon_sym_dbname,
    ACTIONS(86), 1,
      anon_sym_description,
    ACTIONS(88), 1,
      anon_sym_archiver,
    ACTIONS(90), 1,
      anon_sym_archiverContact,
    ACTIONS(92), 1,
      anon_sym_dataOwner,
    ACTIONS(94), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(96), 1,
      anon_sym_lobFolder,
    ACTIONS(98), 1,
      anon_sym_Schema,
    ACTIONS(100), 1,
      anon_sym_Command,
    STATE(30), 1,
      sym__siard_dataOwner,
    STATE(31), 1,
      sym__siard_archiverContact,
    STATE(32), 1,
      sym__siard_archiver,
    STATE(33), 1,
      sym__siard_description,
    STATE(37), 1,
      sym__ded,
    STATE(43), 1,
      sym__siard_dbname,
    STATE(56), 1,
      sym__siard_lobFolder,
    STATE(70), 1,
      sym__siard_dataOriginTimespan,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(106), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(15), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [577] = 12,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(111), 1,
      anon_sym_Log,
    ACTIONS(114), 1,
      anon_sym_Assert,
    ACTIONS(117), 1,
      anon_sym_Interpolation,
    ACTIONS(120), 1,
      anon_sym_Set,
    ACTIONS(123), 1,
      anon_sym_Execute,
    ACTIONS(126), 1,
      anon_sym_Output,
    ACTIONS(129), 1,
      anon_sym_Metadata,
    ACTIONS(132), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(13), 12,
      sym__statement,
      sym_nop,
      sym_log,
      sym_assert,
      sym_set_inter,
      sym_set,
      sym_execute_using,
      sym_execute_sql,
      sym_siard_output,
      sym_siard_metadata,
      sym_for_loop,
      aux_sym_source_file_repeat1,
  [626] = 20,
    ACTIONS(84), 1,
      anon_sym_dbname,
    ACTIONS(86), 1,
      anon_sym_description,
    ACTIONS(88), 1,
      anon_sym_archiver,
    ACTIONS(90), 1,
      anon_sym_archiverContact,
    ACTIONS(92), 1,
      anon_sym_dataOwner,
    ACTIONS(94), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(96), 1,
      anon_sym_lobFolder,
    ACTIONS(98), 1,
      anon_sym_Schema,
    ACTIONS(100), 1,
      anon_sym_Command,
    STATE(30), 1,
      sym__siard_dataOwner,
    STATE(31), 1,
      sym__siard_archiverContact,
    STATE(32), 1,
      sym__siard_archiver,
    STATE(33), 1,
      sym__siard_description,
    STATE(43), 1,
      sym__siard_dbname,
    STATE(56), 1,
      sym__siard_lobFolder,
    STATE(70), 1,
      sym__siard_dataOriginTimespan,
    STATE(108), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(135), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(15), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [691] = 19,
    ACTIONS(137), 1,
      anon_sym_dbname,
    ACTIONS(140), 1,
      anon_sym_description,
    ACTIONS(143), 1,
      anon_sym_archiver,
    ACTIONS(146), 1,
      anon_sym_archiverContact,
    ACTIONS(149), 1,
      anon_sym_dataOwner,
    ACTIONS(152), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(155), 1,
      anon_sym_lobFolder,
    ACTIONS(158), 1,
      anon_sym_Schema,
    ACTIONS(161), 1,
      anon_sym_Command,
    STATE(30), 1,
      sym__siard_dataOwner,
    STATE(31), 1,
      sym__siard_archiverContact,
    STATE(32), 1,
      sym__siard_archiver,
    STATE(33), 1,
      sym__siard_description,
    STATE(43), 1,
      sym__siard_dbname,
    STATE(56), 1,
      sym__siard_lobFolder,
    STATE(70), 1,
      sym__siard_dataOriginTimespan,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(164), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(15), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [753] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(168), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(166), 17,
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
  [781] = 3,
    ACTIONS(172), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(170), 17,
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
  [808] = 3,
    ACTIONS(176), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(174), 17,
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
  [835] = 3,
    ACTIONS(180), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(178), 17,
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
  [862] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(184), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 15,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [888] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(186), 15,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [914] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(192), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(190), 15,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [940] = 3,
    ACTIONS(174), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(176), 13,
      anon_sym_Parameters,
      anon_sym_Log,
      anon_sym_Assert,
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
  [963] = 9,
    ACTIONS(86), 1,
      anon_sym_description,
    ACTIONS(194), 1,
      anon_sym_Type,
    ACTIONS(196), 1,
      anon_sym_Table,
    ACTIONS(198), 1,
      anon_sym_View,
    STATE(81), 1,
      sym__ded,
    STATE(87), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(200), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(88), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [996] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(29), 12,
      ts_builtin_sym_end,
      anon_sym_Parameters,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_Body,
      anon_sym_For,
  [1015] = 3,
    ACTIONS(204), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(202), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1036] = 9,
    ACTIONS(86), 1,
      anon_sym_description,
    ACTIONS(206), 1,
      anon_sym_Column,
    ACTIONS(208), 1,
      anon_sym_Key,
    ACTIONS(210), 1,
      anon_sym_Check,
    STATE(101), 1,
      sym__siard_description,
    STATE(207), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(212), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(102), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1069] = 3,
    ACTIONS(214), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(202), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1089] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(216), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1107] = 3,
    ACTIONS(220), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(218), 10,
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
  [1127] = 3,
    ACTIONS(224), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(222), 10,
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
  [1147] = 3,
    ACTIONS(228), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(226), 10,
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
  [1167] = 3,
    ACTIONS(232), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(230), 10,
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
  [1187] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(186), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1205] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(182), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1223] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(234), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1241] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(236), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1259] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(238), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1277] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(240), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1295] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(242), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1313] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(244), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1331] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(246), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1349] = 3,
    ACTIONS(250), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(248), 10,
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
  [1369] = 8,
    ACTIONS(254), 1,
      sym__inter_start,
    ACTIONS(256), 1,
      sym__inter_start2,
    ACTIONS(258), 1,
      sym__raw,
    STATE(2), 1,
      sym__ded,
    STATE(166), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(252), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(97), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1399] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(260), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1417] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(262), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1435] = 7,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_connection,
    ACTIONS(268), 1,
      anon_sym_result,
    ACTIONS(270), 1,
      sym_integer,
    ACTIONS(272), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(94), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1463] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(274), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1481] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(276), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1499] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(278), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1517] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(280), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1535] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(282), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1553] = 7,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(286), 1,
      anon_sym_connection,
    ACTIONS(288), 1,
      anon_sym_result,
    ACTIONS(290), 1,
      sym_integer,
    ACTIONS(292), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(51), 6,
      sym__expression,
      sym_connection,
      sym_query,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [1581] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(294), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1599] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(296), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [1617] = 3,
    ACTIONS(300), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(298), 10,
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
  [1637] = 3,
    ACTIONS(304), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(302), 10,
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
  [1657] = 3,
    ACTIONS(308), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(306), 10,
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
  [1677] = 3,
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
  [1697] = 3,
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
  [1717] = 3,
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
  [1737] = 3,
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
  [1757] = 3,
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
  [1777] = 3,
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
  [1797] = 3,
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
  [1817] = 3,
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
  [1837] = 8,
    ACTIONS(254), 1,
      sym__inter_start,
    ACTIONS(256), 1,
      sym__inter_start2,
    ACTIONS(258), 1,
      sym__raw,
    STATE(25), 1,
      sym__ded,
    STATE(166), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(342), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(97), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1867] = 3,
    ACTIONS(346), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(344), 10,
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
  [1887] = 3,
    ACTIONS(350), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(348), 10,
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
  [1907] = 3,
    ACTIONS(354), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(352), 10,
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
  [1927] = 3,
    ACTIONS(358), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 10,
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
  [1947] = 3,
    ACTIONS(362), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(360), 10,
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
  [1967] = 3,
    ACTIONS(366), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(364), 10,
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
  [1987] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(368), 11,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_Body,
      anon_sym_For,
  [2005] = 3,
    ACTIONS(372), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(370), 10,
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
  [2025] = 3,
    ACTIONS(376), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(374), 10,
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
  [2045] = 3,
    ACTIONS(380), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(378), 10,
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
  [2065] = 3,
    ACTIONS(384), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(382), 10,
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
  [2085] = 3,
    ACTIONS(388), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(386), 10,
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
  [2105] = 3,
    ACTIONS(392), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(390), 10,
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
  [2125] = 3,
    ACTIONS(396), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(394), 10,
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
  [2145] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(190), 11,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2163] = 3,
    ACTIONS(400), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(398), 10,
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
  [2183] = 3,
    ACTIONS(404), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(402), 10,
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
  [2203] = 7,
    ACTIONS(194), 1,
      anon_sym_Type,
    ACTIONS(196), 1,
      anon_sym_Table,
    ACTIONS(198), 1,
      anon_sym_View,
    STATE(76), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(406), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(117), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2230] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(244), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2247] = 7,
    ACTIONS(194), 1,
      anon_sym_Type,
    ACTIONS(196), 1,
      anon_sym_Table,
    ACTIONS(198), 1,
      anon_sym_View,
    STATE(80), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(408), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(85), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2274] = 7,
    ACTIONS(194), 1,
      anon_sym_Type,
    ACTIONS(196), 1,
      anon_sym_Table,
    ACTIONS(198), 1,
      anon_sym_View,
    STATE(79), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(410), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(117), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2301] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(242), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2318] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(240), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2335] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(296), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2352] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(294), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2369] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(238), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2386] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(280), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2403] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(278), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2420] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(274), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2437] = 7,
    ACTIONS(414), 1,
      sym__inter_start,
    ACTIONS(417), 1,
      sym__inter_start2,
    ACTIONS(420), 1,
      sym__raw,
    STATE(166), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(412), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(97), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2464] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(234), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2481] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(262), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2498] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(260), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2515] = 7,
    ACTIONS(206), 1,
      anon_sym_Column,
    ACTIONS(208), 1,
      anon_sym_Key,
    ACTIONS(210), 1,
      anon_sym_Check,
    STATE(202), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(423), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(103), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2542] = 7,
    ACTIONS(206), 1,
      anon_sym_Column,
    ACTIONS(208), 1,
      anon_sym_Key,
    ACTIONS(210), 1,
      anon_sym_Check,
    STATE(204), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(425), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(109), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2569] = 7,
    ACTIONS(206), 1,
      anon_sym_Column,
    ACTIONS(208), 1,
      anon_sym_Key,
    ACTIONS(210), 1,
      anon_sym_Check,
    STATE(194), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(427), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(109), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2596] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(246), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2613] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(276), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2630] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(216), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2647] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(282), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2664] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(236), 10,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Execute,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
  [2681] = 6,
    ACTIONS(429), 1,
      anon_sym_Column,
    ACTIONS(432), 1,
      anon_sym_Key,
    ACTIONS(435), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(438), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(109), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2705] = 7,
    ACTIONS(440), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      sym__inter_start,
    ACTIONS(444), 1,
      sym__string_content,
    ACTIONS(446), 1,
      sym__string_end,
    STATE(177), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(115), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2731] = 7,
    ACTIONS(440), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      sym__inter_start,
    ACTIONS(444), 1,
      sym__string_content,
    ACTIONS(448), 1,
      sym__string_end,
    STATE(177), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(112), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2757] = 7,
    ACTIONS(450), 1,
      anon_sym_BSLASH,
    ACTIONS(453), 1,
      sym__inter_start,
    ACTIONS(456), 1,
      sym__string_content,
    ACTIONS(459), 1,
      sym__string_end,
    STATE(177), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(112), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2783] = 7,
    ACTIONS(440), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      sym__inter_start,
    ACTIONS(444), 1,
      sym__string_content,
    ACTIONS(461), 1,
      sym__string_end,
    STATE(177), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(112), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2809] = 7,
    ACTIONS(440), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      sym__inter_start,
    ACTIONS(444), 1,
      sym__string_content,
    ACTIONS(463), 1,
      sym__string_end,
    STATE(177), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(111), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2835] = 7,
    ACTIONS(440), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      sym__inter_start,
    ACTIONS(444), 1,
      sym__string_content,
    ACTIONS(465), 1,
      sym__string_end,
    STATE(177), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(112), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2861] = 7,
    ACTIONS(440), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      sym__inter_start,
    ACTIONS(444), 1,
      sym__string_content,
    ACTIONS(467), 1,
      sym__string_end,
    STATE(177), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(112), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2887] = 6,
    ACTIONS(469), 1,
      anon_sym_Type,
    ACTIONS(472), 1,
      anon_sym_Table,
    ACTIONS(475), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(478), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(117), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2911] = 7,
    ACTIONS(440), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      sym__inter_start,
    ACTIONS(444), 1,
      sym__string_content,
    ACTIONS(480), 1,
      sym__string_end,
    STATE(177), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(116), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2937] = 7,
    ACTIONS(440), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      sym__inter_start,
    ACTIONS(444), 1,
      sym__string_content,
    ACTIONS(482), 1,
      sym__string_end,
    STATE(177), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(113), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2963] = 6,
    ACTIONS(254), 1,
      sym__inter_start,
    ACTIONS(256), 1,
      sym__inter_start2,
    ACTIONS(258), 1,
      sym__raw,
    STATE(166), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(44), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2986] = 7,
    ACTIONS(86), 1,
      anon_sym_description,
    ACTIONS(484), 1,
      anon_sym_Field,
    STATE(154), 1,
      sym__siard_description,
    STATE(270), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(486), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(153), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3011] = 7,
    ACTIONS(86), 1,
      anon_sym_description,
    ACTIONS(484), 1,
      anon_sym_Field,
    STATE(159), 1,
      sym__siard_description,
    STATE(192), 1,
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
  [3036] = 6,
    ACTIONS(272), 1,
      sym__string_start,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(492), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(92), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(127), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3059] = 6,
    ACTIONS(254), 1,
      sym__inter_start,
    ACTIONS(256), 1,
      sym__inter_start2,
    ACTIONS(258), 1,
      sym__raw,
    STATE(166), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(67), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3082] = 7,
    ACTIONS(86), 1,
      anon_sym_description,
    ACTIONS(206), 1,
      anon_sym_Column,
    STATE(172), 1,
      sym__siard_description,
    STATE(206), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(494), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(167), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3107] = 6,
    ACTIONS(272), 1,
      sym__string_start,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(496), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(54), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(128), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3130] = 4,
    STATE(146), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(500), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(498), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3148] = 4,
    STATE(152), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(500), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(498), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3166] = 5,
    ACTIONS(484), 1,
      anon_sym_Field,
    STATE(255), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(502), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(189), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3185] = 6,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(506), 1,
      aux_sym__short_descr_token1,
    STATE(197), 1,
      sym__short_descr,
    STATE(198), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(508), 2,
      sym__newline,
      sym__end_of_file,
  [3206] = 5,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      sym_integer,
    ACTIONS(514), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(346), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3225] = 5,
    ACTIONS(272), 1,
      sym__string_start,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(516), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(297), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3244] = 5,
    ACTIONS(272), 1,
      sym__string_start,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(91), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3263] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(522), 1,
      sym_integer,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(247), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3282] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(526), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(214), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3301] = 5,
    ACTIONS(292), 1,
      sym__string_start,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(530), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(55), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3320] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(532), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(264), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3339] = 5,
    ACTIONS(272), 1,
      sym__string_start,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(534), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(311), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3358] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(536), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(261), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3377] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(36), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(540), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(182), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3396] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(542), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(216), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3415] = 5,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(514), 1,
      sym__string_start,
    ACTIONS(544), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(340), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3434] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(546), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(271), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3453] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(548), 6,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
      aux_sym_escape_sequence_token3,
      aux_sym_escape_sequence_token4,
      aux_sym_escape_sequence_token5,
      aux_sym_escape_sequence_token6,
  [3466] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(550), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(239), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3485] = 5,
    ACTIONS(272), 1,
      sym__string_start,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(552), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(107), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3504] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(554), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(262), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3523] = 4,
    ACTIONS(558), 1,
      sym__raw,
    STATE(148), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(556), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [3540] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(561), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(226), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3559] = 5,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(74), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(565), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(208), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [3578] = 6,
    ACTIONS(506), 1,
      aux_sym__short_descr_token1,
    ACTIONS(567), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym__short_descr,
    STATE(69), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(569), 2,
      sym__newline,
      sym__end_of_file,
  [3599] = 5,
    ACTIONS(292), 1,
      sym__string_start,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(571), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(52), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3618] = 5,
    ACTIONS(484), 1,
      anon_sym_Field,
    STATE(256), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(573), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(189), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3637] = 5,
    ACTIONS(484), 1,
      anon_sym_Field,
    STATE(258), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(575), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(129), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3656] = 5,
    ACTIONS(484), 1,
      anon_sym_Field,
    STATE(185), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(577), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(189), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3675] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(98), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(579), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(182), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3694] = 6,
    ACTIONS(506), 1,
      aux_sym__short_descr_token1,
    ACTIONS(581), 1,
      anon_sym_COLON,
    STATE(263), 1,
      sym__nl,
    STATE(272), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(583), 2,
      sym__newline,
      sym__end_of_file,
  [3715] = 5,
    ACTIONS(484), 1,
      anon_sym_Field,
    STATE(190), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(585), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(189), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3734] = 5,
    ACTIONS(484), 1,
      anon_sym_Field,
    STATE(191), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(587), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(155), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3753] = 5,
    ACTIONS(206), 1,
      anon_sym_Column,
    STATE(193), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(589), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(195), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3772] = 6,
    ACTIONS(506), 1,
      aux_sym__short_descr_token1,
    ACTIONS(591), 1,
      anon_sym_COLON,
    STATE(200), 1,
      sym__short_descr,
    STATE(201), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(593), 2,
      sym__newline,
      sym__end_of_file,
  [3793] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(595), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(211), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3812] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(597), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(254), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3831] = 6,
    ACTIONS(506), 1,
      aux_sym__short_descr_token1,
    ACTIONS(599), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym__nl,
    STATE(187), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(601), 2,
      sym__newline,
      sym__end_of_file,
  [3852] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(603), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(227), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3871] = 4,
    ACTIONS(607), 1,
      sym__raw,
    STATE(148), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(605), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [3888] = 5,
    ACTIONS(206), 1,
      anon_sym_Column,
    STATE(183), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(609), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(195), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3907] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(611), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(265), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3926] = 6,
    ACTIONS(506), 1,
      aux_sym__short_descr_token1,
    ACTIONS(613), 1,
      anon_sym_COLON,
    STATE(175), 1,
      sym__nl,
    STATE(196), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(615), 2,
      sym__newline,
      sym__end_of_file,
  [3947] = 5,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(514), 1,
      sym__string_start,
    ACTIONS(617), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(316), 3,
      sym__basic_expression,
      sym_variable_instance,
      sym_string,
  [3966] = 6,
    ACTIONS(506), 1,
      aux_sym__short_descr_token1,
    ACTIONS(619), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym__short_descr,
    STATE(205), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(621), 2,
      sym__newline,
      sym__end_of_file,
  [3987] = 5,
    ACTIONS(206), 1,
      anon_sym_Column,
    STATE(209), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(623), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(160), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4006] = 6,
    ACTIONS(506), 1,
      aux_sym__short_descr_token1,
    ACTIONS(625), 1,
      anon_sym_COLON,
    STATE(178), 1,
      sym__nl,
    STATE(180), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(627), 2,
      sym__newline,
      sym__end_of_file,
  [4027] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(629), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4039] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(631), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4051] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(633), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4063] = 4,
    ACTIONS(637), 1,
      sym__string_content,
    STATE(184), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(635), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [4079] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(639), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4091] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(641), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4103] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(643), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4115] = 5,
    ACTIONS(506), 1,
      aux_sym__short_descr_token1,
    STATE(215), 1,
      sym__nl,
    STATE(242), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(645), 2,
      sym__newline,
      sym__end_of_file,
  [4133] = 4,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(650), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(182), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4149] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(652), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4161] = 4,
    ACTIONS(656), 1,
      sym__string_content,
    STATE(184), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(654), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [4177] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(659), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4189] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(661), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4201] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(663), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4213] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(665), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4225] = 4,
    ACTIONS(667), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(670), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(189), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4241] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(672), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4253] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(674), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4265] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(676), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4277] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(678), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4289] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(680), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4301] = 4,
    ACTIONS(682), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(685), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(195), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4317] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(687), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4329] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(689), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4341] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(691), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4353] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(693), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4365] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(695), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4377] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(697), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4389] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(699), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4401] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(701), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4413] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(703), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4425] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(705), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4437] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(707), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4449] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(709), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4461] = 4,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(714), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(208), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4477] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(716), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4489] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(641), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [4500] = 5,
    ACTIONS(718), 1,
      anon_sym_with,
    ACTIONS(720), 1,
      sym__newline,
    ACTIONS(722), 1,
      sym__end_of_file,
    STATE(99), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4517] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(724), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [4528] = 5,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(726), 1,
      anon_sym_title,
    ACTIONS(728), 1,
      anon_sym_Body,
    STATE(355), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4545] = 5,
    ACTIONS(730), 1,
      anon_sym_with,
    ACTIONS(732), 1,
      sym__newline,
    ACTIONS(734), 1,
      sym__end_of_file,
    STATE(46), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4562] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(736), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4572] = 3,
    STATE(73), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(738), 2,
      sym__newline,
      sym__end_of_file,
  [4584] = 4,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4598] = 4,
    ACTIONS(745), 1,
      anon_sym_COLON,
    ACTIONS(747), 1,
      anon_sym_EQ,
    STATE(64), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4612] = 3,
    STATE(106), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(749), 2,
      sym__newline,
      sym__end_of_file,
  [4624] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(751), 1,
      anon_sym_Body,
    STATE(337), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4638] = 3,
    STATE(77), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(753), 2,
      sym__dedent,
      sym__end_of_file,
  [4650] = 4,
    ACTIONS(745), 1,
      anon_sym_COLON,
    ACTIONS(755), 1,
      anon_sym_EQ,
    STATE(63), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4664] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(757), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4674] = 3,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(140), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4686] = 3,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(156), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4698] = 3,
    STATE(83), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(759), 2,
      sym__newline,
      sym__end_of_file,
  [4710] = 3,
    STATE(235), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(761), 2,
      sym__newline,
      sym__end_of_file,
  [4722] = 4,
    ACTIONS(745), 1,
      anon_sym_COLON,
    ACTIONS(763), 1,
      anon_sym_EQ,
    STATE(61), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4736] = 3,
    STATE(29), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(765), 2,
      sym__newline,
      sym__end_of_file,
  [4748] = 3,
    STATE(75), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(767), 2,
      sym__dedent,
      sym__end_of_file,
  [4760] = 4,
    ACTIONS(745), 1,
      anon_sym_COLON,
    ACTIONS(769), 1,
      anon_sym_EQ,
    STATE(60), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4774] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(190), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [4784] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(186), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [4794] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(182), 3,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
  [4804] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(771), 1,
      anon_sym_Body,
    STATE(321), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4818] = 3,
    STATE(71), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(773), 2,
      sym__dedent,
      sym__end_of_file,
  [4830] = 4,
    ACTIONS(745), 1,
      anon_sym_COLON,
    ACTIONS(775), 1,
      anon_sym_EQ,
    STATE(59), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4844] = 3,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(150), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4856] = 3,
    STATE(57), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(777), 2,
      sym__newline,
      sym__end_of_file,
  [4868] = 4,
    ACTIONS(745), 1,
      anon_sym_COLON,
    ACTIONS(779), 1,
      anon_sym_EQ,
    STATE(19), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4882] = 3,
    STATE(39), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(781), 2,
      sym__dedent,
      sym__end_of_file,
  [4894] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(783), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [4904] = 3,
    STATE(68), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(785), 2,
      sym__dedent,
      sym__end_of_file,
  [4916] = 3,
    STATE(199), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(787), 2,
      sym__dedent,
      sym__end_of_file,
  [4928] = 4,
    ACTIONS(745), 1,
      anon_sym_COLON,
    ACTIONS(789), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4942] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(791), 3,
      sym__string_start,
      sym_integer,
      sym_identifier,
  [4952] = 3,
    STATE(42), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(793), 2,
      sym__newline,
      sym__end_of_file,
  [4964] = 3,
    STATE(90), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(795), 2,
      sym__dedent,
      sym__end_of_file,
  [4976] = 3,
    STATE(48), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(797), 2,
      sym__newline,
      sym__end_of_file,
  [4988] = 3,
    STATE(65), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(799), 2,
      sym__dedent,
      sym__end_of_file,
  [5000] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(801), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5010] = 4,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5024] = 4,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5038] = 3,
    STATE(104), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(809), 2,
      sym__newline,
      sym__end_of_file,
  [5050] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(811), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5060] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(813), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5070] = 3,
    STATE(62), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(815), 2,
      sym__dedent,
      sym__end_of_file,
  [5082] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(817), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5092] = 3,
    STATE(188), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(819), 2,
      sym__dedent,
      sym__end_of_file,
  [5104] = 3,
    STATE(186), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(821), 2,
      sym__dedent,
      sym__end_of_file,
  [5116] = 3,
    STATE(17), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(823), 2,
      sym__newline,
      sym__end_of_file,
  [5128] = 3,
    STATE(84), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(825), 2,
      sym__newline,
      sym__end_of_file,
  [5140] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(827), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5150] = 3,
    STATE(72), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(829), 2,
      sym__newline,
      sym__end_of_file,
  [5162] = 3,
    STATE(223), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(831), 2,
      sym__newline,
      sym__end_of_file,
  [5174] = 4,
    ACTIONS(833), 1,
      anon_sym_COLON,
    ACTIONS(835), 1,
      anon_sym_EQ,
    STATE(220), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5188] = 4,
    ACTIONS(745), 1,
      anon_sym_COLON,
    ACTIONS(837), 1,
      anon_sym_EQ,
    STATE(251), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5202] = 3,
    STATE(16), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(839), 2,
      sym__newline,
      sym__end_of_file,
  [5214] = 3,
    STATE(96), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(841), 2,
      sym__newline,
      sym__end_of_file,
  [5226] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(843), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5236] = 3,
    STATE(78), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(845), 2,
      sym__newline,
      sym__end_of_file,
  [5248] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(847), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5258] = 3,
    ACTIONS(849), 1,
      sym__newline,
    STATE(213), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5269] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(743), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5278] = 3,
    ACTIONS(851), 1,
      anon_sym_LPAREN,
    STATE(387), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5289] = 3,
    ACTIONS(849), 1,
      sym__newline,
    STATE(282), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5300] = 3,
    ACTIONS(853), 1,
      anon_sym_using,
    ACTIONS(855), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5311] = 3,
    ACTIONS(849), 1,
      sym__newline,
    STATE(224), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5322] = 3,
    ACTIONS(849), 1,
      sym__newline,
    STATE(7), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5333] = 3,
    ACTIONS(849), 1,
      sym__newline,
    STATE(281), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5344] = 3,
    ACTIONS(86), 1,
      anon_sym_description,
    STATE(259), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5355] = 3,
    ACTIONS(86), 1,
      anon_sym_description,
    STATE(260), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5366] = 3,
    ACTIONS(745), 1,
      anon_sym_COLON,
    STATE(230), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5377] = 3,
    ACTIONS(857), 1,
      anon_sym_COLON,
    STATE(38), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5388] = 3,
    ACTIONS(745), 1,
      anon_sym_COLON,
    STATE(221), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5399] = 3,
    ACTIONS(849), 1,
      sym__newline,
    STATE(9), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5410] = 3,
    ACTIONS(859), 1,
      sym__newline,
    STATE(121), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5421] = 3,
    ACTIONS(833), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5432] = 3,
    ACTIONS(857), 1,
      anon_sym_COLON,
    STATE(41), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5443] = 3,
    ACTIONS(861), 1,
      anon_sym_COLON,
    STATE(93), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5454] = 3,
    ACTIONS(863), 1,
      anon_sym_using,
    ACTIONS(865), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5465] = 3,
    ACTIONS(859), 1,
      sym__newline,
    STATE(10), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5476] = 3,
    ACTIONS(859), 1,
      sym__newline,
    STATE(122), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5487] = 3,
    ACTIONS(745), 1,
      anon_sym_COLON,
    STATE(45), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5498] = 3,
    ACTIONS(745), 1,
      anon_sym_COLON,
    STATE(236), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5509] = 3,
    ACTIONS(745), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5520] = 3,
    ACTIONS(745), 1,
      anon_sym_COLON,
    STATE(50), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5531] = 3,
    ACTIONS(859), 1,
      sym__newline,
    STATE(8), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5542] = 3,
    ACTIONS(851), 1,
      anon_sym_LPAREN,
    STATE(324), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5553] = 3,
    ACTIONS(849), 1,
      sym__newline,
    STATE(238), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5564] = 3,
    ACTIONS(849), 1,
      sym__newline,
    STATE(225), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5575] = 3,
    ACTIONS(849), 1,
      sym__newline,
    STATE(307), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5586] = 3,
    ACTIONS(861), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5597] = 3,
    ACTIONS(859), 1,
      sym__newline,
    STATE(27), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5608] = 3,
    ACTIONS(859), 1,
      sym__newline,
    STATE(125), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5619] = 3,
    ACTIONS(745), 1,
      anon_sym_COLON,
    STATE(243), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5630] = 3,
    ACTIONS(86), 1,
      anon_sym_description,
    STATE(244), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5641] = 3,
    ACTIONS(745), 1,
      anon_sym_COLON,
    STATE(250), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5652] = 3,
    ACTIONS(859), 1,
      sym__newline,
    STATE(24), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5663] = 3,
    ACTIONS(745), 1,
      anon_sym_COLON,
    STATE(257), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5674] = 3,
    ACTIONS(833), 1,
      anon_sym_COLON,
    STATE(95), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5685] = 3,
    ACTIONS(833), 1,
      anon_sym_COLON,
    STATE(105), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5696] = 2,
    ACTIONS(867), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5704] = 2,
    ACTIONS(869), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5712] = 2,
    ACTIONS(871), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5720] = 2,
    ACTIONS(873), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5728] = 2,
    ACTIONS(875), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5736] = 2,
    ACTIONS(877), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5744] = 2,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5752] = 2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5760] = 2,
    ACTIONS(883), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5768] = 2,
    ACTIONS(885), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5776] = 2,
    ACTIONS(887), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5784] = 2,
    ACTIONS(889), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5792] = 2,
    ACTIONS(891), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5800] = 2,
    ACTIONS(893), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5808] = 2,
    ACTIONS(895), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5816] = 2,
    ACTIONS(897), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5824] = 2,
    ACTIONS(899), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5832] = 2,
    ACTIONS(901), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5840] = 2,
    ACTIONS(903), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5848] = 2,
    ACTIONS(905), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5856] = 2,
    ACTIONS(190), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5864] = 2,
    ACTIONS(907), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5872] = 2,
    ACTIONS(909), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5880] = 2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5888] = 2,
    ACTIONS(913), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5896] = 2,
    ACTIONS(186), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5904] = 2,
    ACTIONS(915), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5912] = 2,
    ACTIONS(917), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5920] = 2,
    ACTIONS(919), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5928] = 2,
    ACTIONS(921), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5936] = 2,
    ACTIONS(923), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5944] = 2,
    ACTIONS(925), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5952] = 2,
    ACTIONS(182), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5960] = 2,
    ACTIONS(927), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5968] = 2,
    ACTIONS(929), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5976] = 2,
    ACTIONS(931), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5984] = 2,
    ACTIONS(933), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5992] = 2,
    ACTIONS(935), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6000] = 2,
    ACTIONS(937), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6008] = 2,
    ACTIONS(939), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6016] = 2,
    ACTIONS(941), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6024] = 2,
    ACTIONS(943), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6032] = 2,
    ACTIONS(945), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6040] = 2,
    ACTIONS(947), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6048] = 2,
    ACTIONS(949), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6056] = 2,
    ACTIONS(951), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6064] = 2,
    ACTIONS(953), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6072] = 2,
    ACTIONS(955), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6080] = 2,
    ACTIONS(957), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6088] = 2,
    ACTIONS(959), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6096] = 2,
    ACTIONS(961), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6104] = 2,
    ACTIONS(963), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6112] = 2,
    ACTIONS(965), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6120] = 2,
    ACTIONS(967), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6128] = 2,
    ACTIONS(969), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6136] = 2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6144] = 2,
    ACTIONS(973), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6152] = 2,
    ACTIONS(975), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6160] = 2,
    ACTIONS(977), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6168] = 2,
    ACTIONS(979), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6176] = 2,
    ACTIONS(981), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6184] = 2,
    ACTIONS(983), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6192] = 2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6200] = 2,
    ACTIONS(987), 1,
      anon_sym_via,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6208] = 2,
    ACTIONS(989), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6216] = 2,
    ACTIONS(991), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6224] = 2,
    ACTIONS(993), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6232] = 2,
    ACTIONS(995), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6240] = 2,
    ACTIONS(997), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6248] = 2,
    ACTIONS(999), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6256] = 2,
    ACTIONS(1001), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6264] = 2,
    ACTIONS(1003), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6272] = 2,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6280] = 2,
    ACTIONS(1007), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6288] = 2,
    ACTIONS(1009), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6296] = 2,
    ACTIONS(1011), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6304] = 2,
    ACTIONS(1013), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 87,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 186,
  [SMALL_STATE(7)] = 235,
  [SMALL_STATE(8)] = 284,
  [SMALL_STATE(9)] = 349,
  [SMALL_STATE(10)] = 398,
  [SMALL_STATE(11)] = 463,
  [SMALL_STATE(12)] = 512,
  [SMALL_STATE(13)] = 577,
  [SMALL_STATE(14)] = 626,
  [SMALL_STATE(15)] = 691,
  [SMALL_STATE(16)] = 753,
  [SMALL_STATE(17)] = 781,
  [SMALL_STATE(18)] = 808,
  [SMALL_STATE(19)] = 835,
  [SMALL_STATE(20)] = 862,
  [SMALL_STATE(21)] = 888,
  [SMALL_STATE(22)] = 914,
  [SMALL_STATE(23)] = 940,
  [SMALL_STATE(24)] = 963,
  [SMALL_STATE(25)] = 996,
  [SMALL_STATE(26)] = 1015,
  [SMALL_STATE(27)] = 1036,
  [SMALL_STATE(28)] = 1069,
  [SMALL_STATE(29)] = 1089,
  [SMALL_STATE(30)] = 1107,
  [SMALL_STATE(31)] = 1127,
  [SMALL_STATE(32)] = 1147,
  [SMALL_STATE(33)] = 1167,
  [SMALL_STATE(34)] = 1187,
  [SMALL_STATE(35)] = 1205,
  [SMALL_STATE(36)] = 1223,
  [SMALL_STATE(37)] = 1241,
  [SMALL_STATE(38)] = 1259,
  [SMALL_STATE(39)] = 1277,
  [SMALL_STATE(40)] = 1295,
  [SMALL_STATE(41)] = 1313,
  [SMALL_STATE(42)] = 1331,
  [SMALL_STATE(43)] = 1349,
  [SMALL_STATE(44)] = 1369,
  [SMALL_STATE(45)] = 1399,
  [SMALL_STATE(46)] = 1417,
  [SMALL_STATE(47)] = 1435,
  [SMALL_STATE(48)] = 1463,
  [SMALL_STATE(49)] = 1481,
  [SMALL_STATE(50)] = 1499,
  [SMALL_STATE(51)] = 1517,
  [SMALL_STATE(52)] = 1535,
  [SMALL_STATE(53)] = 1553,
  [SMALL_STATE(54)] = 1581,
  [SMALL_STATE(55)] = 1599,
  [SMALL_STATE(56)] = 1617,
  [SMALL_STATE(57)] = 1637,
  [SMALL_STATE(58)] = 1657,
  [SMALL_STATE(59)] = 1677,
  [SMALL_STATE(60)] = 1697,
  [SMALL_STATE(61)] = 1717,
  [SMALL_STATE(62)] = 1737,
  [SMALL_STATE(63)] = 1757,
  [SMALL_STATE(64)] = 1777,
  [SMALL_STATE(65)] = 1797,
  [SMALL_STATE(66)] = 1817,
  [SMALL_STATE(67)] = 1837,
  [SMALL_STATE(68)] = 1867,
  [SMALL_STATE(69)] = 1887,
  [SMALL_STATE(70)] = 1907,
  [SMALL_STATE(71)] = 1927,
  [SMALL_STATE(72)] = 1947,
  [SMALL_STATE(73)] = 1967,
  [SMALL_STATE(74)] = 1987,
  [SMALL_STATE(75)] = 2005,
  [SMALL_STATE(76)] = 2025,
  [SMALL_STATE(77)] = 2045,
  [SMALL_STATE(78)] = 2065,
  [SMALL_STATE(79)] = 2085,
  [SMALL_STATE(80)] = 2105,
  [SMALL_STATE(81)] = 2125,
  [SMALL_STATE(82)] = 2145,
  [SMALL_STATE(83)] = 2163,
  [SMALL_STATE(84)] = 2183,
  [SMALL_STATE(85)] = 2203,
  [SMALL_STATE(86)] = 2230,
  [SMALL_STATE(87)] = 2247,
  [SMALL_STATE(88)] = 2274,
  [SMALL_STATE(89)] = 2301,
  [SMALL_STATE(90)] = 2318,
  [SMALL_STATE(91)] = 2335,
  [SMALL_STATE(92)] = 2352,
  [SMALL_STATE(93)] = 2369,
  [SMALL_STATE(94)] = 2386,
  [SMALL_STATE(95)] = 2403,
  [SMALL_STATE(96)] = 2420,
  [SMALL_STATE(97)] = 2437,
  [SMALL_STATE(98)] = 2464,
  [SMALL_STATE(99)] = 2481,
  [SMALL_STATE(100)] = 2498,
  [SMALL_STATE(101)] = 2515,
  [SMALL_STATE(102)] = 2542,
  [SMALL_STATE(103)] = 2569,
  [SMALL_STATE(104)] = 2596,
  [SMALL_STATE(105)] = 2613,
  [SMALL_STATE(106)] = 2630,
  [SMALL_STATE(107)] = 2647,
  [SMALL_STATE(108)] = 2664,
  [SMALL_STATE(109)] = 2681,
  [SMALL_STATE(110)] = 2705,
  [SMALL_STATE(111)] = 2731,
  [SMALL_STATE(112)] = 2757,
  [SMALL_STATE(113)] = 2783,
  [SMALL_STATE(114)] = 2809,
  [SMALL_STATE(115)] = 2835,
  [SMALL_STATE(116)] = 2861,
  [SMALL_STATE(117)] = 2887,
  [SMALL_STATE(118)] = 2911,
  [SMALL_STATE(119)] = 2937,
  [SMALL_STATE(120)] = 2963,
  [SMALL_STATE(121)] = 2986,
  [SMALL_STATE(122)] = 3011,
  [SMALL_STATE(123)] = 3036,
  [SMALL_STATE(124)] = 3059,
  [SMALL_STATE(125)] = 3082,
  [SMALL_STATE(126)] = 3107,
  [SMALL_STATE(127)] = 3130,
  [SMALL_STATE(128)] = 3148,
  [SMALL_STATE(129)] = 3166,
  [SMALL_STATE(130)] = 3185,
  [SMALL_STATE(131)] = 3206,
  [SMALL_STATE(132)] = 3225,
  [SMALL_STATE(133)] = 3244,
  [SMALL_STATE(134)] = 3263,
  [SMALL_STATE(135)] = 3282,
  [SMALL_STATE(136)] = 3301,
  [SMALL_STATE(137)] = 3320,
  [SMALL_STATE(138)] = 3339,
  [SMALL_STATE(139)] = 3358,
  [SMALL_STATE(140)] = 3377,
  [SMALL_STATE(141)] = 3396,
  [SMALL_STATE(142)] = 3415,
  [SMALL_STATE(143)] = 3434,
  [SMALL_STATE(144)] = 3453,
  [SMALL_STATE(145)] = 3466,
  [SMALL_STATE(146)] = 3485,
  [SMALL_STATE(147)] = 3504,
  [SMALL_STATE(148)] = 3523,
  [SMALL_STATE(149)] = 3540,
  [SMALL_STATE(150)] = 3559,
  [SMALL_STATE(151)] = 3578,
  [SMALL_STATE(152)] = 3599,
  [SMALL_STATE(153)] = 3618,
  [SMALL_STATE(154)] = 3637,
  [SMALL_STATE(155)] = 3656,
  [SMALL_STATE(156)] = 3675,
  [SMALL_STATE(157)] = 3694,
  [SMALL_STATE(158)] = 3715,
  [SMALL_STATE(159)] = 3734,
  [SMALL_STATE(160)] = 3753,
  [SMALL_STATE(161)] = 3772,
  [SMALL_STATE(162)] = 3793,
  [SMALL_STATE(163)] = 3812,
  [SMALL_STATE(164)] = 3831,
  [SMALL_STATE(165)] = 3852,
  [SMALL_STATE(166)] = 3871,
  [SMALL_STATE(167)] = 3888,
  [SMALL_STATE(168)] = 3907,
  [SMALL_STATE(169)] = 3926,
  [SMALL_STATE(170)] = 3947,
  [SMALL_STATE(171)] = 3966,
  [SMALL_STATE(172)] = 3987,
  [SMALL_STATE(173)] = 4006,
  [SMALL_STATE(174)] = 4027,
  [SMALL_STATE(175)] = 4039,
  [SMALL_STATE(176)] = 4051,
  [SMALL_STATE(177)] = 4063,
  [SMALL_STATE(178)] = 4079,
  [SMALL_STATE(179)] = 4091,
  [SMALL_STATE(180)] = 4103,
  [SMALL_STATE(181)] = 4115,
  [SMALL_STATE(182)] = 4133,
  [SMALL_STATE(183)] = 4149,
  [SMALL_STATE(184)] = 4161,
  [SMALL_STATE(185)] = 4177,
  [SMALL_STATE(186)] = 4189,
  [SMALL_STATE(187)] = 4201,
  [SMALL_STATE(188)] = 4213,
  [SMALL_STATE(189)] = 4225,
  [SMALL_STATE(190)] = 4241,
  [SMALL_STATE(191)] = 4253,
  [SMALL_STATE(192)] = 4265,
  [SMALL_STATE(193)] = 4277,
  [SMALL_STATE(194)] = 4289,
  [SMALL_STATE(195)] = 4301,
  [SMALL_STATE(196)] = 4317,
  [SMALL_STATE(197)] = 4329,
  [SMALL_STATE(198)] = 4341,
  [SMALL_STATE(199)] = 4353,
  [SMALL_STATE(200)] = 4365,
  [SMALL_STATE(201)] = 4377,
  [SMALL_STATE(202)] = 4389,
  [SMALL_STATE(203)] = 4401,
  [SMALL_STATE(204)] = 4413,
  [SMALL_STATE(205)] = 4425,
  [SMALL_STATE(206)] = 4437,
  [SMALL_STATE(207)] = 4449,
  [SMALL_STATE(208)] = 4461,
  [SMALL_STATE(209)] = 4477,
  [SMALL_STATE(210)] = 4489,
  [SMALL_STATE(211)] = 4500,
  [SMALL_STATE(212)] = 4517,
  [SMALL_STATE(213)] = 4528,
  [SMALL_STATE(214)] = 4545,
  [SMALL_STATE(215)] = 4562,
  [SMALL_STATE(216)] = 4572,
  [SMALL_STATE(217)] = 4584,
  [SMALL_STATE(218)] = 4598,
  [SMALL_STATE(219)] = 4612,
  [SMALL_STATE(220)] = 4624,
  [SMALL_STATE(221)] = 4638,
  [SMALL_STATE(222)] = 4650,
  [SMALL_STATE(223)] = 4664,
  [SMALL_STATE(224)] = 4674,
  [SMALL_STATE(225)] = 4686,
  [SMALL_STATE(226)] = 4698,
  [SMALL_STATE(227)] = 4710,
  [SMALL_STATE(228)] = 4722,
  [SMALL_STATE(229)] = 4736,
  [SMALL_STATE(230)] = 4748,
  [SMALL_STATE(231)] = 4760,
  [SMALL_STATE(232)] = 4774,
  [SMALL_STATE(233)] = 4784,
  [SMALL_STATE(234)] = 4794,
  [SMALL_STATE(235)] = 4804,
  [SMALL_STATE(236)] = 4818,
  [SMALL_STATE(237)] = 4830,
  [SMALL_STATE(238)] = 4844,
  [SMALL_STATE(239)] = 4856,
  [SMALL_STATE(240)] = 4868,
  [SMALL_STATE(241)] = 4882,
  [SMALL_STATE(242)] = 4894,
  [SMALL_STATE(243)] = 4904,
  [SMALL_STATE(244)] = 4916,
  [SMALL_STATE(245)] = 4928,
  [SMALL_STATE(246)] = 4942,
  [SMALL_STATE(247)] = 4952,
  [SMALL_STATE(248)] = 4964,
  [SMALL_STATE(249)] = 4976,
  [SMALL_STATE(250)] = 4988,
  [SMALL_STATE(251)] = 5000,
  [SMALL_STATE(252)] = 5010,
  [SMALL_STATE(253)] = 5024,
  [SMALL_STATE(254)] = 5038,
  [SMALL_STATE(255)] = 5050,
  [SMALL_STATE(256)] = 5060,
  [SMALL_STATE(257)] = 5070,
  [SMALL_STATE(258)] = 5082,
  [SMALL_STATE(259)] = 5092,
  [SMALL_STATE(260)] = 5104,
  [SMALL_STATE(261)] = 5116,
  [SMALL_STATE(262)] = 5128,
  [SMALL_STATE(263)] = 5140,
  [SMALL_STATE(264)] = 5150,
  [SMALL_STATE(265)] = 5162,
  [SMALL_STATE(266)] = 5174,
  [SMALL_STATE(267)] = 5188,
  [SMALL_STATE(268)] = 5202,
  [SMALL_STATE(269)] = 5214,
  [SMALL_STATE(270)] = 5226,
  [SMALL_STATE(271)] = 5236,
  [SMALL_STATE(272)] = 5248,
  [SMALL_STATE(273)] = 5258,
  [SMALL_STATE(274)] = 5269,
  [SMALL_STATE(275)] = 5278,
  [SMALL_STATE(276)] = 5289,
  [SMALL_STATE(277)] = 5300,
  [SMALL_STATE(278)] = 5311,
  [SMALL_STATE(279)] = 5322,
  [SMALL_STATE(280)] = 5333,
  [SMALL_STATE(281)] = 5344,
  [SMALL_STATE(282)] = 5355,
  [SMALL_STATE(283)] = 5366,
  [SMALL_STATE(284)] = 5377,
  [SMALL_STATE(285)] = 5388,
  [SMALL_STATE(286)] = 5399,
  [SMALL_STATE(287)] = 5410,
  [SMALL_STATE(288)] = 5421,
  [SMALL_STATE(289)] = 5432,
  [SMALL_STATE(290)] = 5443,
  [SMALL_STATE(291)] = 5454,
  [SMALL_STATE(292)] = 5465,
  [SMALL_STATE(293)] = 5476,
  [SMALL_STATE(294)] = 5487,
  [SMALL_STATE(295)] = 5498,
  [SMALL_STATE(296)] = 5509,
  [SMALL_STATE(297)] = 5520,
  [SMALL_STATE(298)] = 5531,
  [SMALL_STATE(299)] = 5542,
  [SMALL_STATE(300)] = 5553,
  [SMALL_STATE(301)] = 5564,
  [SMALL_STATE(302)] = 5575,
  [SMALL_STATE(303)] = 5586,
  [SMALL_STATE(304)] = 5597,
  [SMALL_STATE(305)] = 5608,
  [SMALL_STATE(306)] = 5619,
  [SMALL_STATE(307)] = 5630,
  [SMALL_STATE(308)] = 5641,
  [SMALL_STATE(309)] = 5652,
  [SMALL_STATE(310)] = 5663,
  [SMALL_STATE(311)] = 5674,
  [SMALL_STATE(312)] = 5685,
  [SMALL_STATE(313)] = 5696,
  [SMALL_STATE(314)] = 5704,
  [SMALL_STATE(315)] = 5712,
  [SMALL_STATE(316)] = 5720,
  [SMALL_STATE(317)] = 5728,
  [SMALL_STATE(318)] = 5736,
  [SMALL_STATE(319)] = 5744,
  [SMALL_STATE(320)] = 5752,
  [SMALL_STATE(321)] = 5760,
  [SMALL_STATE(322)] = 5768,
  [SMALL_STATE(323)] = 5776,
  [SMALL_STATE(324)] = 5784,
  [SMALL_STATE(325)] = 5792,
  [SMALL_STATE(326)] = 5800,
  [SMALL_STATE(327)] = 5808,
  [SMALL_STATE(328)] = 5816,
  [SMALL_STATE(329)] = 5824,
  [SMALL_STATE(330)] = 5832,
  [SMALL_STATE(331)] = 5840,
  [SMALL_STATE(332)] = 5848,
  [SMALL_STATE(333)] = 5856,
  [SMALL_STATE(334)] = 5864,
  [SMALL_STATE(335)] = 5872,
  [SMALL_STATE(336)] = 5880,
  [SMALL_STATE(337)] = 5888,
  [SMALL_STATE(338)] = 5896,
  [SMALL_STATE(339)] = 5904,
  [SMALL_STATE(340)] = 5912,
  [SMALL_STATE(341)] = 5920,
  [SMALL_STATE(342)] = 5928,
  [SMALL_STATE(343)] = 5936,
  [SMALL_STATE(344)] = 5944,
  [SMALL_STATE(345)] = 5952,
  [SMALL_STATE(346)] = 5960,
  [SMALL_STATE(347)] = 5968,
  [SMALL_STATE(348)] = 5976,
  [SMALL_STATE(349)] = 5984,
  [SMALL_STATE(350)] = 5992,
  [SMALL_STATE(351)] = 6000,
  [SMALL_STATE(352)] = 6008,
  [SMALL_STATE(353)] = 6016,
  [SMALL_STATE(354)] = 6024,
  [SMALL_STATE(355)] = 6032,
  [SMALL_STATE(356)] = 6040,
  [SMALL_STATE(357)] = 6048,
  [SMALL_STATE(358)] = 6056,
  [SMALL_STATE(359)] = 6064,
  [SMALL_STATE(360)] = 6072,
  [SMALL_STATE(361)] = 6080,
  [SMALL_STATE(362)] = 6088,
  [SMALL_STATE(363)] = 6096,
  [SMALL_STATE(364)] = 6104,
  [SMALL_STATE(365)] = 6112,
  [SMALL_STATE(366)] = 6120,
  [SMALL_STATE(367)] = 6128,
  [SMALL_STATE(368)] = 6136,
  [SMALL_STATE(369)] = 6144,
  [SMALL_STATE(370)] = 6152,
  [SMALL_STATE(371)] = 6160,
  [SMALL_STATE(372)] = 6168,
  [SMALL_STATE(373)] = 6176,
  [SMALL_STATE(374)] = 6184,
  [SMALL_STATE(375)] = 6192,
  [SMALL_STATE(376)] = 6200,
  [SMALL_STATE(377)] = 6208,
  [SMALL_STATE(378)] = 6216,
  [SMALL_STATE(379)] = 6224,
  [SMALL_STATE(380)] = 6232,
  [SMALL_STATE(381)] = 6240,
  [SMALL_STATE(382)] = 6248,
  [SMALL_STATE(383)] = 6256,
  [SMALL_STATE(384)] = 6264,
  [SMALL_STATE(385)] = 6272,
  [SMALL_STATE(386)] = 6280,
  [SMALL_STATE(387)] = 6288,
  [SMALL_STATE(388)] = 6296,
  [SMALL_STATE(389)] = 6304,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_body, 1),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(229),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(384),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(353),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(385),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(388),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(358),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(357),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(291),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(313),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(343),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 29), SHIFT_REPEAT(245),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 29), SHIFT_REPEAT(240),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 29), SHIFT_REPEAT(237),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 29), SHIFT_REPEAT(231),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 29), SHIFT_REPEAT(228),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 29), SHIFT_REPEAT(222),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 29), SHIFT_REPEAT(218),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 29), SHIFT_REPEAT(364),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 29), SHIFT_REPEAT(344),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 29),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 7),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 34),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 34),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 22),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 22),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_instance, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 12),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 12),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 9, .production_id = 28),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6, .production_id = 20),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 8, .production_id = 19),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 8, .production_id = 18),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 10),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 7, .production_id = 9),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 11),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 11),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 8),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_inter, 7),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 4, .production_id = 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 4, .production_id = 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 17),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 17),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 37),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 37),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 2, .production_id = 21),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 2, .production_id = 21),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 23),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 23),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 24),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 24),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 25),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 25),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 11, .production_id = 47),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 11, .production_id = 47),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 26),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 26),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 27),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 27),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 10, .production_id = 46),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 10, .production_id = 46),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 30),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 30),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 9, .production_id = 45),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 9, .production_id = 45),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 31),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 31),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 8, .production_id = 44),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 8, .production_id = 44),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 4, .production_id = 33),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 4, .production_id = 33),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 35),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 35),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 7, .production_id = 43),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 7, .production_id = 43),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 41),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 7, .production_id = 41),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 6, .production_id = 42),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 6, .production_id = 42),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 36),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 36),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 31),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 31),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 41),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 41),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 31),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 5, .production_id = 31),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 39),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 39),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 38),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 38),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(131),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(170),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(166),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(320),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(319),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(317),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(144),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(142),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(177),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(372),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(373),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(336),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(148),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 31),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 31),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation2, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 31),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 30),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(267),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 31),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(184),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 41),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 41),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 30),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 41),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(360),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 31),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 41),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 31),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 41),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 41),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(320),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 30),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 30),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 31),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 41),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 30),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 31),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 41),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 30),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 31),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 31),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 31),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 31),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(181),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 41),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 6),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2), SHIFT_REPEAT(330),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 40),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 5),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 32),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 41),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 31),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 41),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 31),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 31),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 30),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [915] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 4),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
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
