#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_functor = 1,
  anon_sym_val = 2,
  anon_sym_type = 3,
  anon_sym_EQ = 4,
  anon_sym_rec = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_TILDE = 8,
  aux_sym_int_token1 = 9,
  sym_char = 10,
  anon_sym_DOT = 11,
  aux_sym_longid_token1 = 12,
  sym_id = 13,
  sym_prog = 14,
  sym_dec = 15,
  sym_valbind = 16,
  sym_typbind = 17,
  sym_typ = 18,
  sym_pat = 19,
  sym_exp = 20,
  sym_con = 21,
  sym_int = 22,
  sym_longid = 23,
  aux_sym_longid_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_functor] = "functor",
  [anon_sym_val] = "val",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_rec] = "rec",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_TILDE] = "~",
  [aux_sym_int_token1] = "int_token1",
  [sym_char] = "char",
  [anon_sym_DOT] = ".",
  [aux_sym_longid_token1] = "longid_token1",
  [sym_id] = "id",
  [sym_prog] = "prog",
  [sym_dec] = "dec",
  [sym_valbind] = "valbind",
  [sym_typbind] = "typbind",
  [sym_typ] = "typ",
  [sym_pat] = "pat",
  [sym_exp] = "exp",
  [sym_con] = "con",
  [sym_int] = "int",
  [sym_longid] = "longid",
  [aux_sym_longid_repeat1] = "longid_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_functor] = anon_sym_functor,
  [anon_sym_val] = anon_sym_val,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_rec] = anon_sym_rec,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [sym_char] = sym_char,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_longid_token1] = aux_sym_longid_token1,
  [sym_id] = sym_id,
  [sym_prog] = sym_prog,
  [sym_dec] = sym_dec,
  [sym_valbind] = sym_valbind,
  [sym_typbind] = sym_typbind,
  [sym_typ] = sym_typ,
  [sym_pat] = sym_pat,
  [sym_exp] = sym_exp,
  [sym_con] = sym_con,
  [sym_int] = sym_int,
  [sym_longid] = sym_longid,
  [aux_sym_longid_repeat1] = aux_sym_longid_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_functor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_longid_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_prog] = {
    .visible = true,
    .named = true,
  },
  [sym_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_valbind] = {
    .visible = true,
    .named = true,
  },
  [sym_typbind] = {
    .visible = true,
    .named = true,
  },
  [sym_typ] = {
    .visible = true,
    .named = true,
  },
  [sym_pat] = {
    .visible = true,
    .named = true,
  },
  [sym_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_con] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_longid] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_longid_repeat1] = {
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
  [29] = 29,
};

static inline bool sym_id_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '/'
        ? c == '-'
        : c <= ':')))
    : (c <= '@' || (c < '`'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '`' || c == '|'))));
}

static inline bool sym_id_character_set_2(int32_t c) {
  return (c < '<'
    ? (c < '-'
      ? (c < '#'
        ? c == '!'
        : (c <= '&' || (c >= '*' && c <= '+')))
      : (c <= '-' || (c < ':'
        ? c == '/'
        : c <= ':')))
    : (c <= '@' || (c < '`'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '`' || (c < '~'
        ? c == '|'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') SKIP(29)
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '(') SKIP(8)
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_id_character_set_1(lookahead)) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_id_character_set_2(lookahead)) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '(') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_id_character_set_2(lookahead)) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == ')') SKIP(3)
      if (lookahead != 0) SKIP(9)
      END_STATE();
    case 7:
      if (lookahead == ')') SKIP(5)
      if (lookahead != 0) SKIP(10)
      END_STATE();
    case 8:
      if (lookahead == '*') SKIP(9)
      END_STATE();
    case 9:
      if (lookahead == '*') SKIP(6)
      if (lookahead != 0) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '*') SKIP(7)
      if (lookahead != 0) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '*') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 25:
      if (sym_id_character_set_2(lookahead)) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 27:
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') SKIP(29)
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 28:
      if (eof) ADVANCE(31);
      if (lookahead == ')') SKIP(27)
      if (lookahead != 0) SKIP(30)
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '*') SKIP(30)
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '*') SKIP(28)
      if (lookahead != 0) SKIP(30)
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_functor);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_longid_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_longid_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_id);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '"') ADVANCE(26);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_functor] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_prog] = STATE(29),
    [sym_dec] = STATE(20),
    [anon_sym_functor] = ACTIONS(3),
    [anon_sym_val] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      anon_sym_rec,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(15), 1,
      sym_char,
    ACTIONS(17), 1,
      sym_id,
    STATE(13), 1,
      sym_int,
    STATE(26), 1,
      sym_pat,
    STATE(27), 1,
      sym_valbind,
    STATE(28), 1,
      sym_con,
  [28] = 9,
    ACTIONS(9), 1,
      anon_sym_rec,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(15), 1,
      sym_char,
    ACTIONS(17), 1,
      sym_id,
    STATE(13), 1,
      sym_int,
    STATE(21), 1,
      sym_valbind,
    STATE(26), 1,
      sym_pat,
    STATE(28), 1,
      sym_con,
  [56] = 6,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(15), 1,
      sym_char,
    STATE(13), 1,
      sym_int,
    STATE(18), 1,
      sym_exp,
    STATE(19), 1,
      sym_con,
  [75] = 4,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_id,
    STATE(15), 1,
      sym_longid,
    STATE(22), 1,
      sym_typ,
  [88] = 3,
    ACTIONS(25), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_longid_repeat1,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [99] = 3,
    ACTIONS(30), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_longid_repeat1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [110] = 3,
    ACTIONS(30), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_longid_repeat1,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [121] = 4,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_id,
    STATE(15), 1,
      sym_longid,
    STATE(24), 1,
      sym_typ,
  [134] = 1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [140] = 2,
    ACTIONS(34), 1,
      sym_id,
    STATE(27), 1,
      sym_typbind,
  [147] = 1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [152] = 1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [157] = 1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [162] = 1,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [167] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [172] = 1,
    ACTIONS(46), 1,
      aux_sym_int_token1,
  [176] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [180] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [184] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [188] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [192] = 1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
  [196] = 1,
    ACTIONS(58), 1,
      anon_sym_EQ,
  [200] = 1,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
  [204] = 1,
    ACTIONS(62), 1,
      aux_sym_longid_token1,
  [208] = 1,
    ACTIONS(64), 1,
      anon_sym_EQ,
  [212] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [216] = 1,
    ACTIONS(68), 1,
      anon_sym_EQ,
  [220] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 121,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 140,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 152,
  [SMALL_STATE(14)] = 157,
  [SMALL_STATE(15)] = 162,
  [SMALL_STATE(16)] = 167,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 176,
  [SMALL_STATE(19)] = 180,
  [SMALL_STATE(20)] = 184,
  [SMALL_STATE(21)] = 188,
  [SMALL_STATE(22)] = 192,
  [SMALL_STATE(23)] = 196,
  [SMALL_STATE(24)] = 200,
  [SMALL_STATE(25)] = 204,
  [SMALL_STATE(26)] = 208,
  [SMALL_STATE(27)] = 212,
  [SMALL_STATE(28)] = 216,
  [SMALL_STATE(29)] = 220,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_longid_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_longid_repeat1, 2), SHIFT_REPEAT(25),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_longid, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_longid, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valbind, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valbind, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 1),
  [70] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_standardml(void) {
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
