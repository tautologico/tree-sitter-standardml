#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_functor = 1,
  anon_sym_val = 2,
  anon_sym_type = 3,
  anon_sym_EQ = 4,
  anon_sym_rec = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_and = 9,
  anon_sym_DASH_GT = 10,
  anon_sym_STAR = 11,
  anon_sym_LBRACE = 12,
  anon_sym_COLON = 13,
  anon_sym_RBRACE = 14,
  anon_sym_TILDE = 15,
  aux_sym_int_token1 = 16,
  sym_char = 17,
  anon_sym_DOT = 18,
  aux_sym_longid_token1 = 19,
  sym_id = 20,
  aux_sym_lab_token1 = 21,
  sym_var = 22,
  sym_prog = 23,
  sym_dec = 24,
  sym_valbind = 25,
  sym_typbind = 26,
  sym_typ = 27,
  sym_pat = 28,
  sym_exp = 29,
  sym_con = 30,
  sym_int = 31,
  sym_longid = 32,
  sym_lab = 33,
  aux_sym_typbind_repeat1 = 34,
  aux_sym_typbind_repeat2 = 35,
  aux_sym_typ_repeat1 = 36,
  aux_sym_typ_repeat2 = 37,
  aux_sym_longid_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_functor] = "functor",
  [anon_sym_val] = "val",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_rec] = "rec",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_and] = "and",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TILDE] = "~",
  [aux_sym_int_token1] = "int_token1",
  [sym_char] = "char",
  [anon_sym_DOT] = ".",
  [aux_sym_longid_token1] = "longid_token1",
  [sym_id] = "id",
  [aux_sym_lab_token1] = "lab_token1",
  [sym_var] = "var",
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
  [sym_lab] = "lab",
  [aux_sym_typbind_repeat1] = "typbind_repeat1",
  [aux_sym_typbind_repeat2] = "typbind_repeat2",
  [aux_sym_typ_repeat1] = "typ_repeat1",
  [aux_sym_typ_repeat2] = "typ_repeat2",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [sym_char] = sym_char,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_longid_token1] = aux_sym_longid_token1,
  [sym_id] = sym_id,
  [aux_sym_lab_token1] = aux_sym_lab_token1,
  [sym_var] = sym_var,
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
  [sym_lab] = sym_lab,
  [aux_sym_typbind_repeat1] = aux_sym_typbind_repeat1,
  [aux_sym_typbind_repeat2] = aux_sym_typbind_repeat2,
  [aux_sym_typ_repeat1] = aux_sym_typ_repeat1,
  [aux_sym_typ_repeat2] = aux_sym_typ_repeat2,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [aux_sym_lab_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_var] = {
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
  [sym_lab] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_typbind_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typbind_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typ_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typ_repeat2] = {
    .visible = false,
    .named = false,
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
  [17] = 16,
  [18] = 14,
  [19] = 8,
  [20] = 4,
  [21] = 6,
  [22] = 5,
  [23] = 13,
  [24] = 15,
  [25] = 12,
  [26] = 26,
  [27] = 9,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 26,
  [34] = 29,
  [35] = 31,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 10,
  [46] = 44,
  [47] = 43,
  [48] = 48,
  [49] = 32,
  [50] = 50,
  [51] = 51,
  [52] = 7,
  [53] = 53,
  [54] = 28,
  [55] = 11,
  [56] = 50,
  [57] = 48,
  [58] = 39,
  [59] = 40,
  [60] = 42,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 69,
  [75] = 72,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 67,
  [80] = 78,
  [81] = 81,
  [82] = 73,
  [83] = 70,
  [84] = 66,
  [85] = 76,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 91,
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
  [106] = 105,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 104,
  [113] = 113,
  [114] = 114,
  [115] = 103,
  [116] = 101,
  [117] = 117,
  [118] = 100,
  [119] = 109,
  [120] = 102,
  [121] = 97,
  [122] = 113,
  [123] = 123,
  [124] = 111,
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

static inline bool sym_id_character_set_3(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '/' || c == ':'))
    : (c <= '@' || (c < '`'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '`' || (c >= '|' && c <= '~')))));
}

static inline bool sym_id_character_set_4(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
        ? c == '/'
        : c <= ':')))
    : (c <= '@' || (c < '`'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '`' || (c >= '|' && c <= '~')))));
}

