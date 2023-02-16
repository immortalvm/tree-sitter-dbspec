#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_run = 1,
  anon_sym_sql = 2,
  anon_sym_var = 3,
  sym__indent = 4,
  sym__dedent = 5,
  sym__inter_start = 6,
  sym__inter_end = 7,
  sym__raw = 8,
  sym__string_start = 9,
  sym__string_content = 10,
  sym__string_end = 11,
  sym__comment = 12,
  sym_source_file = 13,
  sym_run_sql = 14,
  aux_sym__sql = 15,
  sym_raw_sql = 16,
  sym_interpolant = 17,
  aux_sym_source_file_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_run] = "run",
  [anon_sym_sql] = "sql",
  [anon_sym_var] = "var",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__inter_start] = "_inter_start",
  [sym__inter_end] = "_inter_end",
  [sym__raw] = "_raw",
  [sym__string_start] = "_string_start",
  [sym__string_content] = "_string_content",
  [sym__string_end] = "_string_end",
  [sym__comment] = "_comment",
  [sym_source_file] = "source_file",
  [sym_run_sql] = "run_sql",
  [aux_sym__sql] = "_sql",
  [sym_raw_sql] = "raw_sql",
  [sym_interpolant] = "interpolant",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_run] = anon_sym_run,
  [anon_sym_sql] = anon_sym_sql,
  [anon_sym_var] = anon_sym_var,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__inter_start] = sym__inter_start,
  [sym__inter_end] = sym__inter_end,
  [sym__raw] = sym__raw,
  [sym__string_start] = sym__string_start,
  [sym__string_content] = sym__string_content,
  [sym__string_end] = sym__string_end,
  [sym__comment] = sym__comment,
  [sym_source_file] = sym_source_file,
  [sym_run_sql] = sym_run_sql,
  [aux_sym__sql] = aux_sym__sql,
  [sym_raw_sql] = sym_raw_sql,
  [sym_interpolant] = sym_interpolant,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
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
    .visible = false,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__string_end] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_run_sql] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sql] = {
    .visible = false,
    .named = false,
  },
  [sym_raw_sql] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'q') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_sql);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0, .external_lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0, .external_lex_state = 5},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__inter_start = 2,
  ts_external_token__inter_end = 3,
  ts_external_token__raw = 4,
  ts_external_token__string_start = 5,
  ts_external_token__string_content = 6,
  ts_external_token__string_end = 7,
  ts_external_token__comment = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__inter_start] = sym__inter_start,
  [ts_external_token__inter_end] = sym__inter_end,
  [ts_external_token__raw] = sym__raw,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token__string_end] = sym__string_end,
  [ts_external_token__comment] = sym__comment,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__inter_start] = true,
    [ts_external_token__inter_end] = true,
    [ts_external_token__raw] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token__comment] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__inter_start] = true,
    [ts_external_token__raw] = true,
  },
  [3] = {
    [ts_external_token__inter_start] = true,
    [ts_external_token__raw] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
  [5] = {
    [ts_external_token__inter_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_sql] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__inter_start] = ACTIONS(1),
    [sym__inter_end] = ACTIONS(1),
    [sym__raw] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
    [sym__comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_run_sql] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_run] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      sym__dedent,
    ACTIONS(9), 1,
      sym__inter_start,
    ACTIONS(11), 1,
      sym__raw,
    STATE(3), 3,
      aux_sym__sql,
      sym_raw_sql,
      sym_interpolant,
  [15] = 4,
    ACTIONS(13), 1,
      sym__dedent,
    ACTIONS(15), 1,
      sym__inter_start,
    ACTIONS(18), 1,
      sym__raw,
    STATE(3), 3,
      aux_sym__sql,
      sym_raw_sql,
      sym_interpolant,
  [30] = 3,
    ACTIONS(9), 1,
      sym__inter_start,
    ACTIONS(11), 1,
      sym__raw,
    STATE(2), 3,
      aux_sym__sql,
      sym_raw_sql,
      sym_interpolant,
  [42] = 3,
    ACTIONS(5), 1,
      anon_sym_run,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_run_sql,
      aux_sym_source_file_repeat1,
  [53] = 3,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_run,
    STATE(6), 2,
      sym_run_sql,
      aux_sym_source_file_repeat1,
  [64] = 1,
    ACTIONS(28), 3,
      sym__dedent,
      sym__inter_start,
      sym__raw,
  [70] = 1,
    ACTIONS(30), 3,
      sym__dedent,
      sym__inter_start,
      sym__raw,
  [76] = 1,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      anon_sym_run,
  [81] = 1,
    ACTIONS(34), 1,
      anon_sym_sql,
  [85] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
  [89] = 1,
    ACTIONS(38), 1,
      sym__indent,
  [93] = 1,
    ACTIONS(40), 1,
      anon_sym_var,
  [97] = 1,
    ACTIONS(42), 1,
      sym__inter_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 81,
  [SMALL_STATE(11)] = 85,
  [SMALL_STATE(12)] = 89,
  [SMALL_STATE(13)] = 93,
  [SMALL_STATE(14)] = 97,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sql, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sql, 2), SHIFT_REPEAT(13),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sql, 2), SHIFT_REPEAT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_sql, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolant, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_sql, 5),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [36] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
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
