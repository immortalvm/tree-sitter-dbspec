#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 433
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
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
  sym_integer = 63,
  sym_short_description = 64,
  aux_sym__short_descr_token1 = 65,
  sym__newline = 66,
  sym__indent = 67,
  sym__dedent = 68,
  sym__inter_start = 69,
  sym__inter_start2 = 70,
  sym__inter_end = 71,
  sym__raw = 72,
  sym__string_start = 73,
  sym__string_content = 74,
  sym__string_end = 75,
  sym__comment = 76,
  sym__end_of_file = 77,
  sym__skip = 78,
  sym__set_inter = 79,
  sym_source_file = 80,
  sym_parameters = 81,
  sym_parameter = 82,
  sym__statement = 83,
  sym_nop = 84,
  sym_log = 85,
  sym_assert = 86,
  sym_set_inter = 87,
  sym_set = 88,
  sym__expression = 89,
  sym_execute_using = 90,
  sym_script_result = 91,
  sym_connection = 92,
  sym_execute_sql = 93,
  sym_query = 94,
  sym_siard_output = 95,
  sym_siard_metadata = 96,
  sym__siard_dbname = 97,
  sym__siard_description = 98,
  sym__siard_archiver = 99,
  sym__siard_archiverContact = 100,
  sym__siard_dataOwner = 101,
  sym__siard_dataOriginTimespan = 102,
  sym__siard_lobFolder = 103,
  sym_siard_schema = 104,
  sym_siard_type = 105,
  sym_siard_table = 106,
  sym_siard_column = 107,
  sym_siard_field = 108,
  sym_siard_key = 109,
  sym_siard_check = 110,
  sym_siard_view = 111,
  sym_command_declaration = 112,
  sym_for_loop = 113,
  sym_for_variables = 114,
  sym_conditional = 115,
  sym_statement_block = 116,
  sym__boolean_expression = 117,
  sym_comparison = 118,
  sym_comparison_operator = 119,
  sym__basic_expression = 120,
  sym_variable_instance = 121,
  sym_dot_expression = 122,
  sym_dot_operator = 123,
  sym_string = 124,
  sym_string_content = 125,
  sym_escape_sequence = 126,
  sym__short_descr = 127,
  sym__nl = 128,
  sym__ni = 129,
  sym__ded = 130,
  sym_interpolation = 131,
  sym_interpolation2 = 132,
  sym_key_value_pairs = 133,
  sym_key_value_pair = 134,
  sym_raw = 135,
  sym_raw_content = 136,
  aux_sym_source_file_repeat1 = 137,
  aux_sym_parameters_repeat1 = 138,
  aux_sym_siard_metadata_repeat1 = 139,
  aux_sym_siard_schema_repeat1 = 140,
  aux_sym_siard_table_repeat1 = 141,
  aux_sym_siard_column_repeat1 = 142,
  aux_sym_siard_view_repeat1 = 143,
  aux_sym_for_variables_repeat1 = 144,
  aux_sym_string_repeat1 = 145,
  aux_sym_string_content_repeat1 = 146,
  aux_sym_key_value_pairs_repeat1 = 147,
  aux_sym_raw_repeat1 = 148,
  aux_sym_raw_content_repeat1 = 149,
  aux_sym_raw_content_repeat2 = 150,
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
  [aux_sym_raw_content_repeat2] = "raw_content_repeat2",
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
  [aux_sym_raw_content_repeat2] = aux_sym_raw_content_repeat2,
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
  [aux_sym_raw_content_repeat2] = {
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
  [8] = 8,
  [9] = 7,
  [10] = 8,
  [11] = 6,
  [12] = 12,
  [13] = 4,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
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
  [29] = 28,
  [30] = 2,
  [31] = 22,
  [32] = 32,
  [33] = 33,
  [34] = 24,
  [35] = 20,
  [36] = 23,
  [37] = 37,
  [38] = 21,
  [39] = 39,
  [40] = 37,
  [41] = 41,
  [42] = 41,
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
  [57] = 33,
  [58] = 58,
  [59] = 59,
  [60] = 52,
  [61] = 61,
  [62] = 39,
  [63] = 63,
  [64] = 64,
  [65] = 32,
  [66] = 66,
  [67] = 67,
  [68] = 53,
  [69] = 66,
  [70] = 47,
  [71] = 48,
  [72] = 49,
  [73] = 61,
  [74] = 67,
  [75] = 59,
  [76] = 76,
  [77] = 43,
  [78] = 78,
  [79] = 46,
  [80] = 55,
  [81] = 54,
  [82] = 56,
  [83] = 50,
  [84] = 44,
  [85] = 85,
  [86] = 51,
  [87] = 45,
  [88] = 64,
  [89] = 63,
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
  [127] = 123,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 135,
  [137] = 132,
  [138] = 129,
  [139] = 132,
  [140] = 133,
  [141] = 132,
  [142] = 142,
  [143] = 129,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 145,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 155,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 163,
  [166] = 166,
  [167] = 159,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 151,
  [172] = 154,
  [173] = 170,
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
  [194] = 180,
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
  [241] = 198,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 242,
  [246] = 243,
  [247] = 242,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 242,
  [253] = 248,
  [254] = 23,
  [255] = 22,
  [256] = 24,
  [257] = 257,
  [258] = 21,
  [259] = 259,
  [260] = 20,
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
  [279] = 273,
  [280] = 280,
  [281] = 275,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 269,
  [286] = 267,
  [287] = 280,
  [288] = 284,
  [289] = 266,
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
  [301] = 301,
  [302] = 263,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 272,
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
  [317] = 317,
  [318] = 23,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 24,
  [324] = 21,
  [325] = 20,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 22,
  [340] = 340,
  [341] = 334,
  [342] = 326,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 331,
  [348] = 330,
  [349] = 349,
  [350] = 350,
  [351] = 345,
  [352] = 338,
  [353] = 353,
  [354] = 322,
  [355] = 355,
  [356] = 319,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 316,
  [361] = 335,
  [362] = 358,
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
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 372,
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
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 384,
  [401] = 368,
  [402] = 402,
  [403] = 366,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 399,
  [412] = 412,
  [413] = 410,
  [414] = 409,
  [415] = 374,
  [416] = 371,
  [417] = 369,
  [418] = 393,
  [419] = 412,
  [420] = 404,
  [421] = 397,
  [422] = 407,
  [423] = 373,
  [424] = 367,
  [425] = 394,
  [426] = 392,
  [427] = 380,
  [428] = 365,
  [429] = 378,
  [430] = 375,
  [431] = 381,
  [432] = 406,
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
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'U') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(105);
      if (lookahead == 'x') ADVANCE(100);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == 'U') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
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
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(62);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_execute_using_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_script_result_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_connection_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_execute_sql_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_query_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (lookahead == 'e') ADVANCE(90);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(2);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(3);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(95);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(92);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(89);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(91);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(87);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(75);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(81);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(85);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(86);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(94);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(74);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(83);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(84);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(93);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(80);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_short_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__short_descr_token1);
      if (lookahead == ' ') ADVANCE(113);
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
  [1] = {.lex_state = 39, .external_lex_state = 2},
  [2] = {.lex_state = 39, .external_lex_state = 3},
  [3] = {.lex_state = 39, .external_lex_state = 3},
  [4] = {.lex_state = 39, .external_lex_state = 3},
  [5] = {.lex_state = 39, .external_lex_state = 2},
  [6] = {.lex_state = 39, .external_lex_state = 2},
  [7] = {.lex_state = 39, .external_lex_state = 2},
  [8] = {.lex_state = 39, .external_lex_state = 2},
  [9] = {.lex_state = 39, .external_lex_state = 2},
  [10] = {.lex_state = 39, .external_lex_state = 2},
  [11] = {.lex_state = 39, .external_lex_state = 2},
  [12] = {.lex_state = 39, .external_lex_state = 2},
  [13] = {.lex_state = 39, .external_lex_state = 2},
  [14] = {.lex_state = 39, .external_lex_state = 2},
  [15] = {.lex_state = 4, .external_lex_state = 3},
  [16] = {.lex_state = 4, .external_lex_state = 3},
  [17] = {.lex_state = 4, .external_lex_state = 3},
  [18] = {.lex_state = 4, .external_lex_state = 3},
  [19] = {.lex_state = 4, .external_lex_state = 3},
  [20] = {.lex_state = 39, .external_lex_state = 2},
  [21] = {.lex_state = 39, .external_lex_state = 2},
  [22] = {.lex_state = 39, .external_lex_state = 2},
  [23] = {.lex_state = 39, .external_lex_state = 2},
  [24] = {.lex_state = 39, .external_lex_state = 2},
  [25] = {.lex_state = 4, .external_lex_state = 3},
  [26] = {.lex_state = 4, .external_lex_state = 3},
  [27] = {.lex_state = 4, .external_lex_state = 3},
  [28] = {.lex_state = 4, .external_lex_state = 3},
  [29] = {.lex_state = 39, .external_lex_state = 2},
  [30] = {.lex_state = 39, .external_lex_state = 2},
  [31] = {.lex_state = 39, .external_lex_state = 3},
  [32] = {.lex_state = 39, .external_lex_state = 3},
  [33] = {.lex_state = 39, .external_lex_state = 3},
  [34] = {.lex_state = 39, .external_lex_state = 3},
  [35] = {.lex_state = 39, .external_lex_state = 3},
  [36] = {.lex_state = 39, .external_lex_state = 3},
  [37] = {.lex_state = 39, .external_lex_state = 3},
  [38] = {.lex_state = 39, .external_lex_state = 3},
  [39] = {.lex_state = 39, .external_lex_state = 3},
  [40] = {.lex_state = 39, .external_lex_state = 2},
  [41] = {.lex_state = 4, .external_lex_state = 4},
  [42] = {.lex_state = 4, .external_lex_state = 4},
  [43] = {.lex_state = 39, .external_lex_state = 3},
  [44] = {.lex_state = 39, .external_lex_state = 3},
  [45] = {.lex_state = 39, .external_lex_state = 3},
  [46] = {.lex_state = 39, .external_lex_state = 3},
  [47] = {.lex_state = 39, .external_lex_state = 3},
  [48] = {.lex_state = 39, .external_lex_state = 3},
  [49] = {.lex_state = 39, .external_lex_state = 3},
  [50] = {.lex_state = 39, .external_lex_state = 3},
  [51] = {.lex_state = 39, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 5},
  [53] = {.lex_state = 39, .external_lex_state = 3},
  [54] = {.lex_state = 39, .external_lex_state = 3},
  [55] = {.lex_state = 39, .external_lex_state = 3},
  [56] = {.lex_state = 39, .external_lex_state = 3},
  [57] = {.lex_state = 39, .external_lex_state = 2},
  [58] = {.lex_state = 39, .external_lex_state = 2},
  [59] = {.lex_state = 39, .external_lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 5},
  [61] = {.lex_state = 39, .external_lex_state = 3},
  [62] = {.lex_state = 39, .external_lex_state = 2},
  [63] = {.lex_state = 39, .external_lex_state = 3},
  [64] = {.lex_state = 39, .external_lex_state = 3},
  [65] = {.lex_state = 39, .external_lex_state = 2},
  [66] = {.lex_state = 39, .external_lex_state = 3},
  [67] = {.lex_state = 39, .external_lex_state = 3},
  [68] = {.lex_state = 39, .external_lex_state = 2},
  [69] = {.lex_state = 39, .external_lex_state = 2},
  [70] = {.lex_state = 39, .external_lex_state = 2},
  [71] = {.lex_state = 39, .external_lex_state = 2},
  [72] = {.lex_state = 39, .external_lex_state = 2},
  [73] = {.lex_state = 39, .external_lex_state = 2},
  [74] = {.lex_state = 39, .external_lex_state = 2},
  [75] = {.lex_state = 39, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 5},
  [77] = {.lex_state = 39, .external_lex_state = 2},
  [78] = {.lex_state = 4, .external_lex_state = 3},
  [79] = {.lex_state = 39, .external_lex_state = 2},
  [80] = {.lex_state = 39, .external_lex_state = 2},
  [81] = {.lex_state = 39, .external_lex_state = 2},
  [82] = {.lex_state = 39, .external_lex_state = 2},
  [83] = {.lex_state = 39, .external_lex_state = 2},
  [84] = {.lex_state = 39, .external_lex_state = 2},
  [85] = {.lex_state = 4, .external_lex_state = 3},
  [86] = {.lex_state = 39, .external_lex_state = 2},
  [87] = {.lex_state = 39, .external_lex_state = 2},
  [88] = {.lex_state = 39, .external_lex_state = 2},
  [89] = {.lex_state = 39, .external_lex_state = 2},
  [90] = {.lex_state = 4, .external_lex_state = 3},
  [91] = {.lex_state = 4, .external_lex_state = 3},
  [92] = {.lex_state = 4, .external_lex_state = 3},
  [93] = {.lex_state = 4, .external_lex_state = 3},
  [94] = {.lex_state = 4, .external_lex_state = 3},
  [95] = {.lex_state = 4, .external_lex_state = 3},
  [96] = {.lex_state = 4, .external_lex_state = 3},
  [97] = {.lex_state = 4, .external_lex_state = 3},
  [98] = {.lex_state = 4, .external_lex_state = 3},
  [99] = {.lex_state = 4, .external_lex_state = 3},
  [100] = {.lex_state = 4, .external_lex_state = 3},
  [101] = {.lex_state = 4, .external_lex_state = 3},
  [102] = {.lex_state = 4, .external_lex_state = 3},
  [103] = {.lex_state = 4, .external_lex_state = 3},
  [104] = {.lex_state = 4, .external_lex_state = 3},
  [105] = {.lex_state = 4, .external_lex_state = 3},
  [106] = {.lex_state = 4, .external_lex_state = 3},
  [107] = {.lex_state = 4, .external_lex_state = 3},
  [108] = {.lex_state = 4, .external_lex_state = 3},
  [109] = {.lex_state = 4, .external_lex_state = 3},
  [110] = {.lex_state = 4, .external_lex_state = 3},
  [111] = {.lex_state = 4, .external_lex_state = 3},
  [112] = {.lex_state = 4, .external_lex_state = 3},
  [113] = {.lex_state = 4, .external_lex_state = 3},
  [114] = {.lex_state = 4, .external_lex_state = 3},
  [115] = {.lex_state = 4, .external_lex_state = 3},
  [116] = {.lex_state = 4, .external_lex_state = 3},
  [117] = {.lex_state = 4, .external_lex_state = 3},
  [118] = {.lex_state = 4, .external_lex_state = 3},
  [119] = {.lex_state = 4, .external_lex_state = 3},
  [120] = {.lex_state = 4, .external_lex_state = 3},
  [121] = {.lex_state = 4, .external_lex_state = 3},
  [122] = {.lex_state = 4, .external_lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 6},
  [124] = {.lex_state = 4, .external_lex_state = 3},
  [125] = {.lex_state = 4, .external_lex_state = 3},
  [126] = {.lex_state = 4, .external_lex_state = 3},
  [127] = {.lex_state = 0, .external_lex_state = 6},
  [128] = {.lex_state = 4, .external_lex_state = 3},
  [129] = {.lex_state = 39, .external_lex_state = 7},
  [130] = {.lex_state = 4, .external_lex_state = 3},
  [131] = {.lex_state = 39, .external_lex_state = 7},
  [132] = {.lex_state = 39, .external_lex_state = 7},
  [133] = {.lex_state = 4, .external_lex_state = 4},
  [134] = {.lex_state = 39, .external_lex_state = 7},
  [135] = {.lex_state = 4, .external_lex_state = 4},
  [136] = {.lex_state = 4, .external_lex_state = 4},
  [137] = {.lex_state = 39, .external_lex_state = 7},
  [138] = {.lex_state = 39, .external_lex_state = 7},
  [139] = {.lex_state = 39, .external_lex_state = 7},
  [140] = {.lex_state = 4, .external_lex_state = 4},
  [141] = {.lex_state = 39, .external_lex_state = 7},
  [142] = {.lex_state = 4, .external_lex_state = 3},
  [143] = {.lex_state = 39, .external_lex_state = 7},
  [144] = {.lex_state = 4, .external_lex_state = 3},
  [145] = {.lex_state = 39, .external_lex_state = 2},
  [146] = {.lex_state = 4, .external_lex_state = 3},
  [147] = {.lex_state = 0, .external_lex_state = 5},
  [148] = {.lex_state = 39, .external_lex_state = 2},
  [149] = {.lex_state = 4, .external_lex_state = 3},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 4, .external_lex_state = 4},
  [152] = {.lex_state = 4, .external_lex_state = 4},
  [153] = {.lex_state = 4, .external_lex_state = 4},
  [154] = {.lex_state = 4, .external_lex_state = 4},
  [155] = {.lex_state = 4, .external_lex_state = 4},
  [156] = {.lex_state = 4, .external_lex_state = 4},
  [157] = {.lex_state = 4, .external_lex_state = 4},
  [158] = {.lex_state = 4, .external_lex_state = 4},
  [159] = {.lex_state = 4, .external_lex_state = 4},
  [160] = {.lex_state = 4, .external_lex_state = 4},
  [161] = {.lex_state = 0, .external_lex_state = 5},
  [162] = {.lex_state = 4, .external_lex_state = 4},
  [163] = {.lex_state = 4, .external_lex_state = 4},
  [164] = {.lex_state = 4, .external_lex_state = 4},
  [165] = {.lex_state = 4, .external_lex_state = 4},
  [166] = {.lex_state = 4, .external_lex_state = 4},
  [167] = {.lex_state = 4, .external_lex_state = 4},
  [168] = {.lex_state = 4, .external_lex_state = 4},
  [169] = {.lex_state = 4, .external_lex_state = 4},
  [170] = {.lex_state = 4, .external_lex_state = 4},
  [171] = {.lex_state = 4, .external_lex_state = 4},
  [172] = {.lex_state = 4, .external_lex_state = 4},
  [173] = {.lex_state = 4, .external_lex_state = 4},
  [174] = {.lex_state = 0, .external_lex_state = 5},
  [175] = {.lex_state = 4, .external_lex_state = 4},
  [176] = {.lex_state = 0, .external_lex_state = 5},
  [177] = {.lex_state = 4, .external_lex_state = 4},
  [178] = {.lex_state = 0, .external_lex_state = 8},
  [179] = {.lex_state = 4, .external_lex_state = 3},
  [180] = {.lex_state = 4, .external_lex_state = 3},
  [181] = {.lex_state = 4, .external_lex_state = 3},
  [182] = {.lex_state = 0, .external_lex_state = 8},
  [183] = {.lex_state = 4, .external_lex_state = 3},
  [184] = {.lex_state = 4, .external_lex_state = 3},
  [185] = {.lex_state = 4, .external_lex_state = 3},
  [186] = {.lex_state = 0, .external_lex_state = 8},
  [187] = {.lex_state = 0, .external_lex_state = 8},
  [188] = {.lex_state = 0, .external_lex_state = 8},
  [189] = {.lex_state = 4, .external_lex_state = 3},
  [190] = {.lex_state = 4, .external_lex_state = 3},
  [191] = {.lex_state = 0, .external_lex_state = 8},
  [192] = {.lex_state = 4, .external_lex_state = 3},
  [193] = {.lex_state = 0, .external_lex_state = 8},
  [194] = {.lex_state = 4, .external_lex_state = 3},
  [195] = {.lex_state = 0, .external_lex_state = 5},
  [196] = {.lex_state = 0, .external_lex_state = 8},
  [197] = {.lex_state = 4, .external_lex_state = 3},
  [198] = {.lex_state = 0, .external_lex_state = 5},
  [199] = {.lex_state = 4, .external_lex_state = 3},
  [200] = {.lex_state = 4, .external_lex_state = 3},
  [201] = {.lex_state = 4, .external_lex_state = 3},
  [202] = {.lex_state = 39, .external_lex_state = 7},
  [203] = {.lex_state = 4, .external_lex_state = 3},
  [204] = {.lex_state = 0, .external_lex_state = 8},
  [205] = {.lex_state = 4, .external_lex_state = 3},
  [206] = {.lex_state = 4, .external_lex_state = 3},
  [207] = {.lex_state = 4, .external_lex_state = 3},
  [208] = {.lex_state = 4, .external_lex_state = 3},
  [209] = {.lex_state = 4, .external_lex_state = 3},
  [210] = {.lex_state = 4, .external_lex_state = 3},
  [211] = {.lex_state = 4, .external_lex_state = 3},
  [212] = {.lex_state = 4, .external_lex_state = 8},
  [213] = {.lex_state = 4, .external_lex_state = 3},
  [214] = {.lex_state = 8, .external_lex_state = 2},
  [215] = {.lex_state = 4, .external_lex_state = 3},
  [216] = {.lex_state = 39, .external_lex_state = 7},
  [217] = {.lex_state = 4, .external_lex_state = 3},
  [218] = {.lex_state = 4, .external_lex_state = 3},
  [219] = {.lex_state = 4, .external_lex_state = 3},
  [220] = {.lex_state = 4, .external_lex_state = 3},
  [221] = {.lex_state = 4, .external_lex_state = 3},
  [222] = {.lex_state = 4, .external_lex_state = 3},
  [223] = {.lex_state = 4, .external_lex_state = 3},
  [224] = {.lex_state = 4, .external_lex_state = 3},
  [225] = {.lex_state = 4, .external_lex_state = 3},
  [226] = {.lex_state = 4, .external_lex_state = 3},
  [227] = {.lex_state = 4, .external_lex_state = 3},
  [228] = {.lex_state = 4, .external_lex_state = 3},
  [229] = {.lex_state = 4, .external_lex_state = 3},
  [230] = {.lex_state = 4, .external_lex_state = 3},
  [231] = {.lex_state = 4, .external_lex_state = 3},
  [232] = {.lex_state = 4, .external_lex_state = 3},
  [233] = {.lex_state = 4, .external_lex_state = 3},
  [234] = {.lex_state = 4, .external_lex_state = 3},
  [235] = {.lex_state = 4, .external_lex_state = 3},
  [236] = {.lex_state = 4, .external_lex_state = 8},
  [237] = {.lex_state = 0, .external_lex_state = 8},
  [238] = {.lex_state = 0, .external_lex_state = 8},
  [239] = {.lex_state = 0, .external_lex_state = 8},
  [240] = {.lex_state = 0, .external_lex_state = 8},
  [241] = {.lex_state = 39, .external_lex_state = 7},
  [242] = {.lex_state = 4, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 8},
  [244] = {.lex_state = 0, .external_lex_state = 8},
  [245] = {.lex_state = 4, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 8},
  [247] = {.lex_state = 4, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 8},
  [249] = {.lex_state = 0, .external_lex_state = 8},
  [250] = {.lex_state = 0, .external_lex_state = 8},
  [251] = {.lex_state = 0, .external_lex_state = 8},
  [252] = {.lex_state = 4, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 8},
  [254] = {.lex_state = 4, .external_lex_state = 8},
  [255] = {.lex_state = 4, .external_lex_state = 8},
  [256] = {.lex_state = 4, .external_lex_state = 8},
  [257] = {.lex_state = 39, .external_lex_state = 7},
  [258] = {.lex_state = 4, .external_lex_state = 8},
  [259] = {.lex_state = 0, .external_lex_state = 8},
  [260] = {.lex_state = 4, .external_lex_state = 8},
  [261] = {.lex_state = 4, .external_lex_state = 2},
  [262] = {.lex_state = 4, .external_lex_state = 3},
  [263] = {.lex_state = 0, .external_lex_state = 3},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 8},
  [266] = {.lex_state = 0, .external_lex_state = 3},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 3},
  [269] = {.lex_state = 4, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 4, .external_lex_state = 3},
  [272] = {.lex_state = 4, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 8},
  [274] = {.lex_state = 0, .external_lex_state = 3},
  [275] = {.lex_state = 0, .external_lex_state = 3},
  [276] = {.lex_state = 0, .external_lex_state = 3},
  [277] = {.lex_state = 0, .external_lex_state = 3},
  [278] = {.lex_state = 4, .external_lex_state = 2},
  [279] = {.lex_state = 0, .external_lex_state = 8},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 3},
  [282] = {.lex_state = 4, .external_lex_state = 2},
  [283] = {.lex_state = 4, .external_lex_state = 3},
  [284] = {.lex_state = 0, .external_lex_state = 8},
  [285] = {.lex_state = 4, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 0, .external_lex_state = 8},
  [289] = {.lex_state = 0, .external_lex_state = 3},
  [290] = {.lex_state = 0, .external_lex_state = 3},
  [291] = {.lex_state = 4, .external_lex_state = 2},
  [292] = {.lex_state = 4, .external_lex_state = 2},
  [293] = {.lex_state = 4, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 3},
  [295] = {.lex_state = 0, .external_lex_state = 3},
  [296] = {.lex_state = 4, .external_lex_state = 2},
  [297] = {.lex_state = 0, .external_lex_state = 2},
  [298] = {.lex_state = 0, .external_lex_state = 3},
  [299] = {.lex_state = 4, .external_lex_state = 2},
  [300] = {.lex_state = 4, .external_lex_state = 2},
  [301] = {.lex_state = 4, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 3},
  [303] = {.lex_state = 4, .external_lex_state = 2},
  [304] = {.lex_state = 4, .external_lex_state = 3},
  [305] = {.lex_state = 4, .external_lex_state = 3},
  [306] = {.lex_state = 4, .external_lex_state = 2},
  [307] = {.lex_state = 4, .external_lex_state = 2},
  [308] = {.lex_state = 4, .external_lex_state = 4},
  [309] = {.lex_state = 4, .external_lex_state = 3},
  [310] = {.lex_state = 4, .external_lex_state = 2},
  [311] = {.lex_state = 4, .external_lex_state = 3},
  [312] = {.lex_state = 0, .external_lex_state = 3},
  [313] = {.lex_state = 4, .external_lex_state = 3},
  [314] = {.lex_state = 4, .external_lex_state = 3},
  [315] = {.lex_state = 4, .external_lex_state = 3},
  [316] = {.lex_state = 0, .external_lex_state = 9},
  [317] = {.lex_state = 0, .external_lex_state = 9},
  [318] = {.lex_state = 0, .external_lex_state = 10},
  [319] = {.lex_state = 0, .external_lex_state = 10},
  [320] = {.lex_state = 4, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 0, .external_lex_state = 10},
  [324] = {.lex_state = 0, .external_lex_state = 10},
  [325] = {.lex_state = 0, .external_lex_state = 10},
  [326] = {.lex_state = 0, .external_lex_state = 9},
  [327] = {.lex_state = 0, .external_lex_state = 9},
  [328] = {.lex_state = 0, .external_lex_state = 9},
  [329] = {.lex_state = 0, .external_lex_state = 9},
  [330] = {.lex_state = 0, .external_lex_state = 2},
  [331] = {.lex_state = 0, .external_lex_state = 2},
  [332] = {.lex_state = 4, .external_lex_state = 2},
  [333] = {.lex_state = 4, .external_lex_state = 2},
  [334] = {.lex_state = 0, .external_lex_state = 9},
  [335] = {.lex_state = 0, .external_lex_state = 2},
  [336] = {.lex_state = 0, .external_lex_state = 2},
  [337] = {.lex_state = 0, .external_lex_state = 10},
  [338] = {.lex_state = 0, .external_lex_state = 2},
  [339] = {.lex_state = 0, .external_lex_state = 10},
  [340] = {.lex_state = 0, .external_lex_state = 2},
  [341] = {.lex_state = 0, .external_lex_state = 9},
  [342] = {.lex_state = 0, .external_lex_state = 9},
  [343] = {.lex_state = 0, .external_lex_state = 9},
  [344] = {.lex_state = 0, .external_lex_state = 2},
  [345] = {.lex_state = 0, .external_lex_state = 9},
  [346] = {.lex_state = 0, .external_lex_state = 9},
  [347] = {.lex_state = 0, .external_lex_state = 2},
  [348] = {.lex_state = 0, .external_lex_state = 2},
  [349] = {.lex_state = 0, .external_lex_state = 2},
  [350] = {.lex_state = 0, .external_lex_state = 9},
  [351] = {.lex_state = 0, .external_lex_state = 9},
  [352] = {.lex_state = 0, .external_lex_state = 2},
  [353] = {.lex_state = 0, .external_lex_state = 9},
  [354] = {.lex_state = 0, .external_lex_state = 2},
  [355] = {.lex_state = 0, .external_lex_state = 9},
  [356] = {.lex_state = 0, .external_lex_state = 10},
  [357] = {.lex_state = 0, .external_lex_state = 2},
  [358] = {.lex_state = 0, .external_lex_state = 9},
  [359] = {.lex_state = 0, .external_lex_state = 2},
  [360] = {.lex_state = 0, .external_lex_state = 9},
  [361] = {.lex_state = 0, .external_lex_state = 2},
  [362] = {.lex_state = 0, .external_lex_state = 9},
  [363] = {.lex_state = 0, .external_lex_state = 9},
  [364] = {.lex_state = 4, .external_lex_state = 2},
  [365] = {.lex_state = 4, .external_lex_state = 2},
  [366] = {.lex_state = 4, .external_lex_state = 2},
  [367] = {.lex_state = 0, .external_lex_state = 2},
  [368] = {.lex_state = 4, .external_lex_state = 2},
  [369] = {.lex_state = 0, .external_lex_state = 9},
  [370] = {.lex_state = 0, .external_lex_state = 2},
  [371] = {.lex_state = 39, .external_lex_state = 2},
  [372] = {.lex_state = 0, .external_lex_state = 11},
  [373] = {.lex_state = 4, .external_lex_state = 2},
  [374] = {.lex_state = 0, .external_lex_state = 2},
  [375] = {.lex_state = 4, .external_lex_state = 2},
  [376] = {.lex_state = 4, .external_lex_state = 2},
  [377] = {.lex_state = 0, .external_lex_state = 11},
  [378] = {.lex_state = 4, .external_lex_state = 2},
  [379] = {.lex_state = 0, .external_lex_state = 2},
  [380] = {.lex_state = 4, .external_lex_state = 2},
  [381] = {.lex_state = 4, .external_lex_state = 2},
  [382] = {.lex_state = 4, .external_lex_state = 2},
  [383] = {.lex_state = 4, .external_lex_state = 2},
  [384] = {.lex_state = 39, .external_lex_state = 2},
  [385] = {.lex_state = 4, .external_lex_state = 2},
  [386] = {.lex_state = 4, .external_lex_state = 2},
  [387] = {.lex_state = 4, .external_lex_state = 2},
  [388] = {.lex_state = 4, .external_lex_state = 2},
  [389] = {.lex_state = 4, .external_lex_state = 2},
  [390] = {.lex_state = 4, .external_lex_state = 2},
  [391] = {.lex_state = 4, .external_lex_state = 2},
  [392] = {.lex_state = 4, .external_lex_state = 2},
  [393] = {.lex_state = 4, .external_lex_state = 2},
  [394] = {.lex_state = 0, .external_lex_state = 2},
  [395] = {.lex_state = 0, .external_lex_state = 2},
  [396] = {.lex_state = 4, .external_lex_state = 2},
  [397] = {.lex_state = 0, .external_lex_state = 2},
  [398] = {.lex_state = 4, .external_lex_state = 2},
  [399] = {.lex_state = 0, .external_lex_state = 2},
  [400] = {.lex_state = 39, .external_lex_state = 2},
  [401] = {.lex_state = 4, .external_lex_state = 2},
  [402] = {.lex_state = 112, .external_lex_state = 2},
  [403] = {.lex_state = 4, .external_lex_state = 2},
  [404] = {.lex_state = 0, .external_lex_state = 2},
  [405] = {.lex_state = 4, .external_lex_state = 2},
  [406] = {.lex_state = 0, .external_lex_state = 12},
  [407] = {.lex_state = 0, .external_lex_state = 11},
  [408] = {.lex_state = 4, .external_lex_state = 2},
  [409] = {.lex_state = 4, .external_lex_state = 2},
  [410] = {.lex_state = 4, .external_lex_state = 2},
  [411] = {.lex_state = 0, .external_lex_state = 2},
  [412] = {.lex_state = 4, .external_lex_state = 2},
  [413] = {.lex_state = 4, .external_lex_state = 2},
  [414] = {.lex_state = 4, .external_lex_state = 2},
  [415] = {.lex_state = 0, .external_lex_state = 2},
  [416] = {.lex_state = 39, .external_lex_state = 2},
  [417] = {.lex_state = 0, .external_lex_state = 9},
  [418] = {.lex_state = 4, .external_lex_state = 2},
  [419] = {.lex_state = 4, .external_lex_state = 2},
  [420] = {.lex_state = 0, .external_lex_state = 2},
  [421] = {.lex_state = 0, .external_lex_state = 2},
  [422] = {.lex_state = 0, .external_lex_state = 11},
  [423] = {.lex_state = 4, .external_lex_state = 2},
  [424] = {.lex_state = 0, .external_lex_state = 2},
  [425] = {.lex_state = 0, .external_lex_state = 2},
  [426] = {.lex_state = 4, .external_lex_state = 2},
  [427] = {.lex_state = 4, .external_lex_state = 2},
  [428] = {.lex_state = 4, .external_lex_state = 2},
  [429] = {.lex_state = 4, .external_lex_state = 2},
  [430] = {.lex_state = 4, .external_lex_state = 2},
  [431] = {.lex_state = 4, .external_lex_state = 2},
  [432] = {.lex_state = 0, .external_lex_state = 12},
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
    [ts_external_token__newline] = true,
    [ts_external_token__inter_start] = true,
    [ts_external_token__inter_start2] = true,
    [ts_external_token__raw] = true,
    [ts_external_token__comment] = true,
    [ts_external_token__skip] = true,
  },
  [7] = {
    [ts_external_token__inter_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
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
    [sym_source_file] = STATE(370),
    [sym_parameters] = STATE(5),
    [sym__statement] = STATE(12),
    [sym_nop] = STATE(12),
    [sym_log] = STATE(12),
    [sym_assert] = STATE(12),
    [sym_set_inter] = STATE(12),
    [sym_set] = STATE(12),
    [sym_execute_using] = STATE(12),
    [sym_execute_sql] = STATE(12),
    [sym_siard_output] = STATE(12),
    [sym_siard_metadata] = STATE(12),
    [sym_for_loop] = STATE(12),
    [sym_conditional] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
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
    ACTIONS(94), 1,
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
    STATE(281), 1,
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
    STATE(263), 1,
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
    STATE(289), 1,
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
    STATE(302), 1,
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
    STATE(266), 1,
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
    STATE(275), 1,
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
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(13), 13,
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
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(99), 1,
      anon_sym_Log,
    ACTIONS(102), 1,
      anon_sym_Assert,
    ACTIONS(105), 1,
      anon_sym_Interpolation,
    ACTIONS(108), 1,
      anon_sym_Set,
    ACTIONS(111), 1,
      aux_sym_execute_using_token1,
    ACTIONS(114), 1,
      aux_sym_execute_sql_token1,
    ACTIONS(117), 1,
      anon_sym_Output,
    ACTIONS(120), 1,
      anon_sym_Metadata,
    ACTIONS(123), 1,
      anon_sym_For,
    ACTIONS(126), 1,
      anon_sym_If,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(13), 13,
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
    STATE(13), 13,
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
    STATE(67), 1,
      sym__ded,
    STATE(94), 1,
      sym__siard_lobFolder,
    STATE(95), 1,
      sym__siard_dataOriginTimespan,
    STATE(96), 1,
      sym__siard_dataOwner,
    STATE(100), 1,
      sym__siard_archiverContact,
    STATE(102), 1,
      sym__siard_archiver,
    STATE(103), 1,
      sym__siard_description,
    STATE(108), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(149), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(19), 3,
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
    STATE(88), 1,
      sym__ded,
    STATE(94), 1,
      sym__siard_lobFolder,
    STATE(95), 1,
      sym__siard_dataOriginTimespan,
    STATE(96), 1,
      sym__siard_dataOwner,
    STATE(100), 1,
      sym__siard_archiverContact,
    STATE(102), 1,
      sym__siard_archiver,
    STATE(103), 1,
      sym__siard_description,
    STATE(108), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(151), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(18), 3,
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
    STATE(64), 1,
      sym__ded,
    STATE(94), 1,
      sym__siard_lobFolder,
    STATE(95), 1,
      sym__siard_dataOriginTimespan,
    STATE(96), 1,
      sym__siard_dataOwner,
    STATE(100), 1,
      sym__siard_archiverContact,
    STATE(102), 1,
      sym__siard_archiver,
    STATE(103), 1,
      sym__siard_description,
    STATE(108), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(153), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(15), 3,
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
    STATE(74), 1,
      sym__ded,
    STATE(94), 1,
      sym__siard_lobFolder,
    STATE(95), 1,
      sym__siard_dataOriginTimespan,
    STATE(96), 1,
      sym__siard_dataOwner,
    STATE(100), 1,
      sym__siard_archiverContact,
    STATE(102), 1,
      sym__siard_archiver,
    STATE(103), 1,
      sym__siard_description,
    STATE(108), 1,
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
    STATE(94), 1,
      sym__siard_lobFolder,
    STATE(95), 1,
      sym__siard_dataOriginTimespan,
    STATE(96), 1,
      sym__siard_dataOwner,
    STATE(100), 1,
      sym__siard_archiverContact,
    STATE(102), 1,
      sym__siard_archiver,
    STATE(103), 1,
      sym__siard_description,
    STATE(108), 1,
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
  [1358] = 3,
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
  [1381] = 3,
    ACTIONS(228), 1,
      anon_sym_Else,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(226), 13,
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
  [1427] = 3,
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
  [1450] = 3,
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
  [1473] = 3,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(230), 13,
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
  [1496] = 3,
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
  [1519] = 3,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(234), 13,
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
  [1542] = 3,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(230), 13,
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
  [1565] = 9,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      aux_sym_script_result_token1,
    ACTIONS(242), 1,
      aux_sym_connection_token1,
    ACTIONS(244), 1,
      aux_sym_query_token1,
    ACTIONS(246), 1,
      sym_integer,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(83), 4,
      sym__expression,
      sym_script_result,
      sym_connection,
      sym_query,
    STATE(253), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [1600] = 9,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(250), 1,
      aux_sym_script_result_token1,
    ACTIONS(252), 1,
      aux_sym_connection_token1,
    ACTIONS(254), 1,
      aux_sym_query_token1,
    ACTIONS(256), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(50), 4,
      sym__expression,
      sym_script_result,
      sym_connection,
      sym_query,
    STATE(248), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
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
  [1815] = 10,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(280), 1,
      sym__inter_start,
    ACTIONS(282), 1,
      sym__inter_start2,
    ACTIONS(284), 1,
      sym__raw,
    STATE(2), 1,
      sym__ded,
    STATE(147), 1,
      aux_sym_raw_content_repeat2,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(278), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(76), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1851] = 2,
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
  [1871] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(288), 13,
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
  [1891] = 2,
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
  [1911] = 2,
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
  [1931] = 3,
    ACTIONS(294), 1,
      anon_sym_Else,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(226), 12,
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
  [1953] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(296), 13,
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
  [1973] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(298), 13,
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
  [1993] = 10,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(280), 1,
      sym__inter_start,
    ACTIONS(282), 1,
      sym__inter_start2,
    ACTIONS(284), 1,
      sym__raw,
    STATE(30), 1,
      sym__ded,
    STATE(147), 1,
      aux_sym_raw_content_repeat2,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(300), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(76), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2029] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(302), 13,
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
  [2049] = 3,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(234), 12,
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
  [2071] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(304), 13,
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
  [2091] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(306), 13,
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
  [2111] = 3,
    ACTIONS(308), 1,
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
  [2133] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(310), 13,
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
  [2153] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(312), 13,
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
  [2173] = 2,
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
  [2192] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(310), 12,
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
  [2211] = 2,
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
  [2230] = 2,
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
  [2249] = 2,
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
  [2268] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(302), 12,
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
  [2287] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(312), 12,
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
  [2306] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(298), 12,
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
  [2325] = 9,
    ACTIONS(314), 1,
      sym__newline,
    ACTIONS(319), 1,
      sym__inter_start,
    ACTIONS(322), 1,
      sym__inter_start2,
    ACTIONS(325), 1,
      sym__raw,
    STATE(147), 1,
      aux_sym_raw_content_repeat2,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(317), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(76), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2358] = 2,
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
  [2377] = 9,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(328), 1,
      anon_sym_Column,
    ACTIONS(330), 1,
      anon_sym_Key,
    ACTIONS(332), 1,
      anon_sym_Check,
    STATE(124), 1,
      sym__siard_description,
    STATE(210), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(334), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(125), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2410] = 2,
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
  [2429] = 2,
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
  [2448] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(288), 12,
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
  [2467] = 2,
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
  [2486] = 2,
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
  [2505] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(260), 12,
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
  [2524] = 9,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(336), 1,
      anon_sym_Type,
    ACTIONS(338), 1,
      anon_sym_Table,
    ACTIONS(340), 1,
      anon_sym_View,
    STATE(114), 1,
      sym__ded,
    STATE(121), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(342), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(122), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2557] = 2,
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
  [2576] = 2,
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
  [2595] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(306), 12,
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
  [2614] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(304), 12,
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
  [2633] = 3,
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
  [2653] = 3,
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
  [2673] = 3,
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
  [2693] = 3,
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
  [2713] = 3,
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
  [2733] = 3,
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
  [2753] = 3,
    ACTIONS(370), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(368), 10,
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
  [2773] = 3,
    ACTIONS(374), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(372), 10,
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
  [2793] = 3,
    ACTIONS(378), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(376), 10,
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
  [2813] = 3,
    ACTIONS(382), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(380), 10,
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
  [2833] = 3,
    ACTIONS(386), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(384), 10,
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
  [2853] = 3,
    ACTIONS(390), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(388), 10,
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
  [2873] = 3,
    ACTIONS(394), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(392), 10,
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
  [2893] = 3,
    ACTIONS(398), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(396), 10,
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
  [2913] = 3,
    ACTIONS(402), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(400), 10,
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
  [2933] = 3,
    ACTIONS(406), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(404), 10,
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
  [2953] = 3,
    ACTIONS(410), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(408), 10,
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
  [2973] = 3,
    ACTIONS(414), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(412), 10,
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
  [2993] = 3,
    ACTIONS(418), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(416), 10,
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
  [3013] = 3,
    ACTIONS(422), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(420), 10,
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
  [3033] = 3,
    ACTIONS(426), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(424), 10,
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
  [3053] = 3,
    ACTIONS(430), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(428), 10,
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
  [3073] = 3,
    ACTIONS(434), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(432), 10,
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
  [3093] = 3,
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
  [3113] = 3,
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
  [3133] = 3,
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
  [3153] = 3,
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
  [3173] = 3,
    ACTIONS(454), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(452), 10,
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
  [3193] = 3,
    ACTIONS(458), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(456), 10,
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
  [3213] = 3,
    ACTIONS(462), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(460), 10,
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
  [3233] = 3,
    ACTIONS(466), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(464), 10,
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
  [3253] = 7,
    ACTIONS(336), 1,
      anon_sym_Type,
    ACTIONS(338), 1,
      anon_sym_Table,
    ACTIONS(340), 1,
      anon_sym_View,
    STATE(109), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(468), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(128), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3280] = 7,
    ACTIONS(336), 1,
      anon_sym_Type,
    ACTIONS(338), 1,
      anon_sym_Table,
    ACTIONS(340), 1,
      anon_sym_View,
    STATE(98), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(470), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(130), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3307] = 8,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(280), 1,
      sym__inter_start,
    ACTIONS(282), 1,
      sym__inter_start2,
    ACTIONS(284), 1,
      sym__raw,
    STATE(147), 1,
      aux_sym_raw_content_repeat2,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(52), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3336] = 7,
    ACTIONS(328), 1,
      anon_sym_Column,
    ACTIONS(330), 1,
      anon_sym_Key,
    ACTIONS(332), 1,
      anon_sym_Check,
    STATE(211), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(472), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(126), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3363] = 7,
    ACTIONS(328), 1,
      anon_sym_Column,
    ACTIONS(330), 1,
      anon_sym_Key,
    ACTIONS(332), 1,
      anon_sym_Check,
    STATE(209), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(474), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(142), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3390] = 7,
    ACTIONS(328), 1,
      anon_sym_Column,
    ACTIONS(330), 1,
      anon_sym_Key,
    ACTIONS(332), 1,
      anon_sym_Check,
    STATE(230), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(476), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(142), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3417] = 8,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(280), 1,
      sym__inter_start,
    ACTIONS(282), 1,
      sym__inter_start2,
    ACTIONS(284), 1,
      sym__raw,
    STATE(147), 1,
      aux_sym_raw_content_repeat2,
    STATE(150), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(60), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3446] = 7,
    ACTIONS(336), 1,
      anon_sym_Type,
    ACTIONS(338), 1,
      anon_sym_Table,
    ACTIONS(340), 1,
      anon_sym_View,
    STATE(120), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(478), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(130), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3473] = 7,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym__inter_start,
    ACTIONS(484), 1,
      sym__string_content,
    ACTIONS(486), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(134), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3499] = 6,
    ACTIONS(488), 1,
      anon_sym_Type,
    ACTIONS(491), 1,
      anon_sym_Table,
    ACTIONS(494), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(497), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(130), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3523] = 7,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym__inter_start,
    ACTIONS(484), 1,
      sym__string_content,
    ACTIONS(499), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(134), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3549] = 7,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym__inter_start,
    ACTIONS(484), 1,
      sym__string_content,
    ACTIONS(501), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(131), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3575] = 6,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(505), 1,
      sym_integer,
    ACTIONS(507), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(44), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(145), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3599] = 7,
    ACTIONS(509), 1,
      anon_sym_BSLASH,
    ACTIONS(512), 1,
      sym__inter_start,
    ACTIONS(515), 1,
      sym__string_content,
    ACTIONS(518), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(134), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3625] = 6,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym__string_start,
    ACTIONS(520), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(374), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(148), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3649] = 6,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym__string_start,
    ACTIONS(520), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(415), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(148), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3673] = 7,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym__inter_start,
    ACTIONS(484), 1,
      sym__string_content,
    ACTIONS(522), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(138), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3699] = 7,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym__inter_start,
    ACTIONS(484), 1,
      sym__string_content,
    ACTIONS(524), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(134), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3725] = 7,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym__inter_start,
    ACTIONS(484), 1,
      sym__string_content,
    ACTIONS(526), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(143), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3751] = 6,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym__string_start,
    ACTIONS(520), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(84), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(148), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3775] = 7,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym__inter_start,
    ACTIONS(484), 1,
      sym__string_content,
    ACTIONS(528), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(129), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3801] = 6,
    ACTIONS(530), 1,
      anon_sym_Column,
    ACTIONS(533), 1,
      anon_sym_Key,
    ACTIONS(536), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(539), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(142), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3825] = 7,
    ACTIONS(480), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym__inter_start,
    ACTIONS(484), 1,
      sym__string_content,
    ACTIONS(541), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(134), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3851] = 7,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(543), 1,
      anon_sym_Field,
    STATE(179), 1,
      sym__siard_description,
    STATE(309), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(545), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(199), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3876] = 5,
    ACTIONS(547), 1,
      anon_sym_DOT,
    STATE(153), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3897] = 7,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(328), 1,
      anon_sym_Column,
    STATE(185), 1,
      sym__siard_description,
    STATE(207), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(553), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(183), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3922] = 6,
    ACTIONS(555), 1,
      sym__newline,
    ACTIONS(559), 1,
      sym__raw,
    STATE(161), 1,
      aux_sym_raw_content_repeat2,
    STATE(176), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(557), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [3945] = 5,
    ACTIONS(547), 1,
      anon_sym_DOT,
    STATE(152), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3966] = 7,
    ACTIONS(133), 1,
      anon_sym_description,
    ACTIONS(543), 1,
      anon_sym_Field,
    STATE(189), 1,
      sym__siard_description,
    STATE(233), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(561), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(190), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3991] = 4,
    ACTIONS(563), 1,
      sym__newline,
    STATE(174), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(557), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4009] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(567), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(243), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4029] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym__string_start,
    ACTIONS(569), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(40), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4049] = 5,
    ACTIONS(571), 1,
      sym_identifier,
    ACTIONS(573), 1,
      sym_integer,
    ACTIONS(575), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(37), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4069] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym__string_start,
    ACTIONS(577), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(267), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4089] = 5,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(581), 1,
      sym_integer,
    ACTIONS(583), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(319), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4109] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(585), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(250), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4129] = 5,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(583), 1,
      sym__string_start,
    ACTIONS(587), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(356), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4149] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(589), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(237), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4169] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym__string_start,
    ACTIONS(591), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(280), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4189] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(593), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(239), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4209] = 4,
    ACTIONS(597), 1,
      sym__raw,
    STATE(161), 1,
      aux_sym_raw_content_repeat2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(595), 5,
      sym__newline,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [4227] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(600), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(238), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4247] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(602), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(212), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4267] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(604), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(240), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4287] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(606), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(236), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4307] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(608), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(249), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4327] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym__string_start,
    ACTIONS(610), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(287), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4347] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(612), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(251), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4367] = 5,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(583), 1,
      sym__string_start,
    ACTIONS(614), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(337), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4387] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym__string_start,
    ACTIONS(616), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(62), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4407] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(618), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(246), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4427] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym__string_start,
    ACTIONS(620), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(286), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4447] = 5,
    ACTIONS(571), 1,
      sym_identifier,
    ACTIONS(575), 1,
      sym__string_start,
    ACTIONS(622), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(39), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4467] = 4,
    ACTIONS(624), 1,
      sym__newline,
    STATE(174), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(627), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4485] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(629), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(259), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4505] = 4,
    ACTIONS(563), 1,
      sym__newline,
    STATE(174), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(631), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4523] = 5,
    ACTIONS(248), 1,
      sym__string_start,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(633), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(244), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4543] = 6,
    ACTIONS(635), 1,
      anon_sym_COLON,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    STATE(231), 1,
      sym__short_descr,
    STATE(232), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(639), 2,
      sym__newline,
      sym__end_of_file,
  [4564] = 5,
    ACTIONS(543), 1,
      anon_sym_Field,
    STATE(311), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(641), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(197), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4583] = 5,
    ACTIONS(643), 1,
      sym_identifier,
    STATE(70), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(645), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(208), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4602] = 5,
    ACTIONS(328), 1,
      anon_sym_Column,
    STATE(200), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(647), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(213), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4621] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(649), 1,
      anon_sym_COLON,
    STATE(92), 1,
      sym__short_descr,
    STATE(118), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(651), 2,
      sym__newline,
      sym__end_of_file,
  [4642] = 5,
    ACTIONS(328), 1,
      anon_sym_Column,
    STATE(206), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(653), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(213), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4661] = 5,
    ACTIONS(655), 1,
      sym_identifier,
    STATE(58), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(657), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(218), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4680] = 5,
    ACTIONS(328), 1,
      anon_sym_Column,
    STATE(205), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(659), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(181), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4699] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(661), 1,
      anon_sym_COLON,
    STATE(225), 1,
      sym__short_descr,
    STATE(227), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(663), 2,
      sym__newline,
      sym__end_of_file,
  [4720] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(665), 1,
      anon_sym_COLON,
    STATE(217), 1,
      sym__short_descr,
    STATE(222), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(667), 2,
      sym__newline,
      sym__end_of_file,
  [4741] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(669), 1,
      anon_sym_COLON,
    STATE(201), 1,
      sym__nl,
    STATE(215), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(671), 2,
      sym__newline,
      sym__end_of_file,
  [4762] = 5,
    ACTIONS(543), 1,
      anon_sym_Field,
    STATE(226), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(673), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(192), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4781] = 5,
    ACTIONS(543), 1,
      anon_sym_Field,
    STATE(224), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(675), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(223), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4800] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(677), 1,
      anon_sym_COLON,
    STATE(304), 1,
      sym__short_descr,
    STATE(305), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(679), 2,
      sym__newline,
      sym__end_of_file,
  [4821] = 5,
    ACTIONS(543), 1,
      anon_sym_Field,
    STATE(219), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(681), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(223), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4840] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(683), 1,
      anon_sym_COLON,
    STATE(228), 1,
      sym__short_descr,
    STATE(229), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(685), 2,
      sym__newline,
      sym__end_of_file,
  [4861] = 5,
    ACTIONS(643), 1,
      sym_identifier,
    STATE(47), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(687), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(208), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4880] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(689), 6,
      sym__newline,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4893] = 6,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    ACTIONS(691), 1,
      anon_sym_COLON,
    STATE(234), 1,
      sym__short_descr,
    STATE(235), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(693), 2,
      sym__newline,
      sym__end_of_file,
  [4914] = 5,
    ACTIONS(543), 1,
      anon_sym_Field,
    STATE(314), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(695), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(223), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4933] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(697), 6,
      sym__newline,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4946] = 5,
    ACTIONS(543), 1,
      anon_sym_Field,
    STATE(313), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(699), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(223), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4965] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(701), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4977] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(703), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4989] = 4,
    ACTIONS(707), 1,
      sym__string_content,
    STATE(202), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(705), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [5005] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(710), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5017] = 5,
    ACTIONS(637), 1,
      aux_sym__short_descr_token1,
    STATE(262), 1,
      sym__short_descr,
    STATE(315), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(712), 2,
      sym__newline,
      sym__end_of_file,
  [5035] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(714), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5047] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(716), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5059] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(718), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5071] = 4,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(723), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(208), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [5087] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(725), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5099] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(727), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5111] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(729), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5123] = 6,
    ACTIONS(731), 1,
      anon_sym_with,
    ACTIONS(733), 1,
      anon_sym_DOT,
    ACTIONS(735), 1,
      sym__newline,
    ACTIONS(737), 1,
      sym__end_of_file,
    STATE(54), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5143] = 4,
    ACTIONS(739), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(742), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(213), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [5159] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(744), 5,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
      aux_sym_escape_sequence_token3,
      aux_sym_escape_sequence_token4,
      aux_sym_escape_sequence_token5,
  [5171] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(746), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5183] = 4,
    ACTIONS(750), 1,
      sym__string_content,
    STATE(202), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(748), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [5199] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(752), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5211] = 4,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(757), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(218), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [5227] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(759), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5239] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(761), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5251] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(763), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5263] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(765), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5275] = 4,
    ACTIONS(767), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(770), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(223), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [5291] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(772), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5303] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(774), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5315] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(776), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5327] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(778), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5339] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(780), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5351] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(782), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5363] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(784), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5375] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(786), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5387] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(788), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5399] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(790), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5411] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(792), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5423] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(794), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5435] = 6,
    ACTIONS(733), 1,
      anon_sym_DOT,
    ACTIONS(796), 1,
      anon_sym_with,
    ACTIONS(798), 1,
      sym__newline,
    ACTIONS(800), 1,
      sym__end_of_file,
    STATE(81), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5455] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(802), 2,
      sym__newline,
      sym__end_of_file,
  [5470] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(112), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(804), 2,
      sym__newline,
      sym__end_of_file,
  [5485] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(97), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(806), 2,
      sym__newline,
      sym__end_of_file,
  [5500] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(106), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(808), 2,
      sym__newline,
      sym__end_of_file,
  [5515] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(697), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [5526] = 3,
    STATE(325), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(810), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5539] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(73), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(812), 2,
      sym__newline,
      sym__end_of_file,
  [5554] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(291), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(814), 2,
      sym__newline,
      sym__end_of_file,
  [5569] = 3,
    STATE(20), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(816), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5582] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(61), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(818), 2,
      sym__newline,
      sym__end_of_file,
  [5597] = 3,
    STATE(35), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(820), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5610] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(51), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(822), 2,
      sym__newline,
      sym__end_of_file,
  [5625] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(104), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(824), 2,
      sym__newline,
      sym__end_of_file,
  [5640] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(101), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(826), 2,
      sym__newline,
      sym__end_of_file,
  [5655] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(93), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(828), 2,
      sym__newline,
      sym__end_of_file,
  [5670] = 3,
    STATE(260), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(830), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5683] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(86), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(832), 2,
      sym__newline,
      sym__end_of_file,
  [5698] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5709] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(194), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5720] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(202), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5731] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(834), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [5742] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(190), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5753] = 4,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(283), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(836), 2,
      sym__newline,
      sym__end_of_file,
  [5768] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(186), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5779] = 5,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(838), 1,
      anon_sym_title,
    ACTIONS(840), 1,
      anon_sym_Body,
    STATE(382), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5796] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(842), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5806] = 3,
    STATE(66), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(844), 2,
      sym__dedent,
      sym__end_of_file,
  [5818] = 4,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5832] = 3,
    STATE(25), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(850), 2,
      sym__newline,
      sym__end_of_file,
  [5844] = 3,
    STATE(57), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(852), 2,
      sym__dedent,
      sym__end_of_file,
  [5856] = 4,
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(48), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5870] = 3,
    STATE(90), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(856), 2,
      sym__dedent,
      sym__end_of_file,
  [5882] = 4,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(858), 1,
      anon_sym_EQ,
    STATE(45), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5896] = 4,
    ACTIONS(860), 1,
      anon_sym_COMMA,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5910] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(865), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5920] = 3,
    ACTIONS(643), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(194), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [5932] = 3,
    STATE(46), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(867), 2,
      sym__newline,
      sym__end_of_file,
  [5944] = 3,
    STATE(99), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(869), 2,
      sym__dedent,
      sym__end_of_file,
  [5956] = 3,
    STATE(82), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(871), 2,
      sym__dedent,
      sym__end_of_file,
  [5968] = 3,
    STATE(203), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(873), 2,
      sym__dedent,
      sym__end_of_file,
  [5980] = 3,
    STATE(105), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(875), 2,
      sym__dedent,
      sym__end_of_file,
  [5992] = 4,
    ACTIONS(877), 1,
      anon_sym_COLON,
    ACTIONS(879), 1,
      anon_sym_EQ,
    STATE(303), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6006] = 3,
    STATE(79), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(881), 2,
      sym__newline,
      sym__end_of_file,
  [6018] = 4,
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6032] = 3,
    STATE(56), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(883), 2,
      sym__dedent,
      sym__end_of_file,
  [6044] = 4,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(885), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6058] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(887), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [6068] = 3,
    STATE(77), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(889), 2,
      sym__newline,
      sym__end_of_file,
  [6080] = 4,
    ACTIONS(877), 1,
      anon_sym_COLON,
    ACTIONS(891), 1,
      anon_sym_EQ,
    STATE(87), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6094] = 4,
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(877), 1,
      anon_sym_COLON,
    STATE(71), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6108] = 4,
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(877), 1,
      anon_sym_COLON,
    STATE(68), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6122] = 3,
    STATE(43), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(893), 2,
      sym__newline,
      sym__end_of_file,
  [6134] = 3,
    STATE(33), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(895), 2,
      sym__dedent,
      sym__end_of_file,
  [6146] = 3,
    STATE(110), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(897), 2,
      sym__dedent,
      sym__end_of_file,
  [6158] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(899), 1,
      anon_sym_Body,
    STATE(387), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6172] = 3,
    ACTIONS(655), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(184), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [6184] = 4,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(901), 1,
      anon_sym_EQ,
    STATE(119), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6198] = 3,
    STATE(221), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(903), 2,
      sym__dedent,
      sym__end_of_file,
  [6210] = 3,
    STATE(220), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(905), 2,
      sym__dedent,
      sym__end_of_file,
  [6222] = 4,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(907), 1,
      anon_sym_EQ,
    STATE(117), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6236] = 4,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6250] = 3,
    STATE(91), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(911), 2,
      sym__dedent,
      sym__end_of_file,
  [6262] = 4,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(913), 1,
      anon_sym_EQ,
    STATE(116), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6276] = 4,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(915), 1,
      anon_sym_EQ,
    STATE(115), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6290] = 4,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(917), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6304] = 3,
    STATE(69), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(919), 2,
      sym__dedent,
      sym__end_of_file,
  [6316] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(921), 1,
      anon_sym_Body,
    STATE(388), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6330] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(923), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6340] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(925), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6350] = 3,
    ACTIONS(643), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(180), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [6362] = 4,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(927), 1,
      anon_sym_EQ,
    STATE(111), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6376] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(929), 3,
      sym__string_start,
      sym_integer,
      sym_identifier,
  [6386] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(931), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6396] = 4,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(933), 1,
      anon_sym_EQ,
    STATE(271), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6410] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(935), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6420] = 3,
    STATE(107), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(937), 2,
      sym__dedent,
      sym__end_of_file,
  [6432] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(939), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6442] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(941), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6452] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(943), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [6462] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(7), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6473] = 3,
    ACTIONS(947), 1,
      sym__newline,
    STATE(144), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6484] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6493] = 3,
    ACTIONS(949), 1,
      anon_sym_DOT,
    ACTIONS(951), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6504] = 3,
    ACTIONS(133), 1,
      anon_sym_description,
    STATE(276), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6515] = 3,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(290), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6526] = 3,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6537] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(202), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6546] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(190), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6555] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(186), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6564] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(306), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6575] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(320), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6586] = 3,
    ACTIONS(947), 1,
      sym__newline,
    STATE(78), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6597] = 3,
    ACTIONS(947), 1,
      sym__newline,
    STATE(146), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6608] = 3,
    ACTIONS(953), 1,
      anon_sym_COLON,
    STATE(59), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6619] = 3,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    STATE(430), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6630] = 3,
    ACTIONS(133), 1,
      anon_sym_description,
    STATE(295), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6641] = 3,
    ACTIONS(133), 1,
      anon_sym_description,
    STATE(294), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6652] = 3,
    ACTIONS(947), 1,
      sym__newline,
    STATE(17), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6663] = 3,
    ACTIONS(877), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6674] = 3,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(277), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6685] = 3,
    ACTIONS(949), 1,
      anon_sym_DOT,
    ACTIONS(957), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6696] = 3,
    ACTIONS(953), 1,
      anon_sym_COLON,
    STATE(63), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6707] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(194), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6716] = 3,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(298), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6727] = 3,
    ACTIONS(947), 1,
      sym__newline,
    STATE(16), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6738] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(272), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6749] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(292), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6760] = 3,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(268), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6771] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(6), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6782] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(332), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6793] = 3,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    STATE(375), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6804] = 3,
    ACTIONS(959), 1,
      anon_sym_COLON,
    STATE(75), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6815] = 3,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(312), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6826] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(333), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6837] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(11), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6848] = 3,
    ACTIONS(959), 1,
      anon_sym_COLON,
    STATE(89), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6859] = 3,
    ACTIONS(947), 1,
      sym__newline,
    STATE(149), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6870] = 3,
    ACTIONS(877), 1,
      anon_sym_COLON,
    STATE(80), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6881] = 3,
    ACTIONS(947), 1,
      sym__newline,
    STATE(85), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6892] = 3,
    ACTIONS(949), 1,
      anon_sym_DOT,
    ACTIONS(961), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6903] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(863), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6912] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(8), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6923] = 3,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(274), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6934] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(9), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6945] = 3,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6956] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(10), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6967] = 3,
    ACTIONS(945), 1,
      sym__newline,
    STATE(261), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6978] = 2,
    ACTIONS(963), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6986] = 2,
    ACTIONS(965), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6994] = 2,
    ACTIONS(967), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7002] = 2,
    ACTIONS(969), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7010] = 2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7018] = 2,
    ACTIONS(973), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7026] = 2,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7034] = 2,
    ACTIONS(977), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7042] = 2,
    ACTIONS(979), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7050] = 2,
    ACTIONS(981), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7058] = 2,
    ACTIONS(983), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7066] = 2,
    ACTIONS(985), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7074] = 2,
    ACTIONS(987), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7082] = 2,
    ACTIONS(989), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7090] = 2,
    ACTIONS(991), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7098] = 2,
    ACTIONS(993), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7106] = 2,
    ACTIONS(995), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7114] = 2,
    ACTIONS(997), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7122] = 2,
    ACTIONS(999), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7130] = 2,
    ACTIONS(1001), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7138] = 2,
    ACTIONS(1003), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7146] = 2,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7154] = 2,
    ACTIONS(1007), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7162] = 2,
    ACTIONS(1009), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7170] = 2,
    ACTIONS(1011), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7178] = 2,
    ACTIONS(1013), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7186] = 2,
    ACTIONS(1015), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7194] = 2,
    ACTIONS(1017), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7202] = 2,
    ACTIONS(1019), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7210] = 2,
    ACTIONS(1021), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7218] = 2,
    ACTIONS(1023), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7226] = 2,
    ACTIONS(1025), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7234] = 2,
    ACTIONS(1027), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7242] = 2,
    ACTIONS(1029), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7250] = 2,
    ACTIONS(1031), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7258] = 2,
    ACTIONS(1033), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7266] = 2,
    ACTIONS(1035), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7274] = 2,
    ACTIONS(1037), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7282] = 2,
    ACTIONS(1039), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7290] = 2,
    ACTIONS(1041), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7298] = 2,
    ACTIONS(1043), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7306] = 2,
    ACTIONS(1045), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7314] = 2,
    ACTIONS(1047), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7322] = 2,
    ACTIONS(1049), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7330] = 2,
    ACTIONS(1051), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7338] = 2,
    ACTIONS(1053), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7346] = 2,
    ACTIONS(1055), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7354] = 2,
    ACTIONS(1057), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7362] = 2,
    ACTIONS(1059), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7370] = 2,
    ACTIONS(1061), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7378] = 2,
    ACTIONS(1063), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7386] = 2,
    ACTIONS(1065), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7394] = 2,
    ACTIONS(1067), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7402] = 2,
    ACTIONS(1069), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7410] = 2,
    ACTIONS(1071), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7418] = 2,
    ACTIONS(1073), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7426] = 2,
    ACTIONS(1075), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7434] = 2,
    ACTIONS(1077), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7442] = 2,
    ACTIONS(1079), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7450] = 2,
    ACTIONS(1081), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7458] = 2,
    ACTIONS(1083), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7466] = 2,
    ACTIONS(1085), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7474] = 2,
    ACTIONS(1087), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7482] = 2,
    ACTIONS(1089), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7490] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7498] = 2,
    ACTIONS(1093), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7506] = 2,
    ACTIONS(1095), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7514] = 2,
    ACTIONS(1097), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7522] = 2,
    ACTIONS(1099), 1,
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
  [SMALL_STATE(37)] = 1473,
  [SMALL_STATE(38)] = 1496,
  [SMALL_STATE(39)] = 1519,
  [SMALL_STATE(40)] = 1542,
  [SMALL_STATE(41)] = 1565,
  [SMALL_STATE(42)] = 1600,
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
  [SMALL_STATE(53)] = 1851,
  [SMALL_STATE(54)] = 1871,
  [SMALL_STATE(55)] = 1891,
  [SMALL_STATE(56)] = 1911,
  [SMALL_STATE(57)] = 1931,
  [SMALL_STATE(58)] = 1953,
  [SMALL_STATE(59)] = 1973,
  [SMALL_STATE(60)] = 1993,
  [SMALL_STATE(61)] = 2029,
  [SMALL_STATE(62)] = 2049,
  [SMALL_STATE(63)] = 2071,
  [SMALL_STATE(64)] = 2091,
  [SMALL_STATE(65)] = 2111,
  [SMALL_STATE(66)] = 2133,
  [SMALL_STATE(67)] = 2153,
  [SMALL_STATE(68)] = 2173,
  [SMALL_STATE(69)] = 2192,
  [SMALL_STATE(70)] = 2211,
  [SMALL_STATE(71)] = 2230,
  [SMALL_STATE(72)] = 2249,
  [SMALL_STATE(73)] = 2268,
  [SMALL_STATE(74)] = 2287,
  [SMALL_STATE(75)] = 2306,
  [SMALL_STATE(76)] = 2325,
  [SMALL_STATE(77)] = 2358,
  [SMALL_STATE(78)] = 2377,
  [SMALL_STATE(79)] = 2410,
  [SMALL_STATE(80)] = 2429,
  [SMALL_STATE(81)] = 2448,
  [SMALL_STATE(82)] = 2467,
  [SMALL_STATE(83)] = 2486,
  [SMALL_STATE(84)] = 2505,
  [SMALL_STATE(85)] = 2524,
  [SMALL_STATE(86)] = 2557,
  [SMALL_STATE(87)] = 2576,
  [SMALL_STATE(88)] = 2595,
  [SMALL_STATE(89)] = 2614,
  [SMALL_STATE(90)] = 2633,
  [SMALL_STATE(91)] = 2653,
  [SMALL_STATE(92)] = 2673,
  [SMALL_STATE(93)] = 2693,
  [SMALL_STATE(94)] = 2713,
  [SMALL_STATE(95)] = 2733,
  [SMALL_STATE(96)] = 2753,
  [SMALL_STATE(97)] = 2773,
  [SMALL_STATE(98)] = 2793,
  [SMALL_STATE(99)] = 2813,
  [SMALL_STATE(100)] = 2833,
  [SMALL_STATE(101)] = 2853,
  [SMALL_STATE(102)] = 2873,
  [SMALL_STATE(103)] = 2893,
  [SMALL_STATE(104)] = 2913,
  [SMALL_STATE(105)] = 2933,
  [SMALL_STATE(106)] = 2953,
  [SMALL_STATE(107)] = 2973,
  [SMALL_STATE(108)] = 2993,
  [SMALL_STATE(109)] = 3013,
  [SMALL_STATE(110)] = 3033,
  [SMALL_STATE(111)] = 3053,
  [SMALL_STATE(112)] = 3073,
  [SMALL_STATE(113)] = 3093,
  [SMALL_STATE(114)] = 3113,
  [SMALL_STATE(115)] = 3133,
  [SMALL_STATE(116)] = 3153,
  [SMALL_STATE(117)] = 3173,
  [SMALL_STATE(118)] = 3193,
  [SMALL_STATE(119)] = 3213,
  [SMALL_STATE(120)] = 3233,
  [SMALL_STATE(121)] = 3253,
  [SMALL_STATE(122)] = 3280,
  [SMALL_STATE(123)] = 3307,
  [SMALL_STATE(124)] = 3336,
  [SMALL_STATE(125)] = 3363,
  [SMALL_STATE(126)] = 3390,
  [SMALL_STATE(127)] = 3417,
  [SMALL_STATE(128)] = 3446,
  [SMALL_STATE(129)] = 3473,
  [SMALL_STATE(130)] = 3499,
  [SMALL_STATE(131)] = 3523,
  [SMALL_STATE(132)] = 3549,
  [SMALL_STATE(133)] = 3575,
  [SMALL_STATE(134)] = 3599,
  [SMALL_STATE(135)] = 3625,
  [SMALL_STATE(136)] = 3649,
  [SMALL_STATE(137)] = 3673,
  [SMALL_STATE(138)] = 3699,
  [SMALL_STATE(139)] = 3725,
  [SMALL_STATE(140)] = 3751,
  [SMALL_STATE(141)] = 3775,
  [SMALL_STATE(142)] = 3801,
  [SMALL_STATE(143)] = 3825,
  [SMALL_STATE(144)] = 3851,
  [SMALL_STATE(145)] = 3876,
  [SMALL_STATE(146)] = 3897,
  [SMALL_STATE(147)] = 3922,
  [SMALL_STATE(148)] = 3945,
  [SMALL_STATE(149)] = 3966,
  [SMALL_STATE(150)] = 3991,
  [SMALL_STATE(151)] = 4009,
  [SMALL_STATE(152)] = 4029,
  [SMALL_STATE(153)] = 4049,
  [SMALL_STATE(154)] = 4069,
  [SMALL_STATE(155)] = 4089,
  [SMALL_STATE(156)] = 4109,
  [SMALL_STATE(157)] = 4129,
  [SMALL_STATE(158)] = 4149,
  [SMALL_STATE(159)] = 4169,
  [SMALL_STATE(160)] = 4189,
  [SMALL_STATE(161)] = 4209,
  [SMALL_STATE(162)] = 4227,
  [SMALL_STATE(163)] = 4247,
  [SMALL_STATE(164)] = 4267,
  [SMALL_STATE(165)] = 4287,
  [SMALL_STATE(166)] = 4307,
  [SMALL_STATE(167)] = 4327,
  [SMALL_STATE(168)] = 4347,
  [SMALL_STATE(169)] = 4367,
  [SMALL_STATE(170)] = 4387,
  [SMALL_STATE(171)] = 4407,
  [SMALL_STATE(172)] = 4427,
  [SMALL_STATE(173)] = 4447,
  [SMALL_STATE(174)] = 4467,
  [SMALL_STATE(175)] = 4485,
  [SMALL_STATE(176)] = 4505,
  [SMALL_STATE(177)] = 4523,
  [SMALL_STATE(178)] = 4543,
  [SMALL_STATE(179)] = 4564,
  [SMALL_STATE(180)] = 4583,
  [SMALL_STATE(181)] = 4602,
  [SMALL_STATE(182)] = 4621,
  [SMALL_STATE(183)] = 4642,
  [SMALL_STATE(184)] = 4661,
  [SMALL_STATE(185)] = 4680,
  [SMALL_STATE(186)] = 4699,
  [SMALL_STATE(187)] = 4720,
  [SMALL_STATE(188)] = 4741,
  [SMALL_STATE(189)] = 4762,
  [SMALL_STATE(190)] = 4781,
  [SMALL_STATE(191)] = 4800,
  [SMALL_STATE(192)] = 4821,
  [SMALL_STATE(193)] = 4840,
  [SMALL_STATE(194)] = 4861,
  [SMALL_STATE(195)] = 4880,
  [SMALL_STATE(196)] = 4893,
  [SMALL_STATE(197)] = 4914,
  [SMALL_STATE(198)] = 4933,
  [SMALL_STATE(199)] = 4946,
  [SMALL_STATE(200)] = 4965,
  [SMALL_STATE(201)] = 4977,
  [SMALL_STATE(202)] = 4989,
  [SMALL_STATE(203)] = 5005,
  [SMALL_STATE(204)] = 5017,
  [SMALL_STATE(205)] = 5035,
  [SMALL_STATE(206)] = 5047,
  [SMALL_STATE(207)] = 5059,
  [SMALL_STATE(208)] = 5071,
  [SMALL_STATE(209)] = 5087,
  [SMALL_STATE(210)] = 5099,
  [SMALL_STATE(211)] = 5111,
  [SMALL_STATE(212)] = 5123,
  [SMALL_STATE(213)] = 5143,
  [SMALL_STATE(214)] = 5159,
  [SMALL_STATE(215)] = 5171,
  [SMALL_STATE(216)] = 5183,
  [SMALL_STATE(217)] = 5199,
  [SMALL_STATE(218)] = 5211,
  [SMALL_STATE(219)] = 5227,
  [SMALL_STATE(220)] = 5239,
  [SMALL_STATE(221)] = 5251,
  [SMALL_STATE(222)] = 5263,
  [SMALL_STATE(223)] = 5275,
  [SMALL_STATE(224)] = 5291,
  [SMALL_STATE(225)] = 5303,
  [SMALL_STATE(226)] = 5315,
  [SMALL_STATE(227)] = 5327,
  [SMALL_STATE(228)] = 5339,
  [SMALL_STATE(229)] = 5351,
  [SMALL_STATE(230)] = 5363,
  [SMALL_STATE(231)] = 5375,
  [SMALL_STATE(232)] = 5387,
  [SMALL_STATE(233)] = 5399,
  [SMALL_STATE(234)] = 5411,
  [SMALL_STATE(235)] = 5423,
  [SMALL_STATE(236)] = 5435,
  [SMALL_STATE(237)] = 5455,
  [SMALL_STATE(238)] = 5470,
  [SMALL_STATE(239)] = 5485,
  [SMALL_STATE(240)] = 5500,
  [SMALL_STATE(241)] = 5515,
  [SMALL_STATE(242)] = 5526,
  [SMALL_STATE(243)] = 5539,
  [SMALL_STATE(244)] = 5554,
  [SMALL_STATE(245)] = 5569,
  [SMALL_STATE(246)] = 5582,
  [SMALL_STATE(247)] = 5597,
  [SMALL_STATE(248)] = 5610,
  [SMALL_STATE(249)] = 5625,
  [SMALL_STATE(250)] = 5640,
  [SMALL_STATE(251)] = 5655,
  [SMALL_STATE(252)] = 5670,
  [SMALL_STATE(253)] = 5683,
  [SMALL_STATE(254)] = 5698,
  [SMALL_STATE(255)] = 5709,
  [SMALL_STATE(256)] = 5720,
  [SMALL_STATE(257)] = 5731,
  [SMALL_STATE(258)] = 5742,
  [SMALL_STATE(259)] = 5753,
  [SMALL_STATE(260)] = 5768,
  [SMALL_STATE(261)] = 5779,
  [SMALL_STATE(262)] = 5796,
  [SMALL_STATE(263)] = 5806,
  [SMALL_STATE(264)] = 5818,
  [SMALL_STATE(265)] = 5832,
  [SMALL_STATE(266)] = 5844,
  [SMALL_STATE(267)] = 5856,
  [SMALL_STATE(268)] = 5870,
  [SMALL_STATE(269)] = 5882,
  [SMALL_STATE(270)] = 5896,
  [SMALL_STATE(271)] = 5910,
  [SMALL_STATE(272)] = 5920,
  [SMALL_STATE(273)] = 5932,
  [SMALL_STATE(274)] = 5944,
  [SMALL_STATE(275)] = 5956,
  [SMALL_STATE(276)] = 5968,
  [SMALL_STATE(277)] = 5980,
  [SMALL_STATE(278)] = 5992,
  [SMALL_STATE(279)] = 6006,
  [SMALL_STATE(280)] = 6018,
  [SMALL_STATE(281)] = 6032,
  [SMALL_STATE(282)] = 6044,
  [SMALL_STATE(283)] = 6058,
  [SMALL_STATE(284)] = 6068,
  [SMALL_STATE(285)] = 6080,
  [SMALL_STATE(286)] = 6094,
  [SMALL_STATE(287)] = 6108,
  [SMALL_STATE(288)] = 6122,
  [SMALL_STATE(289)] = 6134,
  [SMALL_STATE(290)] = 6146,
  [SMALL_STATE(291)] = 6158,
  [SMALL_STATE(292)] = 6172,
  [SMALL_STATE(293)] = 6184,
  [SMALL_STATE(294)] = 6198,
  [SMALL_STATE(295)] = 6210,
  [SMALL_STATE(296)] = 6222,
  [SMALL_STATE(297)] = 6236,
  [SMALL_STATE(298)] = 6250,
  [SMALL_STATE(299)] = 6262,
  [SMALL_STATE(300)] = 6276,
  [SMALL_STATE(301)] = 6290,
  [SMALL_STATE(302)] = 6304,
  [SMALL_STATE(303)] = 6316,
  [SMALL_STATE(304)] = 6330,
  [SMALL_STATE(305)] = 6340,
  [SMALL_STATE(306)] = 6350,
  [SMALL_STATE(307)] = 6362,
  [SMALL_STATE(308)] = 6376,
  [SMALL_STATE(309)] = 6386,
  [SMALL_STATE(310)] = 6396,
  [SMALL_STATE(311)] = 6410,
  [SMALL_STATE(312)] = 6420,
  [SMALL_STATE(313)] = 6432,
  [SMALL_STATE(314)] = 6442,
  [SMALL_STATE(315)] = 6452,
  [SMALL_STATE(316)] = 6462,
  [SMALL_STATE(317)] = 6473,
  [SMALL_STATE(318)] = 6484,
  [SMALL_STATE(319)] = 6493,
  [SMALL_STATE(320)] = 6504,
  [SMALL_STATE(321)] = 6515,
  [SMALL_STATE(322)] = 6526,
  [SMALL_STATE(323)] = 6537,
  [SMALL_STATE(324)] = 6546,
  [SMALL_STATE(325)] = 6555,
  [SMALL_STATE(326)] = 6564,
  [SMALL_STATE(327)] = 6575,
  [SMALL_STATE(328)] = 6586,
  [SMALL_STATE(329)] = 6597,
  [SMALL_STATE(330)] = 6608,
  [SMALL_STATE(331)] = 6619,
  [SMALL_STATE(332)] = 6630,
  [SMALL_STATE(333)] = 6641,
  [SMALL_STATE(334)] = 6652,
  [SMALL_STATE(335)] = 6663,
  [SMALL_STATE(336)] = 6674,
  [SMALL_STATE(337)] = 6685,
  [SMALL_STATE(338)] = 6696,
  [SMALL_STATE(339)] = 6707,
  [SMALL_STATE(340)] = 6716,
  [SMALL_STATE(341)] = 6727,
  [SMALL_STATE(342)] = 6738,
  [SMALL_STATE(343)] = 6749,
  [SMALL_STATE(344)] = 6760,
  [SMALL_STATE(345)] = 6771,
  [SMALL_STATE(346)] = 6782,
  [SMALL_STATE(347)] = 6793,
  [SMALL_STATE(348)] = 6804,
  [SMALL_STATE(349)] = 6815,
  [SMALL_STATE(350)] = 6826,
  [SMALL_STATE(351)] = 6837,
  [SMALL_STATE(352)] = 6848,
  [SMALL_STATE(353)] = 6859,
  [SMALL_STATE(354)] = 6870,
  [SMALL_STATE(355)] = 6881,
  [SMALL_STATE(356)] = 6892,
  [SMALL_STATE(357)] = 6903,
  [SMALL_STATE(358)] = 6912,
  [SMALL_STATE(359)] = 6923,
  [SMALL_STATE(360)] = 6934,
  [SMALL_STATE(361)] = 6945,
  [SMALL_STATE(362)] = 6956,
  [SMALL_STATE(363)] = 6967,
  [SMALL_STATE(364)] = 6978,
  [SMALL_STATE(365)] = 6986,
  [SMALL_STATE(366)] = 6994,
  [SMALL_STATE(367)] = 7002,
  [SMALL_STATE(368)] = 7010,
  [SMALL_STATE(369)] = 7018,
  [SMALL_STATE(370)] = 7026,
  [SMALL_STATE(371)] = 7034,
  [SMALL_STATE(372)] = 7042,
  [SMALL_STATE(373)] = 7050,
  [SMALL_STATE(374)] = 7058,
  [SMALL_STATE(375)] = 7066,
  [SMALL_STATE(376)] = 7074,
  [SMALL_STATE(377)] = 7082,
  [SMALL_STATE(378)] = 7090,
  [SMALL_STATE(379)] = 7098,
  [SMALL_STATE(380)] = 7106,
  [SMALL_STATE(381)] = 7114,
  [SMALL_STATE(382)] = 7122,
  [SMALL_STATE(383)] = 7130,
  [SMALL_STATE(384)] = 7138,
  [SMALL_STATE(385)] = 7146,
  [SMALL_STATE(386)] = 7154,
  [SMALL_STATE(387)] = 7162,
  [SMALL_STATE(388)] = 7170,
  [SMALL_STATE(389)] = 7178,
  [SMALL_STATE(390)] = 7186,
  [SMALL_STATE(391)] = 7194,
  [SMALL_STATE(392)] = 7202,
  [SMALL_STATE(393)] = 7210,
  [SMALL_STATE(394)] = 7218,
  [SMALL_STATE(395)] = 7226,
  [SMALL_STATE(396)] = 7234,
  [SMALL_STATE(397)] = 7242,
  [SMALL_STATE(398)] = 7250,
  [SMALL_STATE(399)] = 7258,
  [SMALL_STATE(400)] = 7266,
  [SMALL_STATE(401)] = 7274,
  [SMALL_STATE(402)] = 7282,
  [SMALL_STATE(403)] = 7290,
  [SMALL_STATE(404)] = 7298,
  [SMALL_STATE(405)] = 7306,
  [SMALL_STATE(406)] = 7314,
  [SMALL_STATE(407)] = 7322,
  [SMALL_STATE(408)] = 7330,
  [SMALL_STATE(409)] = 7338,
  [SMALL_STATE(410)] = 7346,
  [SMALL_STATE(411)] = 7354,
  [SMALL_STATE(412)] = 7362,
  [SMALL_STATE(413)] = 7370,
  [SMALL_STATE(414)] = 7378,
  [SMALL_STATE(415)] = 7386,
  [SMALL_STATE(416)] = 7394,
  [SMALL_STATE(417)] = 7402,
  [SMALL_STATE(418)] = 7410,
  [SMALL_STATE(419)] = 7418,
  [SMALL_STATE(420)] = 7426,
  [SMALL_STATE(421)] = 7434,
  [SMALL_STATE(422)] = 7442,
  [SMALL_STATE(423)] = 7450,
  [SMALL_STATE(424)] = 7458,
  [SMALL_STATE(425)] = 7466,
  [SMALL_STATE(426)] = 7474,
  [SMALL_STATE(427)] = 7482,
  [SMALL_STATE(428)] = 7490,
  [SMALL_STATE(429)] = 7498,
  [SMALL_STATE(430)] = 7506,
  [SMALL_STATE(431)] = 7514,
  [SMALL_STATE(432)] = 7522,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 1),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(427),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(401),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(403),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(428),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(431),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(331),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(170),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(380),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(368),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(366),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(365),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(381),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(347),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(307),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(301),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(300),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(299),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(296),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(293),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(282),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(396),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(395),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_expression, 3, .production_id = 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_expression, 3, .production_id = 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
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
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6, .production_id = 10),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_inter, 7),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 3, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 3, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 6),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_result, 3, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3, .production_id = 9),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3, .production_id = 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 11, .production_id = 43),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 12),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 7, .production_id = 13),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 14),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 8, .production_id = 22),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 8, .production_id = 23),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 9, .production_id = 31),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(150),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(155),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(169),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(147),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 10, .production_id = 50),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 10, .production_id = 50),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 7, .production_id = 47),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 7, .production_id = 47),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 34),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 34),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 42),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 42),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 21),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 21),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 20),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 20),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 19),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 19),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 38),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 38),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 35),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 35),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 11, .production_id = 51),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 11, .production_id = 51),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 18),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 18),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 4, .production_id = 36),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 4, .production_id = 36),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 17),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 17),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 41),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 41),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 9, .production_id = 49),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 9, .production_id = 49),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 40),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 40),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 6, .production_id = 46),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 6, .production_id = 46),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 45),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 45),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 8, .production_id = 48),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 8, .production_id = 48),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 2, .production_id = 24),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 2, .production_id = 24),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 39),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 39),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 30),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 30),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 35),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 5, .production_id = 35),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 26),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 26),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 27),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 27),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 28),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 28),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 35),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 35),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 29),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 29),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 45),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 7, .production_id = 45),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(391),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(390),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(389),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(214),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(157),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(216),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(386),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(364),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(385),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat2, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat2, 2), SHIFT_REPEAT(161),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(174),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation2, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 45),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 35),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(202),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 45),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 45),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 35),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 35),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(310),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 35),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 35),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 45),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(386),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 34),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 34),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(204),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 45),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 45),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 45),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 35),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(383),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 35),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 34),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 45),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 35),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 34),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 35),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 45),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 34),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 35),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 35),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 34),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 35),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 7),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2), SHIFT_REPEAT(408),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 33),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 44),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 34),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 35),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 35),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 45),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 35),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 45),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [975] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 4),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 3),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
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