static inline bool sym_id_character_set_5(int32_t c) {
  return (c < ':'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '/'
        ? c == '-'
        : c <= '/')))
    : (c <= ':' || (c < '^'
      ? (c < '\\'
        ? (c >= '<' && c <= '@')
        : c <= '\\')
      : (c <= '^' || (c < '|'
        ? c == '`'
        : c <= '~')))));
}

static inline bool sym_id_character_set_6(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
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
      if (eof) ADVANCE(44);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') SKIP(40)
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '~') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '(') SKIP(11)
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == '~') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_id_character_set_1(lookahead)) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_id_character_set_2(lookahead)) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '(') SKIP(15)
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_id_character_set_3(lookahead)) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '(') SKIP(15)
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_id_character_set_4(lookahead)) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == '(') SKIP(16)
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (sym_id_character_set_5(lookahead)) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == ')') SKIP(3)
      if (lookahead != 0) SKIP(12)
      END_STATE();
    case 9:
      if (lookahead == ')') SKIP(6)
      if (lookahead != 0) SKIP(13)
      END_STATE();
    case 10:
      if (lookahead == ')') SKIP(7)
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 11:
      if (lookahead == '*') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == '*') SKIP(8)
      if (lookahead != 0) SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '*') SKIP(9)
      if (lookahead != 0) SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '*') SKIP(10)
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '*') SKIP(13)
      END_STATE();
    case 16:
      if (lookahead == '*') SKIP(14)
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 33:
      if (sym_id_character_set_2(lookahead)) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 35:
      if (eof) ADVANCE(44);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') SKIP(40)
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '~') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 36:
      if (eof) ADVANCE(44);
      if (lookahead == '(') SKIP(43)
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (sym_id_character_set_6(lookahead)) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 37:
      if (eof) ADVANCE(44);
      if (lookahead == '(') SKIP(43)
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (sym_id_character_set_6(lookahead)) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 38:
      if (eof) ADVANCE(44);
      if (lookahead == ')') SKIP(35)
      if (lookahead != 0) SKIP(41)
      END_STATE();
    case 39:
      if (eof) ADVANCE(44);
      if (lookahead == ')') SKIP(37)
      if (lookahead != 0) SKIP(42)
      END_STATE();
    case 40:
      if (eof) ADVANCE(44);
      if (lookahead == '*') SKIP(41)
      END_STATE();
    case 41:
      if (eof) ADVANCE(44);
      if (lookahead == '*') SKIP(38)
      if (lookahead != 0) SKIP(41)
      END_STATE();
    case 42:
      if (eof) ADVANCE(44);
      if (lookahead == '*') SKIP(39)
      if (lookahead != 0) SKIP(42)
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '*') SKIP(42)
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_functor);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_longid_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_longid_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_id);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '"') ADVANCE(34);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_lab_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '\'') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
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
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 36},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 33},
  [106] = {.lex_state = 33},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_functor] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_lab_token1] = ACTIONS(1),
    [sym_var] = ACTIONS(1),
  },
  [1] = {
    [sym_prog] = STATE(93),
    [sym_dec] = STATE(94),
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
    STATE(87), 1,
      sym_int,
    STATE(95), 1,
      sym_valbind,
    STATE(96), 1,
      sym_con,
    STATE(108), 1,
      sym_pat,
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
    STATE(87), 1,
      sym_int,
    STATE(96), 1,
      sym_con,
    STATE(107), 1,
      sym_valbind,
    STATE(108), 1,
      sym_pat,
  [56] = 4,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(24), 1,
      sym_id,
    STATE(4), 1,
      aux_sym_longid_repeat1,
    ACTIONS(19), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [73] = 4,
    ACTIONS(28), 1,
      anon_sym_DOT,
    ACTIONS(30), 1,
      sym_id,
    STATE(6), 1,
      aux_sym_longid_repeat1,
    ACTIONS(26), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [90] = 4,
    ACTIONS(28), 1,
      anon_sym_DOT,
    ACTIONS(34), 1,
      sym_id,
    STATE(4), 1,
      aux_sym_longid_repeat1,
    ACTIONS(32), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [107] = 3,
    ACTIONS(38), 1,
      sym_id,
    STATE(42), 1,
      sym_longid,
    ACTIONS(36), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [121] = 7,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_and,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      anon_sym_STAR,
    ACTIONS(48), 1,
      sym_id,
    STATE(57), 1,
      sym_longid,
    STATE(83), 1,
      aux_sym_typbind_repeat2,
  [143] = 3,
    ACTIONS(38), 1,
      sym_id,
    STATE(48), 1,
      sym_longid,
    ACTIONS(36), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [157] = 5,
    ACTIONS(50), 1,
      anon_sym_DASH_GT,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      sym_id,
    STATE(48), 1,
      sym_longid,
    ACTIONS(36), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [175] = 2,
    ACTIONS(24), 1,
      sym_id,
    ACTIONS(19), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [187] = 7,
    ACTIONS(50), 1,
      anon_sym_DASH_GT,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_longid,
    STATE(80), 1,
      aux_sym_typ_repeat1,
  [209] = 7,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      anon_sym_STAR,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_and,
    STATE(57), 1,
      sym_longid,
    STATE(85), 1,
      aux_sym_typbind_repeat2,
  [231] = 7,
    ACTIONS(50), 1,
      anon_sym_DASH_GT,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_longid,
    STATE(75), 1,
      aux_sym_typ_repeat2,
  [253] = 7,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      anon_sym_STAR,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_and,
    STATE(57), 1,
      sym_longid,
    STATE(66), 1,
      aux_sym_typbind_repeat2,
  [275] = 7,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      anon_sym_STAR,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_and,
    STATE(57), 1,
      sym_longid,
    STATE(82), 1,
      aux_sym_typbind_repeat2,
  [297] = 7,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      anon_sym_STAR,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_and,
    STATE(57), 1,
      sym_longid,
    STATE(73), 1,
      aux_sym_typbind_repeat2,
  [319] = 7,
    ACTIONS(50), 1,
      anon_sym_DASH_GT,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_longid,
    STATE(72), 1,
      aux_sym_typ_repeat2,
  [341] = 7,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      anon_sym_STAR,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(76), 1,
      anon_sym_and,
    STATE(57), 1,
      sym_longid,
    STATE(70), 1,
      aux_sym_typbind_repeat2,
  [363] = 4,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_longid_repeat1,
    ACTIONS(24), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [379] = 4,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_longid_repeat1,
    ACTIONS(34), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [395] = 4,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_longid_repeat1,
    ACTIONS(30), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(26), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [411] = 7,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      anon_sym_STAR,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_and,
    STATE(57), 1,
      sym_longid,
    STATE(76), 1,
      aux_sym_typbind_repeat2,
  [433] = 7,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      anon_sym_STAR,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_and,
    STATE(57), 1,
      sym_longid,
    STATE(84), 1,
      aux_sym_typbind_repeat2,
  [455] = 7,
    ACTIONS(50), 1,
      anon_sym_DASH_GT,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_longid,
    STATE(78), 1,
      aux_sym_typ_repeat1,
  [477] = 6,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_var,
    STATE(23), 1,
      sym_typ,
    STATE(56), 1,
      sym_longid,
  [496] = 3,
    STATE(57), 1,
      sym_longid,
    ACTIONS(38), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [509] = 6,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_var,
    STATE(14), 1,
      sym_typ,
    STATE(50), 1,
      sym_longid,
  [528] = 6,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_var,
    STATE(25), 1,
      sym_typ,
    STATE(50), 1,
      sym_longid,
  [547] = 5,
    ACTIONS(50), 1,
      anon_sym_DASH_GT,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      sym_id,
    STATE(48), 1,
      sym_longid,
    ACTIONS(99), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [564] = 6,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_var,
    STATE(16), 1,
      sym_typ,
    STATE(56), 1,
      sym_longid,
  [583] = 6,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_var,
    STATE(8), 1,
      sym_typ,
    STATE(56), 1,
      sym_longid,
  [602] = 6,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_var,
    STATE(13), 1,
      sym_typ,
    STATE(56), 1,
      sym_longid,
  [621] = 6,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_var,
    STATE(12), 1,
      sym_typ,
    STATE(50), 1,
      sym_longid,
  [640] = 6,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_var,
    STATE(17), 1,
      sym_typ,
    STATE(56), 1,
      sym_longid,
  [659] = 6,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(15), 1,
      sym_char,
    STATE(87), 1,
      sym_int,
    STATE(114), 1,
      sym_con,
    STATE(117), 1,
      sym_exp,
  [678] = 6,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_var,
    STATE(24), 1,
      sym_typ,
    STATE(56), 1,
      sym_longid,
  [697] = 6,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_var,
    STATE(15), 1,
      sym_typ,
    STATE(56), 1,
      sym_longid,
  [716] = 2,
    ACTIONS(103), 1,
      sym_id,
    ACTIONS(101), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [727] = 2,
    ACTIONS(107), 1,
      sym_id,
    ACTIONS(105), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [738] = 6,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_var,
    STATE(50), 1,
      sym_longid,
    STATE(53), 1,
      sym_typ,
  [757] = 2,
    ACTIONS(111), 1,
      sym_id,
    ACTIONS(109), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [768] = 6,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_var,
    STATE(9), 1,
      sym_typ,
    STATE(50), 1,
      sym_longid,
  [787] = 6,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_var,
    STATE(10), 1,
      sym_typ,
    STATE(50), 1,
      sym_longid,
  [806] = 6,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_and,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      anon_sym_STAR,
    ACTIONS(48), 1,
      sym_id,
    STATE(57), 1,
      sym_longid,
  [825] = 6,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_var,
    STATE(45), 1,
      sym_typ,
    STATE(56), 1,
      sym_longid,
  [844] = 6,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_var,
    STATE(27), 1,
      sym_typ,
    STATE(56), 1,
      sym_longid,
  [863] = 2,
    ACTIONS(115), 1,
      sym_id,
    ACTIONS(113), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [874] = 6,
    ACTIONS(48), 1,
      sym_id,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_var,
    STATE(19), 1,
      sym_typ,
    STATE(56), 1,
      sym_longid,
  [893] = 2,
    ACTIONS(119), 1,
      sym_id,
    ACTIONS(117), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [904] = 6,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_var,
    STATE(30), 1,
      sym_typ,
    STATE(50), 1,
      sym_longid,
  [923] = 3,
    STATE(60), 1,
      sym_longid,
    ACTIONS(38), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [936] = 5,
    ACTIONS(50), 1,
      anon_sym_DASH_GT,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      sym_id,
    STATE(48), 1,
      sym_longid,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [953] = 6,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_var,
    STATE(18), 1,
      sym_typ,
    STATE(50), 1,
      sym_longid,
  [972] = 2,
    ACTIONS(24), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_DOT,
  [983] = 2,
    ACTIONS(119), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [993] = 2,
    ACTIONS(115), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [1003] = 2,
    ACTIONS(103), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [1013] = 2,
    ACTIONS(107), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [1023] = 2,
    ACTIONS(111), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [1033] = 4,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_id,
    ACTIONS(127), 1,
      sym_var,
    STATE(95), 1,
      sym_typbind,
  [1046] = 4,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_id,
    ACTIONS(133), 1,
      sym_var,
    STATE(88), 1,
      sym_typbind,
  [1059] = 3,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_lab,
    ACTIONS(137), 2,
      sym_id,
      aux_sym_lab_token1,
  [1070] = 3,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_lab,
    ACTIONS(137), 2,
      sym_id,
      aux_sym_lab_token1,
  [1081] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_typ_repeat2,
  [1091] = 2,
    STATE(77), 1,
      aux_sym_typbind_repeat2,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_and,
  [1099] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_typbind_repeat1,
  [1109] = 3,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_typ_repeat1,
  [1119] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_typbind_repeat1,
  [1129] = 3,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_and,
    STATE(77), 1,
      aux_sym_typbind_repeat2,
  [1139] = 2,
    STATE(123), 1,
      sym_lab,
    ACTIONS(137), 2,
      sym_id,
      aux_sym_lab_token1,
  [1147] = 3,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_typ_repeat2,
  [1157] = 3,
    ACTIONS(155), 1,
      anon_sym_and,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      aux_sym_typbind_repeat2,
  [1167] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_typbind_repeat1,
  [1177] = 3,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_typ_repeat2,
  [1187] = 3,
    ACTIONS(155), 1,
      anon_sym_and,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      aux_sym_typbind_repeat2,
  [1197] = 3,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      anon_sym_and,
    STATE(77), 1,
      aux_sym_typbind_repeat2,
  [1207] = 3,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_typ_repeat1,
  [1217] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_typbind_repeat1,
  [1227] = 3,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_typ_repeat1,
  [1237] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_typbind_repeat1,
  [1247] = 2,
    STATE(77), 1,
      aux_sym_typbind_repeat2,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_and,
  [1255] = 2,
    STATE(77), 1,
      aux_sym_typbind_repeat2,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_and,
  [1263] = 3,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_and,
    STATE(77), 1,
      aux_sym_typbind_repeat2,
  [1273] = 2,
    STATE(77), 1,
      aux_sym_typbind_repeat2,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_and,
  [1281] = 1,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1286] = 1,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1291] = 1,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_and,
  [1296] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1301] = 1,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1306] = 2,
    ACTIONS(189), 1,
      sym_id,
    STATE(59), 1,
      sym_longid,
  [1313] = 2,
    ACTIONS(191), 1,
      sym_id,
    STATE(40), 1,
      sym_longid,
  [1320] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [1324] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [1328] = 1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [1332] = 1,
    ACTIONS(199), 1,
      anon_sym_EQ,
  [1336] = 1,
    ACTIONS(201), 1,
      anon_sym_COLON,
  [1340] = 1,
    ACTIONS(203), 1,
      aux_sym_int_token1,
  [1344] = 1,
    ACTIONS(205), 1,
      anon_sym_COLON,
  [1348] = 1,
    ACTIONS(207), 1,
      sym_id,
  [1352] = 1,
    ACTIONS(209), 1,
      anon_sym_EQ,
  [1356] = 1,
    ACTIONS(211), 1,
      sym_id,
  [1360] = 1,
    ACTIONS(213), 1,
      anon_sym_EQ,
  [1364] = 1,
    ACTIONS(215), 1,
      anon_sym_EQ,
  [1368] = 1,
    ACTIONS(217), 1,
      aux_sym_longid_token1,
  [1372] = 1,
    ACTIONS(219), 1,
      aux_sym_longid_token1,
  [1376] = 1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
  [1380] = 1,
    ACTIONS(223), 1,
      anon_sym_EQ,
  [1384] = 1,
    ACTIONS(225), 1,
      sym_id,
  [1388] = 1,
    ACTIONS(227), 1,
      sym_var,
  [1392] = 1,
    ACTIONS(229), 1,
      sym_var,
  [1396] = 1,
    ACTIONS(231), 1,
      anon_sym_EQ,
  [1400] = 1,
    ACTIONS(233), 1,
      anon_sym_EQ,
  [1404] = 1,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
  [1408] = 1,
    ACTIONS(237), 1,
      anon_sym_EQ,
  [1412] = 1,
    ACTIONS(239), 1,
      anon_sym_EQ,
  [1416] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
  [1420] = 1,
    ACTIONS(243), 1,
      sym_id,
  [1424] = 1,
    ACTIONS(245), 1,
      sym_id,
  [1428] = 1,
    ACTIONS(247), 1,
      sym_id,
  [1432] = 1,
    ACTIONS(249), 1,
      anon_sym_COLON,
  [1436] = 1,
    ACTIONS(251), 1,
      anon_sym_EQ,
  [1440] = 1,
    ACTIONS(253), 1,
      anon_sym_COLON,
  [1444] = 1,
    ACTIONS(255), 1,
      sym_var,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 187,
  [SMALL_STATE(13)] = 209,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 253,
  [SMALL_STATE(16)] = 275,
  [SMALL_STATE(17)] = 297,
  [SMALL_STATE(18)] = 319,
  [SMALL_STATE(19)] = 341,
  [SMALL_STATE(20)] = 363,
  [SMALL_STATE(21)] = 379,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 411,
  [SMALL_STATE(24)] = 433,
  [SMALL_STATE(25)] = 455,
  [SMALL_STATE(26)] = 477,
  [SMALL_STATE(27)] = 496,
  [SMALL_STATE(28)] = 509,
  [SMALL_STATE(29)] = 528,
  [SMALL_STATE(30)] = 547,
  [SMALL_STATE(31)] = 564,
  [SMALL_STATE(32)] = 583,
  [SMALL_STATE(33)] = 602,
  [SMALL_STATE(34)] = 621,
  [SMALL_STATE(35)] = 640,
  [SMALL_STATE(36)] = 659,
  [SMALL_STATE(37)] = 678,
  [SMALL_STATE(38)] = 697,
  [SMALL_STATE(39)] = 716,
  [SMALL_STATE(40)] = 727,
  [SMALL_STATE(41)] = 738,
  [SMALL_STATE(42)] = 757,
  [SMALL_STATE(43)] = 768,
  [SMALL_STATE(44)] = 787,
  [SMALL_STATE(45)] = 806,
  [SMALL_STATE(46)] = 825,
  [SMALL_STATE(47)] = 844,
  [SMALL_STATE(48)] = 863,
  [SMALL_STATE(49)] = 874,
  [SMALL_STATE(50)] = 893,
  [SMALL_STATE(51)] = 904,
  [SMALL_STATE(52)] = 923,
  [SMALL_STATE(53)] = 936,
  [SMALL_STATE(54)] = 953,
  [SMALL_STATE(55)] = 972,
  [SMALL_STATE(56)] = 983,
  [SMALL_STATE(57)] = 993,
  [SMALL_STATE(58)] = 1003,
  [SMALL_STATE(59)] = 1013,
  [SMALL_STATE(60)] = 1023,
  [SMALL_STATE(61)] = 1033,
  [SMALL_STATE(62)] = 1046,
  [SMALL_STATE(63)] = 1059,
  [SMALL_STATE(64)] = 1070,
  [SMALL_STATE(65)] = 1081,
  [SMALL_STATE(66)] = 1091,
  [SMALL_STATE(67)] = 1099,
  [SMALL_STATE(68)] = 1109,
  [SMALL_STATE(69)] = 1119,
  [SMALL_STATE(70)] = 1129,
  [SMALL_STATE(71)] = 1139,
  [SMALL_STATE(72)] = 1147,
  [SMALL_STATE(73)] = 1157,
  [SMALL_STATE(74)] = 1167,
  [SMALL_STATE(75)] = 1177,
  [SMALL_STATE(76)] = 1187,
  [SMALL_STATE(77)] = 1197,
  [SMALL_STATE(78)] = 1207,
  [SMALL_STATE(79)] = 1217,
  [SMALL_STATE(80)] = 1227,
  [SMALL_STATE(81)] = 1237,
  [SMALL_STATE(82)] = 1247,
  [SMALL_STATE(83)] = 1255,
  [SMALL_STATE(84)] = 1263,
  [SMALL_STATE(85)] = 1273,
  [SMALL_STATE(86)] = 1281,
  [SMALL_STATE(87)] = 1286,
  [SMALL_STATE(88)] = 1291,
  [SMALL_STATE(89)] = 1296,
  [SMALL_STATE(90)] = 1301,
  [SMALL_STATE(91)] = 1306,
  [SMALL_STATE(92)] = 1313,
  [SMALL_STATE(93)] = 1320,
  [SMALL_STATE(94)] = 1324,
  [SMALL_STATE(95)] = 1328,
  [SMALL_STATE(96)] = 1332,
  [SMALL_STATE(97)] = 1336,
  [SMALL_STATE(98)] = 1340,
  [SMALL_STATE(99)] = 1344,
  [SMALL_STATE(100)] = 1348,
  [SMALL_STATE(101)] = 1352,
  [SMALL_STATE(102)] = 1356,
  [SMALL_STATE(103)] = 1360,
  [SMALL_STATE(104)] = 1364,
  [SMALL_STATE(105)] = 1368,
  [SMALL_STATE(106)] = 1372,
  [SMALL_STATE(107)] = 1376,
  [SMALL_STATE(108)] = 1380,
  [SMALL_STATE(109)] = 1384,
  [SMALL_STATE(110)] = 1388,
  [SMALL_STATE(111)] = 1392,
  [SMALL_STATE(112)] = 1396,
  [SMALL_STATE(113)] = 1400,
  [SMALL_STATE(114)] = 1404,
  [SMALL_STATE(115)] = 1408,
  [SMALL_STATE(116)] = 1412,
  [SMALL_STATE(117)] = 1416,
  [SMALL_STATE(118)] = 1420,
  [SMALL_STATE(119)] = 1424,
  [SMALL_STATE(120)] = 1428,
  [SMALL_STATE(121)] = 1432,
  [SMALL_STATE(122)] = 1436,
  [SMALL_STATE(123)] = 1440,
  [SMALL_STATE(124)] = 1444,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_longid_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_longid_repeat1, 2), SHIFT_REPEAT(106),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_longid_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_longid, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_longid, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_longid, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_longid, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 6),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typbind, 6),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typbind, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typbind, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 7),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typbind, 7),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_longid_repeat1, 2), SHIFT_REPEAT(105),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typ_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 6),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typ_repeat2, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typ_repeat2, 2), SHIFT_REPEAT(71),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typ_repeat2, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typ_repeat1, 2), SHIFT_REPEAT(51),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 8),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typbind_repeat2, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typbind_repeat2, 2), SHIFT_REPEAT(62),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typbind_repeat1, 2), SHIFT_REPEAT(110),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typbind_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valbind, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valbind, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
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
