#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 430
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 152
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
  anon_sym_Execute = 12,
  anon_sym_result = 13,
  anon_sym_using = 14,
  anon_sym_connection = 15,
  anon_sym_to = 16,
  anon_sym_with = 17,
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
  sym__using_i = 93,
  sym_connection = 94,
  sym_execute_sql = 95,
  sym_query = 96,
  sym_siard_output = 97,
  sym_siard_metadata = 98,
  sym__siard_dbname = 99,
  sym__siard_description = 100,
  sym__siard_archiver = 101,
  sym__siard_archiverContact = 102,
  sym__siard_dataOwner = 103,
  sym__siard_dataOriginTimespan = 104,
  sym__siard_lobFolder = 105,
  sym_siard_schema = 106,
  sym_siard_type = 107,
  sym_siard_table = 108,
  sym_siard_column = 109,
  sym_siard_field = 110,
  sym_siard_key = 111,
  sym_siard_check = 112,
  sym_siard_view = 113,
  sym_command_declaration = 114,
  sym_for_loop = 115,
  sym_for_variables = 116,
  sym_conditional = 117,
  sym_statement_block = 118,
  sym__boolean_expression = 119,
  sym_comparison = 120,
  sym_comparison_operator = 121,
  sym__basic_expression = 122,
  sym_variable_instance = 123,
  sym_dot_expression = 124,
  sym_dot_operator = 125,
  sym_string = 126,
  sym_string_content = 127,
  sym_escape_sequence = 128,
  sym__short_descr = 129,
  sym__nl = 130,
  sym__ni = 131,
  sym__ded = 132,
  sym_interpolation = 133,
  sym_interpolation2 = 134,
  sym_key_value_pairs = 135,
  sym_key_value_pair = 136,
  sym_raw = 137,
  sym_raw_content = 138,
  aux_sym_source_file_repeat1 = 139,
  aux_sym_parameters_repeat1 = 140,
  aux_sym_siard_metadata_repeat1 = 141,
  aux_sym_siard_schema_repeat1 = 142,
  aux_sym_siard_table_repeat1 = 143,
  aux_sym_siard_column_repeat1 = 144,
  aux_sym_siard_view_repeat1 = 145,
  aux_sym_for_variables_repeat1 = 146,
  aux_sym_string_repeat1 = 147,
  aux_sym_string_content_repeat1 = 148,
  aux_sym_key_value_pairs_repeat1 = 149,
  aux_sym_raw_repeat1 = 150,
  aux_sym_raw_content_repeat1 = 151,
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
  [anon_sym_result] = "result",
  [anon_sym_using] = "using",
  [anon_sym_connection] = "connection",
  [anon_sym_to] = "to",
  [anon_sym_with] = "with",
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
  [sym__using_i] = "_using_i",
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
  [anon_sym_Execute] = anon_sym_Execute,
  [anon_sym_result] = anon_sym_result,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_connection] = anon_sym_connection,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_with] = anon_sym_with,
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
  [sym__using_i] = sym__using_i,
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
  [anon_sym_Execute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_result] = {
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
  [sym__using_i] = {
    .visible = false,
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 3},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 3},
  [13] = {.index = 24, .length = 2},
  [14] = {.index = 26, .length = 1},
  [15] = {.index = 27, .length = 1},
  [16] = {.index = 28, .length = 1},
  [17] = {.index = 29, .length = 1},
  [18] = {.index = 30, .length = 1},
  [19] = {.index = 31, .length = 1},
  [20] = {.index = 32, .length = 1},
  [21] = {.index = 33, .length = 2},
  [22] = {.index = 35, .length = 3},
  [23] = {.index = 38, .length = 2},
  [24] = {.index = 40, .length = 1},
  [25] = {.index = 41, .length = 1},
  [26] = {.index = 42, .length = 1},
  [27] = {.index = 43, .length = 1},
  [28] = {.index = 44, .length = 1},
  [29] = {.index = 45, .length = 1},
  [30] = {.index = 46, .length = 1},
  [31] = {.index = 47, .length = 9},
  [32] = {.index = 56, .length = 14},
  [33] = {.index = 70, .length = 2},
  [34] = {.index = 72, .length = 1},
  [35] = {.index = 73, .length = 2},
  [36] = {.index = 75, .length = 1},
  [37] = {.index = 76, .length = 1},
  [38] = {.index = 77, .length = 1},
  [39] = {.index = 78, .length = 1},
  [40] = {.index = 79, .length = 1},
  [41] = {.index = 80, .length = 1},
  [42] = {.index = 81, .length = 1},
  [43] = {.index = 82, .length = 3},
  [44] = {.index = 85, .length = 2},
  [45] = {.index = 87, .length = 2},
  [46] = {.index = 89, .length = 1},
  [47] = {.index = 90, .length = 2},
  [48] = {.index = 92, .length = 2},
  [49] = {.index = 94, .length = 3},
  [50] = {.index = 97, .length = 2},
  [51] = {.index = 99, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_interpreter, 1},
  [1] =
    {field_interpreter, 1, .inherited = true},
    {field_script, 2},
  [3] =
    {field_left, 0},
    {field_right, 2},
  [5] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [8] =
    {field_name, 1},
    {field_value, 3},
  [10] =
    {field_connection, 2},
    {field_sql, 3},
  [12] =
    {field_description, 1, .inherited = true},
    {field_name, 0},
  [14] =
    {field_name, 0},
  [15] =
    {field_condition, 1},
    {field_then, 4},
  [17] =
    {field_description, 0},
    {field_description, 1},
    {field_description, 2},
  [20] =
    {field_url, 2},
  [21] =
    {field_connection, 1},
    {field_file, 5},
    {field_name, 3},
  [24] =
    {field_properties, 4},
    {field_url, 2},
  [26] =
    {field_dbname, 0, .inherited = true},
  [27] =
    {field_description, 0, .inherited = true},
  [28] =
    {field_archiver, 0, .inherited = true},
  [29] =
    {field_archiverContact, 0, .inherited = true},
  [30] =
    {field_dataOwner, 0, .inherited = true},
  [31] =
    {field_dataOriginTimespan, 0, .inherited = true},
  [32] =
    {field_lobFolder, 0, .inherited = true},
  [33] =
    {field_connection, 2},
    {field_name, 4},
  [35] =
    {field_body, 6},
    {field_result_set, 3},
    {field_variables, 1},
  [38] =
    {field_properties, 5},
    {field_url, 2},
  [40] =
    {field_dbname, 1},
  [41] =
    {field_description, 1},
  [42] =
    {field_archiver, 1},
  [43] =
    {field_archiverContact, 1},
  [44] =
    {field_dataOwner, 1},
  [45] =
    {field_dataOriginTimespan, 1},
  [46] =
    {field_lobFolder, 1},
  [47] =
    {field_archiver, 7, .inherited = true},
    {field_archiverContact, 7, .inherited = true},
    {field_connection, 2},
    {field_dataOriginTimespan, 7, .inherited = true},
    {field_dataOwner, 7, .inherited = true},
    {field_dbname, 7, .inherited = true},
    {field_description, 7, .inherited = true},
    {field_lobFolder, 7, .inherited = true},
    {field_name, 4},
  [56] =
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
  [70] =
    {field_description, 2, .inherited = true},
    {field_name, 1},
  [72] =
    {field_name, 1},
  [73] =
    {field_key, 0},
    {field_value, 1},
  [75] =
    {field_dbname, 2},
  [76] =
    {field_description, 2},
  [77] =
    {field_archiver, 2},
  [78] =
    {field_archiverContact, 2},
  [79] =
    {field_dataOwner, 2},
  [80] =
    {field_dataOriginTimespan, 2},
  [81] =
    {field_lobFolder, 2},
  [82] =
    {field_condition, 1},
    {field_else, 9},
    {field_then, 4},
  [85] =
    {field_key, 0},
    {field_value, 2},
  [87] =
    {field_description, 4, .inherited = true},
    {field_name, 1},
  [89] =
    {field_body, 4},
  [90] =
    {field_body, 5},
    {field_parameters, 3},
  [92] =
    {field_body, 6},
    {field_title, 4},
  [94] =
    {field_body, 7},
    {field_parameters, 5},
    {field_title, 4},
  [97] =
    {field_body, 8},
    {field_title, 5},
  [99] =
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
  [7] = 6,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 11,
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
  [29] = 27,
  [30] = 30,
  [31] = 22,
  [32] = 21,
  [33] = 33,
  [34] = 34,
  [35] = 24,
  [36] = 25,
  [37] = 37,
  [38] = 34,
  [39] = 23,
  [40] = 40,
  [41] = 41,
  [42] = 2,
  [43] = 33,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 30,
  [48] = 37,
  [49] = 41,
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
  [63] = 40,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 62,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 64,
  [79] = 56,
  [80] = 80,
  [81] = 68,
  [82] = 55,
  [83] = 58,
  [84] = 65,
  [85] = 66,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 61,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 59,
  [101] = 101,
  [102] = 102,
  [103] = 57,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 45,
  [109] = 109,
  [110] = 60,
  [111] = 111,
  [112] = 51,
  [113] = 54,
  [114] = 53,
  [115] = 67,
  [116] = 116,
  [117] = 52,
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
  [129] = 125,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 127,
  [134] = 126,
  [135] = 126,
  [136] = 126,
  [137] = 125,
  [138] = 130,
  [139] = 125,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 142,
  [144] = 144,
  [145] = 145,
  [146] = 141,
  [147] = 147,
  [148] = 148,
  [149] = 147,
  [150] = 148,
  [151] = 151,
  [152] = 152,
  [153] = 153,
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
  [165] = 159,
  [166] = 166,
  [167] = 153,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 172,
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
  [210] = 210,
  [211] = 202,
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
  [231] = 25,
  [232] = 24,
  [233] = 229,
  [234] = 234,
  [235] = 21,
  [236] = 22,
  [237] = 237,
  [238] = 229,
  [239] = 239,
  [240] = 229,
  [241] = 23,
  [242] = 218,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 245,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 258,
  [264] = 264,
  [265] = 265,
  [266] = 261,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 253,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 262,
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
  [289] = 281,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 282,
  [298] = 264,
  [299] = 299,
  [300] = 300,
  [301] = 278,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 307,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 23,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 25,
  [319] = 306,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 24,
  [324] = 21,
  [325] = 22,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 329,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 311,
  [337] = 337,
  [338] = 315,
  [339] = 333,
  [340] = 304,
  [341] = 321,
  [342] = 316,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 326,
  [347] = 322,
  [348] = 348,
  [349] = 335,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 327,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
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
  [373] = 365,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 371,
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
  [397] = 395,
  [398] = 398,
  [399] = 378,
  [400] = 400,
  [401] = 401,
  [402] = 377,
  [403] = 403,
  [404] = 383,
  [405] = 384,
  [406] = 385,
  [407] = 407,
  [408] = 380,
  [409] = 407,
  [410] = 379,
  [411] = 411,
  [412] = 366,
  [413] = 363,
  [414] = 362,
  [415] = 361,
  [416] = 387,
  [417] = 398,
  [418] = 367,
  [419] = 419,
  [420] = 382,
  [421] = 370,
  [422] = 360,
  [423] = 423,
  [424] = 400,
  [425] = 392,
  [426] = 369,
  [427] = 357,
  [428] = 391,
  [429] = 423,
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
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == 'U') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(55);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(1);
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
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
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
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(66);
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
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(66);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(66);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(66);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_short_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__short_descr_token1);
      if (lookahead == ' ') ADVANCE(68);
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
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_If);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 57:
      if (lookahead == 'z') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_Log);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 92:
      if (lookahead == 'F') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 96:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_via);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_Body);
      END_STATE();
    case 103:
      if (lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_Else);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 143:
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_Assert);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_dbname);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_Command);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 181:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 183:
      if (lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_Metadata);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(201);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_stripped);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_as_integer);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_connection);
      END_STATE();
    case 213:
      if (lookahead == 'T') ADVANCE(217);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_Interpolation);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 231:
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
  [8] = {.lex_state = 23, .external_lex_state = 2},
  [9] = {.lex_state = 23, .external_lex_state = 2},
  [10] = {.lex_state = 23, .external_lex_state = 2},
  [11] = {.lex_state = 23, .external_lex_state = 2},
  [12] = {.lex_state = 23, .external_lex_state = 2},
  [13] = {.lex_state = 23, .external_lex_state = 2},
  [14] = {.lex_state = 23, .external_lex_state = 2},
  [15] = {.lex_state = 23, .external_lex_state = 3},
  [16] = {.lex_state = 23, .external_lex_state = 3},
  [17] = {.lex_state = 23, .external_lex_state = 3},
  [18] = {.lex_state = 23, .external_lex_state = 3},
  [19] = {.lex_state = 23, .external_lex_state = 3},
  [20] = {.lex_state = 23, .external_lex_state = 3},
  [21] = {.lex_state = 23, .external_lex_state = 2},
  [22] = {.lex_state = 23, .external_lex_state = 2},
  [23] = {.lex_state = 23, .external_lex_state = 2},
  [24] = {.lex_state = 23, .external_lex_state = 2},
  [25] = {.lex_state = 23, .external_lex_state = 2},
  [26] = {.lex_state = 23, .external_lex_state = 3},
  [27] = {.lex_state = 23, .external_lex_state = 3},
  [28] = {.lex_state = 23, .external_lex_state = 3},
  [29] = {.lex_state = 23, .external_lex_state = 2},
  [30] = {.lex_state = 23, .external_lex_state = 3},
  [31] = {.lex_state = 23, .external_lex_state = 3},
  [32] = {.lex_state = 23, .external_lex_state = 3},
  [33] = {.lex_state = 23, .external_lex_state = 3},
  [34] = {.lex_state = 23, .external_lex_state = 4},
  [35] = {.lex_state = 23, .external_lex_state = 3},
  [36] = {.lex_state = 23, .external_lex_state = 3},
  [37] = {.lex_state = 23, .external_lex_state = 3},
  [38] = {.lex_state = 23, .external_lex_state = 4},
  [39] = {.lex_state = 23, .external_lex_state = 3},
  [40] = {.lex_state = 23, .external_lex_state = 3},
  [41] = {.lex_state = 23, .external_lex_state = 3},
  [42] = {.lex_state = 23, .external_lex_state = 2},
  [43] = {.lex_state = 23, .external_lex_state = 2},
  [44] = {.lex_state = 23, .external_lex_state = 2},
  [45] = {.lex_state = 23, .external_lex_state = 3},
  [46] = {.lex_state = 23, .external_lex_state = 3},
  [47] = {.lex_state = 23, .external_lex_state = 2},
  [48] = {.lex_state = 23, .external_lex_state = 2},
  [49] = {.lex_state = 23, .external_lex_state = 2},
  [50] = {.lex_state = 23, .external_lex_state = 3},
  [51] = {.lex_state = 23, .external_lex_state = 3},
  [52] = {.lex_state = 23, .external_lex_state = 3},
  [53] = {.lex_state = 23, .external_lex_state = 3},
  [54] = {.lex_state = 23, .external_lex_state = 3},
  [55] = {.lex_state = 23, .external_lex_state = 3},
  [56] = {.lex_state = 23, .external_lex_state = 3},
  [57] = {.lex_state = 23, .external_lex_state = 3},
  [58] = {.lex_state = 23, .external_lex_state = 3},
  [59] = {.lex_state = 23, .external_lex_state = 3},
  [60] = {.lex_state = 23, .external_lex_state = 3},
  [61] = {.lex_state = 23, .external_lex_state = 3},
  [62] = {.lex_state = 23, .external_lex_state = 3},
  [63] = {.lex_state = 23, .external_lex_state = 2},
  [64] = {.lex_state = 23, .external_lex_state = 3},
  [65] = {.lex_state = 23, .external_lex_state = 3},
  [66] = {.lex_state = 23, .external_lex_state = 3},
  [67] = {.lex_state = 23, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 5},
  [69] = {.lex_state = 23, .external_lex_state = 3},
  [70] = {.lex_state = 23, .external_lex_state = 2},
  [71] = {.lex_state = 23, .external_lex_state = 3},
  [72] = {.lex_state = 23, .external_lex_state = 3},
  [73] = {.lex_state = 23, .external_lex_state = 3},
  [74] = {.lex_state = 23, .external_lex_state = 3},
  [75] = {.lex_state = 23, .external_lex_state = 3},
  [76] = {.lex_state = 23, .external_lex_state = 3},
  [77] = {.lex_state = 23, .external_lex_state = 3},
  [78] = {.lex_state = 23, .external_lex_state = 2},
  [79] = {.lex_state = 23, .external_lex_state = 2},
  [80] = {.lex_state = 23, .external_lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 5},
  [82] = {.lex_state = 23, .external_lex_state = 2},
  [83] = {.lex_state = 23, .external_lex_state = 2},
  [84] = {.lex_state = 23, .external_lex_state = 2},
  [85] = {.lex_state = 23, .external_lex_state = 2},
  [86] = {.lex_state = 23, .external_lex_state = 3},
  [87] = {.lex_state = 23, .external_lex_state = 3},
  [88] = {.lex_state = 23, .external_lex_state = 3},
  [89] = {.lex_state = 23, .external_lex_state = 3},
  [90] = {.lex_state = 23, .external_lex_state = 3},
  [91] = {.lex_state = 23, .external_lex_state = 3},
  [92] = {.lex_state = 23, .external_lex_state = 3},
  [93] = {.lex_state = 23, .external_lex_state = 3},
  [94] = {.lex_state = 23, .external_lex_state = 3},
  [95] = {.lex_state = 23, .external_lex_state = 2},
  [96] = {.lex_state = 23, .external_lex_state = 3},
  [97] = {.lex_state = 23, .external_lex_state = 3},
  [98] = {.lex_state = 23, .external_lex_state = 3},
  [99] = {.lex_state = 23, .external_lex_state = 3},
  [100] = {.lex_state = 23, .external_lex_state = 2},
  [101] = {.lex_state = 23, .external_lex_state = 3},
  [102] = {.lex_state = 23, .external_lex_state = 3},
  [103] = {.lex_state = 23, .external_lex_state = 2},
  [104] = {.lex_state = 23, .external_lex_state = 3},
  [105] = {.lex_state = 23, .external_lex_state = 3},
  [106] = {.lex_state = 23, .external_lex_state = 3},
  [107] = {.lex_state = 23, .external_lex_state = 3},
  [108] = {.lex_state = 23, .external_lex_state = 2},
  [109] = {.lex_state = 23, .external_lex_state = 3},
  [110] = {.lex_state = 23, .external_lex_state = 2},
  [111] = {.lex_state = 23, .external_lex_state = 3},
  [112] = {.lex_state = 23, .external_lex_state = 2},
  [113] = {.lex_state = 23, .external_lex_state = 2},
  [114] = {.lex_state = 23, .external_lex_state = 2},
  [115] = {.lex_state = 23, .external_lex_state = 2},
  [116] = {.lex_state = 23, .external_lex_state = 3},
  [117] = {.lex_state = 23, .external_lex_state = 2},
  [118] = {.lex_state = 23, .external_lex_state = 3},
  [119] = {.lex_state = 23, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 5},
  [121] = {.lex_state = 23, .external_lex_state = 3},
  [122] = {.lex_state = 23, .external_lex_state = 3},
  [123] = {.lex_state = 23, .external_lex_state = 3},
  [124] = {.lex_state = 23, .external_lex_state = 3},
  [125] = {.lex_state = 23, .external_lex_state = 6},
  [126] = {.lex_state = 23, .external_lex_state = 6},
  [127] = {.lex_state = 23, .external_lex_state = 4},
  [128] = {.lex_state = 23, .external_lex_state = 3},
  [129] = {.lex_state = 23, .external_lex_state = 6},
  [130] = {.lex_state = 23, .external_lex_state = 4},
  [131] = {.lex_state = 23, .external_lex_state = 3},
  [132] = {.lex_state = 23, .external_lex_state = 6},
  [133] = {.lex_state = 23, .external_lex_state = 4},
  [134] = {.lex_state = 23, .external_lex_state = 6},
  [135] = {.lex_state = 23, .external_lex_state = 6},
  [136] = {.lex_state = 23, .external_lex_state = 6},
  [137] = {.lex_state = 23, .external_lex_state = 6},
  [138] = {.lex_state = 23, .external_lex_state = 4},
  [139] = {.lex_state = 23, .external_lex_state = 6},
  [140] = {.lex_state = 23, .external_lex_state = 3},
  [141] = {.lex_state = 23, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 7},
  [143] = {.lex_state = 0, .external_lex_state = 7},
  [144] = {.lex_state = 23, .external_lex_state = 3},
  [145] = {.lex_state = 23, .external_lex_state = 3},
  [146] = {.lex_state = 23, .external_lex_state = 2},
  [147] = {.lex_state = 23, .external_lex_state = 4},
  [148] = {.lex_state = 23, .external_lex_state = 4},
  [149] = {.lex_state = 23, .external_lex_state = 4},
  [150] = {.lex_state = 23, .external_lex_state = 4},
  [151] = {.lex_state = 23, .external_lex_state = 4},
  [152] = {.lex_state = 23, .external_lex_state = 4},
  [153] = {.lex_state = 23, .external_lex_state = 4},
  [154] = {.lex_state = 23, .external_lex_state = 4},
  [155] = {.lex_state = 23, .external_lex_state = 4},
  [156] = {.lex_state = 23, .external_lex_state = 4},
  [157] = {.lex_state = 23, .external_lex_state = 4},
  [158] = {.lex_state = 23, .external_lex_state = 4},
  [159] = {.lex_state = 23, .external_lex_state = 4},
  [160] = {.lex_state = 23, .external_lex_state = 4},
  [161] = {.lex_state = 23, .external_lex_state = 4},
  [162] = {.lex_state = 23, .external_lex_state = 4},
  [163] = {.lex_state = 23, .external_lex_state = 4},
  [164] = {.lex_state = 23, .external_lex_state = 4},
  [165] = {.lex_state = 23, .external_lex_state = 4},
  [166] = {.lex_state = 23, .external_lex_state = 4},
  [167] = {.lex_state = 23, .external_lex_state = 4},
  [168] = {.lex_state = 0, .external_lex_state = 5},
  [169] = {.lex_state = 23, .external_lex_state = 3},
  [170] = {.lex_state = 0, .external_lex_state = 8},
  [171] = {.lex_state = 2, .external_lex_state = 2},
  [172] = {.lex_state = 23, .external_lex_state = 3},
  [173] = {.lex_state = 23, .external_lex_state = 3},
  [174] = {.lex_state = 23, .external_lex_state = 3},
  [175] = {.lex_state = 23, .external_lex_state = 3},
  [176] = {.lex_state = 23, .external_lex_state = 3},
  [177] = {.lex_state = 23, .external_lex_state = 3},
  [178] = {.lex_state = 23, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 8},
  [180] = {.lex_state = 23, .external_lex_state = 3},
  [181] = {.lex_state = 23, .external_lex_state = 3},
  [182] = {.lex_state = 23, .external_lex_state = 3},
  [183] = {.lex_state = 0, .external_lex_state = 8},
  [184] = {.lex_state = 23, .external_lex_state = 3},
  [185] = {.lex_state = 0, .external_lex_state = 8},
  [186] = {.lex_state = 0, .external_lex_state = 8},
  [187] = {.lex_state = 0, .external_lex_state = 8},
  [188] = {.lex_state = 0, .external_lex_state = 8},
  [189] = {.lex_state = 0, .external_lex_state = 5},
  [190] = {.lex_state = 0, .external_lex_state = 8},
  [191] = {.lex_state = 23, .external_lex_state = 3},
  [192] = {.lex_state = 23, .external_lex_state = 6},
  [193] = {.lex_state = 23, .external_lex_state = 6},
  [194] = {.lex_state = 23, .external_lex_state = 3},
  [195] = {.lex_state = 23, .external_lex_state = 3},
  [196] = {.lex_state = 23, .external_lex_state = 3},
  [197] = {.lex_state = 23, .external_lex_state = 3},
  [198] = {.lex_state = 0, .external_lex_state = 8},
  [199] = {.lex_state = 23, .external_lex_state = 3},
  [200] = {.lex_state = 23, .external_lex_state = 3},
  [201] = {.lex_state = 23, .external_lex_state = 3},
  [202] = {.lex_state = 23, .external_lex_state = 8},
  [203] = {.lex_state = 23, .external_lex_state = 3},
  [204] = {.lex_state = 23, .external_lex_state = 3},
  [205] = {.lex_state = 23, .external_lex_state = 3},
  [206] = {.lex_state = 23, .external_lex_state = 3},
  [207] = {.lex_state = 23, .external_lex_state = 3},
  [208] = {.lex_state = 23, .external_lex_state = 3},
  [209] = {.lex_state = 0, .external_lex_state = 5},
  [210] = {.lex_state = 23, .external_lex_state = 3},
  [211] = {.lex_state = 23, .external_lex_state = 8},
  [212] = {.lex_state = 23, .external_lex_state = 3},
  [213] = {.lex_state = 23, .external_lex_state = 3},
  [214] = {.lex_state = 23, .external_lex_state = 3},
  [215] = {.lex_state = 23, .external_lex_state = 3},
  [216] = {.lex_state = 23, .external_lex_state = 3},
  [217] = {.lex_state = 23, .external_lex_state = 3},
  [218] = {.lex_state = 0, .external_lex_state = 5},
  [219] = {.lex_state = 23, .external_lex_state = 3},
  [220] = {.lex_state = 23, .external_lex_state = 3},
  [221] = {.lex_state = 23, .external_lex_state = 3},
  [222] = {.lex_state = 23, .external_lex_state = 3},
  [223] = {.lex_state = 23, .external_lex_state = 3},
  [224] = {.lex_state = 23, .external_lex_state = 3},
  [225] = {.lex_state = 23, .external_lex_state = 3},
  [226] = {.lex_state = 23, .external_lex_state = 3},
  [227] = {.lex_state = 23, .external_lex_state = 3},
  [228] = {.lex_state = 23, .external_lex_state = 3},
  [229] = {.lex_state = 23, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 8},
  [231] = {.lex_state = 23, .external_lex_state = 8},
  [232] = {.lex_state = 23, .external_lex_state = 8},
  [233] = {.lex_state = 23, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 8},
  [235] = {.lex_state = 23, .external_lex_state = 8},
  [236] = {.lex_state = 23, .external_lex_state = 8},
  [237] = {.lex_state = 0, .external_lex_state = 8},
  [238] = {.lex_state = 23, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 8},
  [240] = {.lex_state = 23, .external_lex_state = 2},
  [241] = {.lex_state = 23, .external_lex_state = 8},
  [242] = {.lex_state = 23, .external_lex_state = 6},
  [243] = {.lex_state = 0, .external_lex_state = 8},
  [244] = {.lex_state = 23, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 8},
  [246] = {.lex_state = 0, .external_lex_state = 8},
  [247] = {.lex_state = 0, .external_lex_state = 8},
  [248] = {.lex_state = 0, .external_lex_state = 8},
  [249] = {.lex_state = 0, .external_lex_state = 8},
  [250] = {.lex_state = 23, .external_lex_state = 6},
  [251] = {.lex_state = 0, .external_lex_state = 8},
  [252] = {.lex_state = 0, .external_lex_state = 3},
  [253] = {.lex_state = 0, .external_lex_state = 3},
  [254] = {.lex_state = 0, .external_lex_state = 3},
  [255] = {.lex_state = 0, .external_lex_state = 3},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 3},
  [259] = {.lex_state = 0, .external_lex_state = 3},
  [260] = {.lex_state = 0, .external_lex_state = 8},
  [261] = {.lex_state = 0, .external_lex_state = 8},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 0, .external_lex_state = 3},
  [264] = {.lex_state = 23, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 3},
  [266] = {.lex_state = 0, .external_lex_state = 8},
  [267] = {.lex_state = 23, .external_lex_state = 2},
  [268] = {.lex_state = 2, .external_lex_state = 2},
  [269] = {.lex_state = 23, .external_lex_state = 4},
  [270] = {.lex_state = 0, .external_lex_state = 3},
  [271] = {.lex_state = 0, .external_lex_state = 3},
  [272] = {.lex_state = 0, .external_lex_state = 3},
  [273] = {.lex_state = 23, .external_lex_state = 3},
  [274] = {.lex_state = 23, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 3},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 23, .external_lex_state = 2},
  [278] = {.lex_state = 0, .external_lex_state = 8},
  [279] = {.lex_state = 23, .external_lex_state = 3},
  [280] = {.lex_state = 23, .external_lex_state = 3},
  [281] = {.lex_state = 23, .external_lex_state = 2},
  [282] = {.lex_state = 23, .external_lex_state = 2},
  [283] = {.lex_state = 2, .external_lex_state = 2},
  [284] = {.lex_state = 23, .external_lex_state = 3},
  [285] = {.lex_state = 2, .external_lex_state = 2},
  [286] = {.lex_state = 23, .external_lex_state = 3},
  [287] = {.lex_state = 2, .external_lex_state = 2},
  [288] = {.lex_state = 23, .external_lex_state = 3},
  [289] = {.lex_state = 23, .external_lex_state = 2},
  [290] = {.lex_state = 2, .external_lex_state = 2},
  [291] = {.lex_state = 2, .external_lex_state = 2},
  [292] = {.lex_state = 0, .external_lex_state = 3},
  [293] = {.lex_state = 0, .external_lex_state = 3},
  [294] = {.lex_state = 2, .external_lex_state = 2},
  [295] = {.lex_state = 2, .external_lex_state = 2},
  [296] = {.lex_state = 2, .external_lex_state = 2},
  [297] = {.lex_state = 23, .external_lex_state = 2},
  [298] = {.lex_state = 23, .external_lex_state = 2},
  [299] = {.lex_state = 23, .external_lex_state = 3},
  [300] = {.lex_state = 23, .external_lex_state = 3},
  [301] = {.lex_state = 0, .external_lex_state = 8},
  [302] = {.lex_state = 23, .external_lex_state = 3},
  [303] = {.lex_state = 23, .external_lex_state = 3},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0, .external_lex_state = 9},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 9},
  [308] = {.lex_state = 0, .external_lex_state = 9},
  [309] = {.lex_state = 0, .external_lex_state = 9},
  [310] = {.lex_state = 0, .external_lex_state = 9},
  [311] = {.lex_state = 0, .external_lex_state = 9},
  [312] = {.lex_state = 23, .external_lex_state = 2},
  [313] = {.lex_state = 23, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 10},
  [315] = {.lex_state = 0, .external_lex_state = 9},
  [316] = {.lex_state = 0, .external_lex_state = 9},
  [317] = {.lex_state = 0, .external_lex_state = 2},
  [318] = {.lex_state = 0, .external_lex_state = 10},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 9},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 0, .external_lex_state = 10},
  [324] = {.lex_state = 0, .external_lex_state = 10},
  [325] = {.lex_state = 0, .external_lex_state = 10},
  [326] = {.lex_state = 0, .external_lex_state = 9},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 0, .external_lex_state = 9},
  [329] = {.lex_state = 0, .external_lex_state = 2},
  [330] = {.lex_state = 0, .external_lex_state = 9},
  [331] = {.lex_state = 0, .external_lex_state = 9},
  [332] = {.lex_state = 0, .external_lex_state = 2},
  [333] = {.lex_state = 0, .external_lex_state = 10},
  [334] = {.lex_state = 0, .external_lex_state = 2},
  [335] = {.lex_state = 0, .external_lex_state = 2},
  [336] = {.lex_state = 0, .external_lex_state = 9},
  [337] = {.lex_state = 0, .external_lex_state = 2},
  [338] = {.lex_state = 0, .external_lex_state = 9},
  [339] = {.lex_state = 0, .external_lex_state = 10},
  [340] = {.lex_state = 0, .external_lex_state = 2},
  [341] = {.lex_state = 0, .external_lex_state = 2},
  [342] = {.lex_state = 0, .external_lex_state = 9},
  [343] = {.lex_state = 0, .external_lex_state = 9},
  [344] = {.lex_state = 0, .external_lex_state = 2},
  [345] = {.lex_state = 0, .external_lex_state = 2},
  [346] = {.lex_state = 0, .external_lex_state = 9},
  [347] = {.lex_state = 0, .external_lex_state = 2},
  [348] = {.lex_state = 0, .external_lex_state = 10},
  [349] = {.lex_state = 0, .external_lex_state = 2},
  [350] = {.lex_state = 0, .external_lex_state = 2},
  [351] = {.lex_state = 0, .external_lex_state = 2},
  [352] = {.lex_state = 23, .external_lex_state = 2},
  [353] = {.lex_state = 0, .external_lex_state = 2},
  [354] = {.lex_state = 0, .external_lex_state = 2},
  [355] = {.lex_state = 0, .external_lex_state = 9},
  [356] = {.lex_state = 0, .external_lex_state = 9},
  [357] = {.lex_state = 23, .external_lex_state = 2},
  [358] = {.lex_state = 23, .external_lex_state = 2},
  [359] = {.lex_state = 23, .external_lex_state = 2},
  [360] = {.lex_state = 0, .external_lex_state = 2},
  [361] = {.lex_state = 23, .external_lex_state = 2},
  [362] = {.lex_state = 0, .external_lex_state = 9},
  [363] = {.lex_state = 23, .external_lex_state = 2},
  [364] = {.lex_state = 23, .external_lex_state = 2},
  [365] = {.lex_state = 0, .external_lex_state = 11},
  [366] = {.lex_state = 0, .external_lex_state = 2},
  [367] = {.lex_state = 0, .external_lex_state = 2},
  [368] = {.lex_state = 23, .external_lex_state = 2},
  [369] = {.lex_state = 23, .external_lex_state = 2},
  [370] = {.lex_state = 0, .external_lex_state = 2},
  [371] = {.lex_state = 2, .external_lex_state = 2},
  [372] = {.lex_state = 0, .external_lex_state = 2},
  [373] = {.lex_state = 0, .external_lex_state = 11},
  [374] = {.lex_state = 23, .external_lex_state = 2},
  [375] = {.lex_state = 23, .external_lex_state = 2},
  [376] = {.lex_state = 23, .external_lex_state = 2},
  [377] = {.lex_state = 0, .external_lex_state = 12},
  [378] = {.lex_state = 23, .external_lex_state = 2},
  [379] = {.lex_state = 23, .external_lex_state = 2},
  [380] = {.lex_state = 0, .external_lex_state = 2},
  [381] = {.lex_state = 2, .external_lex_state = 2},
  [382] = {.lex_state = 2, .external_lex_state = 2},
  [383] = {.lex_state = 23, .external_lex_state = 2},
  [384] = {.lex_state = 0, .external_lex_state = 11},
  [385] = {.lex_state = 23, .external_lex_state = 2},
  [386] = {.lex_state = 0, .external_lex_state = 2},
  [387] = {.lex_state = 23, .external_lex_state = 2},
  [388] = {.lex_state = 23, .external_lex_state = 2},
  [389] = {.lex_state = 23, .external_lex_state = 2},
  [390] = {.lex_state = 23, .external_lex_state = 2},
  [391] = {.lex_state = 23, .external_lex_state = 2},
  [392] = {.lex_state = 23, .external_lex_state = 2},
  [393] = {.lex_state = 23, .external_lex_state = 2},
  [394] = {.lex_state = 23, .external_lex_state = 2},
  [395] = {.lex_state = 23, .external_lex_state = 2},
  [396] = {.lex_state = 23, .external_lex_state = 2},
  [397] = {.lex_state = 23, .external_lex_state = 2},
  [398] = {.lex_state = 0, .external_lex_state = 2},
  [399] = {.lex_state = 23, .external_lex_state = 2},
  [400] = {.lex_state = 23, .external_lex_state = 2},
  [401] = {.lex_state = 67, .external_lex_state = 2},
  [402] = {.lex_state = 0, .external_lex_state = 12},
  [403] = {.lex_state = 23, .external_lex_state = 2},
  [404] = {.lex_state = 23, .external_lex_state = 2},
  [405] = {.lex_state = 0, .external_lex_state = 11},
  [406] = {.lex_state = 23, .external_lex_state = 2},
  [407] = {.lex_state = 23, .external_lex_state = 2},
  [408] = {.lex_state = 0, .external_lex_state = 2},
  [409] = {.lex_state = 23, .external_lex_state = 2},
  [410] = {.lex_state = 23, .external_lex_state = 2},
  [411] = {.lex_state = 23, .external_lex_state = 2},
  [412] = {.lex_state = 0, .external_lex_state = 2},
  [413] = {.lex_state = 23, .external_lex_state = 2},
  [414] = {.lex_state = 0, .external_lex_state = 9},
  [415] = {.lex_state = 23, .external_lex_state = 2},
  [416] = {.lex_state = 23, .external_lex_state = 2},
  [417] = {.lex_state = 0, .external_lex_state = 2},
  [418] = {.lex_state = 0, .external_lex_state = 2},
  [419] = {.lex_state = 0, .external_lex_state = 2},
  [420] = {.lex_state = 2, .external_lex_state = 2},
  [421] = {.lex_state = 0, .external_lex_state = 2},
  [422] = {.lex_state = 0, .external_lex_state = 2},
  [423] = {.lex_state = 23, .external_lex_state = 2},
  [424] = {.lex_state = 23, .external_lex_state = 2},
  [425] = {.lex_state = 23, .external_lex_state = 2},
  [426] = {.lex_state = 23, .external_lex_state = 2},
  [427] = {.lex_state = 23, .external_lex_state = 2},
  [428] = {.lex_state = 23, .external_lex_state = 2},
  [429] = {.lex_state = 23, .external_lex_state = 2},
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
    [anon_sym_Execute] = ACTIONS(1),
    [anon_sym_result] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_connection] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
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
    [sym_source_file] = STATE(386),
    [sym_parameters] = STATE(14),
    [sym__statement] = STATE(10),
    [sym_nop] = STATE(10),
    [sym_log] = STATE(10),
    [sym_assert] = STATE(10),
    [sym_set_inter] = STATE(10),
    [sym_set] = STATE(10),
    [sym_execute_using] = STATE(10),
    [sym_execute_sql] = STATE(10),
    [sym_siard_output] = STATE(10),
    [sym_siard_metadata] = STATE(10),
    [sym_for_loop] = STATE(10),
    [sym_conditional] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
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
    ACTIONS(31), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 26,
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
      anon_sym_If,
      sym_identifier,
  [38] = 13,
    ACTIONS(33), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(35), 1,
      anon_sym_Log,
    ACTIONS(37), 1,
      anon_sym_Assert,
    ACTIONS(39), 1,
      anon_sym_Interpolation,
    ACTIONS(41), 1,
      anon_sym_Set,
    ACTIONS(43), 1,
      anon_sym_Execute,
    ACTIONS(45), 1,
      anon_sym_Output,
    ACTIONS(47), 1,
      anon_sym_Metadata,
    ACTIONS(49), 1,
      anon_sym_For,
    ACTIONS(51), 1,
      anon_sym_If,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(53), 2,
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
  [92] = 13,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(58), 1,
      anon_sym_Log,
    ACTIONS(61), 1,
      anon_sym_Assert,
    ACTIONS(64), 1,
      anon_sym_Interpolation,
    ACTIONS(67), 1,
      anon_sym_Set,
    ACTIONS(70), 1,
      anon_sym_Execute,
    ACTIONS(73), 1,
      anon_sym_Output,
    ACTIONS(76), 1,
      anon_sym_Metadata,
    ACTIONS(79), 1,
      anon_sym_For,
    ACTIONS(82), 1,
      anon_sym_If,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(85), 2,
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
  [146] = 13,
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
    ACTIONS(27), 1,
      anon_sym_If,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(8), 13,
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
  [199] = 13,
    ACTIONS(33), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(35), 1,
      anon_sym_Log,
    ACTIONS(37), 1,
      anon_sym_Assert,
    ACTIONS(39), 1,
      anon_sym_Interpolation,
    ACTIONS(41), 1,
      anon_sym_Set,
    ACTIONS(43), 1,
      anon_sym_Execute,
    ACTIONS(45), 1,
      anon_sym_Output,
    ACTIONS(47), 1,
      anon_sym_Metadata,
    ACTIONS(49), 1,
      anon_sym_For,
    ACTIONS(51), 1,
      anon_sym_If,
    STATE(271), 1,
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
  [252] = 13,
    ACTIONS(33), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(35), 1,
      anon_sym_Log,
    ACTIONS(37), 1,
      anon_sym_Assert,
    ACTIONS(39), 1,
      anon_sym_Interpolation,
    ACTIONS(41), 1,
      anon_sym_Set,
    ACTIONS(43), 1,
      anon_sym_Execute,
    ACTIONS(45), 1,
      anon_sym_Output,
    ACTIONS(47), 1,
      anon_sym_Metadata,
    ACTIONS(49), 1,
      anon_sym_For,
    ACTIONS(51), 1,
      anon_sym_If,
    STATE(253), 1,
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
  [305] = 13,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(92), 1,
      anon_sym_Log,
    ACTIONS(95), 1,
      anon_sym_Assert,
    ACTIONS(98), 1,
      anon_sym_Interpolation,
    ACTIONS(101), 1,
      anon_sym_Set,
    ACTIONS(104), 1,
      anon_sym_Execute,
    ACTIONS(107), 1,
      anon_sym_Output,
    ACTIONS(110), 1,
      anon_sym_Metadata,
    ACTIONS(113), 1,
      anon_sym_For,
    ACTIONS(116), 1,
      anon_sym_If,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(8), 13,
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
  [358] = 13,
    ACTIONS(33), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(35), 1,
      anon_sym_Log,
    ACTIONS(37), 1,
      anon_sym_Assert,
    ACTIONS(39), 1,
      anon_sym_Interpolation,
    ACTIONS(41), 1,
      anon_sym_Set,
    ACTIONS(43), 1,
      anon_sym_Execute,
    ACTIONS(45), 1,
      anon_sym_Output,
    ACTIONS(47), 1,
      anon_sym_Metadata,
    ACTIONS(49), 1,
      anon_sym_For,
    ACTIONS(51), 1,
      anon_sym_If,
    STATE(258), 1,
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
  [411] = 13,
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
    ACTIONS(27), 1,
      anon_sym_If,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(8), 13,
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
  [464] = 13,
    ACTIONS(33), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(35), 1,
      anon_sym_Log,
    ACTIONS(37), 1,
      anon_sym_Assert,
    ACTIONS(39), 1,
      anon_sym_Interpolation,
    ACTIONS(41), 1,
      anon_sym_Set,
    ACTIONS(43), 1,
      anon_sym_Execute,
    ACTIONS(45), 1,
      anon_sym_Output,
    ACTIONS(47), 1,
      anon_sym_Metadata,
    ACTIONS(49), 1,
      anon_sym_For,
    ACTIONS(51), 1,
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
  [517] = 13,
    ACTIONS(33), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(35), 1,
      anon_sym_Log,
    ACTIONS(37), 1,
      anon_sym_Assert,
    ACTIONS(39), 1,
      anon_sym_Interpolation,
    ACTIONS(41), 1,
      anon_sym_Set,
    ACTIONS(43), 1,
      anon_sym_Execute,
    ACTIONS(45), 1,
      anon_sym_Output,
    ACTIONS(47), 1,
      anon_sym_Metadata,
    ACTIONS(49), 1,
      anon_sym_For,
    ACTIONS(51), 1,
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
  [570] = 13,
    ACTIONS(33), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(35), 1,
      anon_sym_Log,
    ACTIONS(37), 1,
      anon_sym_Assert,
    ACTIONS(39), 1,
      anon_sym_Interpolation,
    ACTIONS(41), 1,
      anon_sym_Set,
    ACTIONS(43), 1,
      anon_sym_Execute,
    ACTIONS(45), 1,
      anon_sym_Output,
    ACTIONS(47), 1,
      anon_sym_Metadata,
    ACTIONS(49), 1,
      anon_sym_For,
    ACTIONS(51), 1,
      anon_sym_If,
    STATE(262), 1,
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
  [623] = 13,
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
    ACTIONS(27), 1,
      anon_sym_If,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(5), 13,
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
  [676] = 20,
    ACTIONS(121), 1,
      anon_sym_dbname,
    ACTIONS(123), 1,
      anon_sym_description,
    ACTIONS(125), 1,
      anon_sym_archiver,
    ACTIONS(127), 1,
      anon_sym_archiverContact,
    ACTIONS(129), 1,
      anon_sym_dataOwner,
    ACTIONS(131), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(133), 1,
      anon_sym_lobFolder,
    ACTIONS(135), 1,
      anon_sym_Schema,
    ACTIONS(137), 1,
      anon_sym_Command,
    STATE(62), 1,
      sym__ded,
    STATE(69), 1,
      sym__siard_archiver,
    STATE(86), 1,
      sym__siard_lobFolder,
    STATE(89), 1,
      sym__siard_dataOriginTimespan,
    STATE(90), 1,
      sym__siard_dataOwner,
    STATE(91), 1,
      sym__siard_archiverContact,
    STATE(92), 1,
      sym__siard_description,
    STATE(93), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(139), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(19), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [741] = 20,
    ACTIONS(121), 1,
      anon_sym_dbname,
    ACTIONS(123), 1,
      anon_sym_description,
    ACTIONS(125), 1,
      anon_sym_archiver,
    ACTIONS(127), 1,
      anon_sym_archiverContact,
    ACTIONS(129), 1,
      anon_sym_dataOwner,
    ACTIONS(131), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(133), 1,
      anon_sym_lobFolder,
    ACTIONS(135), 1,
      anon_sym_Schema,
    ACTIONS(137), 1,
      anon_sym_Command,
    STATE(69), 1,
      sym__siard_archiver,
    STATE(70), 1,
      sym__ded,
    STATE(86), 1,
      sym__siard_lobFolder,
    STATE(89), 1,
      sym__siard_dataOriginTimespan,
    STATE(90), 1,
      sym__siard_dataOwner,
    STATE(91), 1,
      sym__siard_archiverContact,
    STATE(92), 1,
      sym__siard_description,
    STATE(93), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(141), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(19), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [806] = 20,
    ACTIONS(121), 1,
      anon_sym_dbname,
    ACTIONS(123), 1,
      anon_sym_description,
    ACTIONS(125), 1,
      anon_sym_archiver,
    ACTIONS(127), 1,
      anon_sym_archiverContact,
    ACTIONS(129), 1,
      anon_sym_dataOwner,
    ACTIONS(131), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(133), 1,
      anon_sym_lobFolder,
    ACTIONS(135), 1,
      anon_sym_Schema,
    ACTIONS(137), 1,
      anon_sym_Command,
    STATE(66), 1,
      sym__ded,
    STATE(69), 1,
      sym__siard_archiver,
    STATE(86), 1,
      sym__siard_lobFolder,
    STATE(89), 1,
      sym__siard_dataOriginTimespan,
    STATE(90), 1,
      sym__siard_dataOwner,
    STATE(91), 1,
      sym__siard_archiverContact,
    STATE(92), 1,
      sym__siard_description,
    STATE(93), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(143), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(15), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [871] = 20,
    ACTIONS(121), 1,
      anon_sym_dbname,
    ACTIONS(123), 1,
      anon_sym_description,
    ACTIONS(125), 1,
      anon_sym_archiver,
    ACTIONS(127), 1,
      anon_sym_archiverContact,
    ACTIONS(129), 1,
      anon_sym_dataOwner,
    ACTIONS(131), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(133), 1,
      anon_sym_lobFolder,
    ACTIONS(135), 1,
      anon_sym_Schema,
    ACTIONS(137), 1,
      anon_sym_Command,
    STATE(69), 1,
      sym__siard_archiver,
    STATE(85), 1,
      sym__ded,
    STATE(86), 1,
      sym__siard_lobFolder,
    STATE(89), 1,
      sym__siard_dataOriginTimespan,
    STATE(90), 1,
      sym__siard_dataOwner,
    STATE(91), 1,
      sym__siard_archiverContact,
    STATE(92), 1,
      sym__siard_description,
    STATE(93), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(145), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(16), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [936] = 19,
    ACTIONS(147), 1,
      anon_sym_dbname,
    ACTIONS(150), 1,
      anon_sym_description,
    ACTIONS(153), 1,
      anon_sym_archiver,
    ACTIONS(156), 1,
      anon_sym_archiverContact,
    ACTIONS(159), 1,
      anon_sym_dataOwner,
    ACTIONS(162), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(165), 1,
      anon_sym_lobFolder,
    ACTIONS(168), 1,
      anon_sym_Schema,
    ACTIONS(171), 1,
      anon_sym_Command,
    STATE(69), 1,
      sym__siard_archiver,
    STATE(86), 1,
      sym__siard_lobFolder,
    STATE(89), 1,
      sym__siard_dataOriginTimespan,
    STATE(90), 1,
      sym__siard_dataOwner,
    STATE(91), 1,
      sym__siard_archiverContact,
    STATE(92), 1,
      sym__siard_description,
    STATE(93), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(174), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(19), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [998] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(178), 2,
      sym__dedent,
      sym__end_of_file,
    ACTIONS(176), 17,
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
  [1026] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(182), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 16,
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
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1054] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(186), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(184), 16,
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
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1082] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(190), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 16,
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
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1110] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(194), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 16,
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
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1138] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 16,
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
      anon_sym_If,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1166] = 3,
    ACTIONS(202), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(200), 17,
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
  [1193] = 3,
    ACTIONS(206), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(204), 17,
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
  [1220] = 3,
    ACTIONS(210), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(208), 17,
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
  [1247] = 3,
    ACTIONS(204), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(206), 14,
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
      anon_sym_If,
      sym_identifier,
  [1271] = 3,
    ACTIONS(214), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(212), 12,
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
      anon_sym_If,
  [1293] = 3,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(184), 12,
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
      anon_sym_If,
  [1315] = 3,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(180), 12,
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
      anon_sym_If,
  [1337] = 3,
    ACTIONS(218), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(216), 12,
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
      anon_sym_If,
  [1359] = 8,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_result,
    ACTIONS(224), 1,
      anon_sym_connection,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(228), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(63), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
    STATE(82), 4,
      sym__expression,
      sym_script_result,
      sym_connection,
      sym_query,
  [1391] = 3,
    ACTIONS(194), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(192), 12,
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
      anon_sym_If,
  [1413] = 3,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(196), 12,
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
      anon_sym_If,
  [1435] = 3,
    ACTIONS(218), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(230), 12,
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
      anon_sym_If,
  [1457] = 8,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_result,
    ACTIONS(236), 1,
      anon_sym_connection,
    ACTIONS(238), 1,
      sym_integer,
    ACTIONS(240), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(40), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
    STATE(55), 4,
      sym__expression,
      sym_script_result,
      sym_connection,
      sym_query,
  [1489] = 3,
    ACTIONS(190), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(188), 12,
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
      anon_sym_If,
  [1511] = 3,
    ACTIONS(218), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(242), 12,
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
      anon_sym_If,
  [1533] = 3,
    ACTIONS(246), 1,
      anon_sym_Else,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(244), 12,
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
      anon_sym_If,
  [1555] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(31), 13,
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
      anon_sym_If,
  [1575] = 3,
    ACTIONS(248), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(216), 12,
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
      anon_sym_If,
  [1597] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(250), 12,
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
      anon_sym_If,
  [1616] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(252), 12,
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
      anon_sym_If,
  [1635] = 9,
    ACTIONS(123), 1,
      anon_sym_description,
    ACTIONS(254), 1,
      anon_sym_Type,
    ACTIONS(256), 1,
      anon_sym_Table,
    ACTIONS(258), 1,
      anon_sym_View,
    STATE(111), 1,
      sym__ded,
    STATE(118), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(260), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(124), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1668] = 3,
    ACTIONS(262), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(212), 11,
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
      anon_sym_If,
  [1689] = 3,
    ACTIONS(248), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(230), 11,
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
      anon_sym_If,
  [1710] = 3,
    ACTIONS(264), 1,
      anon_sym_Else,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(244), 11,
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
      anon_sym_If,
  [1731] = 9,
    ACTIONS(123), 1,
      anon_sym_description,
    ACTIONS(266), 1,
      anon_sym_Column,
    ACTIONS(268), 1,
      anon_sym_Key,
    ACTIONS(270), 1,
      anon_sym_Check,
    STATE(123), 1,
      sym__siard_description,
    STATE(222), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(272), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(122), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1764] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(274), 12,
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
      anon_sym_If,
  [1783] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(276), 12,
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
      anon_sym_If,
  [1802] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(278), 12,
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
      anon_sym_If,
  [1821] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(280), 12,
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
      anon_sym_If,
  [1840] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(282), 12,
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
      anon_sym_If,
  [1859] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(284), 12,
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
      anon_sym_If,
  [1878] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(286), 12,
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
      anon_sym_If,
  [1897] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(288), 12,
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
      anon_sym_If,
  [1916] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(290), 12,
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
      anon_sym_If,
  [1935] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(292), 12,
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
      anon_sym_If,
  [1954] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(294), 12,
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
      anon_sym_If,
  [1973] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(296), 12,
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
      anon_sym_If,
  [1992] = 3,
    ACTIONS(248), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(242), 11,
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
      anon_sym_If,
  [2013] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(298), 12,
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
      anon_sym_If,
  [2032] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(300), 12,
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
      anon_sym_If,
  [2051] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(302), 12,
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
      anon_sym_If,
  [2070] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(304), 12,
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
      anon_sym_If,
  [2089] = 8,
    ACTIONS(308), 1,
      sym__inter_start,
    ACTIONS(310), 1,
      sym__inter_start2,
    ACTIONS(312), 1,
      sym__raw,
    STATE(42), 1,
      sym__ded,
    STATE(168), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(306), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(120), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2119] = 3,
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
  [2139] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(296), 11,
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
      anon_sym_If,
  [2157] = 3,
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
  [2177] = 3,
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
  [2197] = 3,
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
  [2217] = 3,
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
  [2237] = 3,
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
  [2257] = 3,
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
  [2277] = 3,
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
  [2297] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(298), 11,
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
      anon_sym_If,
  [2315] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(284), 11,
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
      anon_sym_If,
  [2333] = 3,
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
  [2353] = 8,
    ACTIONS(308), 1,
      sym__inter_start,
    ACTIONS(310), 1,
      sym__inter_start2,
    ACTIONS(312), 1,
      sym__raw,
    STATE(2), 1,
      sym__ded,
    STATE(168), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(350), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(120), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2383] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(282), 11,
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
      anon_sym_If,
  [2401] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(288), 11,
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
      anon_sym_If,
  [2419] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(300), 11,
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
      anon_sym_If,
  [2437] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(302), 11,
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
      anon_sym_If,
  [2455] = 3,
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
  [2475] = 3,
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
  [2495] = 3,
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
  [2515] = 3,
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
  [2535] = 3,
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
  [2555] = 3,
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
  [2575] = 3,
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
  [2595] = 3,
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
  [2615] = 3,
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
  [2635] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(294), 11,
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
      anon_sym_If,
  [2653] = 3,
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
  [2673] = 3,
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
  [2693] = 3,
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
  [2713] = 3,
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
  [2733] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(290), 11,
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
      anon_sym_If,
  [2751] = 3,
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
  [2771] = 3,
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
  [2791] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(286), 11,
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
      anon_sym_If,
  [2809] = 3,
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
  [2829] = 3,
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
  [2849] = 3,
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
  [2869] = 3,
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
  [2889] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(252), 11,
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
      anon_sym_If,
  [2907] = 3,
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
  [2927] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(292), 11,
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
      anon_sym_If,
  [2945] = 3,
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
  [2965] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(274), 11,
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
      anon_sym_If,
  [2983] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(280), 11,
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
      anon_sym_If,
  [3001] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(278), 11,
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
      anon_sym_If,
  [3019] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(304), 11,
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
      anon_sym_If,
  [3037] = 3,
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
  [3057] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(276), 11,
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
      anon_sym_If,
  [3075] = 7,
    ACTIONS(254), 1,
      anon_sym_Type,
    ACTIONS(256), 1,
      anon_sym_Table,
    ACTIONS(258), 1,
      anon_sym_View,
    STATE(116), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(440), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(119), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3102] = 7,
    ACTIONS(254), 1,
      anon_sym_Type,
    ACTIONS(256), 1,
      anon_sym_Table,
    ACTIONS(258), 1,
      anon_sym_View,
    STATE(102), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(442), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(128), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3129] = 7,
    ACTIONS(446), 1,
      sym__inter_start,
    ACTIONS(449), 1,
      sym__inter_start2,
    ACTIONS(452), 1,
      sym__raw,
    STATE(168), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(444), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(120), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3156] = 7,
    ACTIONS(266), 1,
      anon_sym_Column,
    ACTIONS(268), 1,
      anon_sym_Key,
    ACTIONS(270), 1,
      anon_sym_Check,
    STATE(206), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(455), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(131), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3183] = 7,
    ACTIONS(266), 1,
      anon_sym_Column,
    ACTIONS(268), 1,
      anon_sym_Key,
    ACTIONS(270), 1,
      anon_sym_Check,
    STATE(210), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(457), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(131), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3210] = 7,
    ACTIONS(266), 1,
      anon_sym_Column,
    ACTIONS(268), 1,
      anon_sym_Key,
    ACTIONS(270), 1,
      anon_sym_Check,
    STATE(207), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(459), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(121), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3237] = 7,
    ACTIONS(254), 1,
      anon_sym_Type,
    ACTIONS(256), 1,
      anon_sym_Table,
    ACTIONS(258), 1,
      anon_sym_View,
    STATE(109), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(461), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(128), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3264] = 7,
    ACTIONS(463), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      sym__inter_start,
    ACTIONS(467), 1,
      sym__string_content,
    ACTIONS(469), 1,
      sym__string_end,
    STATE(192), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(126), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3290] = 7,
    ACTIONS(463), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      sym__inter_start,
    ACTIONS(467), 1,
      sym__string_content,
    ACTIONS(471), 1,
      sym__string_end,
    STATE(192), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(132), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3316] = 6,
    ACTIONS(228), 1,
      sym__string_start,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(475), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(366), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(141), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3340] = 6,
    ACTIONS(477), 1,
      anon_sym_Type,
    ACTIONS(480), 1,
      anon_sym_Table,
    ACTIONS(483), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(486), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(128), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3364] = 7,
    ACTIONS(463), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      sym__inter_start,
    ACTIONS(467), 1,
      sym__string_content,
    ACTIONS(488), 1,
      sym__string_end,
    STATE(192), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(134), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3390] = 6,
    ACTIONS(228), 1,
      sym__string_start,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(475), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(115), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(141), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3414] = 6,
    ACTIONS(490), 1,
      anon_sym_Column,
    ACTIONS(493), 1,
      anon_sym_Key,
    ACTIONS(496), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(499), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(131), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3438] = 7,
    ACTIONS(501), 1,
      anon_sym_BSLASH,
    ACTIONS(504), 1,
      sym__inter_start,
    ACTIONS(507), 1,
      sym__string_content,
    ACTIONS(510), 1,
      sym__string_end,
    STATE(192), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(132), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3464] = 6,
    ACTIONS(228), 1,
      sym__string_start,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(475), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(412), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(141), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3488] = 7,
    ACTIONS(463), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      sym__inter_start,
    ACTIONS(467), 1,
      sym__string_content,
    ACTIONS(512), 1,
      sym__string_end,
    STATE(192), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(132), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3514] = 7,
    ACTIONS(463), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      sym__inter_start,
    ACTIONS(467), 1,
      sym__string_content,
    ACTIONS(514), 1,
      sym__string_end,
    STATE(192), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(132), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3540] = 7,
    ACTIONS(463), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      sym__inter_start,
    ACTIONS(467), 1,
      sym__string_content,
    ACTIONS(516), 1,
      sym__string_end,
    STATE(192), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(132), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3566] = 7,
    ACTIONS(463), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      sym__inter_start,
    ACTIONS(467), 1,
      sym__string_content,
    ACTIONS(518), 1,
      sym__string_end,
    STATE(192), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(135), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3592] = 6,
    ACTIONS(228), 1,
      sym__string_start,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(520), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(67), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(146), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3616] = 7,
    ACTIONS(463), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      sym__inter_start,
    ACTIONS(467), 1,
      sym__string_content,
    ACTIONS(522), 1,
      sym__string_end,
    STATE(192), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(136), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3642] = 7,
    ACTIONS(123), 1,
      anon_sym_description,
    ACTIONS(266), 1,
      anon_sym_Column,
    STATE(169), 1,
      sym__siard_description,
    STATE(200), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(524), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(184), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3667] = 5,
    ACTIONS(526), 1,
      anon_sym_DOT,
    STATE(150), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(530), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3688] = 6,
    ACTIONS(308), 1,
      sym__inter_start,
    ACTIONS(310), 1,
      sym__inter_start2,
    ACTIONS(312), 1,
      sym__raw,
    STATE(168), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(68), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3711] = 6,
    ACTIONS(308), 1,
      sym__inter_start,
    ACTIONS(310), 1,
      sym__inter_start2,
    ACTIONS(312), 1,
      sym__raw,
    STATE(168), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(81), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3734] = 7,
    ACTIONS(123), 1,
      anon_sym_description,
    ACTIONS(532), 1,
      anon_sym_Field,
    STATE(181), 1,
      sym__siard_description,
    STATE(201), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(534), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(180), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3759] = 7,
    ACTIONS(123), 1,
      anon_sym_description,
    ACTIONS(532), 1,
      anon_sym_Field,
    STATE(177), 1,
      sym__siard_description,
    STATE(299), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(536), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(176), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3784] = 5,
    ACTIONS(526), 1,
      anon_sym_DOT,
    STATE(148), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(530), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3805] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(540), 1,
      sym_integer,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(202), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3825] = 5,
    ACTIONS(240), 1,
      sym__string_start,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(546), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(33), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3845] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(548), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(211), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3865] = 5,
    ACTIONS(228), 1,
      sym__string_start,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(550), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(43), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3885] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(552), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(234), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3905] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(554), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(237), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3925] = 5,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(558), 1,
      sym_integer,
    ACTIONS(560), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(339), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3945] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(562), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(243), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3965] = 5,
    ACTIONS(228), 1,
      sym__string_start,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(48), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3985] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(566), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(249), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4005] = 5,
    ACTIONS(240), 1,
      sym__string_start,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(568), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(37), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4025] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(570), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(247), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4045] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(572), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(251), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4065] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(574), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(230), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4085] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(576), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(246), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4105] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(578), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(239), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4125] = 5,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(560), 1,
      sym__string_start,
    ACTIONS(580), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(348), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4145] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(582), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(248), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4165] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym__string_start,
    ACTIONS(584), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(245), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4185] = 5,
    ACTIONS(228), 1,
      sym__string_start,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(586), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(350), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4205] = 5,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(560), 1,
      sym__string_start,
    ACTIONS(588), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(333), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [4225] = 4,
    ACTIONS(592), 1,
      sym__raw,
    STATE(189), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(590), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [4242] = 5,
    ACTIONS(266), 1,
      anon_sym_Column,
    STATE(223), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(594), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(182), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4261] = 6,
    ACTIONS(596), 1,
      anon_sym_COLON,
    ACTIONS(598), 1,
      aux_sym__short_descr_token1,
    STATE(77), 1,
      sym__short_descr,
    STATE(80), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(600), 2,
      sym__newline,
      sym__end_of_file,
  [4282] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(602), 6,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
      aux_sym_escape_sequence_token3,
      aux_sym_escape_sequence_token4,
      aux_sym_escape_sequence_token5,
      aux_sym_escape_sequence_token6,
  [4295] = 5,
    ACTIONS(604), 1,
      sym_identifier,
    STATE(95), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(606), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(197), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4314] = 5,
    ACTIONS(604), 1,
      sym_identifier,
    STATE(61), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(608), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(197), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4333] = 5,
    ACTIONS(610), 1,
      sym_identifier,
    STATE(44), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(612), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(203), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4352] = 5,
    ACTIONS(532), 1,
      anon_sym_Field,
    STATE(286), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(614), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(195), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4371] = 5,
    ACTIONS(532), 1,
      anon_sym_Field,
    STATE(280), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(616), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(195), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4390] = 5,
    ACTIONS(532), 1,
      anon_sym_Field,
    STATE(279), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(618), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(175), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4409] = 5,
    ACTIONS(532), 1,
      anon_sym_Field,
    STATE(219), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(620), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(195), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4428] = 6,
    ACTIONS(598), 1,
      aux_sym__short_descr_token1,
    ACTIONS(622), 1,
      anon_sym_COLON,
    STATE(302), 1,
      sym__short_descr,
    STATE(303), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(624), 2,
      sym__newline,
      sym__end_of_file,
  [4449] = 5,
    ACTIONS(532), 1,
      anon_sym_Field,
    STATE(196), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(626), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(195), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4468] = 5,
    ACTIONS(532), 1,
      anon_sym_Field,
    STATE(199), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(628), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(178), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4487] = 5,
    ACTIONS(266), 1,
      anon_sym_Column,
    STATE(204), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(630), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(221), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4506] = 6,
    ACTIONS(598), 1,
      aux_sym__short_descr_token1,
    ACTIONS(632), 1,
      anon_sym_COLON,
    STATE(214), 1,
      sym__nl,
    STATE(215), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(634), 2,
      sym__newline,
      sym__end_of_file,
  [4527] = 5,
    ACTIONS(266), 1,
      anon_sym_Column,
    STATE(228), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(636), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(221), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4546] = 6,
    ACTIONS(598), 1,
      aux_sym__short_descr_token1,
    ACTIONS(638), 1,
      anon_sym_COLON,
    STATE(208), 1,
      sym__nl,
    STATE(212), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(640), 2,
      sym__newline,
      sym__end_of_file,
  [4567] = 6,
    ACTIONS(598), 1,
      aux_sym__short_descr_token1,
    ACTIONS(642), 1,
      anon_sym_COLON,
    STATE(226), 1,
      sym__nl,
    STATE(227), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(644), 2,
      sym__newline,
      sym__end_of_file,
  [4588] = 6,
    ACTIONS(598), 1,
      aux_sym__short_descr_token1,
    ACTIONS(646), 1,
      anon_sym_COLON,
    STATE(224), 1,
      sym__nl,
    STATE(225), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(648), 2,
      sym__newline,
      sym__end_of_file,
  [4609] = 6,
    ACTIONS(598), 1,
      aux_sym__short_descr_token1,
    ACTIONS(650), 1,
      anon_sym_COLON,
    STATE(213), 1,
      sym__nl,
    STATE(220), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(652), 2,
      sym__newline,
      sym__end_of_file,
  [4630] = 4,
    ACTIONS(656), 1,
      sym__raw,
    STATE(189), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(654), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [4647] = 6,
    ACTIONS(598), 1,
      aux_sym__short_descr_token1,
    ACTIONS(659), 1,
      anon_sym_COLON,
    STATE(216), 1,
      sym__nl,
    STATE(217), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(661), 2,
      sym__newline,
      sym__end_of_file,
  [4668] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(663), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4680] = 4,
    ACTIONS(667), 1,
      sym__string_content,
    STATE(193), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(665), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [4696] = 4,
    ACTIONS(671), 1,
      sym__string_content,
    STATE(193), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(669), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [4712] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(674), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4724] = 4,
    ACTIONS(676), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(679), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(195), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4740] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(681), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4752] = 4,
    ACTIONS(683), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(686), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(197), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4768] = 5,
    ACTIONS(598), 1,
      aux_sym__short_descr_token1,
    STATE(284), 1,
      sym__nl,
    STATE(288), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(688), 2,
      sym__newline,
      sym__end_of_file,
  [4786] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(690), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4798] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(692), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4810] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(694), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4822] = 6,
    ACTIONS(696), 1,
      anon_sym_with,
    ACTIONS(698), 1,
      anon_sym_DOT,
    ACTIONS(700), 1,
      sym__newline,
    ACTIONS(702), 1,
      sym__end_of_file,
    STATE(52), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4842] = 4,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(707), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(203), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4858] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(709), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4870] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(711), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4882] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(713), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4894] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(715), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4906] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(717), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4918] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(719), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4930] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(721), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4942] = 6,
    ACTIONS(698), 1,
      anon_sym_DOT,
    ACTIONS(723), 1,
      anon_sym_with,
    ACTIONS(725), 1,
      sym__newline,
    ACTIONS(727), 1,
      sym__end_of_file,
    STATE(117), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4962] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(729), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4974] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(731), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4986] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(733), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4998] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(735), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5010] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(737), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5022] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(739), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5034] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(741), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [5046] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(743), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [5058] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(745), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5070] = 4,
    ACTIONS(747), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(750), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(221), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [5086] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(752), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5098] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(754), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5110] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(756), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5122] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(758), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5134] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(760), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5146] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(762), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5158] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(764), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [5170] = 3,
    STATE(236), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(766), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5183] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(105), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(768), 2,
      sym__newline,
      sym__end_of_file,
  [5198] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(196), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5209] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(192), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5220] = 3,
    STATE(22), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(770), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5233] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(267), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(772), 2,
      sym__newline,
      sym__end_of_file,
  [5248] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(180), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5259] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(184), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5270] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(96), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(774), 2,
      sym__newline,
      sym__end_of_file,
  [5285] = 3,
    STATE(325), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(776), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5298] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(106), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(778), 2,
      sym__newline,
      sym__end_of_file,
  [5313] = 3,
    STATE(31), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(780), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [5326] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(188), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [5337] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(741), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [5348] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(782), 2,
      sym__newline,
      sym__end_of_file,
  [5363] = 5,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(784), 1,
      anon_sym_title,
    ACTIONS(786), 1,
      anon_sym_Body,
    STATE(396), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5380] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(51), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(788), 2,
      sym__newline,
      sym__end_of_file,
  [5395] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(273), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(790), 2,
      sym__newline,
      sym__end_of_file,
  [5410] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(99), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(792), 2,
      sym__newline,
      sym__end_of_file,
  [5425] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(107), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(794), 2,
      sym__newline,
      sym__end_of_file,
  [5440] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(98), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(796), 2,
      sym__newline,
      sym__end_of_file,
  [5455] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(798), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [5466] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(112), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(800), 2,
      sym__newline,
      sym__end_of_file,
  [5481] = 3,
    STATE(104), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(802), 2,
      sym__dedent,
      sym__end_of_file,
  [5493] = 3,
    STATE(49), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(804), 2,
      sym__dedent,
      sym__end_of_file,
  [5505] = 3,
    STATE(94), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(806), 2,
      sym__dedent,
      sym__end_of_file,
  [5517] = 3,
    STATE(205), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(808), 2,
      sym__dedent,
      sym__end_of_file,
  [5529] = 4,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5543] = 4,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5557] = 3,
    STATE(110), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(819), 2,
      sym__dedent,
      sym__end_of_file,
  [5569] = 3,
    STATE(88), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(821), 2,
      sym__dedent,
      sym__end_of_file,
  [5581] = 3,
    STATE(20), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(823), 2,
      sym__newline,
      sym__end_of_file,
  [5593] = 3,
    STATE(113), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(825), 2,
      sym__newline,
      sym__end_of_file,
  [5605] = 3,
    STATE(65), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(827), 2,
      sym__dedent,
      sym__end_of_file,
  [5617] = 3,
    STATE(60), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(829), 2,
      sym__dedent,
      sym__end_of_file,
  [5629] = 4,
    ACTIONS(831), 1,
      anon_sym_using,
    ACTIONS(833), 1,
      anon_sym_via,
    STATE(332), 1,
      sym__using_i,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5643] = 3,
    STATE(97), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(835), 2,
      sym__dedent,
      sym__end_of_file,
  [5655] = 3,
    STATE(54), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(837), 2,
      sym__newline,
      sym__end_of_file,
  [5667] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(839), 1,
      anon_sym_Body,
    STATE(359), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5681] = 4,
    ACTIONS(841), 1,
      anon_sym_COLON,
    ACTIONS(843), 1,
      anon_sym_EQ,
    STATE(300), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5695] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(845), 3,
      sym__string_start,
      sym_integer,
      sym_identifier,
  [5705] = 3,
    STATE(101), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(847), 2,
      sym__dedent,
      sym__end_of_file,
  [5717] = 3,
    STATE(41), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(849), 2,
      sym__dedent,
      sym__end_of_file,
  [5729] = 3,
    STATE(87), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(851), 2,
      sym__dedent,
      sym__end_of_file,
  [5741] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(853), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5751] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(855), 1,
      anon_sym_Body,
    STATE(364), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5765] = 3,
    STATE(84), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(857), 2,
      sym__dedent,
      sym__end_of_file,
  [5777] = 4,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5791] = 3,
    ACTIONS(610), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(174), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [5803] = 3,
    STATE(59), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(861), 2,
      sym__newline,
      sym__end_of_file,
  [5815] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(863), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5825] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(865), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5835] = 3,
    ACTIONS(604), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(173), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [5847] = 4,
    ACTIONS(831), 1,
      anon_sym_using,
    ACTIONS(867), 1,
      anon_sym_via,
    STATE(340), 1,
      sym__using_i,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5861] = 4,
    ACTIONS(869), 1,
      anon_sym_COLON,
    ACTIONS(871), 1,
      anon_sym_EQ,
    STATE(274), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5875] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(873), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5885] = 4,
    ACTIONS(841), 1,
      anon_sym_COLON,
    ACTIONS(875), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5899] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(877), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5909] = 4,
    ACTIONS(841), 1,
      anon_sym_COLON,
    ACTIONS(879), 1,
      anon_sym_EQ,
    STATE(75), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5923] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(881), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5933] = 3,
    ACTIONS(604), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(172), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [5945] = 4,
    ACTIONS(841), 1,
      anon_sym_COLON,
    ACTIONS(883), 1,
      anon_sym_EQ,
    STATE(74), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5959] = 4,
    ACTIONS(841), 1,
      anon_sym_COLON,
    ACTIONS(885), 1,
      anon_sym_EQ,
    STATE(76), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5973] = 3,
    STATE(191), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(887), 2,
      sym__dedent,
      sym__end_of_file,
  [5985] = 3,
    STATE(194), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(889), 2,
      sym__dedent,
      sym__end_of_file,
  [5997] = 4,
    ACTIONS(841), 1,
      anon_sym_COLON,
    ACTIONS(891), 1,
      anon_sym_EQ,
    STATE(73), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6011] = 4,
    ACTIONS(841), 1,
      anon_sym_COLON,
    ACTIONS(893), 1,
      anon_sym_EQ,
    STATE(72), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6025] = 4,
    ACTIONS(841), 1,
      anon_sym_COLON,
    ACTIONS(895), 1,
      anon_sym_EQ,
    STATE(71), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6039] = 4,
    ACTIONS(831), 1,
      anon_sym_using,
    ACTIONS(897), 1,
      anon_sym_via,
    STATE(304), 1,
      sym__using_i,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6053] = 4,
    ACTIONS(831), 1,
      anon_sym_using,
    ACTIONS(899), 1,
      anon_sym_via,
    STATE(329), 1,
      sym__using_i,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6067] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(901), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6077] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(903), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [6087] = 3,
    STATE(100), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(905), 2,
      sym__newline,
      sym__end_of_file,
  [6099] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(907), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6109] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(909), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [6119] = 3,
    ACTIONS(841), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6130] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(352), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6141] = 3,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
    STATE(427), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6152] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(9), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6163] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(244), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6174] = 3,
    ACTIONS(915), 1,
      sym__newline,
    STATE(46), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6185] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(12), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6196] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(281), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6207] = 3,
    ACTIONS(123), 1,
      anon_sym_description,
    STATE(293), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6218] = 3,
    ACTIONS(123), 1,
      anon_sym_description,
    STATE(292), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6229] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(188), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6238] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(13), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6249] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(6), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6260] = 3,
    ACTIONS(841), 1,
      anon_sym_COLON,
    STATE(252), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6271] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(196), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6280] = 3,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
    STATE(357), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6291] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(312), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6302] = 3,
    ACTIONS(917), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6313] = 3,
    ACTIONS(917), 1,
      anon_sym_COLON,
    STATE(45), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6324] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(192), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6333] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(180), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6342] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(184), 2,
      sym__inter_end,
      anon_sym_DOT,
  [6351] = 3,
    ACTIONS(915), 1,
      sym__newline,
    STATE(17), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6362] = 3,
    ACTIONS(841), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6373] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(277), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6384] = 3,
    ACTIONS(841), 1,
      anon_sym_COLON,
    STATE(57), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6395] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(313), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6406] = 3,
    ACTIONS(915), 1,
      sym__newline,
    STATE(144), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6417] = 3,
    ACTIONS(869), 1,
      anon_sym_COLON,
    STATE(103), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6428] = 3,
    ACTIONS(919), 1,
      anon_sym_DOT,
    ACTIONS(921), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6439] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(817), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6448] = 3,
    ACTIONS(841), 1,
      anon_sym_COLON,
    STATE(58), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6459] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(289), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6470] = 3,
    ACTIONS(841), 1,
      anon_sym_COLON,
    STATE(272), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6481] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(11), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6492] = 3,
    ACTIONS(919), 1,
      anon_sym_DOT,
    ACTIONS(923), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6503] = 3,
    ACTIONS(869), 1,
      anon_sym_COLON,
    STATE(79), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6514] = 3,
    ACTIONS(925), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6525] = 3,
    ACTIONS(911), 1,
      sym__newline,
    STATE(7), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6536] = 3,
    ACTIONS(915), 1,
      sym__newline,
    STATE(145), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6547] = 3,
    ACTIONS(841), 1,
      anon_sym_COLON,
    STATE(265), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6558] = 3,
    ACTIONS(841), 1,
      anon_sym_COLON,
    STATE(259), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6569] = 3,
    ACTIONS(915), 1,
      sym__newline,
    STATE(18), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6580] = 3,
    ACTIONS(925), 1,
      anon_sym_COLON,
    STATE(108), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6591] = 3,
    ACTIONS(919), 1,
      anon_sym_DOT,
    ACTIONS(927), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6602] = 3,
    ACTIONS(869), 1,
      anon_sym_COLON,
    STATE(83), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6613] = 3,
    ACTIONS(526), 1,
      anon_sym_DOT,
    ACTIONS(929), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6624] = 3,
    ACTIONS(841), 1,
      anon_sym_COLON,
    STATE(270), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6635] = 3,
    ACTIONS(123), 1,
      anon_sym_description,
    STATE(255), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6646] = 3,
    ACTIONS(869), 1,
      anon_sym_COLON,
    STATE(114), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6657] = 3,
    ACTIONS(841), 1,
      anon_sym_COLON,
    STATE(254), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6668] = 3,
    ACTIONS(915), 1,
      sym__newline,
    STATE(140), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6679] = 3,
    ACTIONS(915), 1,
      sym__newline,
    STATE(50), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6690] = 2,
    ACTIONS(931), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6698] = 2,
    ACTIONS(933), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6706] = 2,
    ACTIONS(935), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6714] = 2,
    ACTIONS(937), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6722] = 2,
    ACTIONS(939), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6730] = 2,
    ACTIONS(941), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6738] = 2,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6746] = 2,
    ACTIONS(945), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6754] = 2,
    ACTIONS(947), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6762] = 2,
    ACTIONS(949), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6770] = 2,
    ACTIONS(951), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6778] = 2,
    ACTIONS(953), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6786] = 2,
    ACTIONS(955), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6794] = 2,
    ACTIONS(957), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6802] = 2,
    ACTIONS(959), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6810] = 2,
    ACTIONS(961), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6818] = 2,
    ACTIONS(963), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6826] = 2,
    ACTIONS(965), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6834] = 2,
    ACTIONS(967), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6842] = 2,
    ACTIONS(969), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6850] = 2,
    ACTIONS(971), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6858] = 2,
    ACTIONS(973), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6866] = 2,
    ACTIONS(975), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6874] = 2,
    ACTIONS(977), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6882] = 2,
    ACTIONS(979), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6890] = 2,
    ACTIONS(981), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6898] = 2,
    ACTIONS(983), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6906] = 2,
    ACTIONS(985), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6914] = 2,
    ACTIONS(987), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6922] = 2,
    ACTIONS(989), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6930] = 2,
    ACTIONS(991), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6938] = 2,
    ACTIONS(993), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6946] = 2,
    ACTIONS(995), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6954] = 2,
    ACTIONS(997), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6962] = 2,
    ACTIONS(999), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6970] = 2,
    ACTIONS(1001), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6978] = 2,
    ACTIONS(1003), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6986] = 2,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6994] = 2,
    ACTIONS(1007), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7002] = 2,
    ACTIONS(1009), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7010] = 2,
    ACTIONS(1011), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7018] = 2,
    ACTIONS(1013), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7026] = 2,
    ACTIONS(1015), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7034] = 2,
    ACTIONS(1017), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7042] = 2,
    ACTIONS(1019), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7050] = 2,
    ACTIONS(1021), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7058] = 2,
    ACTIONS(1023), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7066] = 2,
    ACTIONS(1025), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7074] = 2,
    ACTIONS(1027), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7082] = 2,
    ACTIONS(1029), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7090] = 2,
    ACTIONS(1031), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7098] = 2,
    ACTIONS(1033), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7106] = 2,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7114] = 2,
    ACTIONS(1037), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7122] = 2,
    ACTIONS(1039), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7130] = 2,
    ACTIONS(1041), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7138] = 2,
    ACTIONS(1043), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7146] = 2,
    ACTIONS(1045), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7154] = 2,
    ACTIONS(1047), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7162] = 2,
    ACTIONS(1049), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7170] = 2,
    ACTIONS(1051), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7178] = 2,
    ACTIONS(1053), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7186] = 2,
    ACTIONS(1055), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7194] = 2,
    ACTIONS(1057), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7202] = 2,
    ACTIONS(1059), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7210] = 2,
    ACTIONS(1061), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7218] = 2,
    ACTIONS(1063), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7226] = 2,
    ACTIONS(1065), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7234] = 2,
    ACTIONS(1067), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7242] = 2,
    ACTIONS(1069), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7250] = 2,
    ACTIONS(1071), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7258] = 2,
    ACTIONS(1073), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [7266] = 2,
    ACTIONS(1075), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 199,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 305,
  [SMALL_STATE(9)] = 358,
  [SMALL_STATE(10)] = 411,
  [SMALL_STATE(11)] = 464,
  [SMALL_STATE(12)] = 517,
  [SMALL_STATE(13)] = 570,
  [SMALL_STATE(14)] = 623,
  [SMALL_STATE(15)] = 676,
  [SMALL_STATE(16)] = 741,
  [SMALL_STATE(17)] = 806,
  [SMALL_STATE(18)] = 871,
  [SMALL_STATE(19)] = 936,
  [SMALL_STATE(20)] = 998,
  [SMALL_STATE(21)] = 1026,
  [SMALL_STATE(22)] = 1054,
  [SMALL_STATE(23)] = 1082,
  [SMALL_STATE(24)] = 1110,
  [SMALL_STATE(25)] = 1138,
  [SMALL_STATE(26)] = 1166,
  [SMALL_STATE(27)] = 1193,
  [SMALL_STATE(28)] = 1220,
  [SMALL_STATE(29)] = 1247,
  [SMALL_STATE(30)] = 1271,
  [SMALL_STATE(31)] = 1293,
  [SMALL_STATE(32)] = 1315,
  [SMALL_STATE(33)] = 1337,
  [SMALL_STATE(34)] = 1359,
  [SMALL_STATE(35)] = 1391,
  [SMALL_STATE(36)] = 1413,
  [SMALL_STATE(37)] = 1435,
  [SMALL_STATE(38)] = 1457,
  [SMALL_STATE(39)] = 1489,
  [SMALL_STATE(40)] = 1511,
  [SMALL_STATE(41)] = 1533,
  [SMALL_STATE(42)] = 1555,
  [SMALL_STATE(43)] = 1575,
  [SMALL_STATE(44)] = 1597,
  [SMALL_STATE(45)] = 1616,
  [SMALL_STATE(46)] = 1635,
  [SMALL_STATE(47)] = 1668,
  [SMALL_STATE(48)] = 1689,
  [SMALL_STATE(49)] = 1710,
  [SMALL_STATE(50)] = 1731,
  [SMALL_STATE(51)] = 1764,
  [SMALL_STATE(52)] = 1783,
  [SMALL_STATE(53)] = 1802,
  [SMALL_STATE(54)] = 1821,
  [SMALL_STATE(55)] = 1840,
  [SMALL_STATE(56)] = 1859,
  [SMALL_STATE(57)] = 1878,
  [SMALL_STATE(58)] = 1897,
  [SMALL_STATE(59)] = 1916,
  [SMALL_STATE(60)] = 1935,
  [SMALL_STATE(61)] = 1954,
  [SMALL_STATE(62)] = 1973,
  [SMALL_STATE(63)] = 1992,
  [SMALL_STATE(64)] = 2013,
  [SMALL_STATE(65)] = 2032,
  [SMALL_STATE(66)] = 2051,
  [SMALL_STATE(67)] = 2070,
  [SMALL_STATE(68)] = 2089,
  [SMALL_STATE(69)] = 2119,
  [SMALL_STATE(70)] = 2139,
  [SMALL_STATE(71)] = 2157,
  [SMALL_STATE(72)] = 2177,
  [SMALL_STATE(73)] = 2197,
  [SMALL_STATE(74)] = 2217,
  [SMALL_STATE(75)] = 2237,
  [SMALL_STATE(76)] = 2257,
  [SMALL_STATE(77)] = 2277,
  [SMALL_STATE(78)] = 2297,
  [SMALL_STATE(79)] = 2315,
  [SMALL_STATE(80)] = 2333,
  [SMALL_STATE(81)] = 2353,
  [SMALL_STATE(82)] = 2383,
  [SMALL_STATE(83)] = 2401,
  [SMALL_STATE(84)] = 2419,
  [SMALL_STATE(85)] = 2437,
  [SMALL_STATE(86)] = 2455,
  [SMALL_STATE(87)] = 2475,
  [SMALL_STATE(88)] = 2495,
  [SMALL_STATE(89)] = 2515,
  [SMALL_STATE(90)] = 2535,
  [SMALL_STATE(91)] = 2555,
  [SMALL_STATE(92)] = 2575,
  [SMALL_STATE(93)] = 2595,
  [SMALL_STATE(94)] = 2615,
  [SMALL_STATE(95)] = 2635,
  [SMALL_STATE(96)] = 2653,
  [SMALL_STATE(97)] = 2673,
  [SMALL_STATE(98)] = 2693,
  [SMALL_STATE(99)] = 2713,
  [SMALL_STATE(100)] = 2733,
  [SMALL_STATE(101)] = 2751,
  [SMALL_STATE(102)] = 2771,
  [SMALL_STATE(103)] = 2791,
  [SMALL_STATE(104)] = 2809,
  [SMALL_STATE(105)] = 2829,
  [SMALL_STATE(106)] = 2849,
  [SMALL_STATE(107)] = 2869,
  [SMALL_STATE(108)] = 2889,
  [SMALL_STATE(109)] = 2907,
  [SMALL_STATE(110)] = 2927,
  [SMALL_STATE(111)] = 2945,
  [SMALL_STATE(112)] = 2965,
  [SMALL_STATE(113)] = 2983,
  [SMALL_STATE(114)] = 3001,
  [SMALL_STATE(115)] = 3019,
  [SMALL_STATE(116)] = 3037,
  [SMALL_STATE(117)] = 3057,
  [SMALL_STATE(118)] = 3075,
  [SMALL_STATE(119)] = 3102,
  [SMALL_STATE(120)] = 3129,
  [SMALL_STATE(121)] = 3156,
  [SMALL_STATE(122)] = 3183,
  [SMALL_STATE(123)] = 3210,
  [SMALL_STATE(124)] = 3237,
  [SMALL_STATE(125)] = 3264,
  [SMALL_STATE(126)] = 3290,
  [SMALL_STATE(127)] = 3316,
  [SMALL_STATE(128)] = 3340,
  [SMALL_STATE(129)] = 3364,
  [SMALL_STATE(130)] = 3390,
  [SMALL_STATE(131)] = 3414,
  [SMALL_STATE(132)] = 3438,
  [SMALL_STATE(133)] = 3464,
  [SMALL_STATE(134)] = 3488,
  [SMALL_STATE(135)] = 3514,
  [SMALL_STATE(136)] = 3540,
  [SMALL_STATE(137)] = 3566,
  [SMALL_STATE(138)] = 3592,
  [SMALL_STATE(139)] = 3616,
  [SMALL_STATE(140)] = 3642,
  [SMALL_STATE(141)] = 3667,
  [SMALL_STATE(142)] = 3688,
  [SMALL_STATE(143)] = 3711,
  [SMALL_STATE(144)] = 3734,
  [SMALL_STATE(145)] = 3759,
  [SMALL_STATE(146)] = 3784,
  [SMALL_STATE(147)] = 3805,
  [SMALL_STATE(148)] = 3825,
  [SMALL_STATE(149)] = 3845,
  [SMALL_STATE(150)] = 3865,
  [SMALL_STATE(151)] = 3885,
  [SMALL_STATE(152)] = 3905,
  [SMALL_STATE(153)] = 3925,
  [SMALL_STATE(154)] = 3945,
  [SMALL_STATE(155)] = 3965,
  [SMALL_STATE(156)] = 3985,
  [SMALL_STATE(157)] = 4005,
  [SMALL_STATE(158)] = 4025,
  [SMALL_STATE(159)] = 4045,
  [SMALL_STATE(160)] = 4065,
  [SMALL_STATE(161)] = 4085,
  [SMALL_STATE(162)] = 4105,
  [SMALL_STATE(163)] = 4125,
  [SMALL_STATE(164)] = 4145,
  [SMALL_STATE(165)] = 4165,
  [SMALL_STATE(166)] = 4185,
  [SMALL_STATE(167)] = 4205,
  [SMALL_STATE(168)] = 4225,
  [SMALL_STATE(169)] = 4242,
  [SMALL_STATE(170)] = 4261,
  [SMALL_STATE(171)] = 4282,
  [SMALL_STATE(172)] = 4295,
  [SMALL_STATE(173)] = 4314,
  [SMALL_STATE(174)] = 4333,
  [SMALL_STATE(175)] = 4352,
  [SMALL_STATE(176)] = 4371,
  [SMALL_STATE(177)] = 4390,
  [SMALL_STATE(178)] = 4409,
  [SMALL_STATE(179)] = 4428,
  [SMALL_STATE(180)] = 4449,
  [SMALL_STATE(181)] = 4468,
  [SMALL_STATE(182)] = 4487,
  [SMALL_STATE(183)] = 4506,
  [SMALL_STATE(184)] = 4527,
  [SMALL_STATE(185)] = 4546,
  [SMALL_STATE(186)] = 4567,
  [SMALL_STATE(187)] = 4588,
  [SMALL_STATE(188)] = 4609,
  [SMALL_STATE(189)] = 4630,
  [SMALL_STATE(190)] = 4647,
  [SMALL_STATE(191)] = 4668,
  [SMALL_STATE(192)] = 4680,
  [SMALL_STATE(193)] = 4696,
  [SMALL_STATE(194)] = 4712,
  [SMALL_STATE(195)] = 4724,
  [SMALL_STATE(196)] = 4740,
  [SMALL_STATE(197)] = 4752,
  [SMALL_STATE(198)] = 4768,
  [SMALL_STATE(199)] = 4786,
  [SMALL_STATE(200)] = 4798,
  [SMALL_STATE(201)] = 4810,
  [SMALL_STATE(202)] = 4822,
  [SMALL_STATE(203)] = 4842,
  [SMALL_STATE(204)] = 4858,
  [SMALL_STATE(205)] = 4870,
  [SMALL_STATE(206)] = 4882,
  [SMALL_STATE(207)] = 4894,
  [SMALL_STATE(208)] = 4906,
  [SMALL_STATE(209)] = 4918,
  [SMALL_STATE(210)] = 4930,
  [SMALL_STATE(211)] = 4942,
  [SMALL_STATE(212)] = 4962,
  [SMALL_STATE(213)] = 4974,
  [SMALL_STATE(214)] = 4986,
  [SMALL_STATE(215)] = 4998,
  [SMALL_STATE(216)] = 5010,
  [SMALL_STATE(217)] = 5022,
  [SMALL_STATE(218)] = 5034,
  [SMALL_STATE(219)] = 5046,
  [SMALL_STATE(220)] = 5058,
  [SMALL_STATE(221)] = 5070,
  [SMALL_STATE(222)] = 5086,
  [SMALL_STATE(223)] = 5098,
  [SMALL_STATE(224)] = 5110,
  [SMALL_STATE(225)] = 5122,
  [SMALL_STATE(226)] = 5134,
  [SMALL_STATE(227)] = 5146,
  [SMALL_STATE(228)] = 5158,
  [SMALL_STATE(229)] = 5170,
  [SMALL_STATE(230)] = 5183,
  [SMALL_STATE(231)] = 5198,
  [SMALL_STATE(232)] = 5209,
  [SMALL_STATE(233)] = 5220,
  [SMALL_STATE(234)] = 5233,
  [SMALL_STATE(235)] = 5248,
  [SMALL_STATE(236)] = 5259,
  [SMALL_STATE(237)] = 5270,
  [SMALL_STATE(238)] = 5285,
  [SMALL_STATE(239)] = 5298,
  [SMALL_STATE(240)] = 5313,
  [SMALL_STATE(241)] = 5326,
  [SMALL_STATE(242)] = 5337,
  [SMALL_STATE(243)] = 5348,
  [SMALL_STATE(244)] = 5363,
  [SMALL_STATE(245)] = 5380,
  [SMALL_STATE(246)] = 5395,
  [SMALL_STATE(247)] = 5410,
  [SMALL_STATE(248)] = 5425,
  [SMALL_STATE(249)] = 5440,
  [SMALL_STATE(250)] = 5455,
  [SMALL_STATE(251)] = 5466,
  [SMALL_STATE(252)] = 5481,
  [SMALL_STATE(253)] = 5493,
  [SMALL_STATE(254)] = 5505,
  [SMALL_STATE(255)] = 5517,
  [SMALL_STATE(256)] = 5529,
  [SMALL_STATE(257)] = 5543,
  [SMALL_STATE(258)] = 5557,
  [SMALL_STATE(259)] = 5569,
  [SMALL_STATE(260)] = 5581,
  [SMALL_STATE(261)] = 5593,
  [SMALL_STATE(262)] = 5605,
  [SMALL_STATE(263)] = 5617,
  [SMALL_STATE(264)] = 5629,
  [SMALL_STATE(265)] = 5643,
  [SMALL_STATE(266)] = 5655,
  [SMALL_STATE(267)] = 5667,
  [SMALL_STATE(268)] = 5681,
  [SMALL_STATE(269)] = 5695,
  [SMALL_STATE(270)] = 5705,
  [SMALL_STATE(271)] = 5717,
  [SMALL_STATE(272)] = 5729,
  [SMALL_STATE(273)] = 5741,
  [SMALL_STATE(274)] = 5751,
  [SMALL_STATE(275)] = 5765,
  [SMALL_STATE(276)] = 5777,
  [SMALL_STATE(277)] = 5791,
  [SMALL_STATE(278)] = 5803,
  [SMALL_STATE(279)] = 5815,
  [SMALL_STATE(280)] = 5825,
  [SMALL_STATE(281)] = 5835,
  [SMALL_STATE(282)] = 5847,
  [SMALL_STATE(283)] = 5861,
  [SMALL_STATE(284)] = 5875,
  [SMALL_STATE(285)] = 5885,
  [SMALL_STATE(286)] = 5899,
  [SMALL_STATE(287)] = 5909,
  [SMALL_STATE(288)] = 5923,
  [SMALL_STATE(289)] = 5933,
  [SMALL_STATE(290)] = 5945,
  [SMALL_STATE(291)] = 5959,
  [SMALL_STATE(292)] = 5973,
  [SMALL_STATE(293)] = 5985,
  [SMALL_STATE(294)] = 5997,
  [SMALL_STATE(295)] = 6011,
  [SMALL_STATE(296)] = 6025,
  [SMALL_STATE(297)] = 6039,
  [SMALL_STATE(298)] = 6053,
  [SMALL_STATE(299)] = 6067,
  [SMALL_STATE(300)] = 6077,
  [SMALL_STATE(301)] = 6087,
  [SMALL_STATE(302)] = 6099,
  [SMALL_STATE(303)] = 6109,
  [SMALL_STATE(304)] = 6119,
  [SMALL_STATE(305)] = 6130,
  [SMALL_STATE(306)] = 6141,
  [SMALL_STATE(307)] = 6152,
  [SMALL_STATE(308)] = 6163,
  [SMALL_STATE(309)] = 6174,
  [SMALL_STATE(310)] = 6185,
  [SMALL_STATE(311)] = 6196,
  [SMALL_STATE(312)] = 6207,
  [SMALL_STATE(313)] = 6218,
  [SMALL_STATE(314)] = 6229,
  [SMALL_STATE(315)] = 6238,
  [SMALL_STATE(316)] = 6249,
  [SMALL_STATE(317)] = 6260,
  [SMALL_STATE(318)] = 6271,
  [SMALL_STATE(319)] = 6280,
  [SMALL_STATE(320)] = 6291,
  [SMALL_STATE(321)] = 6302,
  [SMALL_STATE(322)] = 6313,
  [SMALL_STATE(323)] = 6324,
  [SMALL_STATE(324)] = 6333,
  [SMALL_STATE(325)] = 6342,
  [SMALL_STATE(326)] = 6351,
  [SMALL_STATE(327)] = 6362,
  [SMALL_STATE(328)] = 6373,
  [SMALL_STATE(329)] = 6384,
  [SMALL_STATE(330)] = 6395,
  [SMALL_STATE(331)] = 6406,
  [SMALL_STATE(332)] = 6417,
  [SMALL_STATE(333)] = 6428,
  [SMALL_STATE(334)] = 6439,
  [SMALL_STATE(335)] = 6448,
  [SMALL_STATE(336)] = 6459,
  [SMALL_STATE(337)] = 6470,
  [SMALL_STATE(338)] = 6481,
  [SMALL_STATE(339)] = 6492,
  [SMALL_STATE(340)] = 6503,
  [SMALL_STATE(341)] = 6514,
  [SMALL_STATE(342)] = 6525,
  [SMALL_STATE(343)] = 6536,
  [SMALL_STATE(344)] = 6547,
  [SMALL_STATE(345)] = 6558,
  [SMALL_STATE(346)] = 6569,
  [SMALL_STATE(347)] = 6580,
  [SMALL_STATE(348)] = 6591,
  [SMALL_STATE(349)] = 6602,
  [SMALL_STATE(350)] = 6613,
  [SMALL_STATE(351)] = 6624,
  [SMALL_STATE(352)] = 6635,
  [SMALL_STATE(353)] = 6646,
  [SMALL_STATE(354)] = 6657,
  [SMALL_STATE(355)] = 6668,
  [SMALL_STATE(356)] = 6679,
  [SMALL_STATE(357)] = 6690,
  [SMALL_STATE(358)] = 6698,
  [SMALL_STATE(359)] = 6706,
  [SMALL_STATE(360)] = 6714,
  [SMALL_STATE(361)] = 6722,
  [SMALL_STATE(362)] = 6730,
  [SMALL_STATE(363)] = 6738,
  [SMALL_STATE(364)] = 6746,
  [SMALL_STATE(365)] = 6754,
  [SMALL_STATE(366)] = 6762,
  [SMALL_STATE(367)] = 6770,
  [SMALL_STATE(368)] = 6778,
  [SMALL_STATE(369)] = 6786,
  [SMALL_STATE(370)] = 6794,
  [SMALL_STATE(371)] = 6802,
  [SMALL_STATE(372)] = 6810,
  [SMALL_STATE(373)] = 6818,
  [SMALL_STATE(374)] = 6826,
  [SMALL_STATE(375)] = 6834,
  [SMALL_STATE(376)] = 6842,
  [SMALL_STATE(377)] = 6850,
  [SMALL_STATE(378)] = 6858,
  [SMALL_STATE(379)] = 6866,
  [SMALL_STATE(380)] = 6874,
  [SMALL_STATE(381)] = 6882,
  [SMALL_STATE(382)] = 6890,
  [SMALL_STATE(383)] = 6898,
  [SMALL_STATE(384)] = 6906,
  [SMALL_STATE(385)] = 6914,
  [SMALL_STATE(386)] = 6922,
  [SMALL_STATE(387)] = 6930,
  [SMALL_STATE(388)] = 6938,
  [SMALL_STATE(389)] = 6946,
  [SMALL_STATE(390)] = 6954,
  [SMALL_STATE(391)] = 6962,
  [SMALL_STATE(392)] = 6970,
  [SMALL_STATE(393)] = 6978,
  [SMALL_STATE(394)] = 6986,
  [SMALL_STATE(395)] = 6994,
  [SMALL_STATE(396)] = 7002,
  [SMALL_STATE(397)] = 7010,
  [SMALL_STATE(398)] = 7018,
  [SMALL_STATE(399)] = 7026,
  [SMALL_STATE(400)] = 7034,
  [SMALL_STATE(401)] = 7042,
  [SMALL_STATE(402)] = 7050,
  [SMALL_STATE(403)] = 7058,
  [SMALL_STATE(404)] = 7066,
  [SMALL_STATE(405)] = 7074,
  [SMALL_STATE(406)] = 7082,
  [SMALL_STATE(407)] = 7090,
  [SMALL_STATE(408)] = 7098,
  [SMALL_STATE(409)] = 7106,
  [SMALL_STATE(410)] = 7114,
  [SMALL_STATE(411)] = 7122,
  [SMALL_STATE(412)] = 7130,
  [SMALL_STATE(413)] = 7138,
  [SMALL_STATE(414)] = 7146,
  [SMALL_STATE(415)] = 7154,
  [SMALL_STATE(416)] = 7162,
  [SMALL_STATE(417)] = 7170,
  [SMALL_STATE(418)] = 7178,
  [SMALL_STATE(419)] = 7186,
  [SMALL_STATE(420)] = 7194,
  [SMALL_STATE(421)] = 7202,
  [SMALL_STATE(422)] = 7210,
  [SMALL_STATE(423)] = 7218,
  [SMALL_STATE(424)] = 7226,
  [SMALL_STATE(425)] = 7234,
  [SMALL_STATE(426)] = 7242,
  [SMALL_STATE(427)] = 7250,
  [SMALL_STATE(428)] = 7258,
  [SMALL_STATE(429)] = 7266,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 1),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(278),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(424),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(397),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(297),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(425),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(428),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(400),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(395),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(282),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(392),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(391),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(319),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(291),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(285),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(287),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(290),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(294),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(295),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(296),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(403),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32), SHIFT_REPEAT(419),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 32),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 10),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 10),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_expression, 3, .production_id = 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_expression, 3, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_instance, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 37),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 37),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 25),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 25),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6, .production_id = 9),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 13),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 7, .production_id = 12),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 11),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_inter, 7),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 3, .production_id = 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_result, 3, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 4, .production_id = 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 11, .production_id = 43),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 9, .production_id = 31),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6, .production_id = 23),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 8, .production_id = 22),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 8, .production_id = 21),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 30),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 30),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 29),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 29),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 28),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 28),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 27),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 27),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 26),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 26),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 2, .production_id = 24),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 2, .production_id = 24),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 33),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 33),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 34),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 34),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 20),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 20),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 11, .production_id = 51),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 11, .production_id = 51),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 10, .production_id = 50),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 10, .production_id = 50),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 19),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 19),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 18),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 18),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 17),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 17),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 9, .production_id = 49),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 9, .production_id = 49),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 4, .production_id = 36),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 4, .production_id = 36),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 8, .production_id = 48),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 8, .production_id = 48),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 38),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 38),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 39),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 39),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 7, .production_id = 47),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 7, .production_id = 47),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 45),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 7, .production_id = 45),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 6, .production_id = 46),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 6, .production_id = 46),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 40),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 40),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 41),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 41),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 42),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 42),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 34),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 34),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 34),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 5, .production_id = 34),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 45),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 45),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(167),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(163),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(168),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(358),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(393),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(389),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(394),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(374),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(375),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(171),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(153),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(192),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(189),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 45),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(193),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 45),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(411),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 34),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(268),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 45),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 34),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 34),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(198),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 45),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 45),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 45),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 45),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 34),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation2, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 34),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 33),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 34),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 34),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 33),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 34),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 33),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 45),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 33),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(394),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 34),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 45),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 34),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 33),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 34),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 33),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 34),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2), SHIFT_REPEAT(388),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 44),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 45),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 34),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 45),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 7),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 34),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 35),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 33),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 34),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_i, 2, .production_id = 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 4),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [989] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
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
