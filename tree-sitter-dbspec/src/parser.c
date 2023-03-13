#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 408
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 50

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
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_LT = 48,
  anon_sym_GT = 49,
  anon_sym_LT_EQ = 50,
  anon_sym_GT_EQ = 51,
  anon_sym_stripped = 52,
  anon_sym_size = 53,
  anon_sym_as_integer = 54,
  anon_sym_BSLASH = 55,
  aux_sym_escape_sequence_token1 = 56,
  aux_sym_escape_sequence_token2 = 57,
  aux_sym_escape_sequence_token3 = 58,
  aux_sym_escape_sequence_token4 = 59,
  aux_sym_escape_sequence_token5 = 60,
  aux_sym_escape_sequence_token6 = 61,
  sym_integer = 62,
  sym_short_description = 63,
  aux_sym__short_descr_token1 = 64,
  sym__newline = 65,
  sym__indent = 66,
  sym__dedent = 67,
  sym__inter_start = 68,
  sym__inter_start2 = 69,
  sym__inter_end = 70,
  sym__raw = 71,
  sym__string_start = 72,
  sym__string_content = 73,
  sym__string_end = 74,
  sym__comment = 75,
  sym__end_of_file = 76,
  sym__skip = 77,
  sym__set_inter = 78,
  sym_source_file = 79,
  sym_parameters = 80,
  sym_parameter = 81,
  sym__statement = 82,
  sym_nop = 83,
  sym_log = 84,
  sym_assert = 85,
  sym_set_inter = 86,
  sym_set = 87,
  sym__expression = 88,
  sym_execute_using = 89,
  sym_script_result = 90,
  sym__using_i = 91,
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
  sym_for_body = 115,
  sym__boolean_expression = 116,
  sym_comparison = 117,
  sym_comparison_operator = 118,
  sym__basic_expression = 119,
  sym_variable_instance = 120,
  sym_dot_expression = 121,
  sym_dot_operator = 122,
  sym_string = 123,
  sym_string_content = 124,
  sym_escape_sequence = 125,
  sym__short_descr = 126,
  sym__nl = 127,
  sym__ni = 128,
  sym__ded = 129,
  sym_interpolation = 130,
  sym_interpolation2 = 131,
  sym_key_value_pairs = 132,
  sym_key_value_pair = 133,
  sym_raw = 134,
  sym_raw_content = 135,
  aux_sym_source_file_repeat1 = 136,
  aux_sym_parameters_repeat1 = 137,
  aux_sym_siard_metadata_repeat1 = 138,
  aux_sym_siard_schema_repeat1 = 139,
  aux_sym_siard_table_repeat1 = 140,
  aux_sym_siard_column_repeat1 = 141,
  aux_sym_siard_view_repeat1 = 142,
  aux_sym_for_variables_repeat1 = 143,
  aux_sym_string_repeat1 = 144,
  aux_sym_string_content_repeat1 = 145,
  aux_sym_key_value_pairs_repeat1 = 146,
  aux_sym_raw_repeat1 = 147,
  aux_sym_raw_content_repeat1 = 148,
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
  [sym_for_body] = "for_body",
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
  [sym_for_body] = sym_for_body,
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 1},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 1},
  [16] = {.index = 27, .length = 1},
  [17] = {.index = 28, .length = 1},
  [18] = {.index = 29, .length = 1},
  [19] = {.index = 30, .length = 1},
  [20] = {.index = 31, .length = 2},
  [21] = {.index = 33, .length = 3},
  [22] = {.index = 36, .length = 2},
  [23] = {.index = 38, .length = 1},
  [24] = {.index = 39, .length = 1},
  [25] = {.index = 40, .length = 1},
  [26] = {.index = 41, .length = 1},
  [27] = {.index = 42, .length = 1},
  [28] = {.index = 43, .length = 1},
  [29] = {.index = 44, .length = 1},
  [30] = {.index = 45, .length = 9},
  [31] = {.index = 54, .length = 14},
  [32] = {.index = 68, .length = 2},
  [33] = {.index = 70, .length = 1},
  [34] = {.index = 71, .length = 2},
  [35] = {.index = 73, .length = 1},
  [36] = {.index = 74, .length = 1},
  [37] = {.index = 75, .length = 1},
  [38] = {.index = 76, .length = 1},
  [39] = {.index = 77, .length = 1},
  [40] = {.index = 78, .length = 1},
  [41] = {.index = 79, .length = 1},
  [42] = {.index = 80, .length = 2},
  [43] = {.index = 82, .length = 2},
  [44] = {.index = 84, .length = 1},
  [45] = {.index = 85, .length = 2},
  [46] = {.index = 87, .length = 2},
  [47] = {.index = 89, .length = 3},
  [48] = {.index = 92, .length = 2},
  [49] = {.index = 94, .length = 3},
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
    {field_description, 0},
    {field_description, 1},
    {field_description, 2},
  [18] =
    {field_url, 2},
  [19] =
    {field_connection, 1},
    {field_file, 5},
    {field_name, 3},
  [22] =
    {field_properties, 4},
    {field_url, 2},
  [24] =
    {field_dbname, 0, .inherited = true},
  [25] =
    {field_description, 0, .inherited = true},
  [26] =
    {field_archiver, 0, .inherited = true},
  [27] =
    {field_archiverContact, 0, .inherited = true},
  [28] =
    {field_dataOwner, 0, .inherited = true},
  [29] =
    {field_dataOriginTimespan, 0, .inherited = true},
  [30] =
    {field_lobFolder, 0, .inherited = true},
  [31] =
    {field_connection, 2},
    {field_name, 4},
  [33] =
    {field_body, 6},
    {field_result_set, 3},
    {field_variables, 1},
  [36] =
    {field_properties, 5},
    {field_url, 2},
  [38] =
    {field_dbname, 1},
  [39] =
    {field_description, 1},
  [40] =
    {field_archiver, 1},
  [41] =
    {field_archiverContact, 1},
  [42] =
    {field_dataOwner, 1},
  [43] =
    {field_dataOriginTimespan, 1},
  [44] =
    {field_lobFolder, 1},
  [45] =
    {field_archiver, 7, .inherited = true},
    {field_archiverContact, 7, .inherited = true},
    {field_connection, 2},
    {field_dataOriginTimespan, 7, .inherited = true},
    {field_dataOwner, 7, .inherited = true},
    {field_dbname, 7, .inherited = true},
    {field_description, 7, .inherited = true},
    {field_lobFolder, 7, .inherited = true},
    {field_name, 4},
  [54] =
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
  [68] =
    {field_description, 2, .inherited = true},
    {field_name, 1},
  [70] =
    {field_name, 1},
  [71] =
    {field_key, 0},
    {field_value, 1},
  [73] =
    {field_dbname, 2},
  [74] =
    {field_description, 2},
  [75] =
    {field_archiver, 2},
  [76] =
    {field_archiverContact, 2},
  [77] =
    {field_dataOwner, 2},
  [78] =
    {field_dataOriginTimespan, 2},
  [79] =
    {field_lobFolder, 2},
  [80] =
    {field_key, 0},
    {field_value, 2},
  [82] =
    {field_description, 4, .inherited = true},
    {field_name, 1},
  [84] =
    {field_body, 4},
  [85] =
    {field_body, 5},
    {field_parameters, 3},
  [87] =
    {field_body, 6},
    {field_title, 4},
  [89] =
    {field_body, 7},
    {field_parameters, 5},
    {field_title, 4},
  [92] =
    {field_body, 8},
    {field_title, 5},
  [94] =
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
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 6,
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
  [24] = 24,
  [25] = 20,
  [26] = 26,
  [27] = 26,
  [28] = 2,
  [29] = 21,
  [30] = 19,
  [31] = 31,
  [32] = 17,
  [33] = 18,
  [34] = 24,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 39,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 41,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 37,
  [69] = 69,
  [70] = 70,
  [71] = 31,
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
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 35,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 40,
  [95] = 95,
  [96] = 69,
  [97] = 61,
  [98] = 98,
  [99] = 66,
  [100] = 50,
  [101] = 101,
  [102] = 73,
  [103] = 76,
  [104] = 104,
  [105] = 58,
  [106] = 63,
  [107] = 62,
  [108] = 108,
  [109] = 54,
  [110] = 65,
  [111] = 75,
  [112] = 52,
  [113] = 113,
  [114] = 114,
  [115] = 59,
  [116] = 57,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 117,
  [121] = 118,
  [122] = 119,
  [123] = 123,
  [124] = 119,
  [125] = 125,
  [126] = 118,
  [127] = 118,
  [128] = 119,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 132,
  [135] = 135,
  [136] = 135,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 142,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 138,
  [153] = 153,
  [154] = 150,
  [155] = 140,
  [156] = 139,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 161,
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
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 17,
  [222] = 24,
  [223] = 223,
  [224] = 21,
  [225] = 19,
  [226] = 18,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 207,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 232,
  [236] = 232,
  [237] = 232,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 219,
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
  [252] = 251,
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
  [263] = 263,
  [264] = 256,
  [265] = 265,
  [266] = 247,
  [267] = 258,
  [268] = 268,
  [269] = 255,
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
  [285] = 249,
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
  [300] = 299,
  [301] = 301,
  [302] = 302,
  [303] = 18,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 19,
  [308] = 308,
  [309] = 304,
  [310] = 308,
  [311] = 311,
  [312] = 21,
  [313] = 24,
  [314] = 17,
  [315] = 315,
  [316] = 290,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 318,
  [321] = 321,
  [322] = 322,
  [323] = 319,
  [324] = 324,
  [325] = 311,
  [326] = 326,
  [327] = 326,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 322,
  [334] = 334,
  [335] = 335,
  [336] = 315,
  [337] = 337,
  [338] = 302,
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
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 355,
  [357] = 357,
  [358] = 348,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 363,
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
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 377,
  [381] = 381,
  [382] = 354,
  [383] = 383,
  [384] = 367,
  [385] = 385,
  [386] = 369,
  [387] = 371,
  [388] = 372,
  [389] = 364,
  [390] = 362,
  [391] = 391,
  [392] = 392,
  [393] = 344,
  [394] = 342,
  [395] = 341,
  [396] = 373,
  [397] = 391,
  [398] = 359,
  [399] = 352,
  [400] = 374,
  [401] = 357,
  [402] = 378,
  [403] = 340,
  [404] = 350,
  [405] = 405,
  [406] = 370,
  [407] = 349,
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
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == 'U') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(57);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 'U') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(11);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(68);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(68);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(68);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token6);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(68);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_short_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__short_descr_token1);
      if (lookahead == ' ') ADVANCE(70);
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
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 55:
      if (lookahead == 'z') ADVANCE(91);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_Key);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_Log);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 81:
      if (lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(119);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 93:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_via);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_Body);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_View);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(142);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_Check);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 139:
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 'w') ADVANCE(164);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_Assert);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Column);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_Schema);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_dbname);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_Command);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_Execute);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 179:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_Metadata);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_archiver);
      if (lookahead == 'C') ADVANCE(197);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_stripped);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_dataOwner);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_lobFolder);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_Parameters);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_as_integer);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_connection);
      END_STATE();
    case 209:
      if (lookahead == 'T') ADVANCE(213);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_Interpolation);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_archiverContact);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_dataOriginTimespan);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22, .external_lex_state = 2},
  [2] = {.lex_state = 22, .external_lex_state = 3},
  [3] = {.lex_state = 22, .external_lex_state = 3},
  [4] = {.lex_state = 22, .external_lex_state = 3},
  [5] = {.lex_state = 22, .external_lex_state = 2},
  [6] = {.lex_state = 22, .external_lex_state = 3},
  [7] = {.lex_state = 22, .external_lex_state = 2},
  [8] = {.lex_state = 22, .external_lex_state = 3},
  [9] = {.lex_state = 22, .external_lex_state = 2},
  [10] = {.lex_state = 22, .external_lex_state = 2},
  [11] = {.lex_state = 22, .external_lex_state = 2},
  [12] = {.lex_state = 22, .external_lex_state = 2},
  [13] = {.lex_state = 22, .external_lex_state = 3},
  [14] = {.lex_state = 22, .external_lex_state = 3},
  [15] = {.lex_state = 22, .external_lex_state = 3},
  [16] = {.lex_state = 22, .external_lex_state = 3},
  [17] = {.lex_state = 22, .external_lex_state = 2},
  [18] = {.lex_state = 22, .external_lex_state = 2},
  [19] = {.lex_state = 22, .external_lex_state = 2},
  [20] = {.lex_state = 22, .external_lex_state = 3},
  [21] = {.lex_state = 22, .external_lex_state = 2},
  [22] = {.lex_state = 22, .external_lex_state = 3},
  [23] = {.lex_state = 22, .external_lex_state = 3},
  [24] = {.lex_state = 22, .external_lex_state = 2},
  [25] = {.lex_state = 22, .external_lex_state = 2},
  [26] = {.lex_state = 22, .external_lex_state = 4},
  [27] = {.lex_state = 22, .external_lex_state = 4},
  [28] = {.lex_state = 22, .external_lex_state = 2},
  [29] = {.lex_state = 22, .external_lex_state = 3},
  [30] = {.lex_state = 22, .external_lex_state = 3},
  [31] = {.lex_state = 22, .external_lex_state = 3},
  [32] = {.lex_state = 22, .external_lex_state = 3},
  [33] = {.lex_state = 22, .external_lex_state = 3},
  [34] = {.lex_state = 22, .external_lex_state = 3},
  [35] = {.lex_state = 22, .external_lex_state = 3},
  [36] = {.lex_state = 22, .external_lex_state = 3},
  [37] = {.lex_state = 22, .external_lex_state = 3},
  [38] = {.lex_state = 22, .external_lex_state = 3},
  [39] = {.lex_state = 22, .external_lex_state = 3},
  [40] = {.lex_state = 22, .external_lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 5},
  [42] = {.lex_state = 22, .external_lex_state = 2},
  [43] = {.lex_state = 22, .external_lex_state = 3},
  [44] = {.lex_state = 22, .external_lex_state = 3},
  [45] = {.lex_state = 22, .external_lex_state = 3},
  [46] = {.lex_state = 22, .external_lex_state = 3},
  [47] = {.lex_state = 22, .external_lex_state = 3},
  [48] = {.lex_state = 22, .external_lex_state = 3},
  [49] = {.lex_state = 22, .external_lex_state = 3},
  [50] = {.lex_state = 22, .external_lex_state = 3},
  [51] = {.lex_state = 22, .external_lex_state = 3},
  [52] = {.lex_state = 22, .external_lex_state = 3},
  [53] = {.lex_state = 22, .external_lex_state = 3},
  [54] = {.lex_state = 22, .external_lex_state = 3},
  [55] = {.lex_state = 22, .external_lex_state = 3},
  [56] = {.lex_state = 22, .external_lex_state = 3},
  [57] = {.lex_state = 22, .external_lex_state = 3},
  [58] = {.lex_state = 22, .external_lex_state = 3},
  [59] = {.lex_state = 22, .external_lex_state = 3},
  [60] = {.lex_state = 22, .external_lex_state = 3},
  [61] = {.lex_state = 22, .external_lex_state = 3},
  [62] = {.lex_state = 22, .external_lex_state = 3},
  [63] = {.lex_state = 22, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 5},
  [65] = {.lex_state = 22, .external_lex_state = 3},
  [66] = {.lex_state = 22, .external_lex_state = 3},
  [67] = {.lex_state = 22, .external_lex_state = 3},
  [68] = {.lex_state = 22, .external_lex_state = 2},
  [69] = {.lex_state = 22, .external_lex_state = 3},
  [70] = {.lex_state = 22, .external_lex_state = 3},
  [71] = {.lex_state = 22, .external_lex_state = 2},
  [72] = {.lex_state = 22, .external_lex_state = 3},
  [73] = {.lex_state = 22, .external_lex_state = 3},
  [74] = {.lex_state = 22, .external_lex_state = 3},
  [75] = {.lex_state = 22, .external_lex_state = 3},
  [76] = {.lex_state = 22, .external_lex_state = 3},
  [77] = {.lex_state = 22, .external_lex_state = 3},
  [78] = {.lex_state = 22, .external_lex_state = 3},
  [79] = {.lex_state = 22, .external_lex_state = 3},
  [80] = {.lex_state = 22, .external_lex_state = 2},
  [81] = {.lex_state = 22, .external_lex_state = 3},
  [82] = {.lex_state = 22, .external_lex_state = 3},
  [83] = {.lex_state = 22, .external_lex_state = 3},
  [84] = {.lex_state = 22, .external_lex_state = 3},
  [85] = {.lex_state = 22, .external_lex_state = 3},
  [86] = {.lex_state = 22, .external_lex_state = 3},
  [87] = {.lex_state = 22, .external_lex_state = 2},
  [88] = {.lex_state = 22, .external_lex_state = 3},
  [89] = {.lex_state = 22, .external_lex_state = 3},
  [90] = {.lex_state = 22, .external_lex_state = 3},
  [91] = {.lex_state = 22, .external_lex_state = 3},
  [92] = {.lex_state = 22, .external_lex_state = 3},
  [93] = {.lex_state = 22, .external_lex_state = 3},
  [94] = {.lex_state = 22, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 5},
  [96] = {.lex_state = 22, .external_lex_state = 2},
  [97] = {.lex_state = 22, .external_lex_state = 2},
  [98] = {.lex_state = 22, .external_lex_state = 3},
  [99] = {.lex_state = 22, .external_lex_state = 2},
  [100] = {.lex_state = 22, .external_lex_state = 2},
  [101] = {.lex_state = 22, .external_lex_state = 3},
  [102] = {.lex_state = 22, .external_lex_state = 2},
  [103] = {.lex_state = 22, .external_lex_state = 2},
  [104] = {.lex_state = 22, .external_lex_state = 3},
  [105] = {.lex_state = 22, .external_lex_state = 2},
  [106] = {.lex_state = 22, .external_lex_state = 2},
  [107] = {.lex_state = 22, .external_lex_state = 2},
  [108] = {.lex_state = 22, .external_lex_state = 3},
  [109] = {.lex_state = 22, .external_lex_state = 2},
  [110] = {.lex_state = 22, .external_lex_state = 2},
  [111] = {.lex_state = 22, .external_lex_state = 2},
  [112] = {.lex_state = 22, .external_lex_state = 2},
  [113] = {.lex_state = 22, .external_lex_state = 3},
  [114] = {.lex_state = 22, .external_lex_state = 3},
  [115] = {.lex_state = 22, .external_lex_state = 2},
  [116] = {.lex_state = 22, .external_lex_state = 2},
  [117] = {.lex_state = 22, .external_lex_state = 4},
  [118] = {.lex_state = 22, .external_lex_state = 6},
  [119] = {.lex_state = 22, .external_lex_state = 6},
  [120] = {.lex_state = 22, .external_lex_state = 4},
  [121] = {.lex_state = 22, .external_lex_state = 6},
  [122] = {.lex_state = 22, .external_lex_state = 6},
  [123] = {.lex_state = 22, .external_lex_state = 3},
  [124] = {.lex_state = 22, .external_lex_state = 6},
  [125] = {.lex_state = 22, .external_lex_state = 6},
  [126] = {.lex_state = 22, .external_lex_state = 6},
  [127] = {.lex_state = 22, .external_lex_state = 6},
  [128] = {.lex_state = 22, .external_lex_state = 6},
  [129] = {.lex_state = 22, .external_lex_state = 3},
  [130] = {.lex_state = 22, .external_lex_state = 3},
  [131] = {.lex_state = 22, .external_lex_state = 3},
  [132] = {.lex_state = 22, .external_lex_state = 2},
  [133] = {.lex_state = 22, .external_lex_state = 3},
  [134] = {.lex_state = 22, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 7},
  [136] = {.lex_state = 0, .external_lex_state = 7},
  [137] = {.lex_state = 22, .external_lex_state = 4},
  [138] = {.lex_state = 22, .external_lex_state = 4},
  [139] = {.lex_state = 22, .external_lex_state = 4},
  [140] = {.lex_state = 22, .external_lex_state = 4},
  [141] = {.lex_state = 22, .external_lex_state = 4},
  [142] = {.lex_state = 22, .external_lex_state = 4},
  [143] = {.lex_state = 22, .external_lex_state = 4},
  [144] = {.lex_state = 22, .external_lex_state = 4},
  [145] = {.lex_state = 22, .external_lex_state = 4},
  [146] = {.lex_state = 22, .external_lex_state = 4},
  [147] = {.lex_state = 22, .external_lex_state = 4},
  [148] = {.lex_state = 22, .external_lex_state = 4},
  [149] = {.lex_state = 22, .external_lex_state = 4},
  [150] = {.lex_state = 22, .external_lex_state = 4},
  [151] = {.lex_state = 22, .external_lex_state = 4},
  [152] = {.lex_state = 22, .external_lex_state = 4},
  [153] = {.lex_state = 22, .external_lex_state = 4},
  [154] = {.lex_state = 22, .external_lex_state = 4},
  [155] = {.lex_state = 22, .external_lex_state = 4},
  [156] = {.lex_state = 22, .external_lex_state = 4},
  [157] = {.lex_state = 22, .external_lex_state = 4},
  [158] = {.lex_state = 0, .external_lex_state = 8},
  [159] = {.lex_state = 0, .external_lex_state = 8},
  [160] = {.lex_state = 2, .external_lex_state = 2},
  [161] = {.lex_state = 22, .external_lex_state = 3},
  [162] = {.lex_state = 22, .external_lex_state = 3},
  [163] = {.lex_state = 22, .external_lex_state = 3},
  [164] = {.lex_state = 22, .external_lex_state = 3},
  [165] = {.lex_state = 22, .external_lex_state = 3},
  [166] = {.lex_state = 22, .external_lex_state = 3},
  [167] = {.lex_state = 22, .external_lex_state = 3},
  [168] = {.lex_state = 0, .external_lex_state = 8},
  [169] = {.lex_state = 22, .external_lex_state = 3},
  [170] = {.lex_state = 22, .external_lex_state = 3},
  [171] = {.lex_state = 22, .external_lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 8},
  [173] = {.lex_state = 0, .external_lex_state = 8},
  [174] = {.lex_state = 0, .external_lex_state = 8},
  [175] = {.lex_state = 0, .external_lex_state = 5},
  [176] = {.lex_state = 22, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 8},
  [178] = {.lex_state = 22, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 8},
  [180] = {.lex_state = 0, .external_lex_state = 5},
  [181] = {.lex_state = 22, .external_lex_state = 3},
  [182] = {.lex_state = 22, .external_lex_state = 3},
  [183] = {.lex_state = 22, .external_lex_state = 3},
  [184] = {.lex_state = 22, .external_lex_state = 3},
  [185] = {.lex_state = 22, .external_lex_state = 3},
  [186] = {.lex_state = 22, .external_lex_state = 3},
  [187] = {.lex_state = 22, .external_lex_state = 3},
  [188] = {.lex_state = 22, .external_lex_state = 3},
  [189] = {.lex_state = 22, .external_lex_state = 3},
  [190] = {.lex_state = 22, .external_lex_state = 3},
  [191] = {.lex_state = 22, .external_lex_state = 3},
  [192] = {.lex_state = 0, .external_lex_state = 5},
  [193] = {.lex_state = 22, .external_lex_state = 3},
  [194] = {.lex_state = 22, .external_lex_state = 3},
  [195] = {.lex_state = 22, .external_lex_state = 3},
  [196] = {.lex_state = 22, .external_lex_state = 3},
  [197] = {.lex_state = 22, .external_lex_state = 3},
  [198] = {.lex_state = 22, .external_lex_state = 3},
  [199] = {.lex_state = 22, .external_lex_state = 3},
  [200] = {.lex_state = 22, .external_lex_state = 3},
  [201] = {.lex_state = 22, .external_lex_state = 3},
  [202] = {.lex_state = 22, .external_lex_state = 3},
  [203] = {.lex_state = 22, .external_lex_state = 3},
  [204] = {.lex_state = 22, .external_lex_state = 6},
  [205] = {.lex_state = 22, .external_lex_state = 3},
  [206] = {.lex_state = 22, .external_lex_state = 3},
  [207] = {.lex_state = 0, .external_lex_state = 5},
  [208] = {.lex_state = 22, .external_lex_state = 3},
  [209] = {.lex_state = 22, .external_lex_state = 3},
  [210] = {.lex_state = 22, .external_lex_state = 8},
  [211] = {.lex_state = 22, .external_lex_state = 8},
  [212] = {.lex_state = 0, .external_lex_state = 8},
  [213] = {.lex_state = 22, .external_lex_state = 3},
  [214] = {.lex_state = 22, .external_lex_state = 3},
  [215] = {.lex_state = 22, .external_lex_state = 3},
  [216] = {.lex_state = 22, .external_lex_state = 6},
  [217] = {.lex_state = 22, .external_lex_state = 3},
  [218] = {.lex_state = 22, .external_lex_state = 3},
  [219] = {.lex_state = 0, .external_lex_state = 8},
  [220] = {.lex_state = 0, .external_lex_state = 8},
  [221] = {.lex_state = 22, .external_lex_state = 8},
  [222] = {.lex_state = 22, .external_lex_state = 8},
  [223] = {.lex_state = 0, .external_lex_state = 8},
  [224] = {.lex_state = 22, .external_lex_state = 8},
  [225] = {.lex_state = 22, .external_lex_state = 8},
  [226] = {.lex_state = 22, .external_lex_state = 8},
  [227] = {.lex_state = 0, .external_lex_state = 8},
  [228] = {.lex_state = 0, .external_lex_state = 8},
  [229] = {.lex_state = 0, .external_lex_state = 8},
  [230] = {.lex_state = 0, .external_lex_state = 8},
  [231] = {.lex_state = 22, .external_lex_state = 6},
  [232] = {.lex_state = 22, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 8},
  [234] = {.lex_state = 0, .external_lex_state = 8},
  [235] = {.lex_state = 22, .external_lex_state = 2},
  [236] = {.lex_state = 22, .external_lex_state = 2},
  [237] = {.lex_state = 22, .external_lex_state = 2},
  [238] = {.lex_state = 22, .external_lex_state = 6},
  [239] = {.lex_state = 22, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 8},
  [241] = {.lex_state = 0, .external_lex_state = 8},
  [242] = {.lex_state = 22, .external_lex_state = 2},
  [243] = {.lex_state = 22, .external_lex_state = 3},
  [244] = {.lex_state = 0, .external_lex_state = 3},
  [245] = {.lex_state = 22, .external_lex_state = 3},
  [246] = {.lex_state = 22, .external_lex_state = 3},
  [247] = {.lex_state = 0, .external_lex_state = 8},
  [248] = {.lex_state = 0, .external_lex_state = 3},
  [249] = {.lex_state = 0, .external_lex_state = 8},
  [250] = {.lex_state = 22, .external_lex_state = 3},
  [251] = {.lex_state = 22, .external_lex_state = 2},
  [252] = {.lex_state = 22, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 3},
  [254] = {.lex_state = 22, .external_lex_state = 2},
  [255] = {.lex_state = 22, .external_lex_state = 2},
  [256] = {.lex_state = 22, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 3},
  [259] = {.lex_state = 0, .external_lex_state = 3},
  [260] = {.lex_state = 22, .external_lex_state = 3},
  [261] = {.lex_state = 0, .external_lex_state = 3},
  [262] = {.lex_state = 22, .external_lex_state = 3},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 22, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 3},
  [266] = {.lex_state = 0, .external_lex_state = 8},
  [267] = {.lex_state = 0, .external_lex_state = 3},
  [268] = {.lex_state = 22, .external_lex_state = 3},
  [269] = {.lex_state = 22, .external_lex_state = 2},
  [270] = {.lex_state = 22, .external_lex_state = 4},
  [271] = {.lex_state = 2, .external_lex_state = 2},
  [272] = {.lex_state = 2, .external_lex_state = 2},
  [273] = {.lex_state = 2, .external_lex_state = 2},
  [274] = {.lex_state = 22, .external_lex_state = 3},
  [275] = {.lex_state = 22, .external_lex_state = 3},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 0, .external_lex_state = 8},
  [278] = {.lex_state = 22, .external_lex_state = 3},
  [279] = {.lex_state = 2, .external_lex_state = 2},
  [280] = {.lex_state = 2, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 3},
  [282] = {.lex_state = 0, .external_lex_state = 3},
  [283] = {.lex_state = 0, .external_lex_state = 3},
  [284] = {.lex_state = 22, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 8},
  [286] = {.lex_state = 2, .external_lex_state = 2},
  [287] = {.lex_state = 2, .external_lex_state = 2},
  [288] = {.lex_state = 2, .external_lex_state = 2},
  [289] = {.lex_state = 2, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 22, .external_lex_state = 2},
  [292] = {.lex_state = 0, .external_lex_state = 9},
  [293] = {.lex_state = 22, .external_lex_state = 2},
  [294] = {.lex_state = 22, .external_lex_state = 2},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 0, .external_lex_state = 9},
  [297] = {.lex_state = 0, .external_lex_state = 9},
  [298] = {.lex_state = 0, .external_lex_state = 9},
  [299] = {.lex_state = 0, .external_lex_state = 9},
  [300] = {.lex_state = 0, .external_lex_state = 9},
  [301] = {.lex_state = 0, .external_lex_state = 9},
  [302] = {.lex_state = 0, .external_lex_state = 9},
  [303] = {.lex_state = 0, .external_lex_state = 10},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0, .external_lex_state = 10},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 10},
  [308] = {.lex_state = 0, .external_lex_state = 2},
  [309] = {.lex_state = 0, .external_lex_state = 2},
  [310] = {.lex_state = 0, .external_lex_state = 2},
  [311] = {.lex_state = 0, .external_lex_state = 9},
  [312] = {.lex_state = 0, .external_lex_state = 10},
  [313] = {.lex_state = 0, .external_lex_state = 10},
  [314] = {.lex_state = 0, .external_lex_state = 10},
  [315] = {.lex_state = 0, .external_lex_state = 2},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 0, .external_lex_state = 9},
  [318] = {.lex_state = 0, .external_lex_state = 2},
  [319] = {.lex_state = 0, .external_lex_state = 10},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 0, .external_lex_state = 10},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 9},
  [326] = {.lex_state = 0, .external_lex_state = 2},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 0, .external_lex_state = 2},
  [329] = {.lex_state = 0, .external_lex_state = 9},
  [330] = {.lex_state = 0, .external_lex_state = 2},
  [331] = {.lex_state = 0, .external_lex_state = 9},
  [332] = {.lex_state = 0, .external_lex_state = 9},
  [333] = {.lex_state = 0, .external_lex_state = 2},
  [334] = {.lex_state = 0, .external_lex_state = 2},
  [335] = {.lex_state = 0, .external_lex_state = 9},
  [336] = {.lex_state = 0, .external_lex_state = 2},
  [337] = {.lex_state = 0, .external_lex_state = 2},
  [338] = {.lex_state = 0, .external_lex_state = 9},
  [339] = {.lex_state = 22, .external_lex_state = 2},
  [340] = {.lex_state = 22, .external_lex_state = 2},
  [341] = {.lex_state = 22, .external_lex_state = 2},
  [342] = {.lex_state = 0, .external_lex_state = 9},
  [343] = {.lex_state = 22, .external_lex_state = 2},
  [344] = {.lex_state = 22, .external_lex_state = 2},
  [345] = {.lex_state = 22, .external_lex_state = 2},
  [346] = {.lex_state = 0, .external_lex_state = 2},
  [347] = {.lex_state = 22, .external_lex_state = 2},
  [348] = {.lex_state = 0, .external_lex_state = 11},
  [349] = {.lex_state = 22, .external_lex_state = 2},
  [350] = {.lex_state = 22, .external_lex_state = 2},
  [351] = {.lex_state = 22, .external_lex_state = 2},
  [352] = {.lex_state = 0, .external_lex_state = 2},
  [353] = {.lex_state = 22, .external_lex_state = 2},
  [354] = {.lex_state = 22, .external_lex_state = 2},
  [355] = {.lex_state = 2, .external_lex_state = 2},
  [356] = {.lex_state = 2, .external_lex_state = 2},
  [357] = {.lex_state = 22, .external_lex_state = 2},
  [358] = {.lex_state = 0, .external_lex_state = 11},
  [359] = {.lex_state = 2, .external_lex_state = 2},
  [360] = {.lex_state = 22, .external_lex_state = 2},
  [361] = {.lex_state = 22, .external_lex_state = 2},
  [362] = {.lex_state = 0, .external_lex_state = 2},
  [363] = {.lex_state = 22, .external_lex_state = 2},
  [364] = {.lex_state = 22, .external_lex_state = 2},
  [365] = {.lex_state = 22, .external_lex_state = 2},
  [366] = {.lex_state = 0, .external_lex_state = 2},
  [367] = {.lex_state = 0, .external_lex_state = 12},
  [368] = {.lex_state = 22, .external_lex_state = 2},
  [369] = {.lex_state = 22, .external_lex_state = 2},
  [370] = {.lex_state = 22, .external_lex_state = 2},
  [371] = {.lex_state = 0, .external_lex_state = 11},
  [372] = {.lex_state = 22, .external_lex_state = 2},
  [373] = {.lex_state = 22, .external_lex_state = 2},
  [374] = {.lex_state = 0, .external_lex_state = 2},
  [375] = {.lex_state = 22, .external_lex_state = 2},
  [376] = {.lex_state = 22, .external_lex_state = 2},
  [377] = {.lex_state = 22, .external_lex_state = 2},
  [378] = {.lex_state = 22, .external_lex_state = 2},
  [379] = {.lex_state = 0, .external_lex_state = 2},
  [380] = {.lex_state = 22, .external_lex_state = 2},
  [381] = {.lex_state = 22, .external_lex_state = 2},
  [382] = {.lex_state = 22, .external_lex_state = 2},
  [383] = {.lex_state = 22, .external_lex_state = 2},
  [384] = {.lex_state = 0, .external_lex_state = 12},
  [385] = {.lex_state = 22, .external_lex_state = 2},
  [386] = {.lex_state = 22, .external_lex_state = 2},
  [387] = {.lex_state = 0, .external_lex_state = 11},
  [388] = {.lex_state = 22, .external_lex_state = 2},
  [389] = {.lex_state = 22, .external_lex_state = 2},
  [390] = {.lex_state = 0, .external_lex_state = 2},
  [391] = {.lex_state = 0, .external_lex_state = 2},
  [392] = {.lex_state = 69, .external_lex_state = 2},
  [393] = {.lex_state = 22, .external_lex_state = 2},
  [394] = {.lex_state = 0, .external_lex_state = 9},
  [395] = {.lex_state = 22, .external_lex_state = 2},
  [396] = {.lex_state = 22, .external_lex_state = 2},
  [397] = {.lex_state = 0, .external_lex_state = 2},
  [398] = {.lex_state = 2, .external_lex_state = 2},
  [399] = {.lex_state = 0, .external_lex_state = 2},
  [400] = {.lex_state = 0, .external_lex_state = 2},
  [401] = {.lex_state = 22, .external_lex_state = 2},
  [402] = {.lex_state = 22, .external_lex_state = 2},
  [403] = {.lex_state = 22, .external_lex_state = 2},
  [404] = {.lex_state = 22, .external_lex_state = 2},
  [405] = {.lex_state = 22, .external_lex_state = 2},
  [406] = {.lex_state = 22, .external_lex_state = 2},
  [407] = {.lex_state = 22, .external_lex_state = 2},
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
    [sym_source_file] = STATE(366),
    [sym_parameters] = STATE(12),
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
    STATE(7), 12,
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
  [186] = 20,
    ACTIONS(82), 1,
      anon_sym_dbname,
    ACTIONS(84), 1,
      anon_sym_description,
    ACTIONS(86), 1,
      anon_sym_archiver,
    ACTIONS(88), 1,
      anon_sym_archiverContact,
    ACTIONS(90), 1,
      anon_sym_dataOwner,
    ACTIONS(92), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(94), 1,
      anon_sym_lobFolder,
    ACTIONS(96), 1,
      anon_sym_Schema,
    ACTIONS(98), 1,
      anon_sym_Command,
    STATE(51), 1,
      sym__siard_lobFolder,
    STATE(52), 1,
      sym__ded,
    STATE(53), 1,
      sym__siard_dataOriginTimespan,
    STATE(56), 1,
      sym__siard_dataOwner,
    STATE(60), 1,
      sym__siard_archiverContact,
    STATE(67), 1,
      sym__siard_archiver,
    STATE(70), 1,
      sym__siard_description,
    STATE(72), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(100), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(15), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [251] = 12,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(105), 1,
      anon_sym_Log,
    ACTIONS(108), 1,
      anon_sym_Assert,
    ACTIONS(111), 1,
      anon_sym_Interpolation,
    ACTIONS(114), 1,
      anon_sym_Set,
    ACTIONS(117), 1,
      anon_sym_Execute,
    ACTIONS(120), 1,
      anon_sym_Output,
    ACTIONS(123), 1,
      anon_sym_Metadata,
    ACTIONS(126), 1,
      anon_sym_For,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(7), 12,
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
  [300] = 20,
    ACTIONS(82), 1,
      anon_sym_dbname,
    ACTIONS(84), 1,
      anon_sym_description,
    ACTIONS(86), 1,
      anon_sym_archiver,
    ACTIONS(88), 1,
      anon_sym_archiverContact,
    ACTIONS(90), 1,
      anon_sym_dataOwner,
    ACTIONS(92), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(94), 1,
      anon_sym_lobFolder,
    ACTIONS(96), 1,
      anon_sym_Schema,
    ACTIONS(98), 1,
      anon_sym_Command,
    STATE(51), 1,
      sym__siard_lobFolder,
    STATE(53), 1,
      sym__siard_dataOriginTimespan,
    STATE(56), 1,
      sym__siard_dataOwner,
    STATE(60), 1,
      sym__siard_archiverContact,
    STATE(67), 1,
      sym__siard_archiver,
    STATE(70), 1,
      sym__siard_description,
    STATE(72), 1,
      sym__siard_dbname,
    STATE(116), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(129), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(13), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [365] = 12,
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
    STATE(267), 1,
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
  [414] = 12,
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
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(7), 12,
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
  [463] = 12,
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
    STATE(258), 1,
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
  [512] = 12,
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
    STATE(10), 12,
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
  [561] = 20,
    ACTIONS(82), 1,
      anon_sym_dbname,
    ACTIONS(84), 1,
      anon_sym_description,
    ACTIONS(86), 1,
      anon_sym_archiver,
    ACTIONS(88), 1,
      anon_sym_archiverContact,
    ACTIONS(90), 1,
      anon_sym_dataOwner,
    ACTIONS(92), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(94), 1,
      anon_sym_lobFolder,
    ACTIONS(96), 1,
      anon_sym_Schema,
    ACTIONS(98), 1,
      anon_sym_Command,
    STATE(51), 1,
      sym__siard_lobFolder,
    STATE(53), 1,
      sym__siard_dataOriginTimespan,
    STATE(56), 1,
      sym__siard_dataOwner,
    STATE(60), 1,
      sym__siard_archiverContact,
    STATE(67), 1,
      sym__siard_archiver,
    STATE(70), 1,
      sym__siard_description,
    STATE(72), 1,
      sym__siard_dbname,
    STATE(112), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(133), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(15), 3,
      sym_siard_schema,
      sym_command_declaration,
      aux_sym_siard_metadata_repeat1,
  [626] = 20,
    ACTIONS(82), 1,
      anon_sym_dbname,
    ACTIONS(84), 1,
      anon_sym_description,
    ACTIONS(86), 1,
      anon_sym_archiver,
    ACTIONS(88), 1,
      anon_sym_archiverContact,
    ACTIONS(90), 1,
      anon_sym_dataOwner,
    ACTIONS(92), 1,
      anon_sym_dataOriginTimespan,
    ACTIONS(94), 1,
      anon_sym_lobFolder,
    ACTIONS(96), 1,
      anon_sym_Schema,
    ACTIONS(98), 1,
      anon_sym_Command,
    STATE(51), 1,
      sym__siard_lobFolder,
    STATE(53), 1,
      sym__siard_dataOriginTimespan,
    STATE(56), 1,
      sym__siard_dataOwner,
    STATE(57), 1,
      sym__ded,
    STATE(60), 1,
      sym__siard_archiverContact,
    STATE(67), 1,
      sym__siard_archiver,
    STATE(70), 1,
      sym__siard_description,
    STATE(72), 1,
      sym__siard_dbname,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(135), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(6), 3,
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
    STATE(51), 1,
      sym__siard_lobFolder,
    STATE(53), 1,
      sym__siard_dataOriginTimespan,
    STATE(56), 1,
      sym__siard_dataOwner,
    STATE(60), 1,
      sym__siard_archiverContact,
    STATE(67), 1,
      sym__siard_archiver,
    STATE(70), 1,
      sym__siard_description,
    STATE(72), 1,
      sym__siard_dbname,
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
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(172), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 15,
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
  [808] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(176), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(174), 15,
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
  [835] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(180), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(178), 15,
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
  [862] = 3,
    ACTIONS(184), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(182), 17,
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
  [889] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(188), 3,
      anon_sym_DOT,
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
  [916] = 3,
    ACTIONS(192), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(190), 17,
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
  [943] = 3,
    ACTIONS(196), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(194), 17,
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
  [970] = 3,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(200), 3,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(198), 15,
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
  [997] = 3,
    ACTIONS(182), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(184), 13,
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
  [1020] = 8,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_result,
    ACTIONS(206), 1,
      anon_sym_connection,
    ACTIONS(208), 1,
      sym_integer,
    ACTIONS(210), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(71), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
    STATE(96), 4,
      sym__expression,
      sym_script_result,
      sym_connection,
      sym_query,
  [1052] = 8,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_result,
    ACTIONS(216), 1,
      anon_sym_connection,
    ACTIONS(218), 1,
      sym_integer,
    ACTIONS(220), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(31), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
    STATE(69), 4,
      sym__expression,
      sym_script_result,
      sym_connection,
      sym_query,
  [1084] = 2,
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
  [1103] = 3,
    ACTIONS(188), 1,
      anon_sym_DOT,
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
  [1124] = 3,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(178), 11,
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
  [1145] = 3,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(222), 11,
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
  [1166] = 3,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(170), 11,
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
  [1187] = 3,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(174), 11,
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
  [1208] = 3,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 11,
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
  [1229] = 3,
    ACTIONS(228), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(226), 11,
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
  [1250] = 9,
    ACTIONS(84), 1,
      anon_sym_description,
    ACTIONS(230), 1,
      anon_sym_Type,
    ACTIONS(232), 1,
      anon_sym_Table,
    ACTIONS(234), 1,
      anon_sym_View,
    STATE(86), 1,
      sym__ded,
    STATE(114), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(236), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(113), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [1283] = 3,
    ACTIONS(224), 1,
      anon_sym_DOT,
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
  [1304] = 9,
    ACTIONS(84), 1,
      anon_sym_description,
    ACTIONS(240), 1,
      anon_sym_Column,
    ACTIONS(242), 1,
      anon_sym_Key,
    ACTIONS(244), 1,
      anon_sym_Check,
    STATE(98), 1,
      sym__siard_description,
    STATE(209), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(246), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(108), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [1337] = 3,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(248), 11,
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
  [1358] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(250), 11,
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
  [1376] = 8,
    ACTIONS(254), 1,
      sym__inter_start,
    ACTIONS(256), 1,
      sym__inter_start2,
    ACTIONS(258), 1,
      sym__raw,
    STATE(28), 1,
      sym__ded,
    STATE(180), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(252), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(95), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1406] = 3,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(248), 10,
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
  [1426] = 3,
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
  [1446] = 3,
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
  [1466] = 3,
    ACTIONS(272), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(270), 10,
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
  [1486] = 3,
    ACTIONS(276), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(274), 10,
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
  [1506] = 3,
    ACTIONS(280), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(278), 10,
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
  [1526] = 3,
    ACTIONS(284), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(282), 10,
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
  [1546] = 3,
    ACTIONS(288), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(286), 10,
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
  [1566] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(290), 11,
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
  [1584] = 3,
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
  [1604] = 2,
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
  [1622] = 3,
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
  [1642] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(302), 11,
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
  [1660] = 3,
    ACTIONS(306), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(304), 10,
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
  [1680] = 3,
    ACTIONS(310), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(308), 10,
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
  [1700] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(312), 11,
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
  [1718] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(314), 11,
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
  [1736] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(316), 11,
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
  [1754] = 3,
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
  [1774] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(322), 11,
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
  [1792] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(324), 11,
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
  [1810] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(326), 11,
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
  [1828] = 8,
    ACTIONS(254), 1,
      sym__inter_start,
    ACTIONS(256), 1,
      sym__inter_start2,
    ACTIONS(258), 1,
      sym__raw,
    STATE(2), 1,
      sym__ded,
    STATE(180), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(328), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(95), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [1858] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(330), 11,
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
  [1876] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(332), 11,
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
  [1894] = 3,
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
  [1914] = 3,
    ACTIONS(260), 1,
      anon_sym_DOT,
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
  [1934] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(338), 11,
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
  [1952] = 3,
    ACTIONS(342), 1,
      anon_sym_archiver,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(340), 10,
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
  [1972] = 3,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(222), 10,
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
  [1992] = 3,
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
  [2012] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(348), 11,
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
  [2030] = 3,
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
  [2050] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 11,
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
  [2068] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 11,
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
  [2086] = 3,
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
  [2106] = 3,
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
  [2126] = 3,
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
  [2146] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(370), 11,
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
  [2164] = 3,
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
  [2184] = 3,
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
  [2204] = 3,
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
  [2224] = 3,
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
  [2244] = 3,
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
  [2264] = 3,
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
  [2284] = 3,
    ACTIONS(396), 1,
      anon_sym_with,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(226), 10,
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
  [2304] = 3,
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
  [2324] = 3,
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
  [2344] = 3,
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
  [2364] = 3,
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
  [2384] = 3,
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
  [2404] = 3,
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
  [2424] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(250), 10,
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
  [2441] = 7,
    ACTIONS(424), 1,
      sym__inter_start,
    ACTIONS(427), 1,
      sym__inter_start2,
    ACTIONS(430), 1,
      sym__raw,
    STATE(180), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(422), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(95), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [2468] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(338), 10,
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
  [2485] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(322), 10,
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
  [2502] = 7,
    ACTIONS(240), 1,
      anon_sym_Column,
    ACTIONS(242), 1,
      anon_sym_Key,
    ACTIONS(244), 1,
      anon_sym_Check,
    STATE(205), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(433), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(104), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2529] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(332), 10,
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
  [2546] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(290), 10,
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
  [2563] = 7,
    ACTIONS(230), 1,
      anon_sym_Type,
    ACTIONS(232), 1,
      anon_sym_Table,
    ACTIONS(234), 1,
      anon_sym_View,
    STATE(92), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(435), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(129), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2590] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(348), 10,
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
  [2607] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(356), 10,
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
  [2624] = 7,
    ACTIONS(240), 1,
      anon_sym_Column,
    ACTIONS(242), 1,
      anon_sym_Key,
    ACTIONS(244), 1,
      anon_sym_Check,
    STATE(191), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(437), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(123), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2651] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(314), 10,
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
  [2668] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(326), 10,
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
  [2685] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(324), 10,
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
  [2702] = 7,
    ACTIONS(240), 1,
      anon_sym_Column,
    ACTIONS(242), 1,
      anon_sym_Key,
    ACTIONS(244), 1,
      anon_sym_Check,
    STATE(203), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(439), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(123), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [2729] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(302), 10,
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
  [2746] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(330), 10,
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
  [2763] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(354), 10,
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
  [2780] = 2,
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
  [2797] = 7,
    ACTIONS(230), 1,
      anon_sym_Type,
    ACTIONS(232), 1,
      anon_sym_Table,
    ACTIONS(234), 1,
      anon_sym_View,
    STATE(89), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(441), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(129), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2824] = 7,
    ACTIONS(230), 1,
      anon_sym_Type,
    ACTIONS(232), 1,
      anon_sym_Table,
    ACTIONS(234), 1,
      anon_sym_View,
    STATE(88), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(443), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(101), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [2851] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(316), 10,
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
  [2868] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(312), 10,
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
  [2885] = 6,
    ACTIONS(210), 1,
      sym__string_start,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(447), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(111), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(132), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [2909] = 7,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(451), 1,
      sym__inter_start,
    ACTIONS(453), 1,
      sym__string_content,
    ACTIONS(455), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(119), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2935] = 7,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(451), 1,
      sym__inter_start,
    ACTIONS(453), 1,
      sym__string_content,
    ACTIONS(457), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(125), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [2961] = 6,
    ACTIONS(210), 1,
      sym__string_start,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(459), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(75), 2,
      sym__boolean_expression,
      sym_comparison,
    STATE(134), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [2985] = 7,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(451), 1,
      sym__inter_start,
    ACTIONS(453), 1,
      sym__string_content,
    ACTIONS(461), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(122), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3011] = 7,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(451), 1,
      sym__inter_start,
    ACTIONS(453), 1,
      sym__string_content,
    ACTIONS(463), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(125), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3037] = 6,
    ACTIONS(465), 1,
      anon_sym_Column,
    ACTIONS(468), 1,
      anon_sym_Key,
    ACTIONS(471), 1,
      anon_sym_Check,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(474), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(123), 4,
      sym_siard_column,
      sym_siard_key,
      sym_siard_check,
      aux_sym_siard_table_repeat1,
  [3061] = 7,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(451), 1,
      sym__inter_start,
    ACTIONS(453), 1,
      sym__string_content,
    ACTIONS(476), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(125), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3087] = 7,
    ACTIONS(478), 1,
      anon_sym_BSLASH,
    ACTIONS(481), 1,
      sym__inter_start,
    ACTIONS(484), 1,
      sym__string_content,
    ACTIONS(487), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(125), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3113] = 7,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(451), 1,
      sym__inter_start,
    ACTIONS(453), 1,
      sym__string_content,
    ACTIONS(489), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(128), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3139] = 7,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(451), 1,
      sym__inter_start,
    ACTIONS(453), 1,
      sym__string_content,
    ACTIONS(491), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(124), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3165] = 7,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(451), 1,
      sym__inter_start,
    ACTIONS(453), 1,
      sym__string_content,
    ACTIONS(493), 1,
      sym__string_end,
    STATE(216), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(125), 4,
      sym_string_content,
      sym_escape_sequence,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3191] = 6,
    ACTIONS(495), 1,
      anon_sym_Type,
    ACTIONS(498), 1,
      anon_sym_Table,
    ACTIONS(501), 1,
      anon_sym_View,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(504), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(129), 4,
      sym_siard_type,
      sym_siard_table,
      sym_siard_view,
      aux_sym_siard_schema_repeat1,
  [3215] = 7,
    ACTIONS(84), 1,
      anon_sym_description,
    ACTIONS(506), 1,
      anon_sym_Field,
    STATE(166), 1,
      sym__siard_description,
    STATE(278), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(508), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(165), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3240] = 7,
    ACTIONS(84), 1,
      anon_sym_description,
    ACTIONS(506), 1,
      anon_sym_Field,
    STATE(170), 1,
      sym__siard_description,
    STATE(188), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(510), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(169), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3265] = 5,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(154), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(516), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(514), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3286] = 7,
    ACTIONS(84), 1,
      anon_sym_description,
    ACTIONS(240), 1,
      anon_sym_Column,
    STATE(178), 1,
      sym__siard_description,
    STATE(208), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(518), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(176), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [3311] = 5,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(150), 1,
      sym_comparison_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(516), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(514), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3332] = 6,
    ACTIONS(254), 1,
      sym__inter_start,
    ACTIONS(256), 1,
      sym__inter_start2,
    ACTIONS(258), 1,
      sym__raw,
    STATE(180), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(41), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3355] = 6,
    ACTIONS(254), 1,
      sym__inter_start,
    ACTIONS(256), 1,
      sym__inter_start2,
    ACTIONS(258), 1,
      sym__raw,
    STATE(180), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(64), 4,
      sym_interpolation,
      sym_interpolation2,
      sym_raw_content,
      aux_sym_raw_repeat1,
  [3378] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(522), 1,
      sym_integer,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(230), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3398] = 5,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(528), 1,
      sym_integer,
    ACTIONS(530), 1,
      sym__string_start,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(323), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3418] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(532), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(241), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3438] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(534), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(211), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3458] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(536), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(240), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3478] = 5,
    ACTIONS(220), 1,
      sym__string_start,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(540), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(39), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3498] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(542), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(234), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3518] = 5,
    ACTIONS(210), 1,
      sym__string_start,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(544), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(42), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3538] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(546), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(227), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3558] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(548), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(220), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3578] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(550), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(233), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3598] = 5,
    ACTIONS(210), 1,
      sym__string_start,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(552), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(334), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3618] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(554), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(223), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3638] = 5,
    ACTIONS(220), 1,
      sym__string_start,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(556), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(37), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3658] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(558), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(228), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3678] = 5,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(530), 1,
      sym__string_start,
    ACTIONS(560), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(319), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3698] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(562), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(229), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3718] = 5,
    ACTIONS(210), 1,
      sym__string_start,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(68), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3738] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(566), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(210), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3758] = 5,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__string_start,
    ACTIONS(568), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(219), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3778] = 5,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(530), 1,
      sym__string_start,
    ACTIONS(570), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(305), 4,
      sym__basic_expression,
      sym_variable_instance,
      sym_dot_expression,
      sym_string,
  [3798] = 6,
    ACTIONS(572), 1,
      anon_sym_COLON,
    ACTIONS(574), 1,
      aux_sym__short_descr_token1,
    STATE(214), 1,
      sym__short_descr,
    STATE(215), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(576), 2,
      sym__newline,
      sym__end_of_file,
  [3819] = 6,
    ACTIONS(574), 1,
      aux_sym__short_descr_token1,
    ACTIONS(578), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym__nl,
    STATE(218), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(580), 2,
      sym__newline,
      sym__end_of_file,
  [3840] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(582), 6,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
      aux_sym_escape_sequence_token3,
      aux_sym_escape_sequence_token4,
      aux_sym_escape_sequence_token5,
      aux_sym_escape_sequence_token6,
  [3853] = 5,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(50), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(586), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3872] = 5,
    ACTIONS(588), 1,
      sym_identifier,
    STATE(80), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(590), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(189), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [3891] = 5,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(100), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(592), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [3910] = 5,
    ACTIONS(506), 1,
      anon_sym_Field,
    STATE(260), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(594), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(186), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3929] = 5,
    ACTIONS(506), 1,
      anon_sym_Field,
    STATE(262), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(596), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(186), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3948] = 5,
    ACTIONS(506), 1,
      anon_sym_Field,
    STATE(246), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(598), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(164), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3967] = 5,
    ACTIONS(506), 1,
      anon_sym_Field,
    STATE(193), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(600), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(186), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [3986] = 6,
    ACTIONS(574), 1,
      aux_sym__short_descr_token1,
    ACTIONS(602), 1,
      anon_sym_COLON,
    STATE(243), 1,
      sym__short_descr,
    STATE(268), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(604), 2,
      sym__newline,
      sym__end_of_file,
  [4007] = 5,
    ACTIONS(506), 1,
      anon_sym_Field,
    STATE(187), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(606), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(186), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4026] = 5,
    ACTIONS(506), 1,
      anon_sym_Field,
    STATE(181), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(608), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(167), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4045] = 5,
    ACTIONS(240), 1,
      anon_sym_Column,
    STATE(190), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(610), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(200), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4064] = 6,
    ACTIONS(574), 1,
      aux_sym__short_descr_token1,
    ACTIONS(612), 1,
      anon_sym_COLON,
    STATE(194), 1,
      sym__nl,
    STATE(195), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(614), 2,
      sym__newline,
      sym__end_of_file,
  [4085] = 6,
    ACTIONS(574), 1,
      aux_sym__short_descr_token1,
    ACTIONS(616), 1,
      anon_sym_COLON,
    STATE(43), 1,
      sym__short_descr,
    STATE(55), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(618), 2,
      sym__newline,
      sym__end_of_file,
  [4106] = 6,
    ACTIONS(574), 1,
      aux_sym__short_descr_token1,
    ACTIONS(620), 1,
      anon_sym_COLON,
    STATE(196), 1,
      sym__nl,
    STATE(197), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(622), 2,
      sym__newline,
      sym__end_of_file,
  [4127] = 4,
    ACTIONS(626), 1,
      sym__raw,
    STATE(175), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(624), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [4144] = 5,
    ACTIONS(240), 1,
      anon_sym_Column,
    STATE(201), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(629), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(200), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4163] = 6,
    ACTIONS(574), 1,
      aux_sym__short_descr_token1,
    ACTIONS(631), 1,
      anon_sym_COLON,
    STATE(213), 1,
      sym__nl,
    STATE(217), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(633), 2,
      sym__newline,
      sym__end_of_file,
  [4184] = 5,
    ACTIONS(240), 1,
      anon_sym_Column,
    STATE(202), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(635), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(171), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4203] = 6,
    ACTIONS(574), 1,
      aux_sym__short_descr_token1,
    ACTIONS(637), 1,
      anon_sym_COLON,
    STATE(198), 1,
      sym__nl,
    STATE(199), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(639), 2,
      sym__newline,
      sym__end_of_file,
  [4224] = 4,
    ACTIONS(643), 1,
      sym__raw,
    STATE(175), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(641), 4,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__end_of_file,
  [4241] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(645), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4253] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(647), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4265] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(649), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4277] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(651), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4289] = 4,
    ACTIONS(653), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(656), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(185), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [4305] = 4,
    ACTIONS(658), 1,
      anon_sym_Field,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(661), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(186), 2,
      sym_siard_field,
      aux_sym_siard_column_repeat1,
  [4321] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(663), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4333] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(665), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4345] = 4,
    ACTIONS(667), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(670), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(189), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [4361] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(672), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4373] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(674), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4385] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(676), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4397] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(678), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4409] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(680), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4421] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(682), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4433] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(684), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4445] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(686), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4457] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(688), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4469] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(690), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Column,
      anon_sym_Key,
      anon_sym_Check,
  [4481] = 4,
    ACTIONS(692), 1,
      anon_sym_Column,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(695), 2,
      sym__dedent,
      sym__end_of_file,
    STATE(200), 2,
      sym_siard_column,
      aux_sym_siard_view_repeat1,
  [4497] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(697), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4509] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(699), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4521] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(701), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4533] = 4,
    ACTIONS(705), 1,
      sym__string_content,
    STATE(204), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(703), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [4549] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(708), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4561] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(710), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4573] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(712), 5,
      sym__dedent,
      sym__inter_start,
      sym__inter_start2,
      sym__raw,
      sym__end_of_file,
  [4585] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(714), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4597] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(716), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4609] = 6,
    ACTIONS(718), 1,
      anon_sym_with,
    ACTIONS(720), 1,
      anon_sym_DOT,
    ACTIONS(722), 1,
      sym__newline,
    ACTIONS(724), 1,
      sym__end_of_file,
    STATE(61), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4629] = 6,
    ACTIONS(720), 1,
      anon_sym_DOT,
    ACTIONS(726), 1,
      anon_sym_with,
    ACTIONS(728), 1,
      sym__newline,
    ACTIONS(730), 1,
      sym__end_of_file,
    STATE(97), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [4649] = 5,
    ACTIONS(574), 1,
      aux_sym__short_descr_token1,
    STATE(274), 1,
      sym__nl,
    STATE(275), 1,
      sym__short_descr,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(732), 2,
      sym__newline,
      sym__end_of_file,
  [4667] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(734), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4679] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(736), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4691] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(738), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4703] = 4,
    ACTIONS(742), 1,
      sym__string_content,
    STATE(204), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(740), 3,
      sym__inter_start,
      sym__string_end,
      anon_sym_BSLASH,
  [4719] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(744), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4731] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(746), 5,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Type,
      anon_sym_Table,
      anon_sym_View,
  [4743] = 4,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(115), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(748), 2,
      sym__newline,
      sym__end_of_file,
  [4758] = 4,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(284), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(750), 2,
      sym__newline,
      sym__end_of_file,
  [4773] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(170), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [4784] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [4795] = 4,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(82), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(752), 2,
      sym__newline,
      sym__end_of_file,
  [4810] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(186), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [4821] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(178), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [4832] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(174), 4,
      sym__newline,
      sym__end_of_file,
      anon_sym_with,
      anon_sym_DOT,
  [4843] = 4,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(77), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(754), 2,
      sym__newline,
      sym__end_of_file,
  [4858] = 4,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(83), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(756), 2,
      sym__newline,
      sym__end_of_file,
  [4873] = 4,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(85), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(758), 2,
      sym__newline,
      sym__end_of_file,
  [4888] = 4,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(22), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(760), 2,
      sym__newline,
      sym__end_of_file,
  [4903] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(712), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [4914] = 3,
    STATE(17), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(762), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [4927] = 4,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(78), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(764), 2,
      sym__newline,
      sym__end_of_file,
  [4942] = 4,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(250), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(766), 2,
      sym__newline,
      sym__end_of_file,
  [4957] = 3,
    STATE(32), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(768), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [4970] = 3,
    STATE(221), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(770), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [4983] = 3,
    STATE(314), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(772), 3,
      anon_sym_stripped,
      anon_sym_size,
      anon_sym_as_integer,
  [4996] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(774), 4,
      sym__inter_start,
      sym__string_content,
      sym__string_end,
      anon_sym_BSLASH,
  [5007] = 5,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(776), 1,
      anon_sym_title,
    ACTIONS(778), 1,
      anon_sym_Body,
    STATE(405), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5024] = 4,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(74), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(780), 2,
      sym__newline,
      sym__end_of_file,
  [5039] = 4,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(59), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(782), 2,
      sym__newline,
      sym__end_of_file,
  [5054] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(784), 1,
      anon_sym_Body,
    STATE(347), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5068] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(786), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5078] = 3,
    STATE(206), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(788), 2,
      sym__dedent,
      sym__end_of_file,
  [5090] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(790), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5100] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(792), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5110] = 3,
    STATE(76), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(794), 2,
      sym__newline,
      sym__end_of_file,
  [5122] = 3,
    STATE(81), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(796), 2,
      sym__dedent,
      sym__end_of_file,
  [5134] = 3,
    STATE(63), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(798), 2,
      sym__newline,
      sym__end_of_file,
  [5146] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(800), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5156] = 3,
    ACTIONS(584), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(163), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [5168] = 3,
    ACTIONS(584), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(161), 2,
      sym_key_value_pair,
      aux_sym_key_value_pairs_repeat1,
  [5180] = 3,
    STATE(91), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(802), 2,
      sym__dedent,
      sym__end_of_file,
  [5192] = 3,
    ACTIONS(588), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    STATE(162), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [5204] = 4,
    ACTIONS(804), 1,
      anon_sym_using,
    ACTIONS(806), 1,
      anon_sym_via,
    STATE(320), 1,
      sym__using_i,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5218] = 4,
    ACTIONS(804), 1,
      anon_sym_using,
    ACTIONS(808), 1,
      anon_sym_via,
    STATE(327), 1,
      sym__using_i,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5232] = 4,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5246] = 3,
    STATE(94), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(814), 2,
      sym__dedent,
      sym__end_of_file,
  [5258] = 3,
    STATE(93), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(816), 2,
      sym__dedent,
      sym__end_of_file,
  [5270] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(818), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5280] = 3,
    STATE(79), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(820), 2,
      sym__dedent,
      sym__end_of_file,
  [5292] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(822), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5302] = 4,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5316] = 4,
    ACTIONS(804), 1,
      anon_sym_using,
    ACTIONS(826), 1,
      anon_sym_via,
    STATE(326), 1,
      sym__using_i,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5330] = 3,
    STATE(84), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(828), 2,
      sym__dedent,
      sym__end_of_file,
  [5342] = 3,
    STATE(103), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(830), 2,
      sym__newline,
      sym__end_of_file,
  [5354] = 3,
    STATE(40), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(832), 2,
      sym__dedent,
      sym__end_of_file,
  [5366] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(834), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5376] = 4,
    ACTIONS(804), 1,
      anon_sym_using,
    ACTIONS(836), 1,
      anon_sym_via,
    STATE(318), 1,
      sym__using_i,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5390] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(838), 3,
      sym__string_start,
      sym_integer,
      sym_identifier,
  [5400] = 4,
    ACTIONS(840), 1,
      anon_sym_COLON,
    ACTIONS(842), 1,
      anon_sym_EQ,
    STATE(242), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5414] = 4,
    ACTIONS(844), 1,
      anon_sym_COLON,
    ACTIONS(846), 1,
      anon_sym_EQ,
    STATE(49), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5428] = 4,
    ACTIONS(844), 1,
      anon_sym_COLON,
    ACTIONS(848), 1,
      anon_sym_EQ,
    STATE(23), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5442] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(850), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5452] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(852), 3,
      sym__dedent,
      sym__end_of_file,
      sym_identifier,
  [5462] = 4,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_for_variables_repeat1,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5476] = 3,
    STATE(16), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(859), 2,
      sym__newline,
      sym__end_of_file,
  [5488] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(861), 3,
      sym__dedent,
      sym__end_of_file,
      anon_sym_Field,
  [5498] = 4,
    ACTIONS(844), 1,
      anon_sym_COLON,
    ACTIONS(863), 1,
      anon_sym_EQ,
    STATE(48), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5512] = 4,
    ACTIONS(844), 1,
      anon_sym_COLON,
    ACTIONS(865), 1,
      anon_sym_EQ,
    STATE(245), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5526] = 3,
    STATE(184), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(867), 2,
      sym__dedent,
      sym__end_of_file,
  [5538] = 3,
    STATE(183), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(869), 2,
      sym__dedent,
      sym__end_of_file,
  [5550] = 3,
    STATE(90), 1,
      sym__ded,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(871), 2,
      sym__dedent,
      sym__end_of_file,
  [5562] = 4,
    ACTIONS(7), 1,
      anon_sym_Parameters,
    ACTIONS(873), 1,
      anon_sym_Body,
    STATE(345), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5576] = 3,
    STATE(106), 1,
      sym__nl,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(875), 2,
      sym__newline,
      sym__end_of_file,
  [5588] = 4,
    ACTIONS(844), 1,
      anon_sym_COLON,
    ACTIONS(877), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5602] = 4,
    ACTIONS(844), 1,
      anon_sym_COLON,
    ACTIONS(879), 1,
      anon_sym_EQ,
    STATE(46), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5616] = 4,
    ACTIONS(844), 1,
      anon_sym_COLON,
    ACTIONS(881), 1,
      anon_sym_EQ,
    STATE(45), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5630] = 4,
    ACTIONS(844), 1,
      anon_sym_COLON,
    ACTIONS(883), 1,
      anon_sym_EQ,
    STATE(44), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5644] = 3,
    ACTIONS(885), 1,
      anon_sym_LPAREN,
    STATE(407), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5655] = 3,
    ACTIONS(84), 1,
      anon_sym_description,
    STATE(244), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5666] = 3,
    ACTIONS(887), 1,
      sym__newline,
    STATE(294), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5677] = 3,
    ACTIONS(84), 1,
      anon_sym_description,
    STATE(281), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5688] = 3,
    ACTIONS(84), 1,
      anon_sym_description,
    STATE(282), 1,
      sym__siard_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5699] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    STATE(253), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5710] = 3,
    ACTIONS(889), 1,
      sym__newline,
    STATE(36), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5721] = 3,
    ACTIONS(887), 1,
      sym__newline,
    STATE(239), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5732] = 3,
    ACTIONS(889), 1,
      sym__newline,
    STATE(130), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5743] = 3,
    ACTIONS(887), 1,
      sym__newline,
    STATE(252), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5754] = 3,
    ACTIONS(887), 1,
      sym__newline,
    STATE(251), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5765] = 3,
    ACTIONS(889), 1,
      sym__newline,
    STATE(131), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5776] = 3,
    ACTIONS(887), 1,
      sym__newline,
    STATE(9), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5787] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(174), 2,
      sym__inter_end,
      anon_sym_DOT,
  [5796] = 3,
    ACTIONS(891), 1,
      anon_sym_COLON,
    STATE(109), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5807] = 3,
    ACTIONS(893), 1,
      anon_sym_DOT,
    ACTIONS(895), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5818] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    STATE(259), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5829] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(178), 2,
      sym__inter_end,
      anon_sym_DOT,
  [5838] = 3,
    ACTIONS(891), 1,
      anon_sym_COLON,
    STATE(105), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5849] = 3,
    ACTIONS(897), 1,
      anon_sym_COLON,
    STATE(54), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5860] = 3,
    ACTIONS(897), 1,
      anon_sym_COLON,
    STATE(58), 1,
      sym_key_value_pairs,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5871] = 3,
    ACTIONS(889), 1,
      sym__newline,
    STATE(14), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5882] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(186), 2,
      sym__inter_end,
      anon_sym_DOT,
  [5891] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(198), 2,
      sym__inter_end,
      anon_sym_DOT,
  [5900] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(170), 2,
      sym__inter_end,
      anon_sym_DOT,
  [5909] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    STATE(62), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5920] = 3,
    ACTIONS(885), 1,
      anon_sym_LPAREN,
    STATE(349), 1,
      sym_for_variables,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5931] = 3,
    ACTIONS(887), 1,
      sym__newline,
    STATE(254), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5942] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    STATE(65), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5953] = 3,
    ACTIONS(893), 1,
      anon_sym_DOT,
    ACTIONS(899), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5964] = 3,
    ACTIONS(840), 1,
      anon_sym_COLON,
    STATE(110), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5975] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    STATE(261), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5986] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [5997] = 3,
    ACTIONS(893), 1,
      anon_sym_DOT,
    ACTIONS(901), 1,
      sym__inter_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6008] = 2,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
    ACTIONS(857), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6017] = 3,
    ACTIONS(889), 1,
      sym__newline,
    STATE(8), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6028] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    STATE(73), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6039] = 3,
    ACTIONS(840), 1,
      anon_sym_COLON,
    STATE(102), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6050] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    STATE(283), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6061] = 3,
    ACTIONS(887), 1,
      sym__newline,
    STATE(293), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6072] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    STATE(265), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6083] = 3,
    ACTIONS(889), 1,
      sym__newline,
    STATE(133), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6094] = 3,
    ACTIONS(889), 1,
      sym__newline,
    STATE(38), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6105] = 3,
    ACTIONS(840), 1,
      anon_sym_COLON,
    STATE(99), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6116] = 3,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(903), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6127] = 3,
    ACTIONS(887), 1,
      sym__newline,
    STATE(291), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6138] = 3,
    ACTIONS(840), 1,
      anon_sym_COLON,
    STATE(107), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6149] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    STATE(248), 1,
      sym_raw,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6160] = 3,
    ACTIONS(887), 1,
      sym__newline,
    STATE(11), 1,
      sym__ni,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6171] = 2,
    ACTIONS(905), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6179] = 2,
    ACTIONS(907), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6187] = 2,
    ACTIONS(909), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6195] = 2,
    ACTIONS(911), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6203] = 2,
    ACTIONS(913), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6211] = 2,
    ACTIONS(915), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6219] = 2,
    ACTIONS(917), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6227] = 2,
    ACTIONS(919), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6235] = 2,
    ACTIONS(921), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6243] = 2,
    ACTIONS(923), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6251] = 2,
    ACTIONS(925), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6259] = 2,
    ACTIONS(927), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6267] = 2,
    ACTIONS(929), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6275] = 2,
    ACTIONS(931), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6283] = 2,
    ACTIONS(933), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6291] = 2,
    ACTIONS(935), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6299] = 2,
    ACTIONS(937), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6307] = 2,
    ACTIONS(939), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6315] = 2,
    ACTIONS(941), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6323] = 2,
    ACTIONS(943), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6331] = 2,
    ACTIONS(945), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6339] = 2,
    ACTIONS(947), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6347] = 2,
    ACTIONS(949), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6355] = 2,
    ACTIONS(951), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6363] = 2,
    ACTIONS(953), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6371] = 2,
    ACTIONS(955), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6379] = 2,
    ACTIONS(957), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6387] = 2,
    ACTIONS(959), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6395] = 2,
    ACTIONS(961), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6403] = 2,
    ACTIONS(963), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6411] = 2,
    ACTIONS(965), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6419] = 2,
    ACTIONS(967), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6427] = 2,
    ACTIONS(969), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6435] = 2,
    ACTIONS(971), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6443] = 2,
    ACTIONS(973), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6451] = 2,
    ACTIONS(975), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6459] = 2,
    ACTIONS(977), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6467] = 2,
    ACTIONS(979), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6475] = 2,
    ACTIONS(981), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6483] = 2,
    ACTIONS(983), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6491] = 2,
    ACTIONS(985), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6499] = 2,
    ACTIONS(987), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6507] = 2,
    ACTIONS(989), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6515] = 2,
    ACTIONS(991), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6523] = 2,
    ACTIONS(993), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6531] = 2,
    ACTIONS(995), 1,
      sym__set_inter,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6539] = 2,
    ACTIONS(997), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6547] = 2,
    ACTIONS(999), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6555] = 2,
    ACTIONS(1001), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6563] = 2,
    ACTIONS(1003), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6571] = 2,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6579] = 2,
    ACTIONS(1007), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6587] = 2,
    ACTIONS(1009), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6595] = 2,
    ACTIONS(1011), 1,
      sym_short_description,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6603] = 2,
    ACTIONS(1013), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6611] = 2,
    ACTIONS(1015), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6619] = 2,
    ACTIONS(1017), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6627] = 2,
    ACTIONS(1019), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6635] = 2,
    ACTIONS(1021), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6643] = 2,
    ACTIONS(1023), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6651] = 2,
    ACTIONS(1025), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6659] = 2,
    ACTIONS(1027), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6667] = 2,
    ACTIONS(1029), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6675] = 2,
    ACTIONS(1031), 1,
      anon_sym_symbol,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6683] = 2,
    ACTIONS(1033), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6691] = 2,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6699] = 2,
    ACTIONS(1037), 1,
      anon_sym_Body,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6707] = 2,
    ACTIONS(1039), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym__comment,
      sym__skip,
  [6715] = 2,
    ACTIONS(1041), 1,
      anon_sym_in,
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
  [SMALL_STATE(7)] = 251,
  [SMALL_STATE(8)] = 300,
  [SMALL_STATE(9)] = 365,
  [SMALL_STATE(10)] = 414,
  [SMALL_STATE(11)] = 463,
  [SMALL_STATE(12)] = 512,
  [SMALL_STATE(13)] = 561,
  [SMALL_STATE(14)] = 626,
  [SMALL_STATE(15)] = 691,
  [SMALL_STATE(16)] = 753,
  [SMALL_STATE(17)] = 781,
  [SMALL_STATE(18)] = 808,
  [SMALL_STATE(19)] = 835,
  [SMALL_STATE(20)] = 862,
  [SMALL_STATE(21)] = 889,
  [SMALL_STATE(22)] = 916,
  [SMALL_STATE(23)] = 943,
  [SMALL_STATE(24)] = 970,
  [SMALL_STATE(25)] = 997,
  [SMALL_STATE(26)] = 1020,
  [SMALL_STATE(27)] = 1052,
  [SMALL_STATE(28)] = 1084,
  [SMALL_STATE(29)] = 1103,
  [SMALL_STATE(30)] = 1124,
  [SMALL_STATE(31)] = 1145,
  [SMALL_STATE(32)] = 1166,
  [SMALL_STATE(33)] = 1187,
  [SMALL_STATE(34)] = 1208,
  [SMALL_STATE(35)] = 1229,
  [SMALL_STATE(36)] = 1250,
  [SMALL_STATE(37)] = 1283,
  [SMALL_STATE(38)] = 1304,
  [SMALL_STATE(39)] = 1337,
  [SMALL_STATE(40)] = 1358,
  [SMALL_STATE(41)] = 1376,
  [SMALL_STATE(42)] = 1406,
  [SMALL_STATE(43)] = 1426,
  [SMALL_STATE(44)] = 1446,
  [SMALL_STATE(45)] = 1466,
  [SMALL_STATE(46)] = 1486,
  [SMALL_STATE(47)] = 1506,
  [SMALL_STATE(48)] = 1526,
  [SMALL_STATE(49)] = 1546,
  [SMALL_STATE(50)] = 1566,
  [SMALL_STATE(51)] = 1584,
  [SMALL_STATE(52)] = 1604,
  [SMALL_STATE(53)] = 1622,
  [SMALL_STATE(54)] = 1642,
  [SMALL_STATE(55)] = 1660,
  [SMALL_STATE(56)] = 1680,
  [SMALL_STATE(57)] = 1700,
  [SMALL_STATE(58)] = 1718,
  [SMALL_STATE(59)] = 1736,
  [SMALL_STATE(60)] = 1754,
  [SMALL_STATE(61)] = 1774,
  [SMALL_STATE(62)] = 1792,
  [SMALL_STATE(63)] = 1810,
  [SMALL_STATE(64)] = 1828,
  [SMALL_STATE(65)] = 1858,
  [SMALL_STATE(66)] = 1876,
  [SMALL_STATE(67)] = 1894,
  [SMALL_STATE(68)] = 1914,
  [SMALL_STATE(69)] = 1934,
  [SMALL_STATE(70)] = 1952,
  [SMALL_STATE(71)] = 1972,
  [SMALL_STATE(72)] = 1992,
  [SMALL_STATE(73)] = 2012,
  [SMALL_STATE(74)] = 2030,
  [SMALL_STATE(75)] = 2050,
  [SMALL_STATE(76)] = 2068,
  [SMALL_STATE(77)] = 2086,
  [SMALL_STATE(78)] = 2106,
  [SMALL_STATE(79)] = 2126,
  [SMALL_STATE(80)] = 2146,
  [SMALL_STATE(81)] = 2164,
  [SMALL_STATE(82)] = 2184,
  [SMALL_STATE(83)] = 2204,
  [SMALL_STATE(84)] = 2224,
  [SMALL_STATE(85)] = 2244,
  [SMALL_STATE(86)] = 2264,
  [SMALL_STATE(87)] = 2284,
  [SMALL_STATE(88)] = 2304,
  [SMALL_STATE(89)] = 2324,
  [SMALL_STATE(90)] = 2344,
  [SMALL_STATE(91)] = 2364,
  [SMALL_STATE(92)] = 2384,
  [SMALL_STATE(93)] = 2404,
  [SMALL_STATE(94)] = 2424,
  [SMALL_STATE(95)] = 2441,
  [SMALL_STATE(96)] = 2468,
  [SMALL_STATE(97)] = 2485,
  [SMALL_STATE(98)] = 2502,
  [SMALL_STATE(99)] = 2529,
  [SMALL_STATE(100)] = 2546,
  [SMALL_STATE(101)] = 2563,
  [SMALL_STATE(102)] = 2590,
  [SMALL_STATE(103)] = 2607,
  [SMALL_STATE(104)] = 2624,
  [SMALL_STATE(105)] = 2651,
  [SMALL_STATE(106)] = 2668,
  [SMALL_STATE(107)] = 2685,
  [SMALL_STATE(108)] = 2702,
  [SMALL_STATE(109)] = 2729,
  [SMALL_STATE(110)] = 2746,
  [SMALL_STATE(111)] = 2763,
  [SMALL_STATE(112)] = 2780,
  [SMALL_STATE(113)] = 2797,
  [SMALL_STATE(114)] = 2824,
  [SMALL_STATE(115)] = 2851,
  [SMALL_STATE(116)] = 2868,
  [SMALL_STATE(117)] = 2885,
  [SMALL_STATE(118)] = 2909,
  [SMALL_STATE(119)] = 2935,
  [SMALL_STATE(120)] = 2961,
  [SMALL_STATE(121)] = 2985,
  [SMALL_STATE(122)] = 3011,
  [SMALL_STATE(123)] = 3037,
  [SMALL_STATE(124)] = 3061,
  [SMALL_STATE(125)] = 3087,
  [SMALL_STATE(126)] = 3113,
  [SMALL_STATE(127)] = 3139,
  [SMALL_STATE(128)] = 3165,
  [SMALL_STATE(129)] = 3191,
  [SMALL_STATE(130)] = 3215,
  [SMALL_STATE(131)] = 3240,
  [SMALL_STATE(132)] = 3265,
  [SMALL_STATE(133)] = 3286,
  [SMALL_STATE(134)] = 3311,
  [SMALL_STATE(135)] = 3332,
  [SMALL_STATE(136)] = 3355,
  [SMALL_STATE(137)] = 3378,
  [SMALL_STATE(138)] = 3398,
  [SMALL_STATE(139)] = 3418,
  [SMALL_STATE(140)] = 3438,
  [SMALL_STATE(141)] = 3458,
  [SMALL_STATE(142)] = 3478,
  [SMALL_STATE(143)] = 3498,
  [SMALL_STATE(144)] = 3518,
  [SMALL_STATE(145)] = 3538,
  [SMALL_STATE(146)] = 3558,
  [SMALL_STATE(147)] = 3578,
  [SMALL_STATE(148)] = 3598,
  [SMALL_STATE(149)] = 3618,
  [SMALL_STATE(150)] = 3638,
  [SMALL_STATE(151)] = 3658,
  [SMALL_STATE(152)] = 3678,
  [SMALL_STATE(153)] = 3698,
  [SMALL_STATE(154)] = 3718,
  [SMALL_STATE(155)] = 3738,
  [SMALL_STATE(156)] = 3758,
  [SMALL_STATE(157)] = 3778,
  [SMALL_STATE(158)] = 3798,
  [SMALL_STATE(159)] = 3819,
  [SMALL_STATE(160)] = 3840,
  [SMALL_STATE(161)] = 3853,
  [SMALL_STATE(162)] = 3872,
  [SMALL_STATE(163)] = 3891,
  [SMALL_STATE(164)] = 3910,
  [SMALL_STATE(165)] = 3929,
  [SMALL_STATE(166)] = 3948,
  [SMALL_STATE(167)] = 3967,
  [SMALL_STATE(168)] = 3986,
  [SMALL_STATE(169)] = 4007,
  [SMALL_STATE(170)] = 4026,
  [SMALL_STATE(171)] = 4045,
  [SMALL_STATE(172)] = 4064,
  [SMALL_STATE(173)] = 4085,
  [SMALL_STATE(174)] = 4106,
  [SMALL_STATE(175)] = 4127,
  [SMALL_STATE(176)] = 4144,
  [SMALL_STATE(177)] = 4163,
  [SMALL_STATE(178)] = 4184,
  [SMALL_STATE(179)] = 4203,
  [SMALL_STATE(180)] = 4224,
  [SMALL_STATE(181)] = 4241,
  [SMALL_STATE(182)] = 4253,
  [SMALL_STATE(183)] = 4265,
  [SMALL_STATE(184)] = 4277,
  [SMALL_STATE(185)] = 4289,
  [SMALL_STATE(186)] = 4305,
  [SMALL_STATE(187)] = 4321,
  [SMALL_STATE(188)] = 4333,
  [SMALL_STATE(189)] = 4345,
  [SMALL_STATE(190)] = 4361,
  [SMALL_STATE(191)] = 4373,
  [SMALL_STATE(192)] = 4385,
  [SMALL_STATE(193)] = 4397,
  [SMALL_STATE(194)] = 4409,
  [SMALL_STATE(195)] = 4421,
  [SMALL_STATE(196)] = 4433,
  [SMALL_STATE(197)] = 4445,
  [SMALL_STATE(198)] = 4457,
  [SMALL_STATE(199)] = 4469,
  [SMALL_STATE(200)] = 4481,
  [SMALL_STATE(201)] = 4497,
  [SMALL_STATE(202)] = 4509,
  [SMALL_STATE(203)] = 4521,
  [SMALL_STATE(204)] = 4533,
  [SMALL_STATE(205)] = 4549,
  [SMALL_STATE(206)] = 4561,
  [SMALL_STATE(207)] = 4573,
  [SMALL_STATE(208)] = 4585,
  [SMALL_STATE(209)] = 4597,
  [SMALL_STATE(210)] = 4609,
  [SMALL_STATE(211)] = 4629,
  [SMALL_STATE(212)] = 4649,
  [SMALL_STATE(213)] = 4667,
  [SMALL_STATE(214)] = 4679,
  [SMALL_STATE(215)] = 4691,
  [SMALL_STATE(216)] = 4703,
  [SMALL_STATE(217)] = 4719,
  [SMALL_STATE(218)] = 4731,
  [SMALL_STATE(219)] = 4743,
  [SMALL_STATE(220)] = 4758,
  [SMALL_STATE(221)] = 4773,
  [SMALL_STATE(222)] = 4784,
  [SMALL_STATE(223)] = 4795,
  [SMALL_STATE(224)] = 4810,
  [SMALL_STATE(225)] = 4821,
  [SMALL_STATE(226)] = 4832,
  [SMALL_STATE(227)] = 4843,
  [SMALL_STATE(228)] = 4858,
  [SMALL_STATE(229)] = 4873,
  [SMALL_STATE(230)] = 4888,
  [SMALL_STATE(231)] = 4903,
  [SMALL_STATE(232)] = 4914,
  [SMALL_STATE(233)] = 4927,
  [SMALL_STATE(234)] = 4942,
  [SMALL_STATE(235)] = 4957,
  [SMALL_STATE(236)] = 4970,
  [SMALL_STATE(237)] = 4983,
  [SMALL_STATE(238)] = 4996,
  [SMALL_STATE(239)] = 5007,
  [SMALL_STATE(240)] = 5024,
  [SMALL_STATE(241)] = 5039,
  [SMALL_STATE(242)] = 5054,
  [SMALL_STATE(243)] = 5068,
  [SMALL_STATE(244)] = 5078,
  [SMALL_STATE(245)] = 5090,
  [SMALL_STATE(246)] = 5100,
  [SMALL_STATE(247)] = 5110,
  [SMALL_STATE(248)] = 5122,
  [SMALL_STATE(249)] = 5134,
  [SMALL_STATE(250)] = 5146,
  [SMALL_STATE(251)] = 5156,
  [SMALL_STATE(252)] = 5168,
  [SMALL_STATE(253)] = 5180,
  [SMALL_STATE(254)] = 5192,
  [SMALL_STATE(255)] = 5204,
  [SMALL_STATE(256)] = 5218,
  [SMALL_STATE(257)] = 5232,
  [SMALL_STATE(258)] = 5246,
  [SMALL_STATE(259)] = 5258,
  [SMALL_STATE(260)] = 5270,
  [SMALL_STATE(261)] = 5280,
  [SMALL_STATE(262)] = 5292,
  [SMALL_STATE(263)] = 5302,
  [SMALL_STATE(264)] = 5316,
  [SMALL_STATE(265)] = 5330,
  [SMALL_STATE(266)] = 5342,
  [SMALL_STATE(267)] = 5354,
  [SMALL_STATE(268)] = 5366,
  [SMALL_STATE(269)] = 5376,
  [SMALL_STATE(270)] = 5390,
  [SMALL_STATE(271)] = 5400,
  [SMALL_STATE(272)] = 5414,
  [SMALL_STATE(273)] = 5428,
  [SMALL_STATE(274)] = 5442,
  [SMALL_STATE(275)] = 5452,
  [SMALL_STATE(276)] = 5462,
  [SMALL_STATE(277)] = 5476,
  [SMALL_STATE(278)] = 5488,
  [SMALL_STATE(279)] = 5498,
  [SMALL_STATE(280)] = 5512,
  [SMALL_STATE(281)] = 5526,
  [SMALL_STATE(282)] = 5538,
  [SMALL_STATE(283)] = 5550,
  [SMALL_STATE(284)] = 5562,
  [SMALL_STATE(285)] = 5576,
  [SMALL_STATE(286)] = 5588,
  [SMALL_STATE(287)] = 5602,
  [SMALL_STATE(288)] = 5616,
  [SMALL_STATE(289)] = 5630,
  [SMALL_STATE(290)] = 5644,
  [SMALL_STATE(291)] = 5655,
  [SMALL_STATE(292)] = 5666,
  [SMALL_STATE(293)] = 5677,
  [SMALL_STATE(294)] = 5688,
  [SMALL_STATE(295)] = 5699,
  [SMALL_STATE(296)] = 5710,
  [SMALL_STATE(297)] = 5721,
  [SMALL_STATE(298)] = 5732,
  [SMALL_STATE(299)] = 5743,
  [SMALL_STATE(300)] = 5754,
  [SMALL_STATE(301)] = 5765,
  [SMALL_STATE(302)] = 5776,
  [SMALL_STATE(303)] = 5787,
  [SMALL_STATE(304)] = 5796,
  [SMALL_STATE(305)] = 5807,
  [SMALL_STATE(306)] = 5818,
  [SMALL_STATE(307)] = 5829,
  [SMALL_STATE(308)] = 5838,
  [SMALL_STATE(309)] = 5849,
  [SMALL_STATE(310)] = 5860,
  [SMALL_STATE(311)] = 5871,
  [SMALL_STATE(312)] = 5882,
  [SMALL_STATE(313)] = 5891,
  [SMALL_STATE(314)] = 5900,
  [SMALL_STATE(315)] = 5909,
  [SMALL_STATE(316)] = 5920,
  [SMALL_STATE(317)] = 5931,
  [SMALL_STATE(318)] = 5942,
  [SMALL_STATE(319)] = 5953,
  [SMALL_STATE(320)] = 5964,
  [SMALL_STATE(321)] = 5975,
  [SMALL_STATE(322)] = 5986,
  [SMALL_STATE(323)] = 5997,
  [SMALL_STATE(324)] = 6008,
  [SMALL_STATE(325)] = 6017,
  [SMALL_STATE(326)] = 6028,
  [SMALL_STATE(327)] = 6039,
  [SMALL_STATE(328)] = 6050,
  [SMALL_STATE(329)] = 6061,
  [SMALL_STATE(330)] = 6072,
  [SMALL_STATE(331)] = 6083,
  [SMALL_STATE(332)] = 6094,
  [SMALL_STATE(333)] = 6105,
  [SMALL_STATE(334)] = 6116,
  [SMALL_STATE(335)] = 6127,
  [SMALL_STATE(336)] = 6138,
  [SMALL_STATE(337)] = 6149,
  [SMALL_STATE(338)] = 6160,
  [SMALL_STATE(339)] = 6171,
  [SMALL_STATE(340)] = 6179,
  [SMALL_STATE(341)] = 6187,
  [SMALL_STATE(342)] = 6195,
  [SMALL_STATE(343)] = 6203,
  [SMALL_STATE(344)] = 6211,
  [SMALL_STATE(345)] = 6219,
  [SMALL_STATE(346)] = 6227,
  [SMALL_STATE(347)] = 6235,
  [SMALL_STATE(348)] = 6243,
  [SMALL_STATE(349)] = 6251,
  [SMALL_STATE(350)] = 6259,
  [SMALL_STATE(351)] = 6267,
  [SMALL_STATE(352)] = 6275,
  [SMALL_STATE(353)] = 6283,
  [SMALL_STATE(354)] = 6291,
  [SMALL_STATE(355)] = 6299,
  [SMALL_STATE(356)] = 6307,
  [SMALL_STATE(357)] = 6315,
  [SMALL_STATE(358)] = 6323,
  [SMALL_STATE(359)] = 6331,
  [SMALL_STATE(360)] = 6339,
  [SMALL_STATE(361)] = 6347,
  [SMALL_STATE(362)] = 6355,
  [SMALL_STATE(363)] = 6363,
  [SMALL_STATE(364)] = 6371,
  [SMALL_STATE(365)] = 6379,
  [SMALL_STATE(366)] = 6387,
  [SMALL_STATE(367)] = 6395,
  [SMALL_STATE(368)] = 6403,
  [SMALL_STATE(369)] = 6411,
  [SMALL_STATE(370)] = 6419,
  [SMALL_STATE(371)] = 6427,
  [SMALL_STATE(372)] = 6435,
  [SMALL_STATE(373)] = 6443,
  [SMALL_STATE(374)] = 6451,
  [SMALL_STATE(375)] = 6459,
  [SMALL_STATE(376)] = 6467,
  [SMALL_STATE(377)] = 6475,
  [SMALL_STATE(378)] = 6483,
  [SMALL_STATE(379)] = 6491,
  [SMALL_STATE(380)] = 6499,
  [SMALL_STATE(381)] = 6507,
  [SMALL_STATE(382)] = 6515,
  [SMALL_STATE(383)] = 6523,
  [SMALL_STATE(384)] = 6531,
  [SMALL_STATE(385)] = 6539,
  [SMALL_STATE(386)] = 6547,
  [SMALL_STATE(387)] = 6555,
  [SMALL_STATE(388)] = 6563,
  [SMALL_STATE(389)] = 6571,
  [SMALL_STATE(390)] = 6579,
  [SMALL_STATE(391)] = 6587,
  [SMALL_STATE(392)] = 6595,
  [SMALL_STATE(393)] = 6603,
  [SMALL_STATE(394)] = 6611,
  [SMALL_STATE(395)] = 6619,
  [SMALL_STATE(396)] = 6627,
  [SMALL_STATE(397)] = 6635,
  [SMALL_STATE(398)] = 6643,
  [SMALL_STATE(399)] = 6651,
  [SMALL_STATE(400)] = 6659,
  [SMALL_STATE(401)] = 6667,
  [SMALL_STATE(402)] = 6675,
  [SMALL_STATE(403)] = 6683,
  [SMALL_STATE(404)] = 6691,
  [SMALL_STATE(405)] = 6699,
  [SMALL_STATE(406)] = 6707,
  [SMALL_STATE(407)] = 6715,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_body, 1),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(402),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(380),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(264),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(403),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(406),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(290),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(266),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(378),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(377),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(256),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(370),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(316),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 31), SHIFT_REPEAT(272),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 31), SHIFT_REPEAT(273),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 31), SHIFT_REPEAT(279),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 31), SHIFT_REPEAT(286),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 31), SHIFT_REPEAT(287),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 31), SHIFT_REPEAT(288),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 31), SHIFT_REPEAT(289),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 31), SHIFT_REPEAT(368),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 31), SHIFT_REPEAT(346),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 2, .production_id = 31),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_descr, 3, .production_id = 9),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_descr, 3, .production_id = 9),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_expression, 3, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_expression, 3, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_instance, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ni, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ni, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 4, .production_id = 36),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 4, .production_id = 36),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_description, 2, .production_id = 24),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_description, 2, .production_id = 24),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 8, .production_id = 21),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 32),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 32),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 29),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 2, .production_id = 29),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 28),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 2, .production_id = 28),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 27),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 2, .production_id = 27),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 26),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 2, .production_id = 26),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 2, .production_id = 25),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 2, .production_id = 25),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 2, .production_id = 23),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 2, .production_id = 23),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 19),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 19),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 9, .production_id = 30),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 18),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 18),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6, .production_id = 22),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 3, .production_id = 33),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 3, .production_id = 33),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 17),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 17),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_metadata, 8, .production_id = 20),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5, .production_id = 12),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_output, 7, .production_id = 11),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 16),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 10),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 6),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_inter, 7),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_result, 3, .production_id = 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_sql, 4, .production_id = 6),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 15),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, .production_id = 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 14),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_siard_metadata_repeat1, 1, .production_id = 13),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_using, 3, .production_id = 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dbname, 4, .production_id = 35),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dbname, 4, .production_id = 35),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiver, 4, .production_id = 37),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiver, 4, .production_id = 37),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 38),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_archiverContact, 4, .production_id = 38),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 11, .production_id = 49),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 11, .production_id = 49),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 10, .production_id = 48),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 10, .production_id = 48),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 39),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOwner, 4, .production_id = 39),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 40),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_dataOriginTimespan, 4, .production_id = 40),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 9, .production_id = 47),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 9, .production_id = 47),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 41),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__siard_lobFolder, 4, .production_id = 41),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 5, .production_id = 33),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 5, .production_id = 33),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 43),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 43),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 6, .production_id = 33),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 6, .production_id = 33),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 8, .production_id = 46),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 8, .production_id = 46),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 6, .production_id = 44),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 6, .production_id = 44),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_schema, 7, .production_id = 43),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_siard_schema, 7, .production_id = 43),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 7, .production_id = 45),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 7, .production_id = 45),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(152),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(157),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_repeat1, 2), SHIFT_REPEAT(180),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(353),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(360),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2), SHIFT_REPEAT(361),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_table_repeat1, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(160),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(138),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(216),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(385),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(383),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2), SHIFT_REPEAT(381),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_schema_repeat1, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2), SHIFT_REPEAT(175),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 43),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 33),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 6, .production_id = 43),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 6, .production_id = 43),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(280),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2), SHIFT_REPEAT(351),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_column_repeat1, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 6, .production_id = 33),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 5, .production_id = 33),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(212),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 7, .production_id = 43),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 7, .production_id = 43),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation2, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 7, .production_id = 43),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 33),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_check, 3, .production_id = 32),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 33),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_key, 3, .production_id = 32),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 33),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_column, 3, .production_id = 32),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2), SHIFT_REPEAT(353),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_siard_view_repeat1, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 33),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 6, .production_id = 43),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 33),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(204),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 6, .production_id = 43),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 6, .production_id = 43),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 5, .production_id = 33),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 5, .production_id = 33),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 33),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 32),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_table, 3, .production_id = 33),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_view, 3, .production_id = 32),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_type, 3, .production_id = 32),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 32),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 2, .production_id = 34),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 43),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 4, .production_id = 42),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 7, .production_id = 43),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 6, .production_id = 33),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 3, .production_id = 33),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 7),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2), SHIFT_REPEAT(375),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_variables_repeat1, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_siard_field, 5, .production_id = 33),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_i, 2, .production_id = 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 4),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [959] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_variables, 3),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
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
