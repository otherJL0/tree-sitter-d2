#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOT = 1,
  anon_sym_COLON = 2,
  anon_sym_SEMI = 3,
  sym_comment = 4,
  aux_sym_shape_token1 = 5,
  anon_sym_shape = 6,
  anon_sym_DASH_DASH = 7,
  anon_sym_DASH_GT = 8,
  anon_sym_LT_DASH = 9,
  anon_sym_LT_DASH_GT = 10,
  sym_source_file = 11,
  sym__block = 12,
  sym_shape_expression = 13,
  sym_connection_expression = 14,
  sym_shape = 15,
  sym_label = 16,
  sym_field = 17,
  sym_connection = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_shape_expression_repeat1 = 20,
  aux_sym_connection_expression_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [aux_sym_shape_token1] = "shape_token1",
  [anon_sym_shape] = "shape",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_LT_DASH_GT] = "<->",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_shape_expression] = "shape_expression",
  [sym_connection_expression] = "connection_expression",
  [sym_shape] = "shape",
  [sym_label] = "label",
  [sym_field] = "field",
  [sym_connection] = "connection",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_shape_expression_repeat1] = "shape_expression_repeat1",
  [aux_sym_connection_expression_repeat1] = "connection_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [aux_sym_shape_token1] = aux_sym_shape_token1,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_LT_DASH_GT] = anon_sym_LT_DASH_GT,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_shape_expression] = sym_shape_expression,
  [sym_connection_expression] = sym_connection_expression,
  [sym_shape] = sym_shape,
  [sym_label] = sym_label,
  [sym_field] = sym_field,
  [sym_connection] = sym_connection,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_shape_expression_repeat1] = aux_sym_shape_expression_repeat1,
  [aux_sym_connection_expression_repeat1] = aux_sym_connection_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_shape_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_shape_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_connection_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shape_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_connection_expression_repeat1] = {
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 3,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'h') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_shape_token1);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_shape_token1);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_shape_token1);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '>') ADVANCE(21);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_shape_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_shape_token1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__block] = STATE(6),
    [sym_shape_expression] = STATE(6),
    [sym_connection_expression] = STATE(6),
    [sym_shape] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [aux_sym_shape_token1] = ACTIONS(7),
  },
  [2] = {
    [sym_connection] = STATE(20),
    [aux_sym_shape_expression_repeat1] = STATE(14),
    [aux_sym_connection_expression_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [aux_sym_shape_token1] = ACTIONS(17),
    [anon_sym_DASH_DASH] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LT_DASH] = ACTIONS(19),
    [anon_sym_LT_DASH_GT] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 9,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
      sym_comment,
      aux_sym_shape_token1,
      anon_sym_DASH_DASH,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LT_DASH_GT,
  [15] = 5,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_connection_expression_repeat1,
    STATE(20), 1,
      sym_connection,
    ACTIONS(27), 2,
      sym_comment,
      aux_sym_shape_token1,
    ACTIONS(29), 4,
      anon_sym_DASH_DASH,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LT_DASH_GT,
  [35] = 5,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_connection_expression_repeat1,
    STATE(20), 1,
      sym_connection,
    ACTIONS(34), 2,
      sym_comment,
      aux_sym_shape_token1,
    ACTIONS(19), 4,
      anon_sym_DASH_DASH,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LT_DASH_GT,
  [55] = 5,
    ACTIONS(7), 1,
      aux_sym_shape_token1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_comment,
    STATE(2), 1,
      sym_shape,
    STATE(7), 4,
      sym__block,
      sym_shape_expression,
      sym_connection_expression,
      aux_sym_source_file_repeat1,
  [74] = 5,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_shape_token1,
    STATE(2), 1,
      sym_shape,
    STATE(7), 4,
      sym__block,
      sym_shape_expression,
      sym_connection_expression,
      aux_sym_source_file_repeat1,
  [93] = 2,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 6,
      sym_comment,
      aux_sym_shape_token1,
      anon_sym_DASH_DASH,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LT_DASH_GT,
  [105] = 5,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(50), 1,
      anon_sym_COLON,
    ACTIONS(52), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_shape_expression_repeat1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      aux_sym_shape_token1,
  [122] = 4,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(56), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_shape_expression_repeat1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      aux_sym_shape_token1,
  [136] = 4,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(60), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_shape_expression_repeat1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym_shape_token1,
  [150] = 4,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_shape_expression_repeat1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      aux_sym_shape_token1,
  [164] = 4,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_shape_expression_repeat1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym_shape_token1,
  [178] = 4,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_shape_expression_repeat1,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      aux_sym_shape_token1,
  [192] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym_shape_token1,
    ACTIONS(79), 3,
      anon_sym_COLON,
      anon_sym_SEMI,
      sym_comment,
  [202] = 4,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_shape_expression_repeat1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      aux_sym_shape_token1,
  [216] = 2,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym_shape_token1,
    ACTIONS(71), 2,
      anon_sym_SEMI,
      sym_comment,
  [225] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      aux_sym_shape_token1,
    ACTIONS(83), 2,
      anon_sym_SEMI,
      sym_comment,
  [234] = 2,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      aux_sym_shape_token1,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      sym_comment,
  [243] = 2,
    ACTIONS(7), 1,
      aux_sym_shape_token1,
    STATE(8), 1,
      sym_shape,
  [250] = 2,
    ACTIONS(85), 1,
      aux_sym_shape_token1,
    STATE(11), 1,
      sym_label,
  [257] = 2,
    ACTIONS(87), 1,
      aux_sym_shape_token1,
    STATE(17), 1,
      sym_shape,
  [264] = 2,
    ACTIONS(85), 1,
      aux_sym_shape_token1,
    STATE(16), 1,
      sym_label,
  [271] = 2,
    ACTIONS(89), 1,
      anon_sym_shape,
    STATE(9), 1,
      sym_field,
  [278] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
  [282] = 1,
    ACTIONS(93), 1,
      aux_sym_shape_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 15,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 164,
  [SMALL_STATE(14)] = 178,
  [SMALL_STATE(15)] = 192,
  [SMALL_STATE(16)] = 202,
  [SMALL_STATE(17)] = 216,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 234,
  [SMALL_STATE(20)] = 243,
  [SMALL_STATE(21)] = 250,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 264,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 278,
  [SMALL_STATE(26)] = 282,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_expression, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_expression, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_expression_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_expression_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_expression_repeat1, 2), SHIFT_REPEAT(26),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection_expression, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection_expression, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_expression, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_expression, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_expression, 6),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_expression, 6),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_expression, 5),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_expression, 5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_expression, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_expression, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_expression_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shape_expression_repeat1, 2), SHIFT_REPEAT(22),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shape_expression_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_expression, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_expression, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_d2(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
