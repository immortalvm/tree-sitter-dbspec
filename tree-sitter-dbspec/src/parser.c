#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 432
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 53

enum {
  sym_identifier = 1,
  anon_sym_Parameters = 2,
  anon_sym_COLON = 3,
  anon_sym_Log = 4,
  anon_sym_Assert = 5,
  anon_sym_Interpolation = 6,
  anon_sym_symbol = 7,
  anon_sym_EQ = 8,
  anon_sym_SQUOTE = 9,
  anon_sym_Set = 10,
  aux_sym_execute_using_token1 = 11,
  aux_sym_script_result_token1 = 12,
  aux_sym_connection_token1 = 13,
  anon_sym_with = 14,
  aux_sym_execute_sql_token1 = 15,
  aux_sym_query_token1 = 16,
  anon_sym_Output = 17,
  anon_sym_DOT = 18,
  anon_sym_to = 19,
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
  anon_sym_If = 45,
  anon_sym_Else = 46,
  anon_sym_EQ_EQ = 47,
  anon_sym_BANG_EQ = 48,
  anon_sym_LT = 49,
  anon_sym_GT = 50,
  anon_sym_LT_EQ = 51,
  anon_sym_GT_EQ = 52,
  anon_sym_stripped = 53,
  anon_sym_size = 54,
  anon_sym_as_integer = 55,
  anon_sym_BSLASH = 56,
  aux_sym_escape_sequence_token1 = 57,
  aux_sym_escape_sequence_token2 = 58,
  anon_sym_DOLLAR = 59,
  sym_integer = 60,
  sym_short_description = 61,
  aux_sym__short_descr_token1 = 62,
  sym__newline = 63,
  sym__indent = 64,
  sym__dedent = 65,
  sym__inter_start = 66,
  sym__inter_start2 = 67,
  sym__inter_end = 68,
  sym__raw = 69,
  sym__string_start = 70,
  sym__string_content = 71,
  sym__string_end = 72,
  sym__comment = 73,
  sym__end_of_file = 74,
  sym__skip = 75,
  sym__set_inter = 76,
  sym_source_file = 77,
  sym_parameters = 78,
  sym_parameter = 79,
  sym__statement = 80,
  sym_log = 81,
  sym_assert = 82,
  sym_set_inter = 83,
  sym_set = 84,
  sym__expression = 85,
  sym_execute_using = 86,
  sym_script_result = 87,
  sym_connection = 88,
  sym_execute_sql = 89,
  sym_query = 90,
  sym_siard_output = 91,
  sym_siard_metadata = 92,
  sym__siard_dbname = 93,
  sym__siard_description = 94,
  sym__siard_archiver = 95,
  sym__siard_archiverContact = 96,
  sym__siard_dataOwner = 97,
  sym__siard_dataOriginTimespan = 98,
  sym__siard_lobFolder = 99,
  sym_siard_schema = 100,
  sym_siard_type = 101,
  sym_siard_table = 102,
  sym_siard_column = 103,
  sym_siard_field = 104,
  sym_siard_key = 105,
  sym_siard_check = 106,
  sym_siard_view = 107,
  sym_command_declaration = 108,
  sym_for_loop = 109,
  sym_for_variables = 110,
  sym_conditional = 111,
  sym_statement_block = 112,
  sym__boolean_expression = 113,
  sym_comparison = 114,
  sym_comparison_operator = 115,
  sym__basic_expression = 116,
  sym_variable_instance = 117,
  sym_dot_expression = 118,
  sym_dot_operator = 119,
  sym_string = 120,
  sym_string_content = 121,
  sym_escape_sequence = 122,
  sym__quoted_dollar = 123,
  sym__short_descr = 124,
  sym__nl = 125,
  sym__ni = 126,
  sym__ded = 127,
  sym_interpolation = 128,
  sym_interpolation2 = 129,
  sym_key_value_pairs = 130,
  sym_key_value_pair = 131,
  sym_raw = 132,
  sym_raw_content = 133,
  aux_sym_source_file_repeat1 = 134,
  aux_sym_parameters_repeat1 = 135,
  aux_sym_siard_metadata_repeat1 = 136,
  aux_sym_siard_schema_repeat1 = 137,
  aux_sym_siard_table_repeat1 = 138,
  aux_sym_siard_column_repeat1 = 139,
  aux_sym_siard_view_repeat1 = 140,
  aux_sym_for_variables_repeat1 = 141,
  aux_sym_string_repeat1 = 142,
  aux_sym_string_content_repeat1 = 143,
  aux_sym_key_value_pairs_repeat1 = 144,
  aux_sym_raw_repeat1 = 145,
  aux_sym_raw_repeat2 = 146,
  aux_sym_raw_content_repeat1 = 147,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_Parameters] = "Parameters",
  [anon_sym_COLON] = ":",
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
  [anon_sym_DOLLAR] = "string_content",
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
  [sym__quoted_dollar] = "_quoted_dollar",
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
  [aux_sym_raw_repeat2] = "raw_repeat2",
  [aux_sym_raw_content_repeat1] = "raw_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_Parameters] = anon_sym_Parameters,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [anon_sym_DOLLAR] = sym_string_content,
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
  [sym__quoted_dollar] = sym__quoted_dollar,
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
  [aux_sym_raw_repeat2] = aux_sym_raw_repeat2,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
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
  [sym__quoted_dollar] = {
    .visible = false,
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
  [aux_sym_raw_repeat2] = {
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
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 2},
  [8] = {.index = 15, .length = 2},
  [9] = {.index = 17, .length = 1},
  [10] = {.index = 18, .length = 3},
  [11] = {.index = 21, .length = 3},
  [12] = {.index = 24, .length = 1},
  [13] = {.index = 25, .length = 3},
  [14] = {.index = 28, .length = 2},
  [15] = {.index = 30, .length = 3},
  [17] = {.index = 33, .length = 2},
  [18] = {.index = 35, .length = 1},
  [19] = {.index = 36, .length = 1},
  [20] = {.index = 37, .length = 1},
  [21] = {.index = 38, .length = 1},
  [22] = {.index = 39, .length = 1},
  [23] = {.index = 40, .length = 1},
  [24] = {.index = 41, .length = 1},
  [25] = {.index = 42, .length = 2},
  [26] = {.index = 44, .length = 1},
  [27] = {.index = 45, .length = 1},
  [28] = {.index = 46, .length = 1},
  [29] = {.index = 47, .length = 1},
  [30] = {.index = 48, .length = 1},
  [31] = {.index = 49, .length = 1},
  [32] = {.index = 50, .length = 1},
  [33] = {.index = 51, .length = 9},
  [34] = {.index = 60, .length = 14},
  [35] = {.index = 74, .length = 2},
  [36] = {.index = 76, .length = 2},
  [37] = {.index = 78, .length = 1},
  [38] = {.index = 79, .length = 1},
  [39] = {.index = 80, .length = 1},
  [40] = {.index = 81, .length = 1},
  [41] = {.index = 82, .length = 1},
  [42] = {.index = 83, .length = 1},
  [43] = {.index = 84, .length = 1},
  [44] = {.index = 85, .length = 1},
  [45] = {.index = 86, .length = 2},
  [46] = {.index = 88, .length = 2},
  [47] = {.index = 90, .length = 1},
  [48] = {.index = 91, .length = 2},
  [49] = {.index = 93, .length = 2},
  [50] = {.index = 95, .length = 3},
  [51] = {.index = 98, .length = 2},
  [52] = {.index = 100, .length = 3},
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
    {field_condition, 1},
    {field_then, 2},
  [8] =
    {field_left, 0},
    {field_right, 2},
  [10] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [13] =
    {field_name, 1},
    {field_value, 3},
  [15] =
    {field_description, 1, .inherited = true},
    {field_name, 0},
  [17] =
    {field_name, 0},
  [18] =
    {field_body, 4},
    {field_result_set, 3},
    {field_variables, 1},
  [21] =
    {field_condition, 1},
    {field_else, 4},
    {field_then, 2},
  [24] =
    {field_url, 1},
  [25] =
    {field_description, 0},
    {field_description, 1},
    {field_description, 2},
  [28] =
    {field_properties, 3},
    {field_url, 1},
  [30] =
    {field_connection, 1},
    {field_file, 5},
    {field_name, 3},
  [33] =
    {field_properties, 4},
    {field_url, 1},
  [35] =
    {field_dbname, 0, .inherited = true},
  [36] =
    {field_description, 0, .inherited = true},
  [37] =
    {field_archiver, 0, .inherited = true},
  [38] =
    {field_archiverContact, 0, .inherited = true},
  [39] =
    {field_dataOwner, 0, .inherited = true},
  [40] =
    {field_dataOriginTimespan, 0, .inherited = true},
  [41] =
    {field_lobFolder, 0, .inherited = true},
  [42] =
    {field_connection, 2},
    {field_name, 4},
  [44] =
    {field_dbname, 1},
  [45] =
    {field_description, 1},
  [46] =
    {field_archiver, 1},
  [47] =
    {field_archiverContact, 1},
  [48] =
    {field_dataOwner, 1},
  [49] =
    {field_dataOriginTimespan, 1},
  [50] =
    {field_lobFolder, 1},
  [51] =
    {field_archiver, 7, .inherited = true},
    {field_archiverContact, 7, .inherited = true},
    {field_connection, 2},
    {field_dataOriginTimespan, 7, .inherited = true},
    {field_dataOwner, 7, .inherited = true},
    {field_dbname, 7, .inherited = true},
    {field_description, 7, .inherited = true},
    {field_lobFolder, 7, .inherited = true},
    {field_name, 4},
  [60] =
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
  [74] =
    {field_key, 0},
    {field_value, 1},
  [76] =
    {field_description, 2, .inherited = true},
    {field_name, 1},
  [78] =
    {field_name, 1},
  [79] =
    {field_dbname, 2},
  [80] =
    {field_description, 2},
  [81] =
    {field_archiver, 2},
  [82] =
    {field_archiverContact, 2},
  [83] =
    {field_dataOwner, 2},
  [84] =
    {field_dataOriginTimespan, 2},
  [85] =
    {field_lobFolder, 2},
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
  [16] = {
    [2] = sym_raw_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_raw_repeat1, 2,
    aux_sym_raw_repeat1,
    sym_raw_content,
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
  [7] = 5,
  [8] = 6,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 20,
  [30] = 22,
  [31] = 24,
  [32] = 21,
  [33] = 2,
  [34] = 23,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 38,
  [43] = 43,
  [44] = 3,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 37,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 35,
  [59] = 59,
  [60] = 39,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 36,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 46,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 66,
  [75] = 63,
  [76] = 52,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 47,
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
  [95] = 67,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 51,
  [102] = 69,
  [103] = 53,
  [104] = 65,
  [105] = 105,
  [106] = 50,
  [107] = 55,
  [108] = 70,
  [109] = 56,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 71,
  [115] = 115,
  [116] = 62,
  [117] = 61,
  [118] = 118,
  [119] = 119,
  [120] = 73,
  [121] = 121,
  [122] = 57,
  [123] = 123,
  [124] = 124,
  [125] = 123,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 128,
  [130] = 130,
  [131] = 123,
  [132] = 132,
  [133] = 132,
  [134] = 134,
  [135] = 123,
  [136] = 136,
  [137] = 132,
  [138] = 132,
  [139] = 139,
  [140] = 140,
  [141] = 126,
  [142] = 142,
  [143] = 143,
  [144] = 142,
  [145] = 145,
  [146] = 145,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 149,
  [154] = 154,
  [155] = 155,
  [156] = 155,
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
  [169] = 163,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 159,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 161,
  [178] = 178,
  [179] = 174,
  [180] = 172,
  [181] = 171,
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
  [204] = 196,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 4,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 205,
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
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 21,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 22,
  [250] = 24,
  [251] = 251,
  [252] = 252,
  [253] = 192,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 20,
  [260] = 256,
  [261] = 251,
  [262] = 258,
  [263] = 251,
  [264] = 251,
  [265] = 265,
  [266] = 266,
  [267] = 23,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 272,
  [277] = 277,
  [278] = 278,
  [279] = 271,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 157,
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
  [295] = 273,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 302,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 281,
  [318] = 296,
  [319] = 274,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 24,
  [326] = 326,
  [327] = 23,
  [328] = 328,
  [329] = 329,
  [330] = 21,
  [331] = 20,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 329,
  [344] = 22,
  [345] = 345,
  [346] = 346,
  [347] = 336,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 341,
  [352] = 191,
  [353] = 353,
  [354] = 354,
  [355] = 322,
  [356] = 356,
  [357] = 326,
  [358] = 358,
  [359] = 328,
  [360] = 339,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 342,
  [365] = 365,
  [366] = 346,
  [367] = 340,
  [368] = 362,
  [369] = 356,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 378,
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
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 401,
  [405] = 405,
  [406] = 398,
  [407] = 407,
  [408] = 408,
  [409] = 385,
  [410] = 410,
  [411] = 392,
  [412] = 412,
  [413] = 413,
  [414] = 395,
  [415] = 396,
  [416] = 388,
  [417] = 394,
  [418] = 418,
  [419] = 372,
  [420] = 371,
  [421] = 379,
  [422] = 383,
  [423] = 399,
  [424] = 424,
  [425] = 373,
  [426] = 376,
  [427] = 384,
  [428] = 402,
  [429] = 393,
  [430] = 375,
  [431] = 389,
};

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

static inline bool sym_identifier_character_set_3(int32_t c) {
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
      if (eof) ADVANCE(27);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(81);
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(52);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(47);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_execute_using_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_script_result_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_connection_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_execute_sql_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_query_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (lookahead == 'e') ADVANCE(71);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(2);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(3);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(73);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(70);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(72);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(68);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(56);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(62);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(66);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(67);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(75);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(55);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(64);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(63);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(65);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(74);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(61);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_short_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__short_descr_token1);
      if (lookahead == ' ') ADVANCE(84);
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
  [1] = {.lex_state = 26, .external_lex_state = 2},
  [2] = {.lex_state = 26, .external_lex_state = 3},
  [3] = {.lex_state = 26, .external_lex_state = 3},
  [4] = {.lex_state = 26, .external_lex_state = 3},
  [5] = {.lex_state = 26, .external_lex_state = 3},
  [6] = {.lex_state = 26, .external_lex_state = 3},
  [7] = {.lex_state = 26, .external_lex_state = 3},
  [8] = {.lex_state = 26, .external_lex_state = 3},
  [9] = {.lex_state = 26, .external_lex_state = 3},
  [10] = {.lex_state = 26, .external_lex_state = 2},
  [11] = {.lex_state = 26, .external_lex_state = 2},
  [12] = {.lex_state = 26, .external_lex_state = 2},
  [13] = {.lex_state = 26, .external_lex_state = 2},
  [14] = {.lex_state = 5, .external_lex_state = 3},
  [15] = {.lex_state = 5, .external_lex_state = 3},
  [16] = {.lex_state = 5, .external_lex_state = 3},
  [17] = {.lex_state = 5, .external_lex_state = 3},
  [18] = {.lex_state = 5, .external_lex_state = 3},
  [19] = {.lex_state = 5, .external_lex_state = 3},
  [20] = {.lex_state = 26, .external_lex_state = 2},
  [21] = {.lex_state = 26, .external_lex_state = 2},
  [22] = {.lex_state = 26, .external_lex_state = 2},
  [23] = {.lex_state = 26, .external_lex_state = 2},
  [24] = {.lex_state = 26, .external_lex_state = 2},
  [25] = {.lex_state = 5, .external_lex_state = 3},
  [26] = {.lex_state = 5, .external_lex_state = 3},
  [27] = {.lex_state = 5, .external_lex_state = 4},
  [28] = {.lex_state = 5, .external_lex_state = 4},
  [29] = {.lex_state = 26, .external_lex_state = 3},
  [30] = {.lex_state = 26, .external_lex_state = 3},
  [31] = {.lex_state = 26, .external_lex_state = 3},
  [32] = {.lex_state = 26, .external_lex_state = 3},
  [33] = {.lex_state = 26, .external_lex_state = 2},
  [34] = {.lex_state = 26, .external_lex_state = 3},
  [35] = {.lex_state = 26, .external_lex_state = 3},
  [36] = {.lex_state = 26, .external_lex_state = 3},
  [37] = {.lex_state = 26, .external_lex_state = 3},
  [38] = {.lex_state = 26, .external_lex_state = 3},
  [39] = {.lex_state = 26, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 5},
  [41] = {.lex_state = 0, .external_lex_state = 5},
  [42] = {.lex_state = 26, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 5},
  [44] = {.lex_state = 26, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 5},
  [46] = {.lex_state = 26, .external_lex_state = 3},
  [47] = {.lex_state = 26, .external_lex_state = 3},
  [48] = {.lex_state = 26, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 5},
  [50] = {.lex_state = 26, .external_lex_state = 3},
  [51] = {.lex_state = 26, .external_lex_state = 3},
  [52] = {.lex_state = 26, .external_lex_state = 3},
  [53] = {.lex_state = 26, .external_lex_state = 3},
  [54] = {.lex_state = 26, .external_lex_state = 2},
  [55] = {.lex_state = 26, .external_lex_state = 3},
  [56] = {.lex_state = 26, .external_lex_state = 3},
  [57] = {.lex_state = 26, .external_lex_state = 3},
  [58] = {.lex_state = 26, .external_lex_state = 2},
  [59] = {.lex_state = 5, .external_lex_state = 3},
  [60] = {.lex_state = 26, .external_lex_state = 2},
  [61] = {.lex_state = 26, .external_lex_state = 3},
  [62] = {.lex_state = 26, .external_lex_state = 3},
  [63] = {.lex_state = 26, .external_lex_state = 3},
  [64] = {.lex_state = 26, .external_lex_state = 2},
  [65] = {.lex_state = 26, .external_lex_state = 3},
  [66] = {.lex_state = 26, .external_lex_state = 3},
  [67] = {.lex_state = 26, .external_lex_state = 3},
  [68] = {.lex_state = 26, .external_lex_state = 2},
  [69] = {.lex_state = 26, .external_lex_state = 3},
  [70] = {.lex_state = 26, .external_lex_state = 3},
  [71] = {.lex_state = 26, .external_lex_state = 3},
  [72] = {.lex_state = 5, .external_lex_state = 3},
  [73] = {.lex_state = 26, .external_lex_state = 3},
  [74] = {.lex_state = 26, .external_lex_state = 2},
  [75] = {.lex_state = 26, .external_lex_state = 2},
  [76] = {.lex_state = 26, .external_lex_state = 2},
  [77] = {.lex_state = 5, .external_lex_state = 3},
  [78] = {.lex_state = 5, .external_lex_state = 3},
  [79] = {.lex_state = 5, .external_lex_state = 3},
  [80] = {.lex_state = 5, .external_lex_state = 3},
  [81] = {.lex_state = 26, .external_lex_state = 2},
  [82] = {.lex_state = 5, .external_lex_state = 3},
  [83] = {.lex_state = 5, .external_lex_state = 3},
  [84] = {.lex_state = 5, .external_lex_state = 3},
  [85] = {.lex_state = 5, .external_lex_state = 3},
  [86] = {.lex_state = 5, .external_lex_state = 3},
  [87] = {.lex_state = 5, .external_lex_state = 3},
  [88] = {.lex_state = 5, .external_lex_state = 3},
  [89] = {.lex_state = 5, .external_lex_state = 3},
  [90] = {.lex_state = 5, .external_lex_state = 3},
  [91] = {.lex_state = 5, .external_lex_state = 3},
  [92] = {.lex_state = 5, .external_lex_state = 3},
  [93] = {.lex_state = 5, .external_lex_state = 3},
  [94] = {.lex_state = 5, .external_lex_state = 3},
  [95] = {.lex_state = 26, .external_lex_state = 2},
  [96] = {.lex_state = 5, .external_lex_state = 3},
  [97] = {.lex_state = 5, .external_lex_state = 3},
  [98] = {.lex_state = 5, .external_lex_state = 3},
  [99] = {.lex_state = 5, .external_lex_state = 3},
  [100] = {.lex_state = 5, .external_lex_state = 3},
  [101] = {.lex_state = 26, .external_lex_state = 2},
  [102] = {.lex_state = 26, .external_lex_state = 2},
  [103] = {.lex_state = 26, .external_lex_state = 2},
  [104] = {.lex_state = 26, .external_lex_state = 2},
  [105] = {.lex_state = 5, .external_lex_state = 3},
  [106] = {.lex_state = 26, .external_lex_state = 2},
  [107] = {.lex_state = 26, .external_lex_state = 2},
  [108] = {.lex_state = 26, .external_lex_state = 2},
  [109] = {.lex_state = 26, .external_lex_state = 2},
  [110] = {.lex_state = 5, .external_lex_state = 3},
  [111] = {.lex_state = 5, .external_lex_state = 3},
  [112] = {.lex_state = 5, .external_lex_state = 3},
  [113] = {.lex_state = 5, .external_lex_state = 3},
  [114] = {.lex_state = 26, .external_lex_state = 2},
  [115] = {.lex_state = 5, .external_lex_state = 3},
  [116] = {.lex_state = 26, .external_lex_state = 2},
  [117] = {.lex_state = 26, .external_lex_state = 2},
  [118] = {.lex_state = 5, .external_lex_state = 3},
  [119] = {.lex_state = 5, .external_lex_state = 3},
  [120] = {.lex_state = 26, .external_lex_state = 2},
  [121] = {.lex_state = 5, .external_lex_state = 3},
  [122] = {.lex_state = 26, .external_lex_state = 2},
  [123] = {.lex_state = 26, .external_lex_state = 6},
  [124] = {.lex_state = 5, .external_lex_state = 3},
  [125] = {.lex_state = 26, .external_lex_state = 6},
  [126] = {.lex_state = 0, .external_lex_state = 7},
  [127] = {.lex_state = 5, .external_lex_state = 3},
  [128] = {.lex_state = 0, .external_lex_state = 7},
  [129] = {.lex_state = 0, .external_lex_state = 7},
  [130] = {.lex_state = 5, .external_lex_state = 3},
  [131] = {.lex_state = 26, .external_lex_state = 6},
  [132] = {.lex_state = 26, .external_lex_state = 6},
  [133] = {.lex_state = 26, .external_lex_state = 6},
  [134] = {.lex_state = 5, .external_lex_state = 3},
  [135] = {.lex_state = 26, .external_lex_state = 6},
  [136] = {.lex_state = 26, .external_lex_state = 6},
  [137] = {.lex_state = 26, .external_lex_state = 6},
  [138] = {.lex_state = 26, .external_lex_state = 6},
  [139] = {.lex_state = 5, .external_lex_state = 3},
  [140] = {.lex_state = 5, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 7},
  [142] = {.lex_state = 5, .external_lex_state = 4},
  [143] = {.lex_state = 5, .external_lex_state = 3},
  [144] = {.lex_state = 5, .external_lex_state = 4},
  [145] = {.lex_state = 5, .external_lex_state = 4},
  [146] = {.lex_state = 5, .external_lex_state = 4},
  [147] = {.lex_state = 5, .external_lex_state = 3},
  [148] = {.lex_state = 5, .external_lex_state = 3},
  [149] = {.lex_state = 26, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 5, .external_lex_state = 3},
  [152] = {.lex_state = 5, .external_lex_state = 3},
  [153] = {.lex_state = 26, .external_lex_state = 2},
  [154] = {.lex_state = 5, .external_lex_state = 4},
  [155] = {.lex_state = 5, .external_lex_state = 4},
  [156] = {.lex_state = 5, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 5, .external_lex_state = 4},
  [159] = {.lex_state = 5, .external_lex_state = 4},
  [160] = {.lex_state = 5, .external_lex_state = 4},
  [161] = {.lex_state = 5, .external_lex_state = 4},
  [162] = {.lex_state = 5, .external_lex_state = 4},
  [163] = {.lex_state = 5, .external_lex_state = 4},
  [164] = {.lex_state = 5, .external_lex_state = 4},
  [165] = {.lex_state = 5, .external_lex_state = 4},
  [166] = {.lex_state = 5, .external_lex_state = 4},
  [167] = {.lex_state = 0, .external_lex_state = 5},
  [168] = {.lex_state = 5, .external_lex_state = 4},
  [169] = {.lex_state = 5, .external_lex_state = 4},
  [170] = {.lex_state = 5, .external_lex_state = 4},
  [171] = {.lex_state = 5, .external_lex_state = 4},
  [172] = {.lex_state = 5, .external_lex_state = 4},
  [173] = {.lex_state = 5, .external_lex_state = 4},
  [174] = {.lex_state = 5, .external_lex_state = 4},
  [175] = {.lex_state = 0, .external_lex_state = 5},
  [176] = {.lex_state = 5, .external_lex_state = 4},
  [177] = {.lex_state = 5, .external_lex_state = 4},
  [178] = {.lex_state = 0, .external_lex_state = 5},
  [179] = {.lex_state = 5, .external_lex_state = 4},
  [180] = {.lex_state = 5, .external_lex_state = 4},
  [181] = {.lex_state = 5, .external_lex_state = 4},
  [182] = {.lex_state = 0, .external_lex_state = 8},
  [183] = {.lex_state = 5, .external_lex_state = 3},
  [184] = {.lex_state = 5, .external_lex_state = 3},
  [185] = {.lex_state = 5, .external_lex_state = 3},
  [186] = {.lex_state = 5, .external_lex_state = 3},
  [187] = {.lex_state = 5, .external_lex_state = 3},
  [188] = {.lex_state = 0, .external_lex_state = 5},
  [189] = {.lex_state = 5, .external_lex_state = 3},
  [190] = {.lex_state = 5, .external_lex_state = 3},
  [191] = {.lex_state = 0, .external_lex_state = 5},
  [192] = {.lex_state = 0, .external_lex_state = 5},
  [193] = {.lex_state = 5, .external_lex_state = 3},
  [194] = {.lex_state = 5, .external_lex_state = 3},
  [195] = {.lex_state = 0, .external_lex_state = 8},
  [196] = {.lex_state = 5, .external_lex_state = 3},
  [197] = {.lex_state = 0, .external_lex_state = 8},
  [198] = {.lex_state = 0, .external_lex_state = 8},
  [199] = {.lex_state = 0, .external_lex_state = 8},
  [200] = {.lex_state = 5, .external_lex_state = 3},
  [201] = {.lex_state = 0, .external_lex_state = 8},
  [202] = {.lex_state = 0, .external_lex_state = 8},
  [203] = {.lex_state = 0, .external_lex_state = 8},
  [204] = {.lex_state = 5, .external_lex_state = 3},
  [205] = {.lex_state = 5, .external_lex_state = 8},
  [206] = {.lex_state = 5, .external_lex_state = 3},
  [207] = {.lex_state = 5, .external_lex_state = 3},
  [208] = {.lex_state = 5, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 8},
  [210] = {.lex_state = 5, .external_lex_state = 3},
  [211] = {.lex_state = 5, .external_lex_state = 3},
  [212] = {.lex_state = 26, .external_lex_state = 6},
  [213] = {.lex_state = 5, .external_lex_state = 8},
  [214] = {.lex_state = 5, .external_lex_state = 3},
  [215] = {.lex_state = 26, .external_lex_state = 6},
  [216] = {.lex_state = 5, .external_lex_state = 3},
  [217] = {.lex_state = 5, .external_lex_state = 3},
  [218] = {.lex_state = 5, .external_lex_state = 3},
  [219] = {.lex_state = 5, .external_lex_state = 3},
  [220] = {.lex_state = 5, .external_lex_state = 3},
  [221] = {.lex_state = 5, .external_lex_state = 3},
  [222] = {.lex_state = 5, .external_lex_state = 3},
  [223] = {.lex_state = 5, .external_lex_state = 3},
  [224] = {.lex_state = 5, .external_lex_state = 3},
  [225] = {.lex_state = 5, .external_lex_state = 3},
  [226] = {.lex_state = 5, .external_lex_state = 3},
  [227] = {.lex_state = 5, .external_lex_state = 3},
  [228] = {.lex_state = 5, .external_lex_state = 3},
  [229] = {.lex_state = 5, .external_lex_state = 3},
  [230] = {.lex_state = 5, .external_lex_state = 3},
  [231] = {.lex_state = 5, .external_lex_state = 3},
  [232] = {.lex_state = 5, .external_lex_state = 3},
  [233] = {.lex_state = 5, .external_lex_state = 3},
  [234] = {.lex_state = 5, .external_lex_state = 3},
  [235] = {.lex_state = 5, .external_lex_state = 3},
  [236] = {.lex_state = 5, .external_lex_state = 3},
  [237] = {.lex_state = 5, .external_lex_state = 3},
  [238] = {.lex_state = 5, .external_lex_state = 3},
  [239] = {.lex_state = 5, .external_lex_state = 3},
  [240] = {.lex_state = 5, .external_lex_state = 3},
  [241] = {.lex_state = 5, .external_lex_state = 3},
  [242] = {.lex_state = 0, .external_lex_state = 8},
  [243] = {.lex_state = 5, .external_lex_state = 8},
  [244] = {.lex_state = 0, .external_lex_state = 8},
  [245] = {.lex_state = 0, .external_lex_state = 8},
  [246] = {.lex_state = 0, .external_lex_state = 8},
  [247] = {.lex_state = 0, .external_lex_state = 8},
  [248] = {.lex_state = 0, .external_lex_state = 8},
  [249] = {.lex_state = 5, .external_lex_state = 8},
  [250] = {.lex_state = 5, .external_lex_state = 8},
  [251] = {.lex_state = 5, .external_lex_state = 2},
  [252] = {.lex_state = 5, .external_lex_state = 2},
  [253] = {.lex_state = 26, .external_lex_state = 6},
  [254] = {.lex_state = 0, .external_lex_state = 8},
  [255] = {.lex_state = 0, .external_lex_state = 8},
  [256] = {.lex_state = 0, .external_lex_state = 8},
  [257] = {.lex_state = 0, .external_lex_state = 8},
  [258] = {.lex_state = 0, .external_lex_state = 8},
  [259] = {.lex_state = 5, .external_lex_state = 8},
  [260] = {.lex_state = 0, .external_lex_state = 8},
  [261] = {.lex_state = 5, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 8},
  [263] = {.lex_state = 5, .external_lex_state = 2},
  [264] = {.lex_state = 5, .external_lex_state = 2},
  [265] = {.lex_state = 26, .external_lex_state = 6},
  [266] = {.lex_state = 26, .external_lex_state = 6},
  [267] = {.lex_state = 5, .external_lex_state = 8},
  [268] = {.lex_state = 0, .external_lex_state = 3},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 3},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 5, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 9},
  [274] = {.lex_state = 0, .external_lex_state = 9},
  [275] = {.lex_state = 0, .external_lex_state = 3},
  [276] = {.lex_state = 5, .external_lex_state = 2},
  [277] = {.lex_state = 5, .external_lex_state = 3},
  [278] = {.lex_state = 5, .external_lex_state = 3},
  [279] = {.lex_state = 0, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 3},
  [281] = {.lex_state = 5, .external_lex_state = 2},
  [282] = {.lex_state = 5, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 9},
  [284] = {.lex_state = 4, .external_lex_state = 2},
  [285] = {.lex_state = 5, .external_lex_state = 2},
  [286] = {.lex_state = 5, .external_lex_state = 2},
  [287] = {.lex_state = 5, .external_lex_state = 4},
  [288] = {.lex_state = 0, .external_lex_state = 3},
  [289] = {.lex_state = 5, .external_lex_state = 2},
  [290] = {.lex_state = 5, .external_lex_state = 2},
  [291] = {.lex_state = 5, .external_lex_state = 2},
  [292] = {.lex_state = 5, .external_lex_state = 2},
  [293] = {.lex_state = 0, .external_lex_state = 3},
  [294] = {.lex_state = 0, .external_lex_state = 3},
  [295] = {.lex_state = 0, .external_lex_state = 9},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 5, .external_lex_state = 3},
  [298] = {.lex_state = 5, .external_lex_state = 3},
  [299] = {.lex_state = 0, .external_lex_state = 3},
  [300] = {.lex_state = 5, .external_lex_state = 2},
  [301] = {.lex_state = 5, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 8},
  [303] = {.lex_state = 5, .external_lex_state = 3},
  [304] = {.lex_state = 5, .external_lex_state = 3},
  [305] = {.lex_state = 0, .external_lex_state = 8},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 8},
  [308] = {.lex_state = 5, .external_lex_state = 3},
  [309] = {.lex_state = 5, .external_lex_state = 2},
  [310] = {.lex_state = 5, .external_lex_state = 3},
  [311] = {.lex_state = 0, .external_lex_state = 3},
  [312] = {.lex_state = 5, .external_lex_state = 3},
  [313] = {.lex_state = 5, .external_lex_state = 3},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 5, .external_lex_state = 2},
  [316] = {.lex_state = 5, .external_lex_state = 2},
  [317] = {.lex_state = 5, .external_lex_state = 2},
  [318] = {.lex_state = 0, .external_lex_state = 2},
  [319] = {.lex_state = 0, .external_lex_state = 9},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 10},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 0, .external_lex_state = 10},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 11},
  [326] = {.lex_state = 0, .external_lex_state = 10},
  [327] = {.lex_state = 0, .external_lex_state = 11},
  [328] = {.lex_state = 0, .external_lex_state = 2},
  [329] = {.lex_state = 0, .external_lex_state = 2},
  [330] = {.lex_state = 0, .external_lex_state = 11},
  [331] = {.lex_state = 0, .external_lex_state = 11},
  [332] = {.lex_state = 0, .external_lex_state = 2},
  [333] = {.lex_state = 0, .external_lex_state = 2},
  [334] = {.lex_state = 0, .external_lex_state = 10},
  [335] = {.lex_state = 0, .external_lex_state = 10},
  [336] = {.lex_state = 0, .external_lex_state = 11},
  [337] = {.lex_state = 0, .external_lex_state = 10},
  [338] = {.lex_state = 0, .external_lex_state = 10},
  [339] = {.lex_state = 0, .external_lex_state = 2},
  [340] = {.lex_state = 0, .external_lex_state = 2},
  [341] = {.lex_state = 0, .external_lex_state = 2},
  [342] = {.lex_state = 0, .external_lex_state = 10},
  [343] = {.lex_state = 0, .external_lex_state = 2},
  [344] = {.lex_state = 0, .external_lex_state = 11},
  [345] = {.lex_state = 0, .external_lex_state = 2},
  [346] = {.lex_state = 0, .external_lex_state = 10},
  [347] = {.lex_state = 0, .external_lex_state = 11},
  [348] = {.lex_state = 5, .external_lex_state = 2},
  [349] = {.lex_state = 5, .external_lex_state = 2},
  [350] = {.lex_state = 0, .external_lex_state = 2},
  [351] = {.lex_state = 0, .external_lex_state = 2},
  [352] = {.lex_state = 0, .external_lex_state = 9},
  [353] = {.lex_state = 5, .external_lex_state = 2},
  [354] = {.lex_state = 0, .external_lex_state = 10},
  [355] = {.lex_state = 0, .external_lex_state = 2},
  [356] = {.lex_state = 0, .external_lex_state = 2},
  [357] = {.lex_state = 0, .external_lex_state = 10},
  [358] = {.lex_state = 0, .external_lex_state = 11},
  [359] = {.lex_state = 0, .external_lex_state = 2},
  [360] = {.lex_state = 0, .external_lex_state = 2},
  [361] = {.lex_state = 0, .external_lex_state = 10},
  [362] = {.lex_state = 0, .external_lex_state = 2},
  [363] = {.lex_state = 0, .external_lex_state = 10},
  [364] = {.lex_state = 0, .external_lex_state = 10},
  [365] = {.lex_state = 0, .external_lex_state = 2},
  [366] = {.lex_state = 0, .external_lex_state = 10},
  [367] = {.lex_state = 0, .external_lex_state = 2},
  [368] = {.lex_state = 0, .external_lex_state = 2},
  [369] = {.lex_state = 0, .external_lex_state = 2},
  [370] = {.lex_state = 0, .external_lex_state = 10},
  [371] = {.lex_state = 26, .external_lex_state = 2},
  [372] = {.lex_state = 5, .external_lex_state = 2},
  [373] = {.lex_state = 5, .external_lex_state = 2},
  [374] = {.lex_state = 5, .external_lex_state = 2},
  [375] = {.lex_state = 5, .external_lex_state = 2},
  [376] = {.lex_state = 0, .external_lex_state = 2},
  [377] = {.lex_state = 5, .external_lex_state = 2},
  [378] = {.lex_state = 0, .external_lex_state = 12},
  [379] = {.lex_state = 0, .external_lex_state = 10},
  [380] = {.lex_state = 0, .external_lex_state = 12},
  [381] = {.lex_state = 0, .external_lex_state = 2},
  [382] = {.lex_state = 5, .external_lex_state = 2},
  [383] = {.lex_state = 5, .external_lex_state = 2},
  [384] = {.lex_state = 0, .external_lex_state = 2},
  [385] = {.lex_state = 5, .external_lex_state = 2},
  [386] = {.lex_state = 5, .external_lex_state = 2},
  [387] = {.lex_state = 5, .external_lex_state = 2},
  [388] = {.lex_state = 26, .external_lex_state = 2},
  [389] = {.lex_state = 5, .external_lex_state = 2},
  [390] = {.lex_state = 5, .external_lex_state = 2},
  [391] = {.lex_state = 5, .external_lex_state = 2},
  [392] = {.lex_state = 0, .external_lex_state = 13},
  [393] = {.lex_state = 5, .external_lex_state = 2},
  [394] = {.lex_state = 0, .external_lex_state = 2},
  [395] = {.lex_state = 5, .external_lex_state = 2},
  [396] = {.lex_state = 5, .external_lex_state = 2},
  [397] = {.lex_state = 5, .external_lex_state = 2},
  [398] = {.lex_state = 5, .external_lex_state = 2},
  [399] = {.lex_state = 5, .external_lex_state = 2},
  [400] = {.lex_state = 5, .external_lex_state = 2},
  [401] = {.lex_state = 5, .external_lex_state = 2},
  [402] = {.lex_state = 5, .external_lex_state = 2},
  [403] = {.lex_state = 5, .external_lex_state = 2},
  [404] = {.lex_state = 5, .external_lex_state = 2},
  [405] = {.lex_state = 5, .external_lex_state = 2},
  [406] = {.lex_state = 5, .external_lex_state = 2},
  [407] = {.lex_state = 5, .external_lex_state = 2},
  [408] = {.lex_state = 5, .external_lex_state = 2},
  [409] = {.lex_state = 5, .external_lex_state = 2},
  [410] = {.lex_state = 0, .external_lex_state = 2},
  [411] = {.lex_state = 0, .external_lex_state = 13},
  [412] = {.lex_state = 83, .external_lex_state = 2},
  [413] = {.lex_state = 0, .external_lex_state = 2},
  [414] = {.lex_state = 5, .external_lex_state = 2},
  [415] = {.lex_state = 5, .external_lex_state = 2},
  [416] = {.lex_state = 26, .external_lex_state = 2},
  [417] = {.lex_state = 0, .external_lex_state = 2},
  [418] = {.lex_state = 5, .external_lex_state = 2},
  [419] = {.lex_state = 5, .external_lex_state = 2},
  [420] = {.lex_state = 26, .external_lex_state = 2},
  [421] = {.lex_state = 0, .external_lex_state = 10},
  [422] = {.lex_state = 5, .external_lex_state = 2},
  [423] = {.lex_state = 5, .external_lex_state = 2},
  [424] = {.lex_state = 5, .external_lex_state = 2},
  [425] = {.lex_state = 5, .external_lex_state = 2},
  [426] = {.lex_state = 0, .external_lex_state = 2},
  [427] = {.lex_state = 0, .external_lex_state = 2},
  [428] = {.lex_state = 5, .external_lex_state = 2},
  [429] = {.lex_state = 5, .external_lex_state = 2},
  [430] = {.lex_state = 5, .external_lex_state = 2},
  [431] = {.lex_state = 5, .external_lex_state = 2},
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

