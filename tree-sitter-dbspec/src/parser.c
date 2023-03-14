#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 430
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 52

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
  aux_sym_execute_using_token1 = 12,
  aux_sym_script_result_token1 = 13,
  aux_sym_connection_token1 = 14,
  anon_sym_with = 15,
  aux_sym_execute_sql_token1 = 16,
  aux_sym_query_token1 = 17,
  anon_sym_Output = 18,
  anon_sym_DOT = 19,
  anon_sym_to = 20,
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
  anon_sym_If = 46,
  anon_sym_Else = 47,
  anon_sym_EQ_EQ = 48,
  anon_sym_BANG_EQ = 49,
  anon_sym_LT = 50,
  anon_sym_GT = 51,
  anon_sym_LT_EQ = 52,
  anon_sym_GT_EQ = 53,
  anon_sym_stripped = 54,
  anon_sym_size = 55,
  anon_sym_as_integer = 56,
  anon_sym_BSLASH = 57,
  aux_sym_escape_sequence_token1 = 58,
  aux_sym_escape_sequence_token2 = 59,
  aux_sym_escape_sequence_token3 = 60,
  aux_sym_escape_sequence_token4 = 61,
  aux_sym_escape_sequence_token5 = 62,
  aux_sym_escape_sequence_token6 = 63,
  sym_integer = 64,
  sym_short_description = 65,
  aux_sym__short_descr_token1 = 66,
  sym__newline = 67,
  sym__indent = 68,
  sym__dedent = 69,
  sym__inter_start = 70,
  sym__inter_start2 = 71,
  sym__inter_end = 72,
  sym__raw = 73,
  sym__string_start = 74,
  sym__string_content = 75,
  sym__string_end = 76,
  sym__comment = 77,
  sym__end_of_file = 78,
  sym__skip = 79,
  sym__set_inter = 80,
  sym_source_file = 81,
  sym_parameters = 82,
  sym_parameter = 83,
  sym__statement = 84,
  sym_nop = 85,
  sym_log = 86,
  sym_assert = 87,
  sym_set_inter = 88,
  sym_set = 89,
  sym__expression = 90,
  sym_execute_using = 91,
  sym_script_result = 92,
  sym_connection = 93,
  sym_execute_sql = 94,
  sym_query = 95,
  sym_siard_output = 96,
  sym_siard_metadata = 97,
  sym__siard_dbname = 98,
  sym__siard_description = 99,
  sym__siard_archiver = 100,
  sym__siard_archiverContact = 101,
  sym__siard_dataOwner = 102,
  sym__siard_dataOriginTimespan = 103,
  sym__siard_lobFolder = 104,
  sym_siard_schema = 105,
  sym_siard_type = 106,
  sym_siard_table = 107,
  sym_siard_column = 108,
  sym_siard_field = 109,
  sym_siard_key = 110,
  sym_siard_check = 111,
  sym_siard_view = 112,
  sym_command_declaration = 113,
  sym_for_loop = 114,
  sym_for_variables = 115,
  sym_conditional = 116,
  sym_statement_block = 117,
  sym__boolean_expression = 118,
  sym_comparison = 119,
  sym_comparison_operator = 120,
  sym__basic_expression = 121,
  sym_variable_instance = 122,
  sym_dot_expression = 123,
  sym_dot_operator = 124,
  sym_string = 125,
  sym_string_content = 126,
  sym_escape_sequence = 127,
  sym__short_descr = 128,
  sym__nl = 129,
  sym__ni = 130,
  sym__ded = 131,
  sym_interpolation = 132,
  sym_interpolation2 = 133,
  sym_key_value_pairs = 134,
  sym_key_value_pair = 135,
  sym_raw = 136,
  sym_raw_content = 137,
  aux_sym_source_file_repeat1 = 138,
  aux_sym_parameters_repeat1 = 139,
  aux_sym_siard_metadata_repeat1 = 140,
  aux_sym_siard_schema_repeat1 = 141,
  aux_sym_siard_table_repeat1 = 142,
  aux_sym_siard_column_repeat1 = 143,
  aux_sym_siard_view_repeat1 = 144,
  aux_sym_for_variables_repeat1 = 145,
  aux_sym_string_repeat1 = 146,
  aux_sym_string_content_repeat1 = 147,
  aux_sym_key_value_pairs_repeat1 = 148,
  aux_sym_raw_repeat1 = 149,
  aux_sym_raw_content_repeat1 = 150,
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
  [aux_sym_execute_using_token1] = "execute_using_token1",
  [aux_sym_script_result_token1] = "script_result_token1",
  [aux_sym_connection_token1] = "connection_token1",
  [anon_sym_with] = "with",
  [aux_sym_execute_sql_token1] = "execute_sql_token1",
  [aux_sym_query_token1] = "query_token1",
  [anon_sym_Output] = "Output",
  [anon_sym_DOT] = ".",
  [anon_sym_to] = "to",
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
  [anon_sym_If] = "If",
  [anon_sym_Else] = "Else",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_stripped] = "stripped",
  [anon_sym_size] = "size",
  [anon_sym_as_integer] = "as_integer",
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
  [sym_script_result] = "script_result",
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
  [sym_conditional] = "conditional",
  [sym_statement_block] = "statement_block",
  [sym__boolean_expression] = "_boolean_expression",
  [sym_comparison] = "comparison",
  [sym_comparison_operator] = "comparison_operator",
  [sym__basic_expression] = "_basic_expression",
  [sym_variable_instance] = "variable_instance",
  [sym_dot_expression] = "dot_expression",
  [sym_dot_operator] = "dot_operator",
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
  [aux_sym_execute_using_token1] = aux_sym_execute_using_token1,
  [aux_sym_script_result_token1] = aux_sym_script_result_token1,
  [aux_sym_connection_token1] = aux_sym_connection_token1,
  [anon_sym_with] = anon_sym_with,
  [aux_sym_execute_sql_token1] = aux_sym_execute_sql_token1,
  [aux_sym_query_token1] = aux_sym_query_token1,
  [anon_sym_Output] = anon_sym_Output,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_to] = anon_sym_to,
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
  [anon_sym_If] = anon_sym_If,
  [anon_sym_Else] = anon_sym_Else,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_stripped] = anon_sym_stripped,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_as_integer] = anon_sym_as_integer,
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
  [sym_script_result] = sym_script_result,
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
  [sym_conditional] = sym_conditional,
  [sym_statement_block] = sym_statement_block,
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_comparison] = sym_comparison,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym__basic_expression] = sym__basic_expression,
  [sym_variable_instance] = sym_variable_instance,
  [sym_dot_expression] = sym_dot_expression,
  [sym_dot_operator] = sym_dot_operator,
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
  [aux_sym_execute_using_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_result_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_connection_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_execute_sql_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_token1] = {
    .visible = false,
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
  [anon_sym_to] = {
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
  [anon_sym_If] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Else] = {
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
  [anon_sym_stripped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as_integer] = {
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
  [sym_script_result] = {
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
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
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
  [sym_dot_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_operator] = {
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
  field_condition = 4,
  field_connection = 5,
  field_dataOriginTimespan = 6,
  field_dataOwner = 7,
  field_dbname = 8,
  field_description = 9,
  field_else = 10,
  field_file = 11,
  field_interpreter = 12,
  field_key = 13,
  field_left = 14,
  field_lobFolder = 15,
  field_name = 16,
  field_operator = 17,
  field_parameters = 18,
  field_properties = 19,
  field_result_set = 20,
  field_right = 21,
  field_script = 22,
  field_sql = 23,
  field_then = 24,
  field_title = 25,
  field_url = 26,
  field_value = 27,
  field_variables = 28,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_archiver] = "archiver",
  [field_archiverContact] = "archiverContact",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_connection] = "connection",
  [field_dataOriginTimespan] = "dataOriginTimespan",
  [field_dataOwner] = "dataOwner",
  [field_dbname] = "dbname",
  [field_description] = "description",
  [field_else] = "else",
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
  [field_then] = "then",
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
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 2},
  [8] = {.index = 15, .length = 1},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 3},
  [14] = {.index = 27, .length = 2},
  [15] = {.index = 29, .length = 1},
  [16] = {.index = 30, .length = 1},
  [17] = {.index = 31, .length = 1},
  [18] = {.index = 32, .length = 1},
  [19] = {.index = 33, .length = 1},
  [20] = {.index = 34, .length = 1},
  [21] = {.index = 35, .length = 1},
  [22] = {.index = 36, .length = 2},
  [23] = {.index = 38, .length = 3},
  [24] = {.index = 41, .length = 1},
  [25] = {.index = 42, .length = 1},
  [26] = {.index = 43, .length = 1},
  [27] = {.index = 44, .length = 1},
  [28] = {.index = 45, .length = 1},
  [29] = {.index = 46, .length = 1},
  [30] = {.index = 47, .length = 1},
  [31] = {.index = 48, .length = 9},
  [32] = {.index = 57, .length = 14},
  [33] = {.index = 71, .length = 2},
  [34] = {.index = 73, .length = 2},
  [35] = {.index = 75, .length = 1},
  [36] = {.index = 76, .length = 1},
  [37] = {.index = 77, .length = 1},
  [38] = {.index = 78, .length = 1},
  [39] = {.index = 79, .length = 1},
  [40] = {.index = 80, .length = 1},
  [41] = {.index = 81, .length = 1},
  [42] = {.index = 82, .length = 1},
  [43] = {.index = 83, .length = 3},
  [44] = {.index = 86, .length = 2},
  [45] = {.index = 88, .length = 2},
  [46] = {.index = 90, .length = 1},
  [47] = {.index = 91, .length = 2},
  [48] = {.index = 93, .length = 2},
  [49] = {.index = 95, .length = 3},
  [50] = {.index = 98, .length = 2},
  [51] = {.index = 100, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_value, 2},
  [2] =
    {field_interpreter, 1},
    {field_script, 2},
  [4] =
    {field_connection, 1},
    {field_sql, 2},
  [6] =
    {field_left, 0},
    {field_right, 2},
  [8] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [11] =
    {field_name, 1},
    {field_value, 3},
  [13] =
    {field_description, 1, .inherited = true},
    {field_name, 0},
  [15] =
    {field_name, 0},
  [16] =
    {field_url, 1},
  [17] =
    {field_condition, 1},
    {field_then, 4},
  [19] =
    {field_description, 0},
    {field_description, 1},
    {field_description, 2},
  [22] =
    {field_properties, 3},
    {field_url, 1},
  [24] =
    {field_connection, 1},
    {field_file, 5},
    {field_name, 3},
  [27] =
    {field_properties, 4},
    {field_url, 1},
  [29] =
    {field_dbname, 0, .inherited = true},
  [30] =
    {field_description, 0, .inherited = true},
  [31] =
    {field_archiver, 0, .inherited = true},
  [32] =
    {field_archiverContact, 0, .inherited = true},
  [33] =
    {field_dataOwner, 0, .inherited = true},
  [34] =
    {field_dataOriginTimespan, 0, .inherited = true},
  [35] =
    {field_lobFolder, 0, .inherited = true},
  [36] =
    {field_connection, 2},
    {field_name, 4},
  [38] =
    {field_body, 6},
    {field_result_set, 3},
    {field_variables, 1},
  [41] =
    {field_dbname, 1},
  [42] =
    {field_description, 1},
  [43] =
    {field_archiver, 1},
  [44] =
    {field_archiverContact, 1},
  [45] =
    {field_dataOwner, 1},
  [46] =
    {field_dataOriginTimespan, 1},
  [47] =
    {field_lobFolder, 1},
  [48] =
    {field_archiver, 7, .inherited = true},
    {field_archiverContact, 7, .inherited = true},
    {field_connection, 2},
    {field_dataOriginTimespan, 7, .inherited = true},
    {field_dataOwner, 7, .inherited = true},
    {field_dbname, 7, .inherited = true},
    {field_description, 7, .inherited = true},
    {field_lobFolder, 7, .inherited = true},
    {field_name, 4},
  [57] =
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
  [71] =
    {field_key, 0},
    {field_value, 1},
  [73] =
    {field_description, 2, .inherited = true},
    {field_name, 1},
  [75] =
    {field_name, 1},
  [76] =
    {field_dbname, 2},
  [77] =
    {field_description, 2},
  [78] =
    {field_archiver, 2},
  [79] =
    {field_archiverContact, 2},
  [80] =
    {field_dataOwner, 2},
  [81] =
    {field_dataOriginTimespan, 2},
  [82] =
    {field_lobFolder, 2},
  [83] =
    {field_condition, 1},
    {field_else, 9},
    {field_then, 4},
  [86] =
    {field_key, 0},
    {field_value, 2},
  [88] =
    {field_description, 4, .inherited = true},
    {field_name, 1},
  [90] =
    {field_body, 4},
  [91] =
    {field_body, 5},
    {field_parameters, 3},
  [93] =
    {field_body, 6},
    {field_title, 4},
  [95] =
    {field_body, 7},
    {field_parameters, 5},
    {field_title, 4},
  [98] =
    {field_body, 8},
    {field_title, 5},
  [100] =
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
  [8] = 6,
  [9] = 7,
  [10] = 5,
  [11] = 4,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
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
  [29] = 28,
  [30] = 2,
  [31] = 20,
  [32] = 21,
  [33] = 33,
  [34] = 22,
  [35] = 24,
  [36] = 36,
  [37] = 23,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 36,
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
  [57] = 57,
  [58] = 33,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 39,
  [64] = 42,
  [65] = 65,
  [66] = 59,
  [67] = 62,
  [68] = 49,
  [69] = 50,
  [70] = 55,
  [71] = 47,
  [72] = 43,
  [73] = 46,
  [74] = 48,
  [75] = 75,
  [76] = 45,
  [77] = 51,
  [78] = 53,
  [79] = 61,
  [80] = 56,
  [81] = 65,
  [82] = 60,
  [83] = 54,
  [84] = 52,
  [85] = 57,
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
  [115] = 89,
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
  [129] = 127,
  [130] = 130,
  [131] = 131,
  [132] = 127,
  [133] = 127,
  [134] = 130,
  [135] = 135,
  [136] = 135,
  [137] = 137,
  [138] = 130,
  [139] = 130,
  [140] = 140,
  [141] = 131,
  [142] = 142,
  [143] = 143,
  [144] = 143,
  [145] = 145,
  [146] = 145,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 149,
  [153] = 153,
  [154] = 151,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 158,
  [161] = 161,
  [162] = 150,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 164,
  [168] = 166,
  [169] = 169,
  [170] = 169,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 174,
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
  [210] = 205,
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
  [236] = 236,
  [237] = 237,
  [238] = 206,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 239,
  [244] = 244,
  [245] = 244,
  [246] = 246,
  [247] = 20,
  [248] = 244,
  [249] = 24,
  [250] = 234,
  [251] = 22,
  [252] = 21,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 23,
  [257] = 244,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 260,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 266,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 277,
  [279] = 279,
  [280] = 280,
  [281] = 263,
  [282] = 282,
  [283] = 274,
  [284] = 284,
  [285] = 285,
  [286] = 269,
  [287] = 267,
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
  [299] = 280,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 265,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 23,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 24,
  [322] = 22,
  [323] = 21,
  [324] = 324,
  [325] = 325,
  [326] = 313,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 324,
  [336] = 336,
  [337] = 20,
  [338] = 338,
  [339] = 314,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 320,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 318,
  [351] = 351,
  [352] = 352,
  [353] = 329,
  [354] = 340,
  [355] = 317,
  [356] = 331,
  [357] = 357,
  [358] = 358,
  [359] = 333,
  [360] = 345,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 364,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 381,
  [398] = 365,
  [399] = 399,
  [400] = 363,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 396,
  [409] = 409,
  [410] = 407,
  [411] = 406,
  [412] = 367,
  [413] = 375,
  [414] = 391,
  [415] = 390,
  [416] = 409,
  [417] = 401,
  [418] = 394,
  [419] = 404,
  [420] = 368,
  [421] = 373,
  [422] = 382,
  [423] = 389,
  [424] = 377,
  [425] = 362,
  [426] = 371,
  [427] = 369,
  [428] = 376,
  [429] = 403,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'd'
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
      if (eof) ADVANCE(41);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(98);
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'U') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(29);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(63);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_execute_using_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_script_result_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_connection_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_execute_sql_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_query_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      if (lookahead == 'e') ADVANCE(92);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(3);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(4);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(5);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(97);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(94);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(80);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(91);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(93);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(89);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(77);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(83);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(87);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(88);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(96);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(85);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(86);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(95);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_short_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__short_descr_token1);
      if (lookahead == ' ') ADVANCE(115);
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
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_If);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'z') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(83);
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
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Log);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 81:
      if (lookahead == 'F') ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Body);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_Else);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(126);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 124:
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Assert);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_dbname);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_Command);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_Metadata);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(173);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_stripped);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_as_integer);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(187);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_Interpolation);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_dataOriginTimespan);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 40, .external_lex_state = 2},
  [2] = {.lex_state = 40, .external_lex_state = 3},
  [3] = {.lex_state = 40, .external_lex_state = 3},
  [4] = {.lex_state = 40, .external_lex_state = 3},
  [5] = {.lex_state = 40, .external_lex_state = 2},
  [6] = {.lex_state = 40, .external_lex_state = 2},
  [7] = {.lex_state = 40, .external_lex_state = 2},
  [8] = {.lex_state = 40, .external_lex_state = 2},
  [9] = {.lex_state = 40, .external_lex_state = 2},
  [10] = {.lex_state = 40, .external_lex_state = 2},
  [11] = {.lex_state = 40, .external_lex_state = 2},
  [12] = {.lex_state = 40, .external_lex_state = 2},
  [13] = {.lex_state = 40, .external_lex_state = 2},
  [14] = {.lex_state = 40, .external_lex_state = 2},
  [15] = {.lex_state = 6, .external_lex_state = 3},
  [16] = {.lex_state = 6, .external_lex_state = 3},
  [17] = {.lex_state = 6, .external_lex_state = 3},
  [18] = {.lex_state = 6, .external_lex_state = 3},
  [19] = {.lex_state = 6, .external_lex_state = 3},
  [20] = {.lex_state = 40, .external_lex_state = 2},
  [21] = {.lex_state = 40, .external_lex_state = 2},
  [22] = {.lex_state = 40, .external_lex_state = 2},
  [23] = {.lex_state = 40, .external_lex_state = 2},
  [24] = {.lex_state = 40, .external_lex_state = 2},
  [25] = {.lex_state = 6, .external_lex_state = 3},
  [26] = {.lex_state = 6, .external_lex_state = 3},
  [27] = {.lex_state = 6, .external_lex_state = 3},
  [28] = {.lex_state = 6, .external_lex_state = 3},
  [29] = {.lex_state = 40, .external_lex_state = 2},
  [30] = {.lex_state = 40, .external_lex_state = 2},
  [31] = {.lex_state = 40, .external_lex_state = 3},
  [32] = {.lex_state = 40, .external_lex_state = 3},
  [33] = {.lex_state = 40, .external_lex_state = 3},
  [34] = {.lex_state = 40, .external_lex_state = 3},
  [35] = {.lex_state = 40, .external_lex_state = 3},
  [36] = {.lex_state = 6, .external_lex_state = 4},
  [37] = {.lex_state = 40, .external_lex_state = 3},
  [38] = {.lex_state = 40, .external_lex_state = 3},
  [39] = {.lex_state = 40, .external_lex_state = 3},
  [40] = {.lex_state = 40, .external_lex_state = 2},
  [41] = {.lex_state = 6, .external_lex_state = 4},
  [42] = {.lex_state = 40, .external_lex_state = 3},
  [43] = {.lex_state = 40, .external_lex_state = 3},
  [44] = {.lex_state = 40, .external_lex_state = 2},
  [45] = {.lex_state = 40, .external_lex_state = 3},
  [46] = {.lex_state = 40, .external_lex_state = 3},
  [47] = {.lex_state = 40, .external_lex_state = 3},
  [48] = {.lex_state = 40, .external_lex_state = 3},
  [49] = {.lex_state = 40, .external_lex_state = 3},
  [50] = {.lex_state = 40, .external_lex_state = 3},
  [51] = {.lex_state = 40, .external_lex_state = 3},
  [52] = {.lex_state = 40, .external_lex_state = 3},
  [53] = {.lex_state = 40, .external_lex_state = 3},
  [54] = {.lex_state = 40, .external_lex_state = 3},
  [55] = {.lex_state = 40, .external_lex_state = 3},
  [56] = {.lex_state = 40, .external_lex_state = 3},
  [57] = {.lex_state = 40, .external_lex_state = 3},
  [58] = {.lex_state = 40, .external_lex_state = 2},
  [59] = {.lex_state = 40, .external_lex_state = 3},
  [60] = {.lex_state = 40, .external_lex_state = 3},
  [61] = {.lex_state = 40, .external_lex_state = 3},
  [62] = {.lex_state = 40, .external_lex_state = 3},
  [63] = {.lex_state = 40, .external_lex_state = 2},
  [64] = {.lex_state = 40, .external_lex_state = 2},
  [65] = {.lex_state = 40, .external_lex_state = 3},
  [66] = {.lex_state = 40, .external_lex_state = 2},
  [67] = {.lex_state = 40, .external_lex_state = 2},
  [68] = {.lex_state = 40, .external_lex_state = 2},
  [69] = {.lex_state = 40, .external_lex_state = 2},
  [70] = {.lex_state = 40, .external_lex_state = 2},
  [71] = {.lex_state = 40, .external_lex_state = 2},
  [72] = {.lex_state = 40, .external_lex_state = 2},
  [73] = {.lex_state = 40, .external_lex_state = 2},
  [74] = {.lex_state = 40, .external_lex_state = 2},
  [75] = {.lex_state = 6, .external_lex_state = 3},
  [76] = {.lex_state = 40, .external_lex_state = 2},
  [77] = {.lex_state = 40, .external_lex_state = 2},
  [78] = {.lex_state = 40, .external_lex_state = 2},
  [79] = {.lex_state = 40, .external_lex_state = 2},
  [80] = {.lex_state = 40, .external_lex_state = 2},
  [81] = {.lex_state = 40, .external_lex_state = 2},
  [82] = {.lex_state = 40, .external_lex_state = 2},
  [83] = {.lex_state = 40, .external_lex_state = 2},
  [84] = {.lex_state = 40, .external_lex_state = 2},
  [85] = {.lex_state = 40, .external_lex_state = 2},
  [86] = {.lex_state = 6, .external_lex_state = 3},
  [87] = {.lex_state = 6, .external_lex_state = 3},
  [88] = {.lex_state = 6, .external_lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 5},
  [90] = {.lex_state = 6, .external_lex_state = 3},
  [91] = {.lex_state = 6, .external_lex_state = 3},
  [92] = {.lex_state = 6, .external_lex_state = 3},
  [93] = {.lex_state = 6, .external_lex_state = 3},
  [94] = {.lex_state = 6, .external_lex_state = 3},
  [95] = {.lex_state = 6, .external_lex_state = 3},
  [96] = {.lex_state = 6, .external_lex_state = 3},
  [97] = {.lex_state = 6, .external_lex_state = 3},
  [98] = {.lex_state = 6, .external_lex_state = 3},
  [99] = {.lex_state = 6, .external_lex_state = 3},
  [100] = {.lex_state = 6, .external_lex_state = 3},
  [101] = {.lex_state = 6, .external_lex_state = 3},
  [102] = {.lex_state = 6, .external_lex_state = 3},
  [103] = {.lex_state = 6, .external_lex_state = 3},
  [104] = {.lex_state = 6, .external_lex_state = 3},
  [105] = {.lex_state = 6, .external_lex_state = 3},
  [106] = {.lex_state = 6, .external_lex_state = 3},
  [107] = {.lex_state = 6, .external_lex_state = 3},
  [108] = {.lex_state = 6, .external_lex_state = 3},
  [109] = {.lex_state = 6, .external_lex_state = 3},
  [110] = {.lex_state = 6, .external_lex_state = 3},
  [111] = {.lex_state = 6, .external_lex_state = 3},
  [112] = {.lex_state = 6, .external_lex_state = 3},
  [113] = {.lex_state = 6, .external_lex_state = 3},
  [114] = {.lex_state = 6, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 5},
  [116] = {.lex_state = 6, .external_lex_state = 3},
  [117] = {.lex_state = 6, .external_lex_state = 3},
  [118] = {.lex_state = 6, .external_lex_state = 3},
  [119] = {.lex_state = 6, .external_lex_state = 3},
  [120] = {.lex_state = 6, .external_lex_state = 3},
  [121] = {.lex_state = 6, .external_lex_state = 3},
  [122] = {.lex_state = 0, .external_lex_state = 5},
  [123] = {.lex_state = 6, .external_lex_state = 3},
  [124] = {.lex_state = 6, .external_lex_state = 3},
  [125] = {.lex_state = 6, .external_lex_state = 3},
  [126] = {.lex_state = 6, .external_lex_state = 3},
  [127] = {.lex_state = 40, .external_lex_state = 6},
  [128] = {.lex_state = 6, .external_lex_state = 3},
  [129] = {.lex_state = 40, .external_lex_state = 6},
  [130] = {.lex_state = 40, .external_lex_state = 6},
  [131] = {.lex_state = 6, .external_lex_state = 4},
  [132] = {.lex_state = 40, .external_lex_state = 6},
  [133] = {.lex_state = 40, .external_lex_state = 6},
  [134] = {.lex_state = 40, .external_lex_state = 6},
  [135] = {.lex_state = 6, .external_lex_state = 4},
  [136] = {.lex_state = 6, .external_lex_state = 4},
  [137] = {.lex_state = 40, .external_lex_state = 6},
  [138] = {.lex_state = 40, .external_lex_state = 6},
  [139] = {.lex_state = 40, .external_lex_state = 6},
  [140] = {.lex_state = 6, .external_lex_state = 3},
  [141] = {.lex_state = 6, .external_lex_state = 4},
  [142] = {.lex_state = 6, .external_lex_state = 3},
  [143] = {.lex_state = 40, .external_lex_state = 2},
  [144] = {.lex_state = 40, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 7},
  [146] = {.lex_state = 0, .external_lex_state = 7},
  [147] = {.lex_state = 6, .external_lex_state = 3},
  [148] = {.lex_state = 6, .external_lex_state = 3},
  [149] = {.lex_state = 6, .external_lex_state = 4},
  [150] = {.lex_state = 6, .external_lex_state = 4},
  [151] = {.lex_state = 6, .external_lex_state = 4},
  [152] = {.lex_state = 6, .external_lex_state = 4},
  [153] = {.lex_state = 6, .external_lex_state = 4},
  [154] = {.lex_state = 6, .external_lex_state = 4},
  [155] = {.lex_state = 6, .external_lex_state = 4},
  [156] = {.lex_state = 6, .external_lex_state = 4},
  [157] = {.lex_state = 6, .external_lex_state = 4},
  [158] = {.lex_state = 6, .external_lex_state = 4},
  [159] = {.lex_state = 6, .external_lex_state = 4},
  [160] = {.lex_state = 6, .external_lex_state = 4},
  [161] = {.lex_state = 6, .external_lex_state = 4},
  [162] = {.lex_state = 6, .external_lex_state = 4},
  [163] = {.lex_state = 6, .external_lex_state = 4},
  [164] = {.lex_state = 6, .external_lex_state = 4},
  [165] = {.lex_state = 6, .external_lex_state = 4},
  [166] = {.lex_state = 6, .external_lex_state = 4},
  [167] = {.lex_state = 6, .external_lex_state = 4},
  [168] = {.lex_state = 6, .external_lex_state = 4},
  [169] = {.lex_state = 6, .external_lex_state = 4},
  [170] = {.lex_state = 6, .external_lex_state = 4},
  [171] = {.lex_state = 6, .external_lex_state = 4},
  [172] = {.lex_state = 6, .external_lex_state = 4},
  [173] = {.lex_state = 0, .external_lex_state = 8},
  [174] = {.lex_state = 6, .external_lex_state = 3},
  [175] = {.lex_state = 6, .external_lex_state = 3},
  [176] = {.lex_state = 6, .external_lex_state = 3},
  [177] = {.lex_state = 6, .external_lex_state = 3},
  [178] = {.lex_state = 0, .external_lex_state = 8},
  [179] = {.lex_state = 6, .external_lex_state = 3},
  [180] = {.lex_state = 0, .external_lex_state = 8},
  [181] = {.lex_state = 0, .external_lex_state = 8},
  [182] = {.lex_state = 6, .external_lex_state = 3},
  [183] = {.lex_state = 0, .external_lex_state = 5},
  [184] = {.lex_state = 6, .external_lex_state = 3},
  [185] = {.lex_state = 6, .external_lex_state = 3},
  [186] = {.lex_state = 0, .external_lex_state = 8},
  [187] = {.lex_state = 0, .external_lex_state = 5},
  [188] = {.lex_state = 6, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 8},
  [190] = {.lex_state = 6, .external_lex_state = 3},
  [191] = {.lex_state = 0, .external_lex_state = 8},
  [192] = {.lex_state = 0, .external_lex_state = 8},
  [193] = {.lex_state = 6, .external_lex_state = 3},
  [194] = {.lex_state = 6, .external_lex_state = 3},
  [195] = {.lex_state = 2, .external_lex_state = 2},
  [196] = {.lex_state = 6, .external_lex_state = 3},
  [197] = {.lex_state = 6, .external_lex_state = 3},
  [198] = {.lex_state = 6, .external_lex_state = 3},
  [199] = {.lex_state = 6, .external_lex_state = 3},
  [200] = {.lex_state = 6, .external_lex_state = 3},
  [201] = {.lex_state = 40, .external_lex_state = 6},
  [202] = {.lex_state = 6, .external_lex_state = 3},
  [203] = {.lex_state = 6, .external_lex_state = 3},
  [204] = {.lex_state = 6, .external_lex_state = 3},
  [205] = {.lex_state = 6, .external_lex_state = 8},
  [206] = {.lex_state = 0, .external_lex_state = 5},
  [207] = {.lex_state = 6, .external_lex_state = 3},
  [208] = {.lex_state = 6, .external_lex_state = 3},
  [209] = {.lex_state = 40, .external_lex_state = 6},
  [210] = {.lex_state = 6, .external_lex_state = 8},
  [211] = {.lex_state = 6, .external_lex_state = 3},
  [212] = {.lex_state = 6, .external_lex_state = 3},
  [213] = {.lex_state = 6, .external_lex_state = 3},
  [214] = {.lex_state = 6, .external_lex_state = 3},
  [215] = {.lex_state = 0, .external_lex_state = 5},
  [216] = {.lex_state = 0, .external_lex_state = 8},
  [217] = {.lex_state = 6, .external_lex_state = 3},
  [218] = {.lex_state = 6, .external_lex_state = 3},
  [219] = {.lex_state = 6, .external_lex_state = 3},
  [220] = {.lex_state = 6, .external_lex_state = 3},
  [221] = {.lex_state = 6, .external_lex_state = 3},
  [222] = {.lex_state = 6, .external_lex_state = 3},
  [223] = {.lex_state = 6, .external_lex_state = 3},
  [224] = {.lex_state = 6, .external_lex_state = 3},
  [225] = {.lex_state = 6, .external_lex_state = 3},
  [226] = {.lex_state = 6, .external_lex_state = 3},
  [227] = {.lex_state = 6, .external_lex_state = 3},
  [228] = {.lex_state = 6, .external_lex_state = 3},
  [229] = {.lex_state = 6, .external_lex_state = 3},
  [230] = {.lex_state = 6, .external_lex_state = 3},
  [231] = {.lex_state = 6, .external_lex_state = 3},
  [232] = {.lex_state = 6, .external_lex_state = 3},
  [233] = {.lex_state = 6, .external_lex_state = 3},
  [234] = {.lex_state = 0, .external_lex_state = 8},
  [235] = {.lex_state = 0, .external_lex_state = 8},
  [236] = {.lex_state = 0, .external_lex_state = 8},
  [237] = {.lex_state = 0, .external_lex_state = 8},
  [238] = {.lex_state = 40, .external_lex_state = 6},
  [239] = {.lex_state = 0, .external_lex_state = 8},
  [240] = {.lex_state = 0, .external_lex_state = 8},
  [241] = {.lex_state = 0, .external_lex_state = 8},
  [242] = {.lex_state = 0, .external_lex_state = 8},
  [243] = {.lex_state = 0, .external_lex_state = 8},
  [244] = {.lex_state = 6, .external_lex_state = 2},
  [245] = {.lex_state = 6, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 8},
  [247] = {.lex_state = 6, .external_lex_state = 8},
  [248] = {.lex_state = 6, .external_lex_state = 2},
  [249] = {.lex_state = 6, .external_lex_state = 8},
  [250] = {.lex_state = 0, .external_lex_state = 8},
  [251] = {.lex_state = 6, .external_lex_state = 8},
  [252] = {.lex_state = 6, .external_lex_state = 8},
  [253] = {.lex_state = 0, .external_lex_state = 8},
  [254] = {.lex_state = 40, .external_lex_state = 6},
  [255] = {.lex_state = 6, .external_lex_state = 2},
  [256] = {.lex_state = 6, .external_lex_state = 8},
  [257] = {.lex_state = 6, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 8},
  [259] = {.lex_state = 6, .external_lex_state = 3},
  [260] = {.lex_state = 6, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 6, .external_lex_state = 2},
  [265] = {.lex_state = 6, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 8},
  [267] = {.lex_state = 0, .external_lex_state = 3},
  [268] = {.lex_state = 0, .external_lex_state = 8},
  [269] = {.lex_state = 0, .external_lex_state = 8},
  [270] = {.lex_state = 0, .external_lex_state = 3},
  [271] = {.lex_state = 0, .external_lex_state = 3},
  [272] = {.lex_state = 0, .external_lex_state = 8},
  [273] = {.lex_state = 0, .external_lex_state = 3},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 6, .external_lex_state = 2},
  [276] = {.lex_state = 6, .external_lex_state = 3},
  [277] = {.lex_state = 0, .external_lex_state = 3},
  [278] = {.lex_state = 0, .external_lex_state = 3},
  [279] = {.lex_state = 6, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 3},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 3},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 6, .external_lex_state = 2},
  [285] = {.lex_state = 6, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 8},
  [287] = {.lex_state = 0, .external_lex_state = 3},
  [288] = {.lex_state = 0, .external_lex_state = 2},
  [289] = {.lex_state = 6, .external_lex_state = 2},
  [290] = {.lex_state = 6, .external_lex_state = 3},
  [291] = {.lex_state = 0, .external_lex_state = 3},
  [292] = {.lex_state = 0, .external_lex_state = 3},
  [293] = {.lex_state = 6, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 3},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 6, .external_lex_state = 2},
  [297] = {.lex_state = 6, .external_lex_state = 2},
  [298] = {.lex_state = 6, .external_lex_state = 2},
  [299] = {.lex_state = 0, .external_lex_state = 3},
  [300] = {.lex_state = 6, .external_lex_state = 3},
  [301] = {.lex_state = 6, .external_lex_state = 3},
  [302] = {.lex_state = 6, .external_lex_state = 3},
  [303] = {.lex_state = 6, .external_lex_state = 4},
  [304] = {.lex_state = 0, .external_lex_state = 3},
  [305] = {.lex_state = 6, .external_lex_state = 2},
  [306] = {.lex_state = 6, .external_lex_state = 3},
  [307] = {.lex_state = 6, .external_lex_state = 2},
  [308] = {.lex_state = 6, .external_lex_state = 3},
  [309] = {.lex_state = 6, .external_lex_state = 2},
  [310] = {.lex_state = 6, .external_lex_state = 3},
  [311] = {.lex_state = 6, .external_lex_state = 3},
  [312] = {.lex_state = 6, .external_lex_state = 2},
  [313] = {.lex_state = 0, .external_lex_state = 9},
  [314] = {.lex_state = 0, .external_lex_state = 9},
  [315] = {.lex_state = 0, .external_lex_state = 10},
  [316] = {.lex_state = 0, .external_lex_state = 9},
  [317] = {.lex_state = 0, .external_lex_state = 9},
  [318] = {.lex_state = 0, .external_lex_state = 2},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 10},
  [322] = {.lex_state = 0, .external_lex_state = 10},
  [323] = {.lex_state = 0, .external_lex_state = 10},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 9},
  [326] = {.lex_state = 0, .external_lex_state = 9},
  [327] = {.lex_state = 0, .external_lex_state = 9},
  [328] = {.lex_state = 0, .external_lex_state = 9},
  [329] = {.lex_state = 0, .external_lex_state = 10},
  [330] = {.lex_state = 6, .external_lex_state = 2},
  [331] = {.lex_state = 0, .external_lex_state = 9},
  [332] = {.lex_state = 6, .external_lex_state = 2},
  [333] = {.lex_state = 0, .external_lex_state = 2},
  [334] = {.lex_state = 0, .external_lex_state = 2},
  [335] = {.lex_state = 0, .external_lex_state = 2},
  [336] = {.lex_state = 0, .external_lex_state = 2},
  [337] = {.lex_state = 0, .external_lex_state = 10},
  [338] = {.lex_state = 0, .external_lex_state = 2},
  [339] = {.lex_state = 0, .external_lex_state = 9},
  [340] = {.lex_state = 0, .external_lex_state = 9},
  [341] = {.lex_state = 0, .external_lex_state = 9},
  [342] = {.lex_state = 6, .external_lex_state = 2},
  [343] = {.lex_state = 0, .external_lex_state = 10},
  [344] = {.lex_state = 0, .external_lex_state = 9},
  [345] = {.lex_state = 0, .external_lex_state = 2},
  [346] = {.lex_state = 0, .external_lex_state = 2},
  [347] = {.lex_state = 0, .external_lex_state = 9},
  [348] = {.lex_state = 0, .external_lex_state = 2},
  [349] = {.lex_state = 0, .external_lex_state = 9},
  [350] = {.lex_state = 0, .external_lex_state = 2},
  [351] = {.lex_state = 0, .external_lex_state = 9},
  [352] = {.lex_state = 0, .external_lex_state = 9},
  [353] = {.lex_state = 0, .external_lex_state = 10},
  [354] = {.lex_state = 0, .external_lex_state = 9},
  [355] = {.lex_state = 0, .external_lex_state = 9},
  [356] = {.lex_state = 0, .external_lex_state = 9},
  [357] = {.lex_state = 0, .external_lex_state = 2},
  [358] = {.lex_state = 0, .external_lex_state = 2},
  [359] = {.lex_state = 0, .external_lex_state = 2},
  [360] = {.lex_state = 0, .external_lex_state = 2},
  [361] = {.lex_state = 6, .external_lex_state = 2},
  [362] = {.lex_state = 6, .external_lex_state = 2},
  [363] = {.lex_state = 6, .external_lex_state = 2},
  [364] = {.lex_state = 0, .external_lex_state = 11},
  [365] = {.lex_state = 6, .external_lex_state = 2},
  [366] = {.lex_state = 0, .external_lex_state = 2},
  [367] = {.lex_state = 0, .external_lex_state = 2},
  [368] = {.lex_state = 6, .external_lex_state = 2},
  [369] = {.lex_state = 6, .external_lex_state = 2},
  [370] = {.lex_state = 6, .external_lex_state = 2},
  [371] = {.lex_state = 6, .external_lex_state = 2},
  [372] = {.lex_state = 0, .external_lex_state = 2},
  [373] = {.lex_state = 0, .external_lex_state = 2},
  [374] = {.lex_state = 0, .external_lex_state = 11},
  [375] = {.lex_state = 40, .external_lex_state = 2},
  [376] = {.lex_state = 6, .external_lex_state = 2},
  [377] = {.lex_state = 6, .external_lex_state = 2},
  [378] = {.lex_state = 6, .external_lex_state = 2},
  [379] = {.lex_state = 6, .external_lex_state = 2},
  [380] = {.lex_state = 6, .external_lex_state = 2},
  [381] = {.lex_state = 40, .external_lex_state = 2},
  [382] = {.lex_state = 0, .external_lex_state = 2},
  [383] = {.lex_state = 6, .external_lex_state = 2},
  [384] = {.lex_state = 6, .external_lex_state = 2},
  [385] = {.lex_state = 6, .external_lex_state = 2},
  [386] = {.lex_state = 6, .external_lex_state = 2},
  [387] = {.lex_state = 6, .external_lex_state = 2},
  [388] = {.lex_state = 6, .external_lex_state = 2},
  [389] = {.lex_state = 6, .external_lex_state = 2},
  [390] = {.lex_state = 6, .external_lex_state = 2},
  [391] = {.lex_state = 0, .external_lex_state = 9},
  [392] = {.lex_state = 0, .external_lex_state = 2},
  [393] = {.lex_state = 6, .external_lex_state = 2},
  [394] = {.lex_state = 0, .external_lex_state = 2},
  [395] = {.lex_state = 6, .external_lex_state = 2},
  [396] = {.lex_state = 0, .external_lex_state = 2},
  [397] = {.lex_state = 40, .external_lex_state = 2},
  [398] = {.lex_state = 6, .external_lex_state = 2},
  [399] = {.lex_state = 114, .external_lex_state = 2},
  [400] = {.lex_state = 6, .external_lex_state = 2},
  [401] = {.lex_state = 0, .external_lex_state = 2},
  [402] = {.lex_state = 6, .external_lex_state = 2},
  [403] = {.lex_state = 0, .external_lex_state = 12},
  [404] = {.lex_state = 0, .external_lex_state = 11},
  [405] = {.lex_state = 6, .external_lex_state = 2},
  [406] = {.lex_state = 6, .external_lex_state = 2},
  [407] = {.lex_state = 6, .external_lex_state = 2},
  [408] = {.lex_state = 0, .external_lex_state = 2},
  [409] = {.lex_state = 6, .external_lex_state = 2},
  [410] = {.lex_state = 6, .external_lex_state = 2},
  [411] = {.lex_state = 6, .external_lex_state = 2},
  [412] = {.lex_state = 0, .external_lex_state = 2},
  [413] = {.lex_state = 40, .external_lex_state = 2},
  [414] = {.lex_state = 0, .external_lex_state = 9},
  [415] = {.lex_state = 6, .external_lex_state = 2},
  [416] = {.lex_state = 6, .external_lex_state = 2},
  [417] = {.lex_state = 0, .external_lex_state = 2},
  [418] = {.lex_state = 0, .external_lex_state = 2},
  [419] = {.lex_state = 0, .external_lex_state = 11},
  [420] = {.lex_state = 6, .external_lex_state = 2},
  [421] = {.lex_state = 0, .external_lex_state = 2},
  [422] = {.lex_state = 0, .external_lex_state = 2},
  [423] = {.lex_state = 6, .external_lex_state = 2},
  [424] = {.lex_state = 6, .external_lex_state = 2},
  [425] = {.lex_state = 6, .external_lex_state = 2},
  [426] = {.lex_state = 6, .external_lex_state = 2},
  [427] = {.lex_state = 6, .external_lex_state = 2},
  [428] = {.lex_state = 6, .external_lex_state = 2},
  [429] = {.lex_state = 0, .external_lex_state = 12},
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
    [ts_external_token__string_start] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [5] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__inter_start] = true,
    [ts_external_token__inter_start2] = true,
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
    [aux_sym_execute_using_token1] = ACTIONS(1),
    [aux_sym_script_result_token1] = ACTIONS(1),
    [aux_sym_connection_token1] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [aux_sym_execute_sql_token1] = ACTIONS(1),
    [aux_sym_query_token1] = ACTIONS(1),
    [anon_sym_Output] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
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
    [anon_sym_If] = ACTIONS(1),
    [anon_sym_Else] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_stripped] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_as_integer] = ACTIONS(1),
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
    [sym_source_file] = STATE(366),
    [sym_parameters] = STATE(12),
    [sym__statement] = STATE(13),
    [sym_nop] = STATE(13),
    [sym_log] = STATE(13),
    [sym_assert] = STATE(13),
    [sym_set_inter] = STATE(13),
    [sym_set] = STATE(13),
    [sym_execute_using] = STATE(13),
    [sym_execute_sql] = STATE(13),
    [sym_siard_output] = STATE(13),
    [sym_siard_metadata] = STATE(13),
    [sym_for_loop] = STATE(13),
    [sym_conditional] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Parameters] = ACTIONS(7),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_Log] = ACTIONS(11),
    [anon_sym_Assert] = ACTIONS(13),
    [anon_sym_Interpolation] = ACTIONS(15),
    [anon_sym_Set] = ACTIONS(17),
    [aux_sym_execute_using_token1] = ACTIONS(19),
    [aux_sym_execute_sql_token1] = ACTIONS(21),
    [anon_sym_Output] = ACTIONS(23),
    [anon_sym_Metadata] = ACTIONS(25),
    [anon_sym_For] = ACTIONS(27),
    [anon_sym_If] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
    [sym__skip] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(33), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
    ACTIONS(31), 25,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
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
      anon_sym_If,
      sym_identifier,
  [39] = 14,
    ACTIONS(35), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(37), 1,
      anon_sym_Log,
    ACTIONS(39), 1,
      anon_sym_Assert,
    ACTIONS(41), 1,
      anon_sym_Interpolation,
    ACTIONS(43), 1,
      anon_sym_Set,
    ACTIONS(45), 1,
      aux_sym_execute_using_token1,
    ACTIONS(47), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(49), 1,
      anon_sym_Output,
    ACTIONS(51), 1,
      anon_sym_Metadata,
    ACTIONS(53), 1,
      anon_sym_For,
    ACTIONS(55), 1,
      anon_sym_If,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(57), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(4), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [96] = 14,
    ACTIONS(59), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(62), 1,
      anon_sym_Log,
    ACTIONS(65), 1,
      anon_sym_Assert,
    ACTIONS(68), 1,
      anon_sym_Interpolation,
    ACTIONS(71), 1,
      anon_sym_Set,
    ACTIONS(74), 1,
      aux_sym_execute_using_token1,
    ACTIONS(77), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(80), 1,
      anon_sym_Output,
    ACTIONS(83), 1,
      anon_sym_Metadata,
    ACTIONS(86), 1,
      anon_sym_For,
    ACTIONS(89), 1,
      anon_sym_If,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(92), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(4), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [153] = 14,
    ACTIONS(35), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(37), 1,
      anon_sym_Log,
    ACTIONS(39), 1,
      anon_sym_Assert,
    ACTIONS(41), 1,
      anon_sym_Interpolation,
    ACTIONS(43), 1,
      anon_sym_Set,
    ACTIONS(45), 1,
      aux_sym_execute_using_token1,
    ACTIONS(47), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(49), 1,
      anon_sym_Output,
    ACTIONS(51), 1,
      anon_sym_Metadata,
    ACTIONS(53), 1,
      anon_sym_For,
    ACTIONS(55), 1,
      anon_sym_If,
    STATE(278), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(3), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [209] = 14,
    ACTIONS(35), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(37), 1,
      anon_sym_Log,
    ACTIONS(39), 1,
      anon_sym_Assert,
    ACTIONS(41), 1,
      anon_sym_Interpolation,
    ACTIONS(43), 1,
      anon_sym_Set,
    ACTIONS(45), 1,
      aux_sym_execute_using_token1,
    ACTIONS(47), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(49), 1,
      anon_sym_Output,
    ACTIONS(51), 1,
      anon_sym_Metadata,
    ACTIONS(53), 1,
      anon_sym_For,
    ACTIONS(55), 1,
      anon_sym_If,
    STATE(280), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(3), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [265] = 14,
    ACTIONS(35), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(37), 1,
      anon_sym_Log,
    ACTIONS(39), 1,
      anon_sym_Assert,
    ACTIONS(41), 1,
      anon_sym_Interpolation,
    ACTIONS(43), 1,
      anon_sym_Set,
    ACTIONS(45), 1,
      aux_sym_execute_using_token1,
    ACTIONS(47), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(49), 1,
      anon_sym_Output,
    ACTIONS(51), 1,
      anon_sym_Metadata,
    ACTIONS(53), 1,
      anon_sym_For,
    ACTIONS(55), 1,
      anon_sym_If,
    STATE(287), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(3), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [321] = 14,
    ACTIONS(35), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(37), 1,
      anon_sym_Log,
    ACTIONS(39), 1,
      anon_sym_Assert,
    ACTIONS(41), 1,
      anon_sym_Interpolation,
    ACTIONS(43), 1,
      anon_sym_Set,
    ACTIONS(45), 1,
      aux_sym_execute_using_token1,
    ACTIONS(47), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(49), 1,
      anon_sym_Output,
    ACTIONS(51), 1,
      anon_sym_Metadata,
    ACTIONS(53), 1,
      anon_sym_For,
    ACTIONS(55), 1,
      anon_sym_If,
    STATE(299), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(3), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [377] = 14,
    ACTIONS(35), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(37), 1,
      anon_sym_Log,
    ACTIONS(39), 1,
      anon_sym_Assert,
    ACTIONS(41), 1,
      anon_sym_Interpolation,
    ACTIONS(43), 1,
      anon_sym_Set,
    ACTIONS(45), 1,
      aux_sym_execute_using_token1,
    ACTIONS(47), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(49), 1,
      anon_sym_Output,
    ACTIONS(51), 1,
      anon_sym_Metadata,
    ACTIONS(53), 1,
      anon_sym_For,
    ACTIONS(55), 1,
      anon_sym_If,
    STATE(267), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(3), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [433] = 14,
    ACTIONS(35), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(37), 1,
      anon_sym_Log,
    ACTIONS(39), 1,
      anon_sym_Assert,
    ACTIONS(41), 1,
      anon_sym_Interpolation,
    ACTIONS(43), 1,
      anon_sym_Set,
    ACTIONS(45), 1,
      aux_sym_execute_using_token1,
    ACTIONS(47), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(49), 1,
      anon_sym_Output,
    ACTIONS(51), 1,
      anon_sym_Metadata,
    ACTIONS(53), 1,
      anon_sym_For,
    ACTIONS(55), 1,
      anon_sym_If,
    STATE(277), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(3), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [489] = 14,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(97), 1,
      anon_sym_Log,
    ACTIONS(100), 1,
      anon_sym_Assert,
    ACTIONS(103), 1,
      anon_sym_Interpolation,
    ACTIONS(106), 1,
      anon_sym_Set,
    ACTIONS(109), 1,
      aux_sym_execute_using_token1,
    ACTIONS(112), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(115), 1,
      anon_sym_Output,
    ACTIONS(118), 1,
      anon_sym_Metadata,
    ACTIONS(121), 1,
      anon_sym_For,
    ACTIONS(124), 1,
      anon_sym_If,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(11), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [545] = 14,
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
      aux_sym_execute_using_token1,
    ACTIONS(21), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(23), 1,
      anon_sym_Output,
    ACTIONS(25), 1,
      anon_sym_Metadata,
    ACTIONS(27), 1,
      anon_sym_For,
    ACTIONS(29), 1,
      anon_sym_If,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(14), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [601] = 14,
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
      aux_sym_execute_using_token1,
    ACTIONS(21), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(23), 1,
      anon_sym_Output,
    ACTIONS(25), 1,
      anon_sym_Metadata,
    ACTIONS(27), 1,
      anon_sym_For,
    ACTIONS(29), 1,
      anon_sym_If,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(11), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [657] = 14,
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
      aux_sym_execute_using_token1,
    ACTIONS(21), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(23), 1,
      anon_sym_Output,
    ACTIONS(25), 1,
      anon_sym_Metadata,
    ACTIONS(27), 1,
      anon_sym_For,
    ACTIONS(29), 1,
      anon_sym_If,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(11), 13,
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
      sym_conditional,
      aux_sym_source_file_repeat1,
  [713] = 20,
    ACTIONS(131), 1,
      anon_sym_dbname,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(135), 1,
      anon_sym_archiver,
    ACTIONS(137), 1,
      anon_sym_archiverContact,
    ACTIONS(139), 1,
      anon_sym_dataOwner,
    ACTIONS(141), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(143), 1,
      anon_sym_lobFolder,
    ACTIONS(145), 1,
      anon_sym_Schema,
    ACTIONS(147), 1,
      anon_sym_Command,
    STATE(46), 1,
      sym__ded,
    STATE(87), 1,
      sym__siard_dataOriginTimespan,
    STATE(104), 1,
      sym__siard_lobFolder,
    STATE(106), 1,
      sym__siard_dataOwner,
    STATE(108), 1,
      sym__siard_archiverContact,
    STATE(109), 1,
      sym__siard_archiver,
    STATE(110), 1,
      sym__siard_description,
    STATE(111), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(149), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(18), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [778] = 20,
    ACTIONS(131), 1,
      anon_sym_dbname,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(135), 1,
      anon_sym_archiver,
    ACTIONS(137), 1,
      anon_sym_archiverContact,
    ACTIONS(139), 1,
      anon_sym_dataOwner,
    ACTIONS(141), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(143), 1,
      anon_sym_lobFolder,
    ACTIONS(145), 1,
      anon_sym_Schema,
    ACTIONS(147), 1,
      anon_sym_Command,
    STATE(73), 1,
      sym__ded,
    STATE(87), 1,
      sym__siard_dataOriginTimespan,
    STATE(104), 1,
      sym__siard_lobFolder,
    STATE(106), 1,
      sym__siard_dataOwner,
    STATE(108), 1,
      sym__siard_archiverContact,
    STATE(109), 1,
      sym__siard_archiver,
    STATE(110), 1,
      sym__siard_description,
    STATE(111), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(151), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(17), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [843] = 20,
    ACTIONS(131), 1,
      anon_sym_dbname,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(135), 1,
      anon_sym_archiver,
    ACTIONS(137), 1,
      anon_sym_archiverContact,
    ACTIONS(139), 1,
      anon_sym_dataOwner,
    ACTIONS(141), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(143), 1,
      anon_sym_lobFolder,
    ACTIONS(145), 1,
      anon_sym_Schema,
    ACTIONS(147), 1,
      anon_sym_Command,
    STATE(70), 1,
      sym__ded,
    STATE(87), 1,
      sym__siard_dataOriginTimespan,
    STATE(104), 1,
      sym__siard_lobFolder,
    STATE(106), 1,
      sym__siard_dataOwner,
    STATE(108), 1,
      sym__siard_archiverContact,
    STATE(109), 1,
      sym__siard_archiver,
    STATE(110), 1,
      sym__siard_description,
    STATE(111), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(153), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(19), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [908] = 20,
    ACTIONS(131), 1,
      anon_sym_dbname,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(135), 1,
      anon_sym_archiver,
    ACTIONS(137), 1,
      anon_sym_archiverContact,
    ACTIONS(139), 1,
      anon_sym_dataOwner,
    ACTIONS(141), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(143), 1,
      anon_sym_lobFolder,
    ACTIONS(145), 1,
      anon_sym_Schema,
    ACTIONS(147), 1,
      anon_sym_Command,
    STATE(55), 1,
      sym__ded,
    STATE(87), 1,
      sym__siard_dataOriginTimespan,
    STATE(104), 1,
      sym__siard_lobFolder,
    STATE(106), 1,
      sym__siard_dataOwner,
    STATE(108), 1,
      sym__siard_archiverContact,
    STATE(109), 1,
      sym__siard_archiver,
    STATE(110), 1,
      sym__siard_description,
    STATE(111), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(155), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(19), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [973] = 19,
    ACTIONS(157), 1,
      anon_sym_dbname,
    ACTIONS(160), 1,
      anon_sym_description,
    ACTIONS(163), 1,
      anon_sym_archiver,
    ACTIONS(166), 1,
      anon_sym_archiverContact,
    ACTIONS(169), 1,
      anon_sym_dataOwner,
    ACTIONS(172), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(175), 1,
      anon_sym_lobFolder,
    ACTIONS(178), 1,
      anon_sym_Schema,
    ACTIONS(181), 1,
      anon_sym_Command,
    STATE(87), 1,
      sym__siard_dataOriginTimespan,
    STATE(104), 1,
      sym__siard_lobFolder,
    STATE(106), 1,
      sym__siard_dataOwner,
    STATE(108), 1,
      sym__siard_archiverContact,
    STATE(109), 1,
      sym__siard_archiver,
    STATE(110), 1,
      sym__siard_description,
    STATE(111), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(184), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(19), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [1035] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(188), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(186), 17,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1064] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(192), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(190), 17,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1093] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(196), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(194), 17,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1122] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(200), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(198), 17,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1151] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(204), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 17,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1180] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(208), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(206), 17,
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
  [1208] = 3,
    ACTIONS(212), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(210), 17,
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
  [1235] = 3,
    ACTIONS(216), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(214), 17,
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
  [1262] = 3,
    ACTIONS(220), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(218), 17,
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
  [1289] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(218), 3,
      anon_sym_DOT_DOT_DOT,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
    ACTIONS(220), 13,
      anon_sym_Parameters,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_description,
      anon_sym_title,
      anon_sym_Body,
      anon_sym_For,
      anon_sym_If,
      sym_identifier,
  [1314] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(33), 14,
      ts_builtin_sym_end,
      anon_sym_Parameters,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_Body,
      anon_sym_For,
      anon_sym_If,
  [1335] = 3,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(186), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1358] = 3,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(190), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1381] = 3,
    ACTIONS(224), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(222), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1404] = 3,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(194), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1427] = 3,
    ACTIONS(204), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(202), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1450] = 9,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      aux_sym_script_result_token1,
    ACTIONS(230), 1,
      aux_sym_connection_token1,
    ACTIONS(232), 1,
      aux_sym_query_token1,
    ACTIONS(234), 1,
      sym_integer,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(60), 4,
      sym__expression,
      sym_script_result,
      sym_connection,
      sym_query,
    STATE(234), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [1485] = 3,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1508] = 3,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(238), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1531] = 3,
    ACTIONS(244), 1,
      anon_sym_Else,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(242), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1554] = 3,
    ACTIONS(246), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(238), 13,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1577] = 9,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(248), 1,
      aux_sym_script_result_token1,
    ACTIONS(250), 1,
      aux_sym_connection_token1,
    ACTIONS(252), 1,
      aux_sym_query_token1,
    ACTIONS(254), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(82), 4,
      sym__expression,
      sym_script_result,
      sym_connection,
      sym_query,
    STATE(250), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [1612] = 3,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(256), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1635] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(258), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1655] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(260), 13,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_Body,
      anon_sym_For,
      anon_sym_If,
  [1675] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(262), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1695] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(264), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1715] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(266), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1735] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(268), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1755] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(270), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1775] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(272), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1795] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(274), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1815] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(276), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1835] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(278), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1855] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(280), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1875] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(282), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1895] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(284), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1915] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(286), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1935] = 3,
    ACTIONS(288), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(222), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1957] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(290), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1977] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(292), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1997] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(294), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2017] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(296), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2037] = 3,
    ACTIONS(298), 1,
      anon_sym_Else,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(242), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2059] = 3,
    ACTIONS(246), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(256), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2081] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(300), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2101] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(290), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2120] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(296), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2139] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(270), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2158] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(272), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2177] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(282), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2196] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(266), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2215] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(258), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2234] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(264), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2253] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(268), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2272] = 9,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(302), 1,
      anon_sym_Type,
    ACTIONS(304), 1,
      anon_sym_Table,
    ACTIONS(306), 1,
      anon_sym_View,
    STATE(114), 1,
      sym__ded,
    STATE(121), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(308), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(126), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2305] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(262), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2324] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(274), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2343] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(278), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2362] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(294), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2381] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(284), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2400] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(300), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2419] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(292), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2438] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(280), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2457] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(276), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2476] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(286), 12,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [2495] = 9,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(310), 1,
      anon_sym_Column,
    ACTIONS(312), 1,
      anon_sym_Key,
    ACTIONS(314), 1,
      anon_sym_Check,
    STATE(120), 1,
      sym__siard_description,
    STATE(203), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(316), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(125), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2528] = 3,
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
  [2548] = 3,
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
  [2568] = 8,
    ACTIONS(328), 1,
      sym__inter_start,
    ACTIONS(330), 1,
      sym__inter_start2,
    ACTIONS(332), 1,
      sym__raw,
    STATE(2), 1,
      sym__ded,
    STATE(183), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(326), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(122), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2598] = 3,
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
  [2618] = 3,
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
  [2638] = 3,
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
  [2658] = 3,
    ACTIONS(348), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(346), 10,
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
  [2678] = 3,
    ACTIONS(352), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(350), 10,
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
  [2698] = 3,
    ACTIONS(356), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 10,
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
  [2718] = 3,
    ACTIONS(360), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(358), 10,
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
  [2738] = 3,
    ACTIONS(364), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(362), 10,
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
  [2758] = 3,
    ACTIONS(368), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(366), 10,
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
  [2778] = 3,
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
  [2798] = 3,
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
  [2818] = 3,
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
  [2838] = 3,
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
  [2858] = 3,
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
  [2878] = 3,
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
  [2898] = 3,
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
  [2918] = 3,
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
  [2938] = 3,
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
  [2958] = 3,
    ACTIONS(408), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(406), 10,
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
  [2978] = 3,
    ACTIONS(412), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(410), 10,
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
  [2998] = 3,
    ACTIONS(416), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(414), 10,
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
  [3018] = 3,
    ACTIONS(420), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(418), 10,
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
  [3038] = 3,
    ACTIONS(424), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(422), 10,
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
  [3058] = 3,
    ACTIONS(428), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(426), 10,
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
  [3078] = 3,
    ACTIONS(432), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(430), 10,
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
  [3098] = 8,
    ACTIONS(328), 1,
      sym__inter_start,
    ACTIONS(330), 1,
      sym__inter_start2,
    ACTIONS(332), 1,
      sym__raw,
    STATE(30), 1,
      sym__ded,
    STATE(183), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(434), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(122), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3128] = 3,
    ACTIONS(438), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(436), 10,
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
  [3148] = 3,
    ACTIONS(442), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(440), 10,
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
  [3168] = 3,
    ACTIONS(446), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(444), 10,
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
  [3188] = 3,
    ACTIONS(450), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(448), 10,
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
  [3208] = 7,
    ACTIONS(310), 1,
      anon_sym_Column,
    ACTIONS(312), 1,
      anon_sym_Key,
    ACTIONS(314), 1,
      anon_sym_Check,
    STATE(200), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(452), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(123), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3235] = 7,
    ACTIONS(302), 1,
      anon_sym_Type,
    ACTIONS(304), 1,
      anon_sym_Table,
    ACTIONS(306), 1,
      anon_sym_View,
    STATE(116), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(454), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(124), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3262] = 7,
    ACTIONS(458), 1,
      sym__inter_start,
    ACTIONS(461), 1,
      sym__inter_start2,
    ACTIONS(464), 1,
      sym__raw,
    STATE(183), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(456), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(122), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3289] = 7,
    ACTIONS(310), 1,
      anon_sym_Column,
    ACTIONS(312), 1,
      anon_sym_Key,
    ACTIONS(314), 1,
      anon_sym_Check,
    STATE(230), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(467), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(128), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3316] = 7,
    ACTIONS(302), 1,
      anon_sym_Type,
    ACTIONS(304), 1,
      anon_sym_Table,
    ACTIONS(306), 1,
      anon_sym_View,
    STATE(118), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(469), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(140), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3343] = 7,
    ACTIONS(310), 1,
      anon_sym_Column,
    ACTIONS(312), 1,
      anon_sym_Key,
    ACTIONS(314), 1,
      anon_sym_Check,
    STATE(199), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(471), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(128), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3370] = 7,
    ACTIONS(302), 1,
      anon_sym_Type,
    ACTIONS(304), 1,
      anon_sym_Table,
    ACTIONS(306), 1,
      anon_sym_View,
    STATE(88), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(473), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(140), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3397] = 7,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      sym__inter_start,
    ACTIONS(479), 1,
      sym__string_content,
    ACTIONS(481), 1,
      sym__string_end,
    STATE(209), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(137), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3423] = 6,
    ACTIONS(483), 1,
      anon_sym_Column,
    ACTIONS(486), 1,
      anon_sym_Key,
    ACTIONS(489), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(492), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(128), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3447] = 7,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      sym__inter_start,
    ACTIONS(479), 1,
      sym__string_content,
    ACTIONS(494), 1,
      sym__string_end,
    STATE(209), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(137), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3473] = 7,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      sym__inter_start,
    ACTIONS(479), 1,
      sym__string_content,
    ACTIONS(496), 1,
      sym__string_end,
    STATE(209), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(133), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3499] = 6,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      sym_integer,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(65), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(144), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3523] = 7,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      sym__inter_start,
    ACTIONS(479), 1,
      sym__string_content,
    ACTIONS(504), 1,
      sym__string_end,
    STATE(209), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(137), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3549] = 7,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      sym__inter_start,
    ACTIONS(479), 1,
      sym__string_content,
    ACTIONS(506), 1,
      sym__string_end,
    STATE(209), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(137), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3575] = 7,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      sym__inter_start,
    ACTIONS(479), 1,
      sym__string_content,
    ACTIONS(508), 1,
      sym__string_end,
    STATE(209), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(132), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3601] = 6,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(510), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(367), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(143), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3625] = 6,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(510), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(412), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(143), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3649] = 7,
    ACTIONS(512), 1,
      anon_sym_BSLASH,
    ACTIONS(515), 1,
      sym__inter_start,
    ACTIONS(518), 1,
      sym__string_content,
    ACTIONS(521), 1,
      sym__string_end,
    STATE(209), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(137), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3675] = 7,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      sym__inter_start,
    ACTIONS(479), 1,
      sym__string_content,
    ACTIONS(523), 1,
      sym__string_end,
    STATE(209), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(129), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3701] = 7,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      sym__inter_start,
    ACTIONS(479), 1,
      sym__string_content,
    ACTIONS(525), 1,
      sym__string_end,
    STATE(209), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(127), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3727] = 6,
    ACTIONS(527), 1,
      anon_sym_Type,
    ACTIONS(530), 1,
      anon_sym_Table,
    ACTIONS(533), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(536), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(140), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3751] = 6,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(510), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(81), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(143), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3775] = 7,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(310), 1,
      anon_sym_Column,
    STATE(177), 1,
      sym__siard_description,
    STATE(202), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(538), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(175), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3800] = 5,
    ACTIONS(540), 1,
      anon_sym_DOT,
    STATE(158), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(544), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(542), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3821] = 5,
    ACTIONS(540), 1,
      anon_sym_DOT,
    STATE(160), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(544), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(542), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3842] = 6,
    ACTIONS(328), 1,
      sym__inter_start,
    ACTIONS(330), 1,
      sym__inter_start2,
    ACTIONS(332), 1,
      sym__raw,
    STATE(183), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(89), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3865] = 6,
    ACTIONS(328), 1,
      sym__inter_start,
    ACTIONS(330), 1,
      sym__inter_start2,
    ACTIONS(332), 1,
      sym__raw,
    STATE(183), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(115), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3888] = 7,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(546), 1,
      anon_sym_Field,
    STATE(184), 1,
      sym__siard_description,
    STATE(197), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(548), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3913] = 7,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(546), 1,
      anon_sym_Field,
    STATE(190), 1,
      sym__siard_description,
    STATE(306), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(550), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(194), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3938] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(554), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(243), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3958] = 5,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(556), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(281), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3978] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(558), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(210), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3998] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(560), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(239), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4018] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(562), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(235), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4038] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(205), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4058] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(566), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(237), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4078] = 5,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(570), 1,
      sym_integer,
    ACTIONS(572), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(343), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4098] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(574), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(246), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4118] = 5,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(576), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(40), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4138] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(578), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(240), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4158] = 5,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(582), 1,
      sym_integer,
    ACTIONS(584), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(38), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4178] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(586), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(241), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4198] = 5,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(588), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(263), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4218] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(590), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(236), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4238] = 5,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(592), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(64), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4258] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(594), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(258), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4278] = 5,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(572), 1,
      sym__string_start,
    ACTIONS(596), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(329), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4298] = 5,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(584), 1,
      sym__string_start,
    ACTIONS(598), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(42), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4318] = 5,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(572), 1,
      sym__string_start,
    ACTIONS(600), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(353), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4338] = 5,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(602), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(274), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4358] = 5,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym__string_start,
    ACTIONS(604), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(283), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4378] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(606), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(242), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4398] = 5,
    ACTIONS(236), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(608), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(253), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4418] = 6,
    ACTIONS(610), 1,
      anon_sym_COLON,
    ACTIONS(612), 1,
      aux_sym__short_descr_token1,
    STATE(228), 1,
      sym__short_descr,
    STATE(229), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(614), 2,
      sym__newline,
      sym__end_of_file,
  [4439] = 5,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(48), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(618), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(214), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4458] = 5,
    ACTIONS(310), 1,
      anon_sym_Column,
    STATE(207), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(620), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(208), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4477] = 5,
    ACTIONS(622), 1,
      sym_identifier,
    STATE(44), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(624), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(211), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4496] = 5,
    ACTIONS(310), 1,
      anon_sym_Column,
    STATE(204), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(626), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(182), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4515] = 6,
    ACTIONS(612), 1,
      aux_sym__short_descr_token1,
    ACTIONS(628), 1,
      anon_sym_COLON,
    STATE(224), 1,
      sym__short_descr,
    STATE(227), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(630), 2,
      sym__newline,
      sym__end_of_file,
  [4536] = 5,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(74), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(632), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(214), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4555] = 6,
    ACTIONS(612), 1,
      aux_sym__short_descr_token1,
    ACTIONS(634), 1,
      anon_sym_COLON,
    STATE(222), 1,
      sym__short_descr,
    STATE(223), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(636), 2,
      sym__newline,
      sym__end_of_file,
  [4576] = 6,
    ACTIONS(612), 1,
      aux_sym__short_descr_token1,
    ACTIONS(638), 1,
      anon_sym_COLON,
    STATE(103), 1,
      sym__nl,
    STATE(112), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(640), 2,
      sym__newline,
      sym__end_of_file,
  [4597] = 5,
    ACTIONS(310), 1,
      anon_sym_Column,
    STATE(233), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(642), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(208), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4616] = 4,
    ACTIONS(646), 1,
      sym__raw,
    STATE(187), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(644), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [4633] = 5,
    ACTIONS(546), 1,
      anon_sym_Field,
    STATE(221), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(648), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(188), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4652] = 5,
    ACTIONS(546), 1,
      anon_sym_Field,
    STATE(218), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(650), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(217), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4671] = 6,
    ACTIONS(612), 1,
      aux_sym__short_descr_token1,
    ACTIONS(652), 1,
      anon_sym_COLON,
    STATE(301), 1,
      sym__short_descr,
    STATE(302), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(654), 2,
      sym__newline,
      sym__end_of_file,
  [4692] = 4,
    ACTIONS(658), 1,
      sym__raw,
    STATE(187), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(656), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [4709] = 5,
    ACTIONS(546), 1,
      anon_sym_Field,
    STATE(212), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(661), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(217), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4728] = 6,
    ACTIONS(612), 1,
      aux_sym__short_descr_token1,
    ACTIONS(663), 1,
      anon_sym_COLON,
    STATE(219), 1,
      sym__short_descr,
    STATE(220), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(665), 2,
      sym__newline,
      sym__end_of_file,
  [4749] = 5,
    ACTIONS(546), 1,
      anon_sym_Field,
    STATE(308), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(667), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(193), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4768] = 6,
    ACTIONS(612), 1,
      aux_sym__short_descr_token1,
    ACTIONS(669), 1,
      anon_sym_COLON,
    STATE(231), 1,
      sym__short_descr,
    STATE(232), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(671), 2,
      sym__newline,
      sym__end_of_file,
  [4789] = 6,
    ACTIONS(612), 1,
      aux_sym__short_descr_token1,
    ACTIONS(673), 1,
      anon_sym_COLON,
    STATE(225), 1,
      sym__short_descr,
    STATE(226), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(675), 2,
      sym__newline,
      sym__end_of_file,
  [4810] = 5,
    ACTIONS(546), 1,
      anon_sym_Field,
    STATE(311), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(677), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(217), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4829] = 5,
    ACTIONS(546), 1,
      anon_sym_Field,
    STATE(310), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(679), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(217), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4848] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(681), 6,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
      aux_sym_escape_sequence_token3,
      aux_sym_escape_sequence_token4,
      aux_sym_escape_sequence_token5,
      aux_sym_escape_sequence_token6,
  [4861] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(683), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4873] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(685), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4885] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(687), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4897] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(689), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4909] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(691), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4921] = 4,
    ACTIONS(695), 1,
      sym__string_content,
    STATE(201), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(693), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [4937] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(698), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4949] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(700), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4961] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(702), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4973] = 6,
    ACTIONS(704), 1,
      anon_sym_with,
    ACTIONS(706), 1,
      anon_sym_DOT,
    ACTIONS(708), 1,
      sym__newline,
    ACTIONS(710), 1,
      sym__end_of_file,
    STATE(62), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4993] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(712), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [5005] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(714), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5017] = 4,
    ACTIONS(716), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(719), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(208), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [5033] = 4,
    ACTIONS(723), 1,
      sym__string_content,
    STATE(201), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(721), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [5049] = 6,
    ACTIONS(706), 1,
      anon_sym_DOT,
    ACTIONS(725), 1,
      anon_sym_with,
    ACTIONS(727), 1,
      sym__newline,
    ACTIONS(729), 1,
      sym__end_of_file,
    STATE(67), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5069] = 4,
    ACTIONS(731), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(734), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(211), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [5085] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(736), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5097] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(738), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5109] = 4,
    ACTIONS(740), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(743), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(214), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [5125] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(745), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [5137] = 5,
    ACTIONS(612), 1,
      aux_sym__short_descr_token1,
    STATE(259), 1,
      sym__nl,
    STATE(300), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(747), 2,
      sym__newline,
      sym__end_of_file,
  [5155] = 4,
    ACTIONS(749), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(752), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(217), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [5171] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(754), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5183] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(756), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5195] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(758), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5207] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(760), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5219] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(762), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5231] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(764), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5243] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(766), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5255] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(768), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5267] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(770), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5279] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(772), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5291] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(774), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5303] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(776), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5315] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(778), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5327] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(780), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5339] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(782), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5351] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(784), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5363] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(57), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(786), 2,
      sym__newline,
      sym__end_of_file,
  [5378] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(96), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(788), 2,
      sym__newline,
      sym__end_of_file,
  [5393] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(100), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(790), 2,
      sym__newline,
      sym__end_of_file,
  [5408] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(792), 2,
      sym__newline,
      sym__end_of_file,
  [5423] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(712), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [5434] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(79), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(794), 2,
      sym__newline,
      sym__end_of_file,
  [5449] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(105), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(796), 2,
      sym__newline,
      sym__end_of_file,
  [5464] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(101), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(798), 2,
      sym__newline,
      sym__end_of_file,
  [5479] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(284), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(800), 2,
      sym__newline,
      sym__end_of_file,
  [5494] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(61), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(802), 2,
      sym__newline,
      sym__end_of_file,
  [5509] = 3,
    STATE(21), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(804), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5522] = 3,
    STATE(32), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(806), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5535] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(90), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(808), 2,
      sym__newline,
      sym__end_of_file,
  [5550] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(186), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5561] = 3,
    STATE(323), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(810), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5574] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(202), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5585] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(85), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(812), 2,
      sym__newline,
      sym__end_of_file,
  [5600] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(194), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5611] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(190), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5622] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(290), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(814), 2,
      sym__newline,
      sym__end_of_file,
  [5637] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(816), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [5648] = 5,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(818), 1,
      anon_sym_title,
    ACTIONS(820), 1,
      anon_sym_Body,
    STATE(378), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5665] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5676] = 3,
    STATE(252), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(822), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5689] = 4,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(98), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(824), 2,
      sym__newline,
      sym__end_of_file,
  [5704] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(826), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5714] = 4,
    ACTIONS(828), 1,
      anon_sym_COLON,
    ACTIONS(830), 1,
      anon_sym_EQ,
    STATE(71), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5728] = 4,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5742] = 3,
    STATE(102), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(837), 2,
      sym__dedent,
      sym__end_of_file,
  [5754] = 4,
    ACTIONS(540), 1,
      anon_sym_DOT,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5768] = 4,
    ACTIONS(839), 1,
      anon_sym_COLON,
    ACTIONS(841), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5782] = 3,
    ACTIONS(616), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(174), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [5794] = 3,
    STATE(76), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(843), 2,
      sym__newline,
      sym__end_of_file,
  [5806] = 3,
    STATE(63), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(845), 2,
      sym__dedent,
      sym__end_of_file,
  [5818] = 3,
    STATE(25), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(847), 2,
      sym__newline,
      sym__end_of_file,
  [5830] = 3,
    STATE(84), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(849), 2,
      sym__newline,
      sym__end_of_file,
  [5842] = 3,
    STATE(198), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(851), 2,
      sym__dedent,
      sym__end_of_file,
  [5854] = 3,
    STATE(99), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(853), 2,
      sym__dedent,
      sym__end_of_file,
  [5866] = 3,
    STATE(45), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(855), 2,
      sym__newline,
      sym__end_of_file,
  [5878] = 3,
    STATE(107), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(857), 2,
      sym__dedent,
      sym__end_of_file,
  [5890] = 4,
    ACTIONS(540), 1,
      anon_sym_DOT,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(59), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5904] = 4,
    ACTIONS(839), 1,
      anon_sym_COLON,
    ACTIONS(859), 1,
      anon_sym_EQ,
    STATE(276), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5918] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(861), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5928] = 3,
    STATE(77), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(863), 2,
      sym__dedent,
      sym__end_of_file,
  [5940] = 3,
    STATE(51), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(865), 2,
      sym__dedent,
      sym__end_of_file,
  [5952] = 4,
    ACTIONS(828), 1,
      anon_sym_COLON,
    ACTIONS(867), 1,
      anon_sym_EQ,
    STATE(305), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5966] = 3,
    STATE(43), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(869), 2,
      sym__dedent,
      sym__end_of_file,
  [5978] = 4,
    ACTIONS(540), 1,
      anon_sym_DOT,
    ACTIONS(828), 1,
      anon_sym_COLON,
    STATE(68), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5992] = 3,
    STATE(113), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(871), 2,
      sym__dedent,
      sym__end_of_file,
  [6004] = 4,
    ACTIONS(540), 1,
      anon_sym_DOT,
    ACTIONS(828), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6018] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(873), 1,
      anon_sym_Body,
    STATE(384), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6032] = 4,
    ACTIONS(839), 1,
      anon_sym_COLON,
    ACTIONS(875), 1,
      anon_sym_EQ,
    STATE(92), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6046] = 3,
    STATE(52), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(877), 2,
      sym__newline,
      sym__end_of_file,
  [6058] = 3,
    STATE(39), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(879), 2,
      sym__dedent,
      sym__end_of_file,
  [6070] = 4,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6084] = 4,
    ACTIONS(839), 1,
      anon_sym_COLON,
    ACTIONS(885), 1,
      anon_sym_EQ,
    STATE(93), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6098] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(887), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [6108] = 3,
    STATE(196), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(889), 2,
      sym__dedent,
      sym__end_of_file,
  [6120] = 3,
    STATE(213), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(891), 2,
      sym__dedent,
      sym__end_of_file,
  [6132] = 3,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(176), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [6144] = 3,
    STATE(117), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(893), 2,
      sym__dedent,
      sym__end_of_file,
  [6156] = 4,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6170] = 4,
    ACTIONS(839), 1,
      anon_sym_COLON,
    ACTIONS(897), 1,
      anon_sym_EQ,
    STATE(94), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6184] = 4,
    ACTIONS(839), 1,
      anon_sym_COLON,
    ACTIONS(899), 1,
      anon_sym_EQ,
    STATE(95), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6198] = 4,
    ACTIONS(839), 1,
      anon_sym_COLON,
    ACTIONS(901), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6212] = 3,
    STATE(72), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(903), 2,
      sym__dedent,
      sym__end_of_file,
  [6224] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(905), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [6234] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(907), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6244] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(909), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6254] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(911), 3,
      sym__string_start,
      sym_integer,
      sym_identifier,
  [6264] = 3,
    STATE(119), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(913), 2,
      sym__dedent,
      sym__end_of_file,
  [6276] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(915), 1,
      anon_sym_Body,
    STATE(385), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6290] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(917), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6300] = 3,
    ACTIONS(616), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(179), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [6312] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(919), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6322] = 4,
    ACTIONS(839), 1,
      anon_sym_COLON,
    ACTIONS(921), 1,
      anon_sym_EQ,
    STATE(97), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6336] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(923), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6346] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(925), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6356] = 4,
    ACTIONS(839), 1,
      anon_sym_COLON,
    ACTIONS(927), 1,
      anon_sym_EQ,
    STATE(91), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6370] = 3,
    ACTIONS(929), 1,
      sym__newline,
    STATE(16), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6381] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(307), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6392] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6401] = 3,
    ACTIONS(929), 1,
      sym__newline,
    STATE(148), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6412] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(6), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6423] = 3,
    ACTIONS(933), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6434] = 3,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6445] = 3,
    ACTIONS(935), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6456] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(202), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6465] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(194), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6474] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(190), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6483] = 3,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(54), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6494] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(342), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6505] = 3,
    ACTIONS(929), 1,
      sym__newline,
    STATE(15), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6516] = 3,
    ACTIONS(929), 1,
      sym__newline,
    STATE(86), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6527] = 3,
    ACTIONS(929), 1,
      sym__newline,
    STATE(142), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6538] = 3,
    ACTIONS(937), 1,
      anon_sym_DOT,
    ACTIONS(939), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6549] = 3,
    ACTIONS(133), 1,
      anon_sym_description,
    STATE(292), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6560] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(7), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6571] = 3,
    ACTIONS(133), 1,
      anon_sym_description,
    STATE(291), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6582] = 3,
    ACTIONS(828), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6593] = 3,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(273), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6604] = 3,
    ACTIONS(828), 1,
      anon_sym_COLON,
    STATE(83), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6615] = 3,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(294), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6626] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(186), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6635] = 3,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(304), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6646] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(265), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6657] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(5), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6668] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(293), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6679] = 3,
    ACTIONS(133), 1,
      anon_sym_description,
    STATE(270), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6690] = 3,
    ACTIONS(937), 1,
      anon_sym_DOT,
    ACTIONS(941), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6701] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(330), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6712] = 3,
    ACTIONS(943), 1,
      anon_sym_LPAREN,
    STATE(369), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6723] = 3,
    ACTIONS(933), 1,
      anon_sym_COLON,
    STATE(80), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6734] = 3,
    ACTIONS(929), 1,
      sym__newline,
    STATE(75), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6745] = 3,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(262), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6756] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(255), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6767] = 3,
    ACTIONS(935), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6778] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(332), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6789] = 3,
    ACTIONS(929), 1,
      sym__newline,
    STATE(147), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6800] = 3,
    ACTIONS(937), 1,
      anon_sym_DOT,
    ACTIONS(945), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6811] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(10), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6822] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(8), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6833] = 3,
    ACTIONS(931), 1,
      sym__newline,
    STATE(9), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6844] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(835), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6853] = 3,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(271), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6864] = 3,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(50), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6875] = 3,
    ACTIONS(943), 1,
      anon_sym_LPAREN,
    STATE(427), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6886] = 2,
    ACTIONS(947), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6894] = 2,
    ACTIONS(949), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6902] = 2,
    ACTIONS(951), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6910] = 2,
    ACTIONS(953), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6918] = 2,
    ACTIONS(955), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6926] = 2,
    ACTIONS(957), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6934] = 2,
    ACTIONS(959), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6942] = 2,
    ACTIONS(961), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6950] = 2,
    ACTIONS(963), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6958] = 2,
    ACTIONS(965), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6966] = 2,
    ACTIONS(967), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6974] = 2,
    ACTIONS(969), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6982] = 2,
    ACTIONS(971), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6990] = 2,
    ACTIONS(973), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6998] = 2,
    ACTIONS(975), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7006] = 2,
    ACTIONS(977), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7014] = 2,
    ACTIONS(979), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7022] = 2,
    ACTIONS(981), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7030] = 2,
    ACTIONS(983), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7038] = 2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7046] = 2,
    ACTIONS(987), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7054] = 2,
    ACTIONS(989), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7062] = 2,
    ACTIONS(991), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7070] = 2,
    ACTIONS(993), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7078] = 2,
    ACTIONS(995), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7086] = 2,
    ACTIONS(997), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7094] = 2,
    ACTIONS(999), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7102] = 2,
    ACTIONS(1001), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7110] = 2,
    ACTIONS(1003), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7118] = 2,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7126] = 2,
    ACTIONS(1007), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7134] = 2,
    ACTIONS(1009), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7142] = 2,
    ACTIONS(1011), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7150] = 2,
    ACTIONS(1013), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7158] = 2,
    ACTIONS(1015), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7166] = 2,
    ACTIONS(1017), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7174] = 2,
    ACTIONS(1019), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7182] = 2,
    ACTIONS(1021), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7190] = 2,
    ACTIONS(1023), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7198] = 2,
    ACTIONS(1025), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7206] = 2,
    ACTIONS(1027), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7214] = 2,
    ACTIONS(1029), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7222] = 2,
    ACTIONS(1031), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7230] = 2,
    ACTIONS(1033), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7238] = 2,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7246] = 2,
    ACTIONS(1037), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7254] = 2,
    ACTIONS(1039), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7262] = 2,
    ACTIONS(1041), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7270] = 2,
    ACTIONS(1043), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7278] = 2,
    ACTIONS(1045), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7286] = 2,
    ACTIONS(1047), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7294] = 2,
    ACTIONS(1049), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7302] = 2,
    ACTIONS(1051), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7310] = 2,
    ACTIONS(1053), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7318] = 2,
    ACTIONS(1055), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7326] = 2,
    ACTIONS(1057), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7334] = 2,
    ACTIONS(1059), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7342] = 2,
    ACTIONS(1061), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7350] = 2,
    ACTIONS(1063), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7358] = 2,
    ACTIONS(1065), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7366] = 2,
    ACTIONS(1067), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7374] = 2,
    ACTIONS(1069), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7382] = 2,
    ACTIONS(1071), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7390] = 2,
    ACTIONS(1073), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7398] = 2,
    ACTIONS(1075), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7406] = 2,
    ACTIONS(1077), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7414] = 2,
    ACTIONS(1079), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7422] = 2,
    ACTIONS(1081), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7430] = 2,
    ACTIONS(1083), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 209,
  [SMALL_STATE(7)] = 265,
  [SMALL_STATE(8)] = 321,
  [SMALL_STATE(9)] = 377,
  [SMALL_STATE(10)] = 433,
  [SMALL_STATE(11)] = 489,
  [SMALL_STATE(12)] = 545,
  [SMALL_STATE(13)] = 601,
  [SMALL_STATE(14)] = 657,
  [SMALL_STATE(15)] = 713,
  [SMALL_STATE(16)] = 778,
  [SMALL_STATE(17)] = 843,
  [SMALL_STATE(18)] = 908,
  [SMALL_STATE(19)] = 973,
  [SMALL_STATE(20)] = 1035,
  [SMALL_STATE(21)] = 1064,
  [SMALL_STATE(22)] = 1093,
  [SMALL_STATE(23)] = 1122,
  [SMALL_STATE(24)] = 1151,
  [SMALL_STATE(25)] = 1180,
  [SMALL_STATE(26)] = 1208,
  [SMALL_STATE(27)] = 1235,
  [SMALL_STATE(28)] = 1262,
  [SMALL_STATE(29)] = 1289,
  [SMALL_STATE(30)] = 1314,
  [SMALL_STATE(31)] = 1335,
  [SMALL_STATE(32)] = 1358,
  [SMALL_STATE(33)] = 1381,
  [SMALL_STATE(34)] = 1404,
  [SMALL_STATE(35)] = 1427,
  [SMALL_STATE(36)] = 1450,
  [SMALL_STATE(37)] = 1485,
  [SMALL_STATE(38)] = 1508,
  [SMALL_STATE(39)] = 1531,
  [SMALL_STATE(40)] = 1554,
  [SMALL_STATE(41)] = 1577,
  [SMALL_STATE(42)] = 1612,
  [SMALL_STATE(43)] = 1635,
  [SMALL_STATE(44)] = 1655,
  [SMALL_STATE(45)] = 1675,
  [SMALL_STATE(46)] = 1695,
  [SMALL_STATE(47)] = 1715,
  [SMALL_STATE(48)] = 1735,
  [SMALL_STATE(49)] = 1755,
  [SMALL_STATE(50)] = 1775,
  [SMALL_STATE(51)] = 1795,
  [SMALL_STATE(52)] = 1815,
  [SMALL_STATE(53)] = 1835,
  [SMALL_STATE(54)] = 1855,
  [SMALL_STATE(55)] = 1875,
  [SMALL_STATE(56)] = 1895,
  [SMALL_STATE(57)] = 1915,
  [SMALL_STATE(58)] = 1935,
  [SMALL_STATE(59)] = 1957,
  [SMALL_STATE(60)] = 1977,
  [SMALL_STATE(61)] = 1997,
  [SMALL_STATE(62)] = 2017,
  [SMALL_STATE(63)] = 2037,
  [SMALL_STATE(64)] = 2059,
  [SMALL_STATE(65)] = 2081,
  [SMALL_STATE(66)] = 2101,
  [SMALL_STATE(67)] = 2120,
  [SMALL_STATE(68)] = 2139,
  [SMALL_STATE(69)] = 2158,
  [SMALL_STATE(70)] = 2177,
  [SMALL_STATE(71)] = 2196,
  [SMALL_STATE(72)] = 2215,
  [SMALL_STATE(73)] = 2234,
  [SMALL_STATE(74)] = 2253,
  [SMALL_STATE(75)] = 2272,
  [SMALL_STATE(76)] = 2305,
  [SMALL_STATE(77)] = 2324,
  [SMALL_STATE(78)] = 2343,
  [SMALL_STATE(79)] = 2362,
  [SMALL_STATE(80)] = 2381,
  [SMALL_STATE(81)] = 2400,
  [SMALL_STATE(82)] = 2419,
  [SMALL_STATE(83)] = 2438,
  [SMALL_STATE(84)] = 2457,
  [SMALL_STATE(85)] = 2476,
  [SMALL_STATE(86)] = 2495,
  [SMALL_STATE(87)] = 2528,
  [SMALL_STATE(88)] = 2548,
  [SMALL_STATE(89)] = 2568,
  [SMALL_STATE(90)] = 2598,
  [SMALL_STATE(91)] = 2618,
  [SMALL_STATE(92)] = 2638,
  [SMALL_STATE(93)] = 2658,
  [SMALL_STATE(94)] = 2678,
  [SMALL_STATE(95)] = 2698,
  [SMALL_STATE(96)] = 2718,
  [SMALL_STATE(97)] = 2738,
  [SMALL_STATE(98)] = 2758,
  [SMALL_STATE(99)] = 2778,
  [SMALL_STATE(100)] = 2798,
  [SMALL_STATE(101)] = 2818,
  [SMALL_STATE(102)] = 2838,
  [SMALL_STATE(103)] = 2858,
  [SMALL_STATE(104)] = 2878,
  [SMALL_STATE(105)] = 2898,
  [SMALL_STATE(106)] = 2918,
  [SMALL_STATE(107)] = 2938,
  [SMALL_STATE(108)] = 2958,
  [SMALL_STATE(109)] = 2978,
  [SMALL_STATE(110)] = 2998,
  [SMALL_STATE(111)] = 3018,
  [SMALL_STATE(112)] = 3038,
  [SMALL_STATE(113)] = 3058,
  [SMALL_STATE(114)] = 3078,
  [SMALL_STATE(115)] = 3098,
  [SMALL_STATE(116)] = 3128,
  [SMALL_STATE(117)] = 3148,
  [SMALL_STATE(118)] = 3168,
  [SMALL_STATE(119)] = 3188,
  [SMALL_STATE(120)] = 3208,
  [SMALL_STATE(121)] = 3235,
  [SMALL_STATE(122)] = 3262,
  [SMALL_STATE(123)] = 3289,
  [SMALL_STATE(124)] = 3316,
  [SMALL_STATE(125)] = 3343,
  [SMALL_STATE(126)] = 3370,
  [SMALL_STATE(127)] = 3397,
  [SMALL_STATE(128)] = 3423,
  [SMALL_STATE(129)] = 3447,
  [SMALL_STATE(130)] = 3473,
  [SMALL_STATE(131)] = 3499,
  [SMALL_STATE(132)] = 3523,
  [SMALL_STATE(133)] = 3549,
  [SMALL_STATE(134)] = 3575,
  [SMALL_STATE(135)] = 3601,
  [SMALL_STATE(136)] = 3625,
  [SMALL_STATE(137)] = 3649,
  [SMALL_STATE(138)] = 3675,
  [SMALL_STATE(139)] = 3701,
  [SMALL_STATE(140)] = 3727,
  [SMALL_STATE(141)] = 3751,
  [SMALL_STATE(142)] = 3775,
  [SMALL_STATE(143)] = 3800,
  [SMALL_STATE(144)] = 3821,
  [SMALL_STATE(145)] = 3842,
  [SMALL_STATE(146)] = 3865,
  [SMALL_STATE(147)] = 3888,
  [SMALL_STATE(148)] = 3913,
  [SMALL_STATE(149)] = 3938,
  [SMALL_STATE(150)] = 3958,
  [SMALL_STATE(151)] = 3978,
  [SMALL_STATE(152)] = 3998,
  [SMALL_STATE(153)] = 4018,
  [SMALL_STATE(154)] = 4038,
  [SMALL_STATE(155)] = 4058,
  [SMALL_STATE(156)] = 4078,
  [SMALL_STATE(157)] = 4098,
  [SMALL_STATE(158)] = 4118,
  [SMALL_STATE(159)] = 4138,
  [SMALL_STATE(160)] = 4158,
  [SMALL_STATE(161)] = 4178,
  [SMALL_STATE(162)] = 4198,
  [SMALL_STATE(163)] = 4218,
  [SMALL_STATE(164)] = 4238,
  [SMALL_STATE(165)] = 4258,
  [SMALL_STATE(166)] = 4278,
  [SMALL_STATE(167)] = 4298,
  [SMALL_STATE(168)] = 4318,
  [SMALL_STATE(169)] = 4338,
  [SMALL_STATE(170)] = 4358,
  [SMALL_STATE(171)] = 4378,
  [SMALL_STATE(172)] = 4398,
  [SMALL_STATE(173)] = 4418,
  [SMALL_STATE(174)] = 4439,
  [SMALL_STATE(175)] = 4458,
  [SMALL_STATE(176)] = 4477,
  [SMALL_STATE(177)] = 4496,
  [SMALL_STATE(178)] = 4515,
  [SMALL_STATE(179)] = 4536,
  [SMALL_STATE(180)] = 4555,
  [SMALL_STATE(181)] = 4576,
  [SMALL_STATE(182)] = 4597,
  [SMALL_STATE(183)] = 4616,
  [SMALL_STATE(184)] = 4633,
  [SMALL_STATE(185)] = 4652,
  [SMALL_STATE(186)] = 4671,
  [SMALL_STATE(187)] = 4692,
  [SMALL_STATE(188)] = 4709,
  [SMALL_STATE(189)] = 4728,
  [SMALL_STATE(190)] = 4749,
  [SMALL_STATE(191)] = 4768,
  [SMALL_STATE(192)] = 4789,
  [SMALL_STATE(193)] = 4810,
  [SMALL_STATE(194)] = 4829,
  [SMALL_STATE(195)] = 4848,
  [SMALL_STATE(196)] = 4861,
  [SMALL_STATE(197)] = 4873,
  [SMALL_STATE(198)] = 4885,
  [SMALL_STATE(199)] = 4897,
  [SMALL_STATE(200)] = 4909,
  [SMALL_STATE(201)] = 4921,
  [SMALL_STATE(202)] = 4937,
  [SMALL_STATE(203)] = 4949,
  [SMALL_STATE(204)] = 4961,
  [SMALL_STATE(205)] = 4973,
  [SMALL_STATE(206)] = 4993,
  [SMALL_STATE(207)] = 5005,
  [SMALL_STATE(208)] = 5017,
  [SMALL_STATE(209)] = 5033,
  [SMALL_STATE(210)] = 5049,
  [SMALL_STATE(211)] = 5069,
  [SMALL_STATE(212)] = 5085,
  [SMALL_STATE(213)] = 5097,
  [SMALL_STATE(214)] = 5109,
  [SMALL_STATE(215)] = 5125,
  [SMALL_STATE(216)] = 5137,
  [SMALL_STATE(217)] = 5155,
  [SMALL_STATE(218)] = 5171,
  [SMALL_STATE(219)] = 5183,
  [SMALL_STATE(220)] = 5195,
  [SMALL_STATE(221)] = 5207,
  [SMALL_STATE(222)] = 5219,
  [SMALL_STATE(223)] = 5231,
  [SMALL_STATE(224)] = 5243,
  [SMALL_STATE(225)] = 5255,
  [SMALL_STATE(226)] = 5267,
  [SMALL_STATE(227)] = 5279,
  [SMALL_STATE(228)] = 5291,
  [SMALL_STATE(229)] = 5303,
  [SMALL_STATE(230)] = 5315,
  [SMALL_STATE(231)] = 5327,
  [SMALL_STATE(232)] = 5339,
  [SMALL_STATE(233)] = 5351,
  [SMALL_STATE(234)] = 5363,
  [SMALL_STATE(235)] = 5378,
  [SMALL_STATE(236)] = 5393,
  [SMALL_STATE(237)] = 5408,
  [SMALL_STATE(238)] = 5423,
  [SMALL_STATE(239)] = 5434,
  [SMALL_STATE(240)] = 5449,
  [SMALL_STATE(241)] = 5464,
  [SMALL_STATE(242)] = 5479,
  [SMALL_STATE(243)] = 5494,
  [SMALL_STATE(244)] = 5509,
  [SMALL_STATE(245)] = 5522,
  [SMALL_STATE(246)] = 5535,
  [SMALL_STATE(247)] = 5550,
  [SMALL_STATE(248)] = 5561,
  [SMALL_STATE(249)] = 5574,
  [SMALL_STATE(250)] = 5585,
  [SMALL_STATE(251)] = 5600,
  [SMALL_STATE(252)] = 5611,
  [SMALL_STATE(253)] = 5622,
  [SMALL_STATE(254)] = 5637,
  [SMALL_STATE(255)] = 5648,
  [SMALL_STATE(256)] = 5665,
  [SMALL_STATE(257)] = 5676,
  [SMALL_STATE(258)] = 5689,
  [SMALL_STATE(259)] = 5704,
  [SMALL_STATE(260)] = 5714,
  [SMALL_STATE(261)] = 5728,
  [SMALL_STATE(262)] = 5742,
  [SMALL_STATE(263)] = 5754,
  [SMALL_STATE(264)] = 5768,
  [SMALL_STATE(265)] = 5782,
  [SMALL_STATE(266)] = 5794,
  [SMALL_STATE(267)] = 5806,
  [SMALL_STATE(268)] = 5818,
  [SMALL_STATE(269)] = 5830,
  [SMALL_STATE(270)] = 5842,
  [SMALL_STATE(271)] = 5854,
  [SMALL_STATE(272)] = 5866,
  [SMALL_STATE(273)] = 5878,
  [SMALL_STATE(274)] = 5890,
  [SMALL_STATE(275)] = 5904,
  [SMALL_STATE(276)] = 5918,
  [SMALL_STATE(277)] = 5928,
  [SMALL_STATE(278)] = 5940,
  [SMALL_STATE(279)] = 5952,
  [SMALL_STATE(280)] = 5966,
  [SMALL_STATE(281)] = 5978,
  [SMALL_STATE(282)] = 5992,
  [SMALL_STATE(283)] = 6004,
  [SMALL_STATE(284)] = 6018,
  [SMALL_STATE(285)] = 6032,
  [SMALL_STATE(286)] = 6046,
  [SMALL_STATE(287)] = 6058,
  [SMALL_STATE(288)] = 6070,
  [SMALL_STATE(289)] = 6084,
  [SMALL_STATE(290)] = 6098,
  [SMALL_STATE(291)] = 6108,
  [SMALL_STATE(292)] = 6120,
  [SMALL_STATE(293)] = 6132,
  [SMALL_STATE(294)] = 6144,
  [SMALL_STATE(295)] = 6156,
  [SMALL_STATE(296)] = 6170,
  [SMALL_STATE(297)] = 6184,
  [SMALL_STATE(298)] = 6198,
  [SMALL_STATE(299)] = 6212,
  [SMALL_STATE(300)] = 6224,
  [SMALL_STATE(301)] = 6234,
  [SMALL_STATE(302)] = 6244,
  [SMALL_STATE(303)] = 6254,
  [SMALL_STATE(304)] = 6264,
  [SMALL_STATE(305)] = 6276,
  [SMALL_STATE(306)] = 6290,
  [SMALL_STATE(307)] = 6300,
  [SMALL_STATE(308)] = 6312,
  [SMALL_STATE(309)] = 6322,
  [SMALL_STATE(310)] = 6336,
  [SMALL_STATE(311)] = 6346,
  [SMALL_STATE(312)] = 6356,
  [SMALL_STATE(313)] = 6370,
  [SMALL_STATE(314)] = 6381,
  [SMALL_STATE(315)] = 6392,
  [SMALL_STATE(316)] = 6401,
  [SMALL_STATE(317)] = 6412,
  [SMALL_STATE(318)] = 6423,
  [SMALL_STATE(319)] = 6434,
  [SMALL_STATE(320)] = 6445,
  [SMALL_STATE(321)] = 6456,
  [SMALL_STATE(322)] = 6465,
  [SMALL_STATE(323)] = 6474,
  [SMALL_STATE(324)] = 6483,
  [SMALL_STATE(325)] = 6494,
  [SMALL_STATE(326)] = 6505,
  [SMALL_STATE(327)] = 6516,
  [SMALL_STATE(328)] = 6527,
  [SMALL_STATE(329)] = 6538,
  [SMALL_STATE(330)] = 6549,
  [SMALL_STATE(331)] = 6560,
  [SMALL_STATE(332)] = 6571,
  [SMALL_STATE(333)] = 6582,
  [SMALL_STATE(334)] = 6593,
  [SMALL_STATE(335)] = 6604,
  [SMALL_STATE(336)] = 6615,
  [SMALL_STATE(337)] = 6626,
  [SMALL_STATE(338)] = 6635,
  [SMALL_STATE(339)] = 6646,
  [SMALL_STATE(340)] = 6657,
  [SMALL_STATE(341)] = 6668,
  [SMALL_STATE(342)] = 6679,
  [SMALL_STATE(343)] = 6690,
  [SMALL_STATE(344)] = 6701,
  [SMALL_STATE(345)] = 6712,
  [SMALL_STATE(346)] = 6723,
  [SMALL_STATE(347)] = 6734,
  [SMALL_STATE(348)] = 6745,
  [SMALL_STATE(349)] = 6756,
  [SMALL_STATE(350)] = 6767,
  [SMALL_STATE(351)] = 6778,
  [SMALL_STATE(352)] = 6789,
  [SMALL_STATE(353)] = 6800,
  [SMALL_STATE(354)] = 6811,
  [SMALL_STATE(355)] = 6822,
  [SMALL_STATE(356)] = 6833,
  [SMALL_STATE(357)] = 6844,
  [SMALL_STATE(358)] = 6853,
  [SMALL_STATE(359)] = 6864,
  [SMALL_STATE(360)] = 6875,
  [SMALL_STATE(361)] = 6886,
  [SMALL_STATE(362)] = 6894,
  [SMALL_STATE(363)] = 6902,
  [SMALL_STATE(364)] = 6910,
  [SMALL_STATE(365)] = 6918,
  [SMALL_STATE(366)] = 6926,
  [SMALL_STATE(367)] = 6934,
  [SMALL_STATE(368)] = 6942,
  [SMALL_STATE(369)] = 6950,
  [SMALL_STATE(370)] = 6958,
  [SMALL_STATE(371)] = 6966,
  [SMALL_STATE(372)] = 6974,
  [SMALL_STATE(373)] = 6982,
  [SMALL_STATE(374)] = 6990,
  [SMALL_STATE(375)] = 6998,
  [SMALL_STATE(376)] = 7006,
  [SMALL_STATE(377)] = 7014,
  [SMALL_STATE(378)] = 7022,
  [SMALL_STATE(379)] = 7030,
  [SMALL_STATE(380)] = 7038,
  [SMALL_STATE(381)] = 7046,
  [SMALL_STATE(382)] = 7054,
  [SMALL_STATE(383)] = 7062,
  [SMALL_STATE(384)] = 7070,
  [SMALL_STATE(385)] = 7078,
  [SMALL_STATE(386)] = 7086,
  [SMALL_STATE(387)] = 7094,
  [SMALL_STATE(388)] = 7102,
  [SMALL_STATE(389)] = 7110,
  [SMALL_STATE(390)] = 7118,
  [SMALL_STATE(391)] = 7126,
  [SMALL_STATE(392)] = 7134,
  [SMALL_STATE(393)] = 7142,
  [SMALL_STATE(394)] = 7150,
  [SMALL_STATE(395)] = 7158,
  [SMALL_STATE(396)] = 7166,
  [SMALL_STATE(397)] = 7174,
  [SMALL_STATE(398)] = 7182,
  [SMALL_STATE(399)] = 7190,
  [SMALL_STATE(400)] = 7198,
  [SMALL_STATE(401)] = 7206,
  [SMALL_STATE(402)] = 7214,
  [SMALL_STATE(403)] = 7222,
  [SMALL_STATE(404)] = 7230,
  [SMALL_STATE(405)] = 7238,
  [SMALL_STATE(406)] = 7246,
  [SMALL_STATE(407)] = 7254,
  [SMALL_STATE(408)] = 7262,
  [SMALL_STATE(409)] = 7270,
  [SMALL_STATE(410)] = 7278,
  [SMALL_STATE(411)] = 7286,
  [SMALL_STATE(412)] = 7294,
  [SMALL_STATE(413)] = 7302,
  [SMALL_STATE(414)] = 7310,
  [SMALL_STATE(415)] = 7318,
  [SMALL_STATE(416)] = 7326,
  [SMALL_STATE(417)] = 7334,
  [SMALL_STATE(418)] = 7342,
  [SMALL_STATE(419)] = 7350,
  [SMALL_STATE(420)] = 7358,
  [SMALL_STATE(421)] = 7366,
  [SMALL_STATE(422)] = 7374,
  [SMALL_STATE(423)] = 7382,
  [SMALL_STATE(424)] = 7390,
  [SMALL_STATE(425)] = 7398,
  [SMALL_STATE(426)] = 7406,
  [SMALL_STATE(427)] = 7414,
  [SMALL_STATE(428)] = 7422,
  [SMALL_STATE(429)] = 7430,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 1),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(424),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(398),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(400),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(425),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(428),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(360),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(266),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(377),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(365),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(363),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(362),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(376),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(345),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(309),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(298),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(297),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(296),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(289),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(285),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(312),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(393),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(392),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_expression, 3, .production_id = 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_expression, 3, .production_id = 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_instance, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 11),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 11),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 25),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 25),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 37),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 37),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6, .production_id = 10),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 8, .production_id = 23),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 8, .production_id = 22),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 3, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 3, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 11, .production_id = 43),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_inter, 7),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 14),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3, .production_id = 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 9, .production_id = 31),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 12),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_result, 3, .production_id = 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 6),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 7, .production_id = 13),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3, .production_id = 9),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 20),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 20),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 35),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 35),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 38),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 38),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 30),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 30),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 29),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 29),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 28),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 28),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 27),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 27),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 26),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 26),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 4, .production_id = 36),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 4, .production_id = 36),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 2, .production_id = 24),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 2, .production_id = 24),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 42),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 42),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 11, .production_id = 51),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 11, .production_id = 51),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 41),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 41),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 40),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 40),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 10, .production_id = 50),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 10, .production_id = 50),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 35),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 35),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 21),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 21),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 39),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 39),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 19),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 19),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 9, .production_id = 49),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 9, .production_id = 49),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 18),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 18),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 17),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 17),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 34),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 34),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 8, .production_id = 48),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 8, .production_id = 48),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 35),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 5, .production_id = 35),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 45),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 45),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 7, .production_id = 47),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 7, .production_id = 47),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 45),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 7, .production_id = 45),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 6, .production_id = 46),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 6, .production_id = 46),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(166),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(156),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(183),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(383),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(361),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(380),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(195),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(168),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(209),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(388),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(387),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(386),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(187),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 45),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 35),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 45),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 35),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 45),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(201),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 35),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 35),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 45),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 35),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(383),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(216),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 45),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 45),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(275),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation2, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(379),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 35),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 34),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 35),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 45),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 34),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 35),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 34),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 34),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 35),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 35),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 34),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 35),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 45),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 34),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 35),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 45),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2), SHIFT_REPEAT(405),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 33),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 44),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 7),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 34),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 35),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 35),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 45),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 35),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 45),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [957] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 4),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 3),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
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