static const bool ts_external_scanner_states[14][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__newline] = true,
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
    [ts_external_token__newline] = true,
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
    [ts_external_token__indent] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [10] = {
    [ts_external_token__newline] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
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
  [13] = {
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
    [anon_sym_DOLLAR] = ACTIONS(1),
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
    [sym_source_file] = STATE(381),
    [sym_parameters] = STATE(12),
    [sym__statement] = STATE(13),
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
    [anon_sym_Log] = ACTIONS(9),
    [anon_sym_Assert] = ACTIONS(11),
    [anon_sym_Interpolation] = ACTIONS(13),
    [anon_sym_Set] = ACTIONS(15),
    [aux_sym_execute_using_token1] = ACTIONS(17),
    [aux_sym_execute_sql_token1] = ACTIONS(19),
    [anon_sym_Output] = ACTIONS(21),
    [anon_sym_Metadata] = ACTIONS(23),
    [anon_sym_For] = ACTIONS(25),
    [anon_sym_If] = ACTIONS(27),
    [sym__comment] = ACTIONS(3),
    [sym__skip] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(31), 4,
      sym__dedent,
      sym__end_of_file,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
    ACTIONS(29), 25,
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
  [38] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(35), 4,
      sym__dedent,
      sym__end_of_file,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
    ACTIONS(33), 25,
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
  [76] = 3,
    ACTIONS(39), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(37), 27,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_Metadata,
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
      anon_sym_For,
      anon_sym_If,
  [113] = 14,
    ACTIONS(41), 1,
      anon_sym_Log,
    ACTIONS(43), 1,
      anon_sym_Assert,
    ACTIONS(45), 1,
      anon_sym_Interpolation,
    ACTIONS(47), 1,
      anon_sym_Set,
    ACTIONS(49), 1,
      aux_sym_execute_using_token1,
    ACTIONS(51), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(53), 1,
      anon_sym_Output,
    ACTIONS(55), 1,
      anon_sym_Metadata,
    ACTIONS(57), 1,
      anon_sym_For,
    ACTIONS(59), 1,
      anon_sym_If,
    STATE(37), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(61), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(9), 12,
      sym__statement,
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
  [169] = 14,
    ACTIONS(41), 1,
      anon_sym_Log,
    ACTIONS(43), 1,
      anon_sym_Assert,
    ACTIONS(45), 1,
      anon_sym_Interpolation,
    ACTIONS(47), 1,
      anon_sym_Set,
    ACTIONS(49), 1,
      aux_sym_execute_using_token1,
    ACTIONS(51), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(53), 1,
      anon_sym_Output,
    ACTIONS(55), 1,
      anon_sym_Metadata,
    ACTIONS(57), 1,
      anon_sym_For,
    ACTIONS(59), 1,
      anon_sym_If,
    STATE(46), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(63), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(5), 12,
      sym__statement,
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
  [225] = 14,
    ACTIONS(41), 1,
      anon_sym_Log,
    ACTIONS(43), 1,
      anon_sym_Assert,
    ACTIONS(45), 1,
      anon_sym_Interpolation,
    ACTIONS(47), 1,
      anon_sym_Set,
    ACTIONS(49), 1,
      aux_sym_execute_using_token1,
    ACTIONS(51), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(53), 1,
      anon_sym_Output,
    ACTIONS(55), 1,
      anon_sym_Metadata,
    ACTIONS(57), 1,
      anon_sym_For,
    ACTIONS(59), 1,
      anon_sym_If,
    STATE(54), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(65), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(9), 12,
      sym__statement,
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
  [281] = 14,
    ACTIONS(41), 1,
      anon_sym_Log,
    ACTIONS(43), 1,
      anon_sym_Assert,
    ACTIONS(45), 1,
      anon_sym_Interpolation,
    ACTIONS(47), 1,
      anon_sym_Set,
    ACTIONS(49), 1,
      aux_sym_execute_using_token1,
    ACTIONS(51), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(53), 1,
      anon_sym_Output,
    ACTIONS(55), 1,
      anon_sym_Metadata,
    ACTIONS(57), 1,
      anon_sym_For,
    ACTIONS(59), 1,
      anon_sym_If,
    STATE(68), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(67), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(7), 12,
      sym__statement,
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
  [337] = 13,
    ACTIONS(69), 1,
      anon_sym_Log,
    ACTIONS(72), 1,
      anon_sym_Assert,
    ACTIONS(75), 1,
      anon_sym_Interpolation,
    ACTIONS(78), 1,
      anon_sym_Set,
    ACTIONS(81), 1,
      aux_sym_execute_using_token1,
    ACTIONS(84), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(87), 1,
      anon_sym_Output,
    ACTIONS(90), 1,
      anon_sym_Metadata,
    ACTIONS(93), 1,
      anon_sym_For,
    ACTIONS(96), 1,
      anon_sym_If,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(99), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(9), 12,
      sym__statement,
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
  [390] = 13,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_Log,
    ACTIONS(104), 1,
      anon_sym_Assert,
    ACTIONS(107), 1,
      anon_sym_Interpolation,
    ACTIONS(110), 1,
      anon_sym_Set,
    ACTIONS(113), 1,
      aux_sym_execute_using_token1,
    ACTIONS(116), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(119), 1,
      anon_sym_Output,
    ACTIONS(122), 1,
      anon_sym_Metadata,
    ACTIONS(125), 1,
      anon_sym_For,
    ACTIONS(128), 1,
      anon_sym_If,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(10), 12,
      sym__statement,
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
  [442] = 13,
    ACTIONS(9), 1,
      anon_sym_Log,
    ACTIONS(11), 1,
      anon_sym_Assert,
    ACTIONS(13), 1,
      anon_sym_Interpolation,
    ACTIONS(15), 1,
      anon_sym_Set,
    ACTIONS(17), 1,
      aux_sym_execute_using_token1,
    ACTIONS(19), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(21), 1,
      anon_sym_Output,
    ACTIONS(23), 1,
      anon_sym_Metadata,
    ACTIONS(25), 1,
      anon_sym_For,
    ACTIONS(27), 1,
      anon_sym_If,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(10), 12,
      sym__statement,
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
  [494] = 13,
    ACTIONS(9), 1,
      anon_sym_Log,
    ACTIONS(11), 1,
      anon_sym_Assert,
    ACTIONS(13), 1,
      anon_sym_Interpolation,
    ACTIONS(15), 1,
      anon_sym_Set,
    ACTIONS(17), 1,
      aux_sym_execute_using_token1,
    ACTIONS(19), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(21), 1,
      anon_sym_Output,
    ACTIONS(23), 1,
      anon_sym_Metadata,
    ACTIONS(25), 1,
      anon_sym_For,
    ACTIONS(27), 1,
      anon_sym_If,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(11), 12,
      sym__statement,
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
  [546] = 13,
    ACTIONS(9), 1,
      anon_sym_Log,
    ACTIONS(11), 1,
      anon_sym_Assert,
    ACTIONS(13), 1,
      anon_sym_Interpolation,
    ACTIONS(15), 1,
      anon_sym_Set,
    ACTIONS(17), 1,
      aux_sym_execute_using_token1,
    ACTIONS(19), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(21), 1,
      anon_sym_Output,
    ACTIONS(23), 1,
      anon_sym_Metadata,
    ACTIONS(25), 1,
      anon_sym_For,
    ACTIONS(27), 1,
      anon_sym_If,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(10), 12,
      sym__statement,
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
  [598] = 20,
    ACTIONS(135), 1,
      anon_sym_dbname,
    ACTIONS(137), 1,
      anon_sym_description,
    ACTIONS(139), 1,
      anon_sym_archiver,
    ACTIONS(141), 1,
      anon_sym_archiverContact,
    ACTIONS(143), 1,
      anon_sym_dataOwner,
    ACTIONS(145), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(147), 1,
      anon_sym_lobFolder,
    ACTIONS(149), 1,
      anon_sym_Schema,
    ACTIONS(151), 1,
      anon_sym_Command,
    STATE(77), 1,
      sym__siard_lobFolder,
    STATE(78), 1,
      sym__siard_dataOriginTimespan,
    STATE(79), 1,
      sym__siard_dataOwner,
    STATE(83), 1,
      sym__siard_archiverContact,
    STATE(84), 1,
      sym__siard_archiver,
    STATE(86), 1,
      sym__siard_description,
    STATE(87), 1,
      sym__siard_dbname,
    STATE(101), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(153), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(18), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [663] = 20,
    ACTIONS(135), 1,
      anon_sym_dbname,
    ACTIONS(137), 1,
      anon_sym_description,
    ACTIONS(139), 1,
      anon_sym_archiver,
    ACTIONS(141), 1,
      anon_sym_archiverContact,
    ACTIONS(143), 1,
      anon_sym_dataOwner,
    ACTIONS(145), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(147), 1,
      anon_sym_lobFolder,
    ACTIONS(149), 1,
      anon_sym_Schema,
    ACTIONS(151), 1,
      anon_sym_Command,
    STATE(76), 1,
      sym__ded,
    STATE(77), 1,
      sym__siard_lobFolder,
    STATE(78), 1,
      sym__siard_dataOriginTimespan,
    STATE(79), 1,
      sym__siard_dataOwner,
    STATE(83), 1,
      sym__siard_archiverContact,
    STATE(84), 1,
      sym__siard_archiver,
    STATE(86), 1,
      sym__siard_description,
    STATE(87), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(155), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(14), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [728] = 20,
    ACTIONS(135), 1,
      anon_sym_dbname,
    ACTIONS(137), 1,
      anon_sym_description,
    ACTIONS(139), 1,
      anon_sym_archiver,
    ACTIONS(141), 1,
      anon_sym_archiverContact,
    ACTIONS(143), 1,
      anon_sym_dataOwner,
    ACTIONS(145), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(147), 1,
      anon_sym_lobFolder,
    ACTIONS(149), 1,
      anon_sym_Schema,
    ACTIONS(151), 1,
      anon_sym_Command,
    STATE(51), 1,
      sym__ded,
    STATE(77), 1,
      sym__siard_lobFolder,
    STATE(78), 1,
      sym__siard_dataOriginTimespan,
    STATE(79), 1,
      sym__siard_dataOwner,
    STATE(83), 1,
      sym__siard_archiverContact,
    STATE(84), 1,
      sym__siard_archiver,
    STATE(86), 1,
      sym__siard_description,
    STATE(87), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(157), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(18), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [793] = 20,
    ACTIONS(135), 1,
      anon_sym_dbname,
    ACTIONS(137), 1,
      anon_sym_description,
    ACTIONS(139), 1,
      anon_sym_archiver,
    ACTIONS(141), 1,
      anon_sym_archiverContact,
    ACTIONS(143), 1,
      anon_sym_dataOwner,
    ACTIONS(145), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(147), 1,
      anon_sym_lobFolder,
    ACTIONS(149), 1,
      anon_sym_Schema,
    ACTIONS(151), 1,
      anon_sym_Command,
    STATE(52), 1,
      sym__ded,
    STATE(77), 1,
      sym__siard_lobFolder,
    STATE(78), 1,
      sym__siard_dataOriginTimespan,
    STATE(79), 1,
      sym__siard_dataOwner,
    STATE(83), 1,
      sym__siard_archiverContact,
    STATE(84), 1,
      sym__siard_archiver,
    STATE(86), 1,
      sym__siard_description,
    STATE(87), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(159), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(16), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [858] = 19,
    ACTIONS(161), 1,
      anon_sym_dbname,
    ACTIONS(164), 1,
      anon_sym_description,
    ACTIONS(167), 1,
      anon_sym_archiver,
    ACTIONS(170), 1,
      anon_sym_archiverContact,
    ACTIONS(173), 1,
      anon_sym_dataOwner,
    ACTIONS(176), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(179), 1,
      anon_sym_lobFolder,
    ACTIONS(182), 1,
      anon_sym_Schema,
    ACTIONS(185), 1,
      anon_sym_Command,
    STATE(77), 1,
      sym__siard_lobFolder,
    STATE(78), 1,
      sym__siard_dataOriginTimespan,
    STATE(79), 1,
      sym__siard_dataOwner,
    STATE(83), 1,
      sym__siard_archiverContact,
    STATE(84), 1,
      sym__siard_archiver,
    STATE(86), 1,
      sym__siard_description,
    STATE(87), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(188), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(18), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [920] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(192), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(190), 17,
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
  [948] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(194), 17,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_DOT,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [976] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(200), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(198), 17,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_DOT,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1004] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 17,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_DOT,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1032] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(206), 17,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_DOT,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1060] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(210), 17,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_DOT,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1088] = 3,
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
  [1115] = 3,
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
  [1142] = 9,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(224), 1,
      aux_sym_script_result_token1,
    ACTIONS(226), 1,
      aux_sym_connection_token1,
    ACTIONS(228), 1,
      aux_sym_query_token1,
    ACTIONS(230), 1,
      sym_integer,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(69), 4,
      sym__expression,
      sym_script_result,
      sym_connection,
      sym_query,
    STATE(262), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [1177] = 9,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(234), 1,
      aux_sym_script_result_token1,
    ACTIONS(236), 1,
      aux_sym_connection_token1,
    ACTIONS(238), 1,
      aux_sym_query_token1,
    ACTIONS(240), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(102), 4,
      sym__expression,
      sym_script_result,
      sym_connection,
      sym_query,
    STATE(258), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [1212] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(194), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_DOT,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1232] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(202), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_DOT,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1252] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(210), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_DOT,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1272] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_DOT,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1292] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(31), 13,
      ts_builtin_sym_end,
      anon_sym_Parameters,
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
  [1312] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(206), 13,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Log,
      anon_sym_Assert,
      anon_sym_Interpolation,
      anon_sym_Set,
      aux_sym_execute_using_token1,
      aux_sym_execute_sql_token1,
      anon_sym_Output,
      anon_sym_DOT,
      anon_sym_Metadata,
      anon_sym_For,
      anon_sym_If,
  [1332] = 3,
    ACTIONS(244), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(242), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1354] = 3,
    ACTIONS(248), 1,
      anon_sym_Else,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(246), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1376] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(250), 13,
      sym__dedent,
      sym__end_of_file,
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
      anon_sym_Else,
  [1396] = 3,
    ACTIONS(254), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(252), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1418] = 3,
    ACTIONS(254), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(256), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1440] = 10,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(262), 1,
      sym__inter_start,
    ACTIONS(264), 1,
      sym__inter_start2,
    ACTIONS(266), 1,
      sym__raw,
    STATE(44), 1,
      sym__ded,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    STATE(167), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(260), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(49), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat2,
  [1476] = 10,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(262), 1,
      sym__inter_start,
    ACTIONS(264), 1,
      sym__inter_start2,
    ACTIONS(266), 1,
      sym__raw,
    STATE(3), 1,
      sym__ded,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    STATE(167), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(268), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(49), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat2,
  [1512] = 3,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(252), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
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
  [1534] = 10,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(262), 1,
      sym__inter_start,
    ACTIONS(264), 1,
      sym__inter_start2,
    ACTIONS(266), 1,
      sym__raw,
    STATE(2), 1,
      sym__ded,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    STATE(167), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(272), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(49), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat2,
  [1570] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(35), 13,
      ts_builtin_sym_end,
      anon_sym_Parameters,
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
  [1590] = 10,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(262), 1,
      sym__inter_start,
    ACTIONS(264), 1,
      sym__inter_start2,
    ACTIONS(266), 1,
      sym__raw,
    STATE(33), 1,
      sym__ded,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    STATE(167), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(274), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(49), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat2,
  [1626] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(276), 13,
      sym__dedent,
      sym__end_of_file,
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
      anon_sym_Else,
  [1646] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(278), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1665] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(280), 12,
      ts_builtin_sym_end,
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
  [1684] = 9,
    ACTIONS(282), 1,
      sym__newline,
    ACTIONS(287), 1,
      sym__inter_start,
    ACTIONS(290), 1,
      sym__inter_start2,
    ACTIONS(293), 1,
      sym__raw,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    STATE(167), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(285), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(49), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat2,
  [1717] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(296), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1736] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(298), 12,
      sym__dedent,
      sym__end_of_file,
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
    ACTIONS(300), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1774] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(302), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1793] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(250), 12,
      ts_builtin_sym_end,
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
      anon_sym_Else,
  [1812] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(304), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1831] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(306), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1850] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(308), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1869] = 3,
    ACTIONS(310), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(242), 11,
      ts_builtin_sym_end,
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
  [1890] = 9,
    ACTIONS(137), 1,
      anon_sym_description,
    ACTIONS(312), 1,
      anon_sym_Type,
    ACTIONS(314), 1,
      anon_sym_Table,
    ACTIONS(316), 1,
      anon_sym_View,
    STATE(105), 1,
      sym__ded,
    STATE(134), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(318), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(139), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1923] = 3,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(256), 11,
      ts_builtin_sym_end,
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
  [1944] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(320), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1963] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(322), 12,
      sym__dedent,
      sym__end_of_file,
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
  [1982] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(324), 12,
      sym__dedent,
      sym__end_of_file,
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
  [2001] = 3,
    ACTIONS(326), 1,
      anon_sym_Else,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(246), 11,
      ts_builtin_sym_end,
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
  [2022] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(328), 12,
      sym__dedent,
      sym__end_of_file,
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
  [2041] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(330), 12,
      sym__dedent,
      sym__end_of_file,
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
  [2060] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(332), 12,
      sym__dedent,
      sym__end_of_file,
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
  [2079] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(276), 12,
      ts_builtin_sym_end,
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
      anon_sym_Else,
  [2098] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(334), 12,
      sym__dedent,
      sym__end_of_file,
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
  [2117] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(336), 12,
      sym__dedent,
      sym__end_of_file,
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
  [2136] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(338), 12,
      sym__dedent,
      sym__end_of_file,
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
  [2155] = 9,
    ACTIONS(137), 1,
      anon_sym_description,
    ACTIONS(340), 1,
      anon_sym_Column,
    ACTIONS(342), 1,
      anon_sym_Key,
    ACTIONS(344), 1,
      anon_sym_Check,
    STATE(130), 1,
      sym__siard_description,
    STATE(222), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(346), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(127), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2188] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(348), 12,
      sym__dedent,
      sym__end_of_file,
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
  [2207] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(330), 11,
      ts_builtin_sym_end,
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
  [2225] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(324), 11,
      ts_builtin_sym_end,
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
  [2243] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(300), 11,
      ts_builtin_sym_end,
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
  [2261] = 3,
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
  [2281] = 3,
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
  [2301] = 3,
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
  [2321] = 3,
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
  [2341] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(278), 11,
      ts_builtin_sym_end,
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
  [2359] = 3,
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
  [2379] = 3,
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
  [2399] = 3,
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
  [2419] = 3,
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
  [2439] = 3,
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
  [2459] = 3,
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
  [2479] = 3,
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
  [2499] = 3,
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
  [2519] = 3,
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
  [2539] = 3,
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
  [2559] = 3,
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
  [2579] = 3,
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
  [2599] = 3,
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
  [2619] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(332), 11,
      ts_builtin_sym_end,
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
  [2637] = 3,
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
  [2657] = 3,
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
  [2677] = 3,
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
  [2697] = 3,
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
  [2717] = 3,
    ACTIONS(436), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(434), 10,
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
  [2737] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(298), 11,
      ts_builtin_sym_end,
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
  [2755] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(334), 11,
      ts_builtin_sym_end,
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
  [2773] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(302), 11,
      ts_builtin_sym_end,
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
  [2791] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(328), 11,
      ts_builtin_sym_end,
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
  [2809] = 3,
    ACTIONS(440), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(438), 10,
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
  [2829] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(296), 11,
      ts_builtin_sym_end,
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
  [2847] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(304), 11,
      ts_builtin_sym_end,
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
  [2865] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(336), 11,
      ts_builtin_sym_end,
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
  [2883] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(306), 11,
      ts_builtin_sym_end,
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
  [2901] = 3,
    ACTIONS(444), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(442), 10,
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
  [2921] = 3,
    ACTIONS(448), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(446), 10,
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
  [2941] = 3,
    ACTIONS(452), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(450), 10,
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
  [2961] = 3,
    ACTIONS(456), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(454), 10,
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
  [2981] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(338), 11,
      ts_builtin_sym_end,
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
  [2999] = 3,
    ACTIONS(460), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(458), 10,
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
  [3019] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(322), 11,
      ts_builtin_sym_end,
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
  [3037] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(320), 11,
      ts_builtin_sym_end,
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
  [3055] = 3,
    ACTIONS(464), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(462), 10,
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
  [3075] = 3,
    ACTIONS(468), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(466), 10,
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
  [3095] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(348), 11,
      ts_builtin_sym_end,
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
  [3113] = 3,
    ACTIONS(472), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(470), 10,
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
  [3133] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(308), 11,
      ts_builtin_sym_end,
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
  [3151] = 7,
    ACTIONS(474), 1,
      anon_sym_BSLASH,
    ACTIONS(476), 1,
      sym__inter_start,
    ACTIONS(478), 1,
      sym__string_content,
    ACTIONS(480), 1,
      sym__string_end,
    STATE(215), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(136), 5,
      sym_string_content,
      sym_escape_sequence,
      sym__quoted_dollar,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3178] = 7,
    ACTIONS(340), 1,
      anon_sym_Column,
    ACTIONS(342), 1,
      anon_sym_Key,
    ACTIONS(344), 1,
      anon_sym_Check,
    STATE(223), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(482), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(147), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3205] = 7,
    ACTIONS(474), 1,
      anon_sym_BSLASH,
    ACTIONS(476), 1,
      sym__inter_start,
    ACTIONS(478), 1,
      sym__string_content,
    ACTIONS(484), 1,
      sym__string_end,
    STATE(215), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(136), 5,
      sym_string_content,
      sym_escape_sequence,
      sym__quoted_dollar,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3232] = 8,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(262), 1,
      sym__inter_start,
    ACTIONS(264), 1,
      sym__inter_start2,
    ACTIONS(266), 1,
      sym__raw,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    STATE(167), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(41), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat2,
  [3261] = 7,
    ACTIONS(340), 1,
      anon_sym_Column,
    ACTIONS(342), 1,
      anon_sym_Key,
    ACTIONS(344), 1,
      anon_sym_Check,
    STATE(210), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(486), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(147), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3288] = 8,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(262), 1,
      sym__inter_start,
    ACTIONS(264), 1,
      sym__inter_start2,
    ACTIONS(266), 1,
      sym__raw,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    STATE(167), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(43), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat2,
  [3317] = 8,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(262), 1,
      sym__inter_start,
    ACTIONS(264), 1,
      sym__inter_start2,
    ACTIONS(266), 1,
      sym__raw,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    STATE(167), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(45), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat2,
  [3346] = 7,
    ACTIONS(340), 1,
      anon_sym_Column,
    ACTIONS(342), 1,
      anon_sym_Key,
    ACTIONS(344), 1,
      anon_sym_Check,
    STATE(214), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(488), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(124), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3373] = 7,
    ACTIONS(474), 1,
      anon_sym_BSLASH,
    ACTIONS(476), 1,
      sym__inter_start,
    ACTIONS(478), 1,
      sym__string_content,
    ACTIONS(490), 1,
      sym__string_end,
    STATE(215), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(136), 5,
      sym_string_content,
      sym_escape_sequence,
      sym__quoted_dollar,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3400] = 7,
    ACTIONS(474), 1,
      anon_sym_BSLASH,
    ACTIONS(476), 1,
      sym__inter_start,
    ACTIONS(478), 1,
      sym__string_content,
    ACTIONS(492), 1,
      sym__string_end,
    STATE(215), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(125), 5,
      sym_string_content,
      sym_escape_sequence,
      sym__quoted_dollar,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3427] = 7,
    ACTIONS(474), 1,
      anon_sym_BSLASH,
    ACTIONS(476), 1,
      sym__inter_start,
    ACTIONS(478), 1,
      sym__string_content,
    ACTIONS(494), 1,
      sym__string_end,
    STATE(215), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(135), 5,
      sym_string_content,
      sym_escape_sequence,
      sym__quoted_dollar,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3454] = 7,
    ACTIONS(312), 1,
      anon_sym_Type,
    ACTIONS(314), 1,
      anon_sym_Table,
    ACTIONS(316), 1,
      anon_sym_View,
    STATE(99), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(496), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(140), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3481] = 7,
    ACTIONS(474), 1,
      anon_sym_BSLASH,
    ACTIONS(476), 1,
      sym__inter_start,
    ACTIONS(478), 1,
      sym__string_content,
    ACTIONS(498), 1,
      sym__string_end,
    STATE(215), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(136), 5,
      sym_string_content,
      sym_escape_sequence,
      sym__quoted_dollar,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3508] = 7,
    ACTIONS(500), 1,
      anon_sym_BSLASH,
    ACTIONS(503), 1,
      sym__inter_start,
    ACTIONS(506), 1,
      sym__string_content,
    ACTIONS(509), 1,
      sym__string_end,
    STATE(215), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(136), 5,
      sym_string_content,
      sym_escape_sequence,
      sym__quoted_dollar,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3535] = 7,
    ACTIONS(474), 1,
      anon_sym_BSLASH,
    ACTIONS(476), 1,
      sym__inter_start,
    ACTIONS(478), 1,
      sym__string_content,
    ACTIONS(511), 1,
      sym__string_end,
    STATE(215), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(131), 5,
      sym_string_content,
      sym_escape_sequence,
      sym__quoted_dollar,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3562] = 7,
    ACTIONS(474), 1,
      anon_sym_BSLASH,
    ACTIONS(476), 1,
      sym__inter_start,
    ACTIONS(478), 1,
      sym__string_content,
    ACTIONS(513), 1,
      sym__string_end,
    STATE(215), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(123), 5,
      sym_string_content,
      sym_escape_sequence,
      sym__quoted_dollar,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3589] = 7,
    ACTIONS(312), 1,
      anon_sym_Type,
    ACTIONS(314), 1,
      anon_sym_Table,
    ACTIONS(316), 1,
      anon_sym_View,
    STATE(97), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(515), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(143), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3616] = 7,
    ACTIONS(312), 1,
      anon_sym_Type,
    ACTIONS(314), 1,
      anon_sym_Table,
    ACTIONS(316), 1,
      anon_sym_View,
    STATE(93), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(517), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(143), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3643] = 8,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(262), 1,
      sym__inter_start,
    ACTIONS(264), 1,
      sym__inter_start2,
    ACTIONS(266), 1,
      sym__raw,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    STATE(167), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(40), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat2,
  [3672] = 6,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(521), 1,
      sym_integer,
    ACTIONS(523), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(81), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(153), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3696] = 6,
    ACTIONS(525), 1,
      anon_sym_Type,
    ACTIONS(528), 1,
      anon_sym_Table,
    ACTIONS(531), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(534), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(143), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3720] = 6,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(523), 1,
      sym__string_start,
    ACTIONS(536), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(47), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(149), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3744] = 6,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(521), 1,
      sym_integer,
    ACTIONS(523), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(356), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(153), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3768] = 6,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(521), 1,
      sym_integer,
    ACTIONS(523), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(369), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(153), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3792] = 6,
    ACTIONS(538), 1,
      anon_sym_Column,
    ACTIONS(541), 1,
      anon_sym_Key,
    ACTIONS(544), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(547), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(147), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3816] = 7,
    ACTIONS(137), 1,
      anon_sym_description,
    ACTIONS(340), 1,
      anon_sym_Column,
    STATE(193), 1,
      sym__siard_description,
    STATE(220), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(549), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(194), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3841] = 5,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(180), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(553), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(551), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3862] = 6,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(557), 1,
      sym__raw,
    STATE(175), 1,
      aux_sym_raw_repeat1,
    STATE(178), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(555), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [3885] = 7,
    ACTIONS(137), 1,
      anon_sym_description,
    ACTIONS(559), 1,
      anon_sym_Field,
    STATE(189), 1,
      sym__siard_description,
    STATE(241), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(561), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(186), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3910] = 7,
    ACTIONS(137), 1,
      anon_sym_description,
    ACTIONS(559), 1,
      anon_sym_Field,
    STATE(184), 1,
      sym__siard_description,
    STATE(308), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(563), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3935] = 5,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(172), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(553), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(551), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3956] = 5,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(567), 1,
      sym_integer,
    ACTIONS(569), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(358), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3976] = 5,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(523), 1,
      sym__string_start,
    ACTIONS(571), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(296), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3996] = 5,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(523), 1,
      sym__string_start,
    ACTIONS(573), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(318), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4016] = 4,
    ACTIONS(575), 1,
      sym__newline,
    STATE(157), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(578), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4034] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(582), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(246), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4054] = 5,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(569), 1,
      sym__string_start,
    ACTIONS(584), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(347), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4074] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(586), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(254), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4094] = 5,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(523), 1,
      sym__string_start,
    ACTIONS(588), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(60), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4114] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(590), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(244), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4134] = 5,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(523), 1,
      sym__string_start,
    ACTIONS(592), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(271), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4154] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(594), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(255), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4174] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(596), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(242), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4194] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(598), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(245), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4214] = 4,
    ACTIONS(258), 1,
      sym__newline,
    STATE(157), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(555), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4232] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(600), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(247), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4252] = 5,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(523), 1,
      sym__string_start,
    ACTIONS(602), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(279), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4272] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(604), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(248), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4292] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(606), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(256), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4312] = 5,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(523), 1,
      sym__string_start,
    ACTIONS(608), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(42), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4332] = 5,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(569), 1,
      sym__string_start,
    ACTIONS(610), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(336), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4352] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(612), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(213), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4372] = 4,
    ACTIONS(258), 1,
      sym__newline,
    STATE(157), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(614), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4390] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(616), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(257), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4410] = 5,
    ACTIONS(618), 1,
      sym_identifier,
    ACTIONS(620), 1,
      sym_integer,
    ACTIONS(622), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(39), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4430] = 4,
    ACTIONS(626), 1,
      sym__raw,
    STATE(178), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(624), 5,
      sym__newline,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [4448] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(629), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(205), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4468] = 5,
    ACTIONS(618), 1,
      sym_identifier,
    ACTIONS(622), 1,
      sym__string_start,
    ACTIONS(631), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(38), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4488] = 5,
    ACTIONS(232), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(633), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(260), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4508] = 6,
    ACTIONS(635), 1,
      anon_sym_COLON,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    STATE(303), 1,
      sym__short_descr,
    STATE(304), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(639), 2,
      sym__newline,
      sym__end_of_file,
  [4529] = 5,
    ACTIONS(559), 1,
      anon_sym_Field,
    STATE(229), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(641), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(236), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4548] = 5,
    ACTIONS(559), 1,
      anon_sym_Field,
    STATE(310), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(643), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(187), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4567] = 5,
    ACTIONS(559), 1,
      anon_sym_Field,
    STATE(312), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(645), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(236), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4586] = 5,
    ACTIONS(559), 1,
      anon_sym_Field,
    STATE(237), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(647), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(236), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4605] = 5,
    ACTIONS(559), 1,
      anon_sym_Field,
    STATE(313), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(649), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(236), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4624] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(651), 6,
      sym__newline,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4637] = 5,
    ACTIONS(559), 1,
      anon_sym_Field,
    STATE(240), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(653), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(183), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4656] = 5,
    ACTIONS(340), 1,
      anon_sym_Column,
    STATE(238), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(655), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(225), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4675] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(657), 6,
      sym__newline,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4688] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(659), 6,
      sym__newline,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4701] = 5,
    ACTIONS(340), 1,
      anon_sym_Column,
    STATE(239), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(661), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(190), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4720] = 5,
    ACTIONS(340), 1,
      anon_sym_Column,
    STATE(226), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(663), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(225), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4739] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(665), 1,
      anon_sym_COLON,
    STATE(233), 1,
      sym__short_descr,
    STATE(234), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(667), 2,
      sym__newline,
      sym__end_of_file,
  [4760] = 5,
    ACTIONS(669), 1,
      sym_identifier,
    STATE(50), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(671), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(221), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4779] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(673), 1,
      anon_sym_COLON,
    STATE(230), 1,
      sym__short_descr,
    STATE(231), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(675), 2,
      sym__newline,
      sym__end_of_file,
  [4800] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(677), 1,
      anon_sym_COLON,
    STATE(218), 1,
      sym__nl,
    STATE(219), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(679), 2,
      sym__newline,
      sym__end_of_file,
  [4821] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(681), 1,
      anon_sym_COLON,
    STATE(227), 1,
      sym__short_descr,
    STATE(228), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(683), 2,
      sym__newline,
      sym__end_of_file,
  [4842] = 5,
    ACTIONS(685), 1,
      sym_identifier,
    STATE(48), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(687), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(217), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4861] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(689), 1,
      anon_sym_COLON,
    STATE(110), 1,
      sym__short_descr,
    STATE(111), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(691), 2,
      sym__newline,
      sym__end_of_file,
  [4882] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(693), 1,
      anon_sym_COLON,
    STATE(207), 1,
      sym__short_descr,
    STATE(224), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(695), 2,
      sym__newline,
      sym__end_of_file,
  [4903] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(697), 1,
      anon_sym_COLON,
    STATE(206), 1,
      sym__short_descr,
    STATE(211), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(699), 2,
      sym__newline,
      sym__end_of_file,
  [4924] = 5,
    ACTIONS(669), 1,
      sym_identifier,
    STATE(106), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(701), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(221), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4943] = 6,
    ACTIONS(703), 1,
      anon_sym_with,
    ACTIONS(705), 1,
      anon_sym_DOT,
    ACTIONS(707), 1,
      sym__newline,
    ACTIONS(709), 1,
      sym__end_of_file,
    STATE(116), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4963] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(711), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4975] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(713), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4987] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(39), 5,
      anon_sym_Parameters,
      anon_sym_description,
      anon_sym_title,
      anon_sym_Body,
      sym_identifier,
  [4999] = 5,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    STATE(277), 1,
      sym__nl,
    STATE(278), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(715), 2,
      sym__newline,
      sym__end_of_file,
  [5017] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(717), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5029] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(719), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5041] = 4,
    ACTIONS(723), 1,
      sym__string_content,
    STATE(212), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(721), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [5057] = 6,
    ACTIONS(705), 1,
      anon_sym_DOT,
    ACTIONS(726), 1,
      anon_sym_with,
    ACTIONS(728), 1,
      sym__newline,
    ACTIONS(730), 1,
      sym__end_of_file,
    STATE(62), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5077] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(732), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5089] = 4,
    ACTIONS(736), 1,
      sym__string_content,
    STATE(212), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(734), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [5105] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(738), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5117] = 4,
    ACTIONS(740), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(743), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(217), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [5133] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(745), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5145] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(747), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5157] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(749), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5169] = 4,
    ACTIONS(751), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(754), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(221), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [5185] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(756), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5197] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(758), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5209] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(760), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5221] = 4,
    ACTIONS(762), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(765), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(225), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [5237] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(767), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5249] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(769), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5261] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(771), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5273] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(773), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5285] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(775), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5297] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(777), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5309] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(779), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5321] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(781), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5333] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(783), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5345] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(785), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5357] = 4,
    ACTIONS(787), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(790), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(236), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [5373] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(792), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5385] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(794), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5397] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(796), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5409] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(798), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5421] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(800), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5433] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(300), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(802), 2,
      sym__newline,
      sym__end_of_file,
  [5448] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5459] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(121), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(804), 2,
      sym__newline,
      sym__end_of_file,
  [5474] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(118), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(806), 2,
      sym__newline,
      sym__end_of_file,
  [5489] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(113), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(808), 2,
      sym__newline,
      sym__end_of_file,
  [5504] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(115), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(810), 2,
      sym__newline,
      sym__end_of_file,
  [5519] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(112), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(812), 2,
      sym__newline,
      sym__end_of_file,
  [5534] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(202), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5545] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(210), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5556] = 3,
    STATE(23), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(814), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5569] = 5,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(816), 1,
      anon_sym_title,
    ACTIONS(818), 1,
      anon_sym_Body,
    STATE(377), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5586] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(659), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [5597] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(820), 2,
      sym__newline,
      sym__end_of_file,
  [5612] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(119), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(822), 2,
      sym__newline,
      sym__end_of_file,
  [5627] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(55), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(824), 2,
      sym__newline,
      sym__end_of_file,
  [5642] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(297), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(826), 2,
      sym__newline,
      sym__end_of_file,
  [5657] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(95), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(828), 2,
      sym__newline,
      sym__end_of_file,
  [5672] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(194), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5683] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(107), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(830), 2,
      sym__newline,
      sym__end_of_file,
  [5698] = 3,
    STATE(327), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(832), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5711] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(834), 2,
      sym__newline,
      sym__end_of_file,
  [5726] = 3,
    STATE(267), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(836), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5739] = 3,
    STATE(34), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(838), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5752] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(840), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [5763] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(842), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [5774] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(206), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5785] = 3,
    STATE(92), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(844), 2,
      sym__dedent,
      sym__end_of_file,
  [5797] = 4,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5811] = 3,
    STATE(216), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(850), 2,
      sym__dedent,
      sym__end_of_file,
  [5823] = 4,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(852), 1,
      anon_sym_COLON,
    STATE(71), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5837] = 4,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(854), 1,
      anon_sym_EQ,
    STATE(73), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5851] = 4,
    ACTIONS(856), 1,
      sym__newline,
    ACTIONS(858), 1,
      sym__indent,
    STATE(283), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5865] = 4,
    ACTIONS(856), 1,
      sym__newline,
    ACTIONS(860), 1,
      sym__indent,
    STATE(273), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5879] = 3,
    STATE(82), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(862), 2,
      sym__dedent,
      sym__end_of_file,
  [5891] = 4,
    ACTIONS(864), 1,
      anon_sym_COLON,
    ACTIONS(866), 1,
      anon_sym_EQ,
    STATE(120), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5905] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(868), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5915] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(870), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5925] = 4,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(864), 1,
      anon_sym_COLON,
    STATE(114), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5939] = 3,
    STATE(80), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(872), 2,
      sym__dedent,
      sym__end_of_file,
  [5951] = 3,
    ACTIONS(669), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(204), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [5963] = 3,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(200), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [5975] = 4,
    ACTIONS(578), 1,
      sym__indent,
    ACTIONS(874), 1,
      sym__newline,
    STATE(283), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5989] = 3,
    ACTIONS(879), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(877), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [6001] = 4,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(881), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6015] = 4,
    ACTIONS(864), 1,
      anon_sym_COLON,
    ACTIONS(883), 1,
      anon_sym_EQ,
    STATE(309), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6029] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(885), 3,
      sym__string_start,
      sym_integer,
      sym_identifier,
  [6039] = 3,
    STATE(85), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(887), 2,
      sym__dedent,
      sym__end_of_file,
  [6051] = 4,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(889), 1,
      anon_sym_EQ,
    STATE(98), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6065] = 4,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(891), 1,
      anon_sym_EQ,
    STATE(298), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6079] = 4,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(893), 1,
      anon_sym_EQ,
    STATE(96), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6093] = 4,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(895), 1,
      anon_sym_EQ,
    STATE(89), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6107] = 3,
    STATE(235), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(897), 2,
      sym__dedent,
      sym__end_of_file,
  [6119] = 3,
    STATE(232), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(899), 2,
      sym__dedent,
      sym__end_of_file,
  [6131] = 4,
    ACTIONS(856), 1,
      sym__newline,
    ACTIONS(901), 1,
      sym__indent,
    STATE(283), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6145] = 4,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(864), 1,
      anon_sym_COLON,
    STATE(75), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6159] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(903), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [6169] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(905), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [6179] = 3,
    STATE(88), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(907), 2,
      sym__dedent,
      sym__end_of_file,
  [6191] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(909), 1,
      anon_sym_Body,
    STATE(405), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6205] = 4,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(911), 1,
      anon_sym_EQ,
    STATE(25), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6219] = 3,
    STATE(57), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(913), 2,
      sym__newline,
      sym__end_of_file,
  [6231] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(915), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6241] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(917), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6251] = 3,
    STATE(122), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(919), 2,
      sym__newline,
      sym__end_of_file,
  [6263] = 4,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6277] = 3,
    STATE(19), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(923), 2,
      sym__newline,
      sym__end_of_file,
  [6289] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(925), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6299] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(927), 1,
      anon_sym_Body,
    STATE(397), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6313] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(929), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6323] = 3,
    STATE(94), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(931), 2,
      sym__dedent,
      sym__end_of_file,
  [6335] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(933), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6345] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(935), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6355] = 4,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6369] = 4,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(942), 1,
      anon_sym_EQ,
    STATE(91), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6383] = 4,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(944), 1,
      anon_sym_EQ,
    STATE(90), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6397] = 3,
    ACTIONS(669), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(196), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [6409] = 4,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(852), 1,
      anon_sym_COLON,
    STATE(63), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6423] = 4,
    ACTIONS(856), 1,
      sym__newline,
    ACTIONS(946), 1,
      sym__indent,
    STATE(295), 1,
      aux_sym_raw_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6437] = 3,
    ACTIONS(852), 1,
      anon_sym_COLON,
    STATE(288), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6448] = 3,
    ACTIONS(948), 1,
      sym__newline,
    STATE(348), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6459] = 3,
    ACTIONS(950), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6470] = 3,
    ACTIONS(948), 1,
      sym__newline,
    STATE(252), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6481] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(940), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6490] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(210), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6499] = 3,
    ACTIONS(952), 1,
      sym__newline,
    STATE(17), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6510] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(206), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6519] = 3,
    ACTIONS(950), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6530] = 3,
    ACTIONS(852), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6541] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6550] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(194), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6559] = 3,
    ACTIONS(852), 1,
      anon_sym_COLON,
    STATE(268), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6570] = 3,
    ACTIONS(852), 1,
      anon_sym_COLON,
    STATE(275), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6581] = 3,
    ACTIONS(948), 1,
      sym__newline,
    STATE(353), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6592] = 3,
    ACTIONS(952), 1,
      sym__newline,
    STATE(72), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6603] = 3,
    ACTIONS(954), 1,
      anon_sym_DOT,
    ACTIONS(956), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6614] = 3,
    ACTIONS(952), 1,
      sym__newline,
    STATE(148), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6625] = 3,
    ACTIONS(952), 1,
      sym__newline,
    STATE(152), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6636] = 3,
    ACTIONS(958), 1,
      anon_sym_COLON,
    STATE(65), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6647] = 3,
    ACTIONS(960), 1,
      anon_sym_LPAREN,
    STATE(372), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6658] = 3,
    ACTIONS(958), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6669] = 3,
    ACTIONS(952), 1,
      sym__newline,
    STATE(8), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6680] = 3,
    ACTIONS(864), 1,
      anon_sym_COLON,
    STATE(117), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6691] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(202), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6700] = 3,
    ACTIONS(852), 1,
      anon_sym_COLON,
    STATE(299), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6711] = 3,
    ACTIONS(948), 1,
      sym__newline,
    STATE(281), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6722] = 3,
    ACTIONS(954), 1,
      anon_sym_DOT,
    ACTIONS(962), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6733] = 3,
    ACTIONS(137), 1,
      anon_sym_description,
    STATE(294), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6744] = 3,
    ACTIONS(137), 1,
      anon_sym_description,
    STATE(293), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6755] = 3,
    ACTIONS(852), 1,
      anon_sym_COLON,
    STATE(311), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6766] = 3,
    ACTIONS(964), 1,
      anon_sym_COLON,
    STATE(74), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6777] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(657), 2,
      sym__newline,
      sym__indent,
  [6786] = 3,
    ACTIONS(137), 1,
      anon_sym_description,
    STATE(270), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6797] = 3,
    ACTIONS(948), 1,
      sym__newline,
    STATE(349), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6808] = 3,
    ACTIONS(966), 1,
      anon_sym_COLON,
    STATE(109), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6819] = 3,
    ACTIONS(964), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6830] = 3,
    ACTIONS(952), 1,
      sym__newline,
    STATE(15), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6841] = 3,
    ACTIONS(954), 1,
      anon_sym_DOT,
    ACTIONS(968), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6852] = 3,
    ACTIONS(966), 1,
      anon_sym_COLON,
    STATE(103), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6863] = 3,
    ACTIONS(964), 1,
      anon_sym_COLON,
    STATE(104), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6874] = 3,
    ACTIONS(952), 1,
      sym__newline,
    STATE(59), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6885] = 3,
    ACTIONS(864), 1,
      anon_sym_COLON,
    STATE(108), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6896] = 3,
    ACTIONS(952), 1,
      sym__newline,
    STATE(151), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6907] = 3,
    ACTIONS(952), 1,
      sym__newline,
    STATE(6), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6918] = 3,
    ACTIONS(852), 1,
      anon_sym_COLON,
    STATE(280), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6929] = 3,
    ACTIONS(948), 1,
      sym__newline,
    STATE(317), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6940] = 3,
    ACTIONS(960), 1,
      anon_sym_LPAREN,
    STATE(419), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6951] = 3,
    ACTIONS(852), 1,
      anon_sym_COLON,
    STATE(70), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6962] = 3,
    ACTIONS(958), 1,
      anon_sym_COLON,
    STATE(36), 1,
      sym_statement_block,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6973] = 3,
    ACTIONS(948), 1,
      sym__newline,
    STATE(282), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6984] = 2,
    ACTIONS(970), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6992] = 2,
    ACTIONS(972), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7000] = 2,
    ACTIONS(974), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7008] = 2,
    ACTIONS(976), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7016] = 2,
    ACTIONS(978), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7024] = 2,
    ACTIONS(980), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7032] = 2,
    ACTIONS(982), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7040] = 2,
    ACTIONS(984), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7048] = 2,
    ACTIONS(986), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7056] = 2,
    ACTIONS(988), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7064] = 2,
    ACTIONS(990), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7072] = 2,
    ACTIONS(992), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7080] = 2,
    ACTIONS(994), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7088] = 2,
    ACTIONS(996), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7096] = 2,
    ACTIONS(998), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7104] = 2,
    ACTIONS(1000), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7112] = 2,
    ACTIONS(1002), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7120] = 2,
    ACTIONS(1004), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7128] = 2,
    ACTIONS(1006), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7136] = 2,
    ACTIONS(1008), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7144] = 2,
    ACTIONS(1010), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7152] = 2,
    ACTIONS(1012), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7160] = 2,
    ACTIONS(1014), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7168] = 2,
    ACTIONS(1016), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7176] = 2,
    ACTIONS(1018), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7184] = 2,
    ACTIONS(1020), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7192] = 2,
    ACTIONS(1022), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7200] = 2,
    ACTIONS(1024), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7208] = 2,
    ACTIONS(1026), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7216] = 2,
    ACTIONS(1028), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7224] = 2,
    ACTIONS(1030), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7232] = 2,
    ACTIONS(1032), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7240] = 2,
    ACTIONS(1034), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7248] = 2,
    ACTIONS(1036), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7256] = 2,
    ACTIONS(1038), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7264] = 2,
    ACTIONS(1040), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7272] = 2,
    ACTIONS(1042), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7280] = 2,
    ACTIONS(1044), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7288] = 2,
    ACTIONS(1046), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7296] = 2,
    ACTIONS(1048), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7304] = 2,
    ACTIONS(1050), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7312] = 2,
    ACTIONS(1052), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7320] = 2,
    ACTIONS(1054), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7328] = 2,
    ACTIONS(1056), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7336] = 2,
    ACTIONS(1058), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7344] = 2,
    ACTIONS(1060), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7352] = 2,
    ACTIONS(1062), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7360] = 2,
    ACTIONS(1064), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7368] = 2,
    ACTIONS(1066), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7376] = 2,
    ACTIONS(1068), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7384] = 2,
    ACTIONS(1070), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7392] = 2,
    ACTIONS(1072), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7400] = 2,
    ACTIONS(1074), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7408] = 2,
    ACTIONS(1076), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7416] = 2,
    ACTIONS(1078), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7424] = 2,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7432] = 2,
    ACTIONS(1082), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7440] = 2,
    ACTIONS(1084), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7448] = 2,
    ACTIONS(1086), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7456] = 2,
    ACTIONS(1088), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7464] = 2,
    ACTIONS(1090), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 113,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 281,
  [SMALL_STATE(9)] = 337,
  [SMALL_STATE(10)] = 390,
  [SMALL_STATE(11)] = 442,
  [SMALL_STATE(12)] = 494,
  [SMALL_STATE(13)] = 546,
  [SMALL_STATE(14)] = 598,
  [SMALL_STATE(15)] = 663,
  [SMALL_STATE(16)] = 728,
  [SMALL_STATE(17)] = 793,
  [SMALL_STATE(18)] = 858,
  [SMALL_STATE(19)] = 920,
  [SMALL_STATE(20)] = 948,
  [SMALL_STATE(21)] = 976,
  [SMALL_STATE(22)] = 1004,
  [SMALL_STATE(23)] = 1032,
  [SMALL_STATE(24)] = 1060,
  [SMALL_STATE(25)] = 1088,
  [SMALL_STATE(26)] = 1115,
  [SMALL_STATE(27)] = 1142,
  [SMALL_STATE(28)] = 1177,
  [SMALL_STATE(29)] = 1212,
  [SMALL_STATE(30)] = 1232,
  [SMALL_STATE(31)] = 1252,
  [SMALL_STATE(32)] = 1272,
  [SMALL_STATE(33)] = 1292,
  [SMALL_STATE(34)] = 1312,
  [SMALL_STATE(35)] = 1332,
  [SMALL_STATE(36)] = 1354,
  [SMALL_STATE(37)] = 1376,
  [SMALL_STATE(38)] = 1396,
  [SMALL_STATE(39)] = 1418,
  [SMALL_STATE(40)] = 1440,
  [SMALL_STATE(41)] = 1476,
  [SMALL_STATE(42)] = 1512,
  [SMALL_STATE(43)] = 1534,
  [SMALL_STATE(44)] = 1570,
  [SMALL_STATE(45)] = 1590,
  [SMALL_STATE(46)] = 1626,
  [SMALL_STATE(47)] = 1646,
  [SMALL_STATE(48)] = 1665,
  [SMALL_STATE(49)] = 1684,
  [SMALL_STATE(50)] = 1717,
  [SMALL_STATE(51)] = 1736,
  [SMALL_STATE(52)] = 1755,
  [SMALL_STATE(53)] = 1774,
  [SMALL_STATE(54)] = 1793,
  [SMALL_STATE(55)] = 1812,
  [SMALL_STATE(56)] = 1831,
  [SMALL_STATE(57)] = 1850,
  [SMALL_STATE(58)] = 1869,
  [SMALL_STATE(59)] = 1890,
  [SMALL_STATE(60)] = 1923,
  [SMALL_STATE(61)] = 1944,
  [SMALL_STATE(62)] = 1963,
  [SMALL_STATE(63)] = 1982,
  [SMALL_STATE(64)] = 2001,
  [SMALL_STATE(65)] = 2022,
  [SMALL_STATE(66)] = 2041,
  [SMALL_STATE(67)] = 2060,
  [SMALL_STATE(68)] = 2079,
  [SMALL_STATE(69)] = 2098,
  [SMALL_STATE(70)] = 2117,
  [SMALL_STATE(71)] = 2136,
  [SMALL_STATE(72)] = 2155,
  [SMALL_STATE(73)] = 2188,
  [SMALL_STATE(74)] = 2207,
  [SMALL_STATE(75)] = 2225,
  [SMALL_STATE(76)] = 2243,
  [SMALL_STATE(77)] = 2261,
  [SMALL_STATE(78)] = 2281,
  [SMALL_STATE(79)] = 2301,
  [SMALL_STATE(80)] = 2321,
  [SMALL_STATE(81)] = 2341,
  [SMALL_STATE(82)] = 2359,
  [SMALL_STATE(83)] = 2379,
  [SMALL_STATE(84)] = 2399,
  [SMALL_STATE(85)] = 2419,
  [SMALL_STATE(86)] = 2439,
  [SMALL_STATE(87)] = 2459,
  [SMALL_STATE(88)] = 2479,
  [SMALL_STATE(89)] = 2499,
  [SMALL_STATE(90)] = 2519,
  [SMALL_STATE(91)] = 2539,
  [SMALL_STATE(92)] = 2559,
  [SMALL_STATE(93)] = 2579,
  [SMALL_STATE(94)] = 2599,
  [SMALL_STATE(95)] = 2619,
  [SMALL_STATE(96)] = 2637,
  [SMALL_STATE(97)] = 2657,
  [SMALL_STATE(98)] = 2677,
  [SMALL_STATE(99)] = 2697,
  [SMALL_STATE(100)] = 2717,
  [SMALL_STATE(101)] = 2737,
  [SMALL_STATE(102)] = 2755,
  [SMALL_STATE(103)] = 2773,
  [SMALL_STATE(104)] = 2791,
  [SMALL_STATE(105)] = 2809,
  [SMALL_STATE(106)] = 2829,
  [SMALL_STATE(107)] = 2847,
  [SMALL_STATE(108)] = 2865,
  [SMALL_STATE(109)] = 2883,
  [SMALL_STATE(110)] = 2901,
  [SMALL_STATE(111)] = 2921,
  [SMALL_STATE(112)] = 2941,
  [SMALL_STATE(113)] = 2961,
  [SMALL_STATE(114)] = 2981,
  [SMALL_STATE(115)] = 2999,
  [SMALL_STATE(116)] = 3019,
  [SMALL_STATE(117)] = 3037,
  [SMALL_STATE(118)] = 3055,
  [SMALL_STATE(119)] = 3075,
  [SMALL_STATE(120)] = 3095,
  [SMALL_STATE(121)] = 3113,
  [SMALL_STATE(122)] = 3133,
  [SMALL_STATE(123)] = 3151,
  [SMALL_STATE(124)] = 3178,
  [SMALL_STATE(125)] = 3205,
  [SMALL_STATE(126)] = 3232,
  [SMALL_STATE(127)] = 3261,
  [SMALL_STATE(128)] = 3288,
  [SMALL_STATE(129)] = 3317,
  [SMALL_STATE(130)] = 3346,
  [SMALL_STATE(131)] = 3373,
  [SMALL_STATE(132)] = 3400,
  [SMALL_STATE(133)] = 3427,
  [SMALL_STATE(134)] = 3454,
  [SMALL_STATE(135)] = 3481,
  [SMALL_STATE(136)] = 3508,
  [SMALL_STATE(137)] = 3535,
  [SMALL_STATE(138)] = 3562,
  [SMALL_STATE(139)] = 3589,
  [SMALL_STATE(140)] = 3616,
  [SMALL_STATE(141)] = 3643,
  [SMALL_STATE(142)] = 3672,
  [SMALL_STATE(143)] = 3696,
  [SMALL_STATE(144)] = 3720,
  [SMALL_STATE(145)] = 3744,
  [SMALL_STATE(146)] = 3768,
  [SMALL_STATE(147)] = 3792,
  [SMALL_STATE(148)] = 3816,
  [SMALL_STATE(149)] = 3841,
  [SMALL_STATE(150)] = 3862,
  [SMALL_STATE(151)] = 3885,
  [SMALL_STATE(152)] = 3910,
  [SMALL_STATE(153)] = 3935,
  [SMALL_STATE(154)] = 3956,
  [SMALL_STATE(155)] = 3976,
  [SMALL_STATE(156)] = 3996,
  [SMALL_STATE(157)] = 4016,
  [SMALL_STATE(158)] = 4034,
  [SMALL_STATE(159)] = 4054,
  [SMALL_STATE(160)] = 4074,
  [SMALL_STATE(161)] = 4094,
  [SMALL_STATE(162)] = 4114,
  [SMALL_STATE(163)] = 4134,
  [SMALL_STATE(164)] = 4154,
  [SMALL_STATE(165)] = 4174,
  [SMALL_STATE(166)] = 4194,
  [SMALL_STATE(167)] = 4214,
  [SMALL_STATE(168)] = 4232,
  [SMALL_STATE(169)] = 4252,
  [SMALL_STATE(170)] = 4272,
  [SMALL_STATE(171)] = 4292,
  [SMALL_STATE(172)] = 4312,
  [SMALL_STATE(173)] = 4332,
  [SMALL_STATE(174)] = 4352,
  [SMALL_STATE(175)] = 4372,
  [SMALL_STATE(176)] = 4390,
  [SMALL_STATE(177)] = 4410,
  [SMALL_STATE(178)] = 4430,
  [SMALL_STATE(179)] = 4448,
  [SMALL_STATE(180)] = 4468,
  [SMALL_STATE(181)] = 4488,
  [SMALL_STATE(182)] = 4508,
  [SMALL_STATE(183)] = 4529,
  [SMALL_STATE(184)] = 4548,
  [SMALL_STATE(185)] = 4567,
  [SMALL_STATE(186)] = 4586,
  [SMALL_STATE(187)] = 4605,
  [SMALL_STATE(188)] = 4624,
  [SMALL_STATE(189)] = 4637,
  [SMALL_STATE(190)] = 4656,
  [SMALL_STATE(191)] = 4675,
  [SMALL_STATE(192)] = 4688,
  [SMALL_STATE(193)] = 4701,
  [SMALL_STATE(194)] = 4720,
  [SMALL_STATE(195)] = 4739,
  [SMALL_STATE(196)] = 4760,
  [SMALL_STATE(197)] = 4779,
  [SMALL_STATE(198)] = 4800,
  [SMALL_STATE(199)] = 4821,
  [SMALL_STATE(200)] = 4842,
  [SMALL_STATE(201)] = 4861,
  [SMALL_STATE(202)] = 4882,
  [SMALL_STATE(203)] = 4903,
  [SMALL_STATE(204)] = 4924,
  [SMALL_STATE(205)] = 4943,
  [SMALL_STATE(206)] = 4963,
  [SMALL_STATE(207)] = 4975,
  [SMALL_STATE(208)] = 4987,
  [SMALL_STATE(209)] = 4999,
  [SMALL_STATE(210)] = 5017,
  [SMALL_STATE(211)] = 5029,
  [SMALL_STATE(212)] = 5041,
  [SMALL_STATE(213)] = 5057,
  [SMALL_STATE(214)] = 5077,
  [SMALL_STATE(215)] = 5089,
  [SMALL_STATE(216)] = 5105,
  [SMALL_STATE(217)] = 5117,
  [SMALL_STATE(218)] = 5133,
  [SMALL_STATE(219)] = 5145,
  [SMALL_STATE(220)] = 5157,
  [SMALL_STATE(221)] = 5169,
  [SMALL_STATE(222)] = 5185,
  [SMALL_STATE(223)] = 5197,
  [SMALL_STATE(224)] = 5209,
  [SMALL_STATE(225)] = 5221,
  [SMALL_STATE(226)] = 5237,
  [SMALL_STATE(227)] = 5249,
  [SMALL_STATE(228)] = 5261,
  [SMALL_STATE(229)] = 5273,
  [SMALL_STATE(230)] = 5285,
  [SMALL_STATE(231)] = 5297,
  [SMALL_STATE(232)] = 5309,
  [SMALL_STATE(233)] = 5321,
  [SMALL_STATE(234)] = 5333,
  [SMALL_STATE(235)] = 5345,
  [SMALL_STATE(236)] = 5357,
  [SMALL_STATE(237)] = 5373,
  [SMALL_STATE(238)] = 5385,
  [SMALL_STATE(239)] = 5397,
  [SMALL_STATE(240)] = 5409,
  [SMALL_STATE(241)] = 5421,
  [SMALL_STATE(242)] = 5433,
  [SMALL_STATE(243)] = 5448,
  [SMALL_STATE(244)] = 5459,
  [SMALL_STATE(245)] = 5474,
  [SMALL_STATE(246)] = 5489,
  [SMALL_STATE(247)] = 5504,
  [SMALL_STATE(248)] = 5519,
  [SMALL_STATE(249)] = 5534,
  [SMALL_STATE(250)] = 5545,
  [SMALL_STATE(251)] = 5556,
  [SMALL_STATE(252)] = 5569,
  [SMALL_STATE(253)] = 5586,
  [SMALL_STATE(254)] = 5597,
  [SMALL_STATE(255)] = 5612,
  [SMALL_STATE(256)] = 5627,
  [SMALL_STATE(257)] = 5642,
  [SMALL_STATE(258)] = 5657,
  [SMALL_STATE(259)] = 5672,
  [SMALL_STATE(260)] = 5683,
  [SMALL_STATE(261)] = 5698,
  [SMALL_STATE(262)] = 5711,
  [SMALL_STATE(263)] = 5726,
  [SMALL_STATE(264)] = 5739,
  [SMALL_STATE(265)] = 5752,
  [SMALL_STATE(266)] = 5763,
  [SMALL_STATE(267)] = 5774,
  [SMALL_STATE(268)] = 5785,
  [SMALL_STATE(269)] = 5797,
  [SMALL_STATE(270)] = 5811,
  [SMALL_STATE(271)] = 5823,
  [SMALL_STATE(272)] = 5837,
  [SMALL_STATE(273)] = 5851,
  [SMALL_STATE(274)] = 5865,
  [SMALL_STATE(275)] = 5879,
  [SMALL_STATE(276)] = 5891,
  [SMALL_STATE(277)] = 5905,
  [SMALL_STATE(278)] = 5915,
  [SMALL_STATE(279)] = 5925,
  [SMALL_STATE(280)] = 5939,
  [SMALL_STATE(281)] = 5951,
  [SMALL_STATE(282)] = 5963,
  [SMALL_STATE(283)] = 5975,
  [SMALL_STATE(284)] = 5989,
  [SMALL_STATE(285)] = 6001,
  [SMALL_STATE(286)] = 6015,
  [SMALL_STATE(287)] = 6029,
  [SMALL_STATE(288)] = 6039,
  [SMALL_STATE(289)] = 6051,
  [SMALL_STATE(290)] = 6065,
  [SMALL_STATE(291)] = 6079,
  [SMALL_STATE(292)] = 6093,
  [SMALL_STATE(293)] = 6107,
  [SMALL_STATE(294)] = 6119,
  [SMALL_STATE(295)] = 6131,
  [SMALL_STATE(296)] = 6145,
  [SMALL_STATE(297)] = 6159,
  [SMALL_STATE(298)] = 6169,
  [SMALL_STATE(299)] = 6179,
  [SMALL_STATE(300)] = 6191,
  [SMALL_STATE(301)] = 6205,
  [SMALL_STATE(302)] = 6219,
  [SMALL_STATE(303)] = 6231,
  [SMALL_STATE(304)] = 6241,
  [SMALL_STATE(305)] = 6251,
  [SMALL_STATE(306)] = 6263,
  [SMALL_STATE(307)] = 6277,
  [SMALL_STATE(308)] = 6289,
  [SMALL_STATE(309)] = 6299,
  [SMALL_STATE(310)] = 6313,
  [SMALL_STATE(311)] = 6323,
  [SMALL_STATE(312)] = 6335,
  [SMALL_STATE(313)] = 6345,
  [SMALL_STATE(314)] = 6355,
  [SMALL_STATE(315)] = 6369,
  [SMALL_STATE(316)] = 6383,
  [SMALL_STATE(317)] = 6397,
  [SMALL_STATE(318)] = 6409,
  [SMALL_STATE(319)] = 6423,
  [SMALL_STATE(320)] = 6437,
  [SMALL_STATE(321)] = 6448,
  [SMALL_STATE(322)] = 6459,
  [SMALL_STATE(323)] = 6470,
  [SMALL_STATE(324)] = 6481,
  [SMALL_STATE(325)] = 6490,
  [SMALL_STATE(326)] = 6499,
  [SMALL_STATE(327)] = 6510,
  [SMALL_STATE(328)] = 6519,
  [SMALL_STATE(329)] = 6530,
  [SMALL_STATE(330)] = 6541,
  [SMALL_STATE(331)] = 6550,
  [SMALL_STATE(332)] = 6559,
  [SMALL_STATE(333)] = 6570,
  [SMALL_STATE(334)] = 6581,
  [SMALL_STATE(335)] = 6592,
  [SMALL_STATE(336)] = 6603,
  [SMALL_STATE(337)] = 6614,
  [SMALL_STATE(338)] = 6625,
  [SMALL_STATE(339)] = 6636,
  [SMALL_STATE(340)] = 6647,
  [SMALL_STATE(341)] = 6658,
  [SMALL_STATE(342)] = 6669,
  [SMALL_STATE(343)] = 6680,
  [SMALL_STATE(344)] = 6691,
  [SMALL_STATE(345)] = 6700,
  [SMALL_STATE(346)] = 6711,
  [SMALL_STATE(347)] = 6722,
  [SMALL_STATE(348)] = 6733,
  [SMALL_STATE(349)] = 6744,
  [SMALL_STATE(350)] = 6755,
  [SMALL_STATE(351)] = 6766,
  [SMALL_STATE(352)] = 6777,
  [SMALL_STATE(353)] = 6786,
  [SMALL_STATE(354)] = 6797,
  [SMALL_STATE(355)] = 6808,
  [SMALL_STATE(356)] = 6819,
  [SMALL_STATE(357)] = 6830,
  [SMALL_STATE(358)] = 6841,
  [SMALL_STATE(359)] = 6852,
  [SMALL_STATE(360)] = 6863,
  [SMALL_STATE(361)] = 6874,
  [SMALL_STATE(362)] = 6885,
  [SMALL_STATE(363)] = 6896,
  [SMALL_STATE(364)] = 6907,
  [SMALL_STATE(365)] = 6918,
  [SMALL_STATE(366)] = 6929,
  [SMALL_STATE(367)] = 6940,
  [SMALL_STATE(368)] = 6951,
  [SMALL_STATE(369)] = 6962,
  [SMALL_STATE(370)] = 6973,
  [SMALL_STATE(371)] = 6984,
  [SMALL_STATE(372)] = 6992,
  [SMALL_STATE(373)] = 7000,
  [SMALL_STATE(374)] = 7008,
  [SMALL_STATE(375)] = 7016,
  [SMALL_STATE(376)] = 7024,
  [SMALL_STATE(377)] = 7032,
  [SMALL_STATE(378)] = 7040,
  [SMALL_STATE(379)] = 7048,
  [SMALL_STATE(380)] = 7056,
  [SMALL_STATE(381)] = 7064,
  [SMALL_STATE(382)] = 7072,
  [SMALL_STATE(383)] = 7080,
  [SMALL_STATE(384)] = 7088,
  [SMALL_STATE(385)] = 7096,
  [SMALL_STATE(386)] = 7104,
  [SMALL_STATE(387)] = 7112,
  [SMALL_STATE(388)] = 7120,
  [SMALL_STATE(389)] = 7128,
  [SMALL_STATE(390)] = 7136,
  [SMALL_STATE(391)] = 7144,
  [SMALL_STATE(392)] = 7152,
  [SMALL_STATE(393)] = 7160,
  [SMALL_STATE(394)] = 7168,
  [SMALL_STATE(395)] = 7176,
  [SMALL_STATE(396)] = 7184,
  [SMALL_STATE(397)] = 7192,
  [SMALL_STATE(398)] = 7200,
  [SMALL_STATE(399)] = 7208,
  [SMALL_STATE(400)] = 7216,
  [SMALL_STATE(401)] = 7224,
  [SMALL_STATE(402)] = 7232,
  [SMALL_STATE(403)] = 7240,
  [SMALL_STATE(404)] = 7248,
  [SMALL_STATE(405)] = 7256,
  [SMALL_STATE(406)] = 7264,
  [SMALL_STATE(407)] = 7272,
  [SMALL_STATE(408)] = 7280,
  [SMALL_STATE(409)] = 7288,
  [SMALL_STATE(410)] = 7296,
  [SMALL_STATE(411)] = 7304,
  [SMALL_STATE(412)] = 7312,
  [SMALL_STATE(413)] = 7320,
  [SMALL_STATE(414)] = 7328,
  [SMALL_STATE(415)] = 7336,
  [SMALL_STATE(416)] = 7344,
  [SMALL_STATE(417)] = 7352,
  [SMALL_STATE(418)] = 7360,
  [SMALL_STATE(419)] = 7368,
  [SMALL_STATE(420)] = 7376,
  [SMALL_STATE(421)] = 7384,
  [SMALL_STATE(422)] = 7392,
  [SMALL_STATE(423)] = 7400,
  [SMALL_STATE(424)] = 7408,
  [SMALL_STATE(425)] = 7416,
  [SMALL_STATE(426)] = 7424,
  [SMALL_STATE(427)] = 7432,
  [SMALL_STATE(428)] = 7440,
  [SMALL_STATE(429)] = 7448,
  [SMALL_STATE(430)] = 7456,
  [SMALL_STATE(431)] = 7464,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 6, .production_id = 16),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 6, .production_id = 16),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(177),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(428),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(404),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(406),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(429),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(431),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(367),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(402),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(401),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(398),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(393),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(389),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 34), SHIFT_REPEAT(292),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 34), SHIFT_REPEAT(301),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 34), SHIFT_REPEAT(316),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 34), SHIFT_REPEAT(315),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 34), SHIFT_REPEAT(291),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 34), SHIFT_REPEAT(289),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 34), SHIFT_REPEAT(285),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 34), SHIFT_REPEAT(408),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 34), SHIFT_REPEAT(413),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 34),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 13),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 13),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_instance, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_expression, 3, .production_id = 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_expression, 3, .production_id = 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 27),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 27),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 39),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 39),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3, .production_id = 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 6),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat2, 2), SHIFT_REPEAT(191),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat2, 2),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat2, 2), SHIFT_REPEAT(159),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat2, 2), SHIFT_REPEAT(154),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat2, 2), SHIFT_REPEAT(150),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 9, .production_id = 33),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 8, .production_id = 25),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 17),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 7, .production_id = 15),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 14),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_inter, 7),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3, .production_id = 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3, .production_id = 12),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_result, 3, .production_id = 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, .production_id = 11),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 5, .production_id = 10),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 7),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 3, .production_id = 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 3, .production_id = 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 24),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 24),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 23),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 23),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 22),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 22),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 11, .production_id = 52),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 11, .production_id = 52),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 10, .production_id = 51),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 10, .production_id = 51),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 21),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 21),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 20),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 20),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 9, .production_id = 50),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 9, .production_id = 50),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 19),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 19),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 18),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 18),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 8, .production_id = 49),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 8, .production_id = 49),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 2, .production_id = 26),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 2, .production_id = 26),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 28),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 28),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 29),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 29),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 7, .production_id = 48),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 7, .production_id = 48),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 46),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 7, .production_id = 46),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 6, .production_id = 47),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 6, .production_id = 47),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 30),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 30),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 37),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 37),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 31),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 31),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 46),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 46),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 32),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 32),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 37),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 5, .production_id = 37),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 36),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 36),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 37),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 37),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 44),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 44),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 4, .production_id = 38),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 4, .production_id = 38),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 43),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 43),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 42),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 42),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 41),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 41),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 40),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 40),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(284),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(173),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(215),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(386),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(387),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(390),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(382),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(424),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(418),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(191),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(178),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation2, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 36),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 36),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 37),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 37),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(212),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 46),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 46),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(209),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 37),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 36),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 37),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(290),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 37),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 46),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 37),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(382),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 37),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 36),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 37),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 46),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 36),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 37),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 46),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 36),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 37),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 46),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(407),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 37),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 46),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 46),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 46),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 37),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_dollar, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 9),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [874] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(352),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 45),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 35),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 36),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 37),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 37),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 46),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 37),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 46),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2), SHIFT_REPEAT(400),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [990] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 4),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 3),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
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
