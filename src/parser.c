#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_0x = 16,
  anon_sym_0w = 17,
  anon_sym_0wx = 18,
  aux_sym_float_token1 = 19,
  aux_sym_float_token2 = 20,
  sym_char = 21,
  sym_string = 22,
  sym__num = 23,
  sym__hex = 24,
  anon_sym_DOT = 25,
  aux_sym_longid_token1 = 26,
  sym_id = 27,
  aux_sym_lab_token1 = 28,
  sym_var = 29,
  sym_prog = 30,
  sym_dec = 31,
  sym_valbind = 32,
  sym_typbind = 33,
  sym_typ = 34,
  sym_pat = 35,
  sym_exp = 36,
  sym__con = 37,
  sym_int = 38,
  sym_word = 39,
  sym_float = 40,
  sym_longid = 41,
  sym_lab = 42,
  aux_sym_typbind_repeat1 = 43,
  aux_sym_typbind_repeat2 = 44,
  aux_sym_typ_repeat1 = 45,
  aux_sym_typ_repeat2 = 46,
  aux_sym_exp_repeat1 = 47,
  aux_sym_longid_repeat1 = 48,
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
  [anon_sym_0x] = "0x",
  [anon_sym_0w] = "0w",
  [anon_sym_0wx] = "0wx",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__num] = "_num",
  [sym__hex] = "_hex",
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
  [sym__con] = "_con",
  [sym_int] = "int",
  [sym_word] = "word",
  [sym_float] = "float",
  [sym_longid] = "longid",
  [sym_lab] = "lab",
  [aux_sym_typbind_repeat1] = "typbind_repeat1",
  [aux_sym_typbind_repeat2] = "typbind_repeat2",
  [aux_sym_typ_repeat1] = "typ_repeat1",
  [aux_sym_typ_repeat2] = "typ_repeat2",
  [aux_sym_exp_repeat1] = "exp_repeat1",
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
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_0w] = anon_sym_0w,
  [anon_sym_0wx] = anon_sym_0wx,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym__num] = sym__num,
  [sym__hex] = sym__hex,
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
  [sym__con] = sym__con,
  [sym_int] = sym_int,
  [sym_word] = sym_word,
  [sym_float] = sym_float,
  [sym_longid] = sym_longid,
  [sym_lab] = sym_lab,
  [aux_sym_typbind_repeat1] = aux_sym_typbind_repeat1,
  [aux_sym_typbind_repeat2] = aux_sym_typbind_repeat2,
  [aux_sym_typ_repeat1] = aux_sym_typ_repeat1,
  [aux_sym_typ_repeat2] = aux_sym_typ_repeat2,
  [aux_sym_exp_repeat1] = aux_sym_exp_repeat1,
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
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0wx] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__num] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
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
  [sym__con] = {
    .visible = false,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [aux_sym_exp_repeat1] = {
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
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 14,
  [24] = 9,
  [25] = 8,
  [26] = 12,
  [27] = 16,
  [28] = 22,
  [29] = 13,
  [30] = 30,
  [31] = 17,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 32,
  [39] = 39,
  [40] = 40,
  [41] = 18,
  [42] = 21,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 35,
  [49] = 49,
  [50] = 50,
  [51] = 37,
  [52] = 40,
  [53] = 39,
  [54] = 43,
  [55] = 20,
  [56] = 56,
  [57] = 50,
  [58] = 56,
  [59] = 44,
  [60] = 36,
  [61] = 45,
  [62] = 46,
  [63] = 30,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 64,
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
  [86] = 79,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 84,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 77,
  [96] = 96,
  [97] = 76,
  [98] = 98,
  [99] = 83,
  [100] = 85,
  [101] = 90,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 102,
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
  [127] = 127,
  [128] = 128,
  [129] = 111,
  [130] = 114,
  [131] = 131,
  [132] = 127,
  [133] = 128,
  [134] = 134,
  [135] = 109,
  [136] = 120,
  [137] = 107,
  [138] = 138,
  [139] = 138,
  [140] = 123,
  [141] = 112,
};

static inline bool sym_id_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '-'
      ? (c < '*'
        ? (c >= '!' && c <= '&')
        : c <= '+')
      : (c <= '-' || (c >= '/' && c <= ':')))
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
      if (eof) ADVANCE(65);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '(') SKIP(59)
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') SKIP(17)
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (sym_id_character_set_1(lookahead)) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_id_character_set_2(lookahead)) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 9:
      if (lookahead == '(') SKIP(22)
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_id_character_set_3(lookahead)) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == '(') SKIP(22)
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_id_character_set_4(lookahead)) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 11:
      if (lookahead == '(') SKIP(23)
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (sym_id_character_set_5(lookahead)) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 12:
      if (lookahead == '(') SKIP(24)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 13:
      if (lookahead == ')') SKIP(2)
      if (lookahead != 0) SKIP(18)
      END_STATE();
    case 14:
      if (lookahead == ')') SKIP(10)
      if (lookahead != 0) SKIP(19)
      END_STATE();
    case 15:
      if (lookahead == ')') SKIP(11)
      if (lookahead != 0) SKIP(20)
      END_STATE();
    case 16:
      if (lookahead == ')') SKIP(12)
      if (lookahead != 0) SKIP(21)
      END_STATE();
    case 17:
      if (lookahead == '*') SKIP(18)
      END_STATE();
    case 18:
      if (lookahead == '*') SKIP(13)
      if (lookahead != 0) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '*') SKIP(14)
      if (lookahead != 0) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '*') SKIP(15)
      if (lookahead != 0) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '*') SKIP(16)
      if (lookahead != 0) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '*') SKIP(19)
      END_STATE();
    case 23:
      if (lookahead == '*') SKIP(20)
      END_STATE();
    case 24:
      if (lookahead == '*') SKIP(21)
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == '~') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      if (sym_id_character_set_2(lookahead)) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      if (eof) ADVANCE(65);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '(') SKIP(59)
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(101);
      END_STATE();
    case 53:
      if (eof) ADVANCE(65);
      if (lookahead == '(') SKIP(63)
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 54:
      if (eof) ADVANCE(65);
      if (lookahead == '(') SKIP(64)
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (sym_id_character_set_6(lookahead)) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 55:
      if (eof) ADVANCE(65);
      if (lookahead == '(') SKIP(64)
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (sym_id_character_set_6(lookahead)) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 56:
      if (eof) ADVANCE(65);
      if (lookahead == ')') SKIP(52)
      if (lookahead != 0) SKIP(60)
      END_STATE();
    case 57:
      if (eof) ADVANCE(65);
      if (lookahead == ')') SKIP(53)
      if (lookahead != 0) SKIP(61)
      END_STATE();
    case 58:
      if (eof) ADVANCE(65);
      if (lookahead == ')') SKIP(55)
      if (lookahead != 0) SKIP(62)
      END_STATE();
    case 59:
      if (eof) ADVANCE(65);
      if (lookahead == '*') SKIP(60)
      END_STATE();
    case 60:
      if (eof) ADVANCE(65);
      if (lookahead == '*') SKIP(56)
      if (lookahead != 0) SKIP(60)
      END_STATE();
    case 61:
      if (eof) ADVANCE(65);
      if (lookahead == '*') SKIP(57)
      if (lookahead != 0) SKIP(61)
      END_STATE();
    case 62:
      if (eof) ADVANCE(65);
      if (lookahead == '*') SKIP(58)
      if (lookahead != 0) SKIP(62)
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == '*') SKIP(61)
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '*') SKIP(62)
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_functor);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_0w);
      if (lookahead == 'x') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_0wx);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '"') ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__num);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__num);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__num);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__num);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__num);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == 'n') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == 'u') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '~') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_longid_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_longid_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '"') ADVANCE(26);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_lab_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '\'') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 54},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 54},
  [42] = {.lex_state = 54},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 54},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 54},
  [60] = {.lex_state = 54},
  [61] = {.lex_state = 54},
  [62] = {.lex_state = 54},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 53},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 53},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 53},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 53},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 53},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 53},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 53},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 53},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 53},
  [100] = {.lex_state = 53},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 53},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 47},
  [124] = {.lex_state = 53},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 47},
  [141] = {.lex_state = 0},
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
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_0w] = ACTIONS(1),
    [anon_sym_0wx] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym__num] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_lab_token1] = ACTIONS(1),
    [sym_var] = ACTIONS(1),
  },
  [1] = {
    [sym_prog] = STATE(131),
    [sym_dec] = STATE(113),
    [anon_sym_functor] = ACTIONS(3),
    [anon_sym_val] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      anon_sym_rec,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      anon_sym_0x,
    ACTIONS(15), 1,
      anon_sym_0w,
    ACTIONS(17), 1,
      anon_sym_0wx,
    ACTIONS(19), 1,
      aux_sym_float_token1,
    ACTIONS(21), 1,
      aux_sym_float_token2,
    ACTIONS(25), 1,
      sym__num,
    ACTIONS(27), 1,
      sym_id,
    STATE(115), 1,
      sym_pat,
    STATE(116), 1,
      sym_valbind,
    ACTIONS(23), 2,
      sym_char,
      sym_string,
    STATE(118), 4,
      sym__con,
      sym_int,
      sym_word,
      sym_float,
  [44] = 13,
    ACTIONS(9), 1,
      anon_sym_rec,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      anon_sym_0x,
    ACTIONS(15), 1,
      anon_sym_0w,
    ACTIONS(17), 1,
      anon_sym_0wx,
    ACTIONS(19), 1,
      aux_sym_float_token1,
    ACTIONS(21), 1,
      aux_sym_float_token2,
    ACTIONS(25), 1,
      sym__num,
    ACTIONS(27), 1,
      sym_id,
    STATE(108), 1,
      sym_valbind,
    STATE(115), 1,
      sym_pat,
    ACTIONS(23), 2,
      sym_char,
      sym_string,
    STATE(118), 4,
      sym__con,
      sym_int,
      sym_word,
      sym_float,
  [88] = 10,
    ACTIONS(15), 1,
      anon_sym_0w,
    ACTIONS(25), 1,
      sym__num,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_0x,
    ACTIONS(35), 1,
      anon_sym_0wx,
    STATE(104), 1,
      sym_exp,
    ACTIONS(19), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(37), 2,
      sym_char,
      sym_string,
    STATE(98), 4,
      sym__con,
      sym_int,
      sym_word,
      sym_float,
  [124] = 10,
    ACTIONS(15), 1,
      anon_sym_0w,
    ACTIONS(25), 1,
      sym__num,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_0x,
    ACTIONS(35), 1,
      anon_sym_0wx,
    STATE(121), 1,
      sym_exp,
    ACTIONS(19), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(37), 2,
      sym_char,
      sym_string,
    STATE(98), 4,
      sym__con,
      sym_int,
      sym_word,
      sym_float,
  [160] = 10,
    ACTIONS(15), 1,
      anon_sym_0w,
    ACTIONS(25), 1,
      sym__num,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_0x,
    ACTIONS(35), 1,
      anon_sym_0wx,
    STATE(96), 1,
      sym_exp,
    ACTIONS(19), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(37), 2,
      sym_char,
      sym_string,
    STATE(98), 4,
      sym__con,
      sym_int,
      sym_word,
      sym_float,
  [196] = 10,
    ACTIONS(15), 1,
      anon_sym_0w,
    ACTIONS(25), 1,
      sym__num,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_0x,
    ACTIONS(35), 1,
      anon_sym_0wx,
    STATE(117), 1,
      sym_exp,
    ACTIONS(19), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(37), 2,
      sym_char,
      sym_string,
    STATE(98), 4,
      sym__con,
      sym_int,
      sym_word,
      sym_float,
  [232] = 4,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_id,
    STATE(9), 1,
      aux_sym_longid_repeat1,
    ACTIONS(39), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [249] = 4,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_id,
    STATE(10), 1,
      aux_sym_longid_repeat1,
    ACTIONS(45), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [266] = 4,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(54), 1,
      sym_id,
    STATE(10), 1,
      aux_sym_longid_repeat1,
    ACTIONS(49), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [283] = 7,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_and,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(62), 1,
      anon_sym_STAR,
    ACTIONS(64), 1,
      sym_id,
    STATE(60), 1,
      sym_longid,
    STATE(97), 1,
      aux_sym_typbind_repeat2,
  [305] = 7,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(70), 1,
      anon_sym_DASH_GT,
    ACTIONS(72), 1,
      anon_sym_STAR,
    ACTIONS(74), 1,
      sym_id,
    STATE(36), 1,
      sym_longid,
    STATE(91), 1,
      aux_sym_typ_repeat1,
  [327] = 7,
    ACTIONS(70), 1,
      anon_sym_DASH_GT,
    ACTIONS(72), 1,
      anon_sym_STAR,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_longid,
    STATE(86), 1,
      aux_sym_typ_repeat2,
  [349] = 7,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(62), 1,
      anon_sym_STAR,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_and,
    STATE(60), 1,
      sym_longid,
    STATE(92), 1,
      aux_sym_typbind_repeat2,
  [371] = 7,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(62), 1,
      anon_sym_STAR,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(84), 1,
      anon_sym_and,
    STATE(60), 1,
      sym_longid,
    STATE(76), 1,
      aux_sym_typbind_repeat2,
  [393] = 7,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(62), 1,
      anon_sym_STAR,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_and,
    STATE(60), 1,
      sym_longid,
    STATE(99), 1,
      aux_sym_typbind_repeat2,
  [415] = 3,
    ACTIONS(92), 1,
      sym_id,
    STATE(36), 1,
      sym_longid,
    ACTIONS(90), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [429] = 5,
    ACTIONS(70), 1,
      anon_sym_DASH_GT,
    ACTIONS(72), 1,
      anon_sym_STAR,
    ACTIONS(74), 1,
      sym_id,
    STATE(36), 1,
      sym_longid,
    ACTIONS(90), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [447] = 4,
    ACTIONS(94), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_longid_repeat1,
    ACTIONS(54), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [463] = 2,
    ACTIONS(54), 1,
      sym_id,
    ACTIONS(49), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [475] = 3,
    ACTIONS(92), 1,
      sym_id,
    STATE(44), 1,
      sym_longid,
    ACTIONS(90), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [489] = 7,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(62), 1,
      anon_sym_STAR,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_and,
    STATE(60), 1,
      sym_longid,
    STATE(85), 1,
      aux_sym_typbind_repeat2,
  [511] = 7,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(62), 1,
      anon_sym_STAR,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_and,
    STATE(60), 1,
      sym_longid,
    STATE(94), 1,
      aux_sym_typbind_repeat2,
  [533] = 4,
    ACTIONS(101), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_longid_repeat1,
    ACTIONS(47), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [549] = 4,
    ACTIONS(101), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_longid_repeat1,
    ACTIONS(43), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [565] = 7,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_DASH_GT,
    ACTIONS(72), 1,
      anon_sym_STAR,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_longid,
    STATE(84), 1,
      aux_sym_typ_repeat1,
  [587] = 7,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(62), 1,
      anon_sym_STAR,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(84), 1,
      anon_sym_and,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_longid,
    STATE(83), 1,
      aux_sym_typbind_repeat2,
  [609] = 7,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(62), 1,
      anon_sym_STAR,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(84), 1,
      anon_sym_and,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_longid,
    STATE(100), 1,
      aux_sym_typbind_repeat2,
  [631] = 7,
    ACTIONS(70), 1,
      anon_sym_DASH_GT,
    ACTIONS(72), 1,
      anon_sym_STAR,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_longid,
    STATE(79), 1,
      aux_sym_typ_repeat2,
  [653] = 2,
    ACTIONS(109), 1,
      sym_id,
    ACTIONS(107), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [664] = 3,
    STATE(60), 1,
      sym_longid,
    ACTIONS(92), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [677] = 6,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_var,
    STATE(29), 1,
      sym_typ,
    STATE(30), 1,
      sym_longid,
  [696] = 5,
    ACTIONS(70), 1,
      anon_sym_DASH_GT,
    ACTIONS(72), 1,
      anon_sym_STAR,
    ACTIONS(74), 1,
      sym_id,
    STATE(36), 1,
      sym_longid,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [713] = 6,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_var,
    STATE(30), 1,
      sym_longid,
    STATE(33), 1,
      sym_typ,
  [732] = 6,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_var,
    STATE(12), 1,
      sym_typ,
    STATE(30), 1,
      sym_longid,
  [751] = 2,
    ACTIONS(121), 1,
      sym_id,
    ACTIONS(119), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [762] = 6,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_var,
    STATE(23), 1,
      sym_typ,
    STATE(63), 1,
      sym_longid,
  [781] = 6,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_var,
    STATE(13), 1,
      sym_typ,
    STATE(30), 1,
      sym_longid,
  [800] = 6,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_var,
    STATE(18), 1,
      sym_typ,
    STATE(30), 1,
      sym_longid,
  [819] = 6,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_var,
    STATE(28), 1,
      sym_typ,
    STATE(63), 1,
      sym_longid,
  [838] = 6,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(62), 1,
      anon_sym_STAR,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      anon_sym_and,
    STATE(60), 1,
      sym_longid,
  [857] = 3,
    STATE(59), 1,
      sym_longid,
    ACTIONS(92), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [870] = 6,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_var,
    STATE(17), 1,
      sym_typ,
    STATE(30), 1,
      sym_longid,
  [889] = 2,
    ACTIONS(131), 1,
      sym_id,
    ACTIONS(129), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [900] = 2,
    ACTIONS(135), 1,
      sym_id,
    ACTIONS(133), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [911] = 2,
    ACTIONS(139), 1,
      sym_id,
    ACTIONS(137), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_RBRACE,
  [922] = 6,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_var,
    STATE(30), 1,
      sym_longid,
    STATE(49), 1,
      sym_typ,
  [941] = 6,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_var,
    STATE(26), 1,
      sym_typ,
    STATE(30), 1,
      sym_longid,
  [960] = 5,
    ACTIONS(70), 1,
      anon_sym_DASH_GT,
    ACTIONS(72), 1,
      anon_sym_STAR,
    ACTIONS(74), 1,
      sym_id,
    STATE(36), 1,
      sym_longid,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [977] = 6,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_var,
    STATE(15), 1,
      sym_typ,
    STATE(63), 1,
      sym_longid,
  [996] = 6,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_var,
    STATE(14), 1,
      sym_typ,
    STATE(63), 1,
      sym_longid,
  [1015] = 6,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_var,
    STATE(22), 1,
      sym_typ,
    STATE(63), 1,
      sym_longid,
  [1034] = 6,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_var,
    STATE(41), 1,
      sym_typ,
    STATE(63), 1,
      sym_longid,
  [1053] = 6,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_var,
    STATE(31), 1,
      sym_typ,
    STATE(63), 1,
      sym_longid,
  [1072] = 2,
    ACTIONS(54), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
      anon_sym_DOT,
  [1083] = 6,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_var,
    STATE(16), 1,
      sym_typ,
    STATE(63), 1,
      sym_longid,
  [1102] = 6,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_var,
    STATE(11), 1,
      sym_typ,
    STATE(63), 1,
      sym_longid,
  [1121] = 6,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_var,
    STATE(27), 1,
      sym_typ,
    STATE(63), 1,
      sym_longid,
  [1140] = 2,
    ACTIONS(131), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [1150] = 2,
    ACTIONS(121), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [1160] = 2,
    ACTIONS(135), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [1170] = 2,
    ACTIONS(139), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [1180] = 2,
    ACTIONS(109), 2,
      anon_sym_and,
      sym_id,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [1190] = 3,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      sym_lab,
    ACTIONS(145), 2,
      sym_id,
      aux_sym_lab_token1,
  [1201] = 4,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_id,
    ACTIONS(151), 1,
      sym_var,
    STATE(116), 1,
      sym_typbind,
  [1214] = 1,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1221] = 1,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1228] = 1,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1235] = 1,
    ACTIONS(159), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1242] = 1,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1249] = 3,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_lab,
    ACTIONS(145), 2,
      sym_id,
      aux_sym_lab_token1,
  [1260] = 1,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1267] = 4,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_id,
    ACTIONS(171), 1,
      sym_var,
    STATE(106), 1,
      sym_typbind,
  [1280] = 4,
    ACTIONS(173), 1,
      anon_sym_0x,
    ACTIONS(175), 1,
      aux_sym_float_token1,
    ACTIONS(177), 1,
      aux_sym_float_token2,
    ACTIONS(179), 1,
      sym__num,
  [1293] = 2,
    STATE(125), 1,
      sym_lab,
    ACTIONS(145), 2,
      sym_id,
      aux_sym_lab_token1,
  [1301] = 3,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_and,
    STATE(87), 1,
      aux_sym_typbind_repeat2,
  [1311] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_typbind_repeat1,
  [1321] = 3,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_typ_repeat1,
  [1331] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_typ_repeat2,
  [1341] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_typbind_repeat1,
  [1351] = 1,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1357] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_exp_repeat1,
  [1367] = 3,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_and,
    STATE(87), 1,
      aux_sym_typbind_repeat2,
  [1377] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_typ_repeat1,
  [1387] = 2,
    STATE(87), 1,
      aux_sym_typbind_repeat2,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_and,
  [1395] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_typ_repeat2,
  [1405] = 3,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      anon_sym_and,
    STATE(87), 1,
      aux_sym_typbind_repeat2,
  [1415] = 1,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1421] = 3,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_exp_repeat1,
  [1431] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_typbind_repeat1,
  [1441] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_typ_repeat1,
  [1451] = 2,
    STATE(87), 1,
      aux_sym_typbind_repeat2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_and,
  [1459] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_typ_repeat2,
  [1469] = 3,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_and,
    STATE(87), 1,
      aux_sym_typbind_repeat2,
  [1479] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_typbind_repeat1,
  [1489] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_exp_repeat1,
  [1499] = 2,
    STATE(87), 1,
      aux_sym_typbind_repeat2,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_and,
  [1507] = 1,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1513] = 2,
    STATE(87), 1,
      aux_sym_typbind_repeat2,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_and,
  [1521] = 3,
    ACTIONS(183), 1,
      anon_sym_and,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      aux_sym_typbind_repeat2,
  [1531] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_typbind_repeat1,
  [1541] = 2,
    ACTIONS(240), 1,
      sym_id,
    STATE(45), 1,
      sym_longid,
  [1548] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1553] = 1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1558] = 2,
    ACTIONS(242), 1,
      sym_id,
    STATE(61), 1,
      sym_longid,
  [1565] = 1,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_and,
  [1570] = 1,
    ACTIONS(244), 1,
      sym_id,
  [1574] = 1,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
  [1578] = 1,
    ACTIONS(248), 1,
      sym_id,
  [1582] = 1,
    ACTIONS(250), 1,
      sym__hex,
  [1586] = 1,
    ACTIONS(252), 1,
      anon_sym_EQ,
  [1590] = 1,
    ACTIONS(254), 1,
      sym_var,
  [1594] = 1,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
  [1598] = 1,
    ACTIONS(258), 1,
      anon_sym_EQ,
  [1602] = 1,
    ACTIONS(260), 1,
      anon_sym_EQ,
  [1606] = 1,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
  [1610] = 1,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
  [1614] = 1,
    ACTIONS(266), 1,
      anon_sym_EQ,
  [1618] = 1,
    ACTIONS(268), 1,
      sym_var,
  [1622] = 1,
    ACTIONS(270), 1,
      sym_id,
  [1626] = 1,
    ACTIONS(272), 1,
      anon_sym_COMMA,
  [1630] = 1,
    ACTIONS(274), 1,
      sym__hex,
  [1634] = 1,
    ACTIONS(276), 1,
      aux_sym_longid_token1,
  [1638] = 1,
    ACTIONS(274), 1,
      sym__num,
  [1642] = 1,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [1646] = 1,
    ACTIONS(280), 1,
      sym__hex,
  [1650] = 1,
    ACTIONS(282), 1,
      anon_sym_EQ,
  [1654] = 1,
    ACTIONS(284), 1,
      anon_sym_EQ,
  [1658] = 1,
    ACTIONS(286), 1,
      anon_sym_EQ,
  [1662] = 1,
    ACTIONS(288), 1,
      anon_sym_EQ,
  [1666] = 1,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
  [1670] = 1,
    ACTIONS(292), 1,
      anon_sym_EQ,
  [1674] = 1,
    ACTIONS(294), 1,
      anon_sym_EQ,
  [1678] = 1,
    ACTIONS(296), 1,
      anon_sym_COLON,
  [1682] = 1,
    ACTIONS(298), 1,
      sym_id,
  [1686] = 1,
    ACTIONS(300), 1,
      sym_id,
  [1690] = 1,
    ACTIONS(302), 1,
      sym_id,
  [1694] = 1,
    ACTIONS(304), 1,
      anon_sym_COLON,
  [1698] = 1,
    ACTIONS(306), 1,
      anon_sym_COLON,
  [1702] = 1,
    ACTIONS(308), 1,
      aux_sym_longid_token1,
  [1706] = 1,
    ACTIONS(310), 1,
      sym_var,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 232,
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 266,
  [SMALL_STATE(11)] = 283,
  [SMALL_STATE(12)] = 305,
  [SMALL_STATE(13)] = 327,
  [SMALL_STATE(14)] = 349,
  [SMALL_STATE(15)] = 371,
  [SMALL_STATE(16)] = 393,
  [SMALL_STATE(17)] = 415,
  [SMALL_STATE(18)] = 429,
  [SMALL_STATE(19)] = 447,
  [SMALL_STATE(20)] = 463,
  [SMALL_STATE(21)] = 475,
  [SMALL_STATE(22)] = 489,
  [SMALL_STATE(23)] = 511,
  [SMALL_STATE(24)] = 533,
  [SMALL_STATE(25)] = 549,
  [SMALL_STATE(26)] = 565,
  [SMALL_STATE(27)] = 587,
  [SMALL_STATE(28)] = 609,
  [SMALL_STATE(29)] = 631,
  [SMALL_STATE(30)] = 653,
  [SMALL_STATE(31)] = 664,
  [SMALL_STATE(32)] = 677,
  [SMALL_STATE(33)] = 696,
  [SMALL_STATE(34)] = 713,
  [SMALL_STATE(35)] = 732,
  [SMALL_STATE(36)] = 751,
  [SMALL_STATE(37)] = 762,
  [SMALL_STATE(38)] = 781,
  [SMALL_STATE(39)] = 800,
  [SMALL_STATE(40)] = 819,
  [SMALL_STATE(41)] = 838,
  [SMALL_STATE(42)] = 857,
  [SMALL_STATE(43)] = 870,
  [SMALL_STATE(44)] = 889,
  [SMALL_STATE(45)] = 900,
  [SMALL_STATE(46)] = 911,
  [SMALL_STATE(47)] = 922,
  [SMALL_STATE(48)] = 941,
  [SMALL_STATE(49)] = 960,
  [SMALL_STATE(50)] = 977,
  [SMALL_STATE(51)] = 996,
  [SMALL_STATE(52)] = 1015,
  [SMALL_STATE(53)] = 1034,
  [SMALL_STATE(54)] = 1053,
  [SMALL_STATE(55)] = 1072,
  [SMALL_STATE(56)] = 1083,
  [SMALL_STATE(57)] = 1102,
  [SMALL_STATE(58)] = 1121,
  [SMALL_STATE(59)] = 1140,
  [SMALL_STATE(60)] = 1150,
  [SMALL_STATE(61)] = 1160,
  [SMALL_STATE(62)] = 1170,
  [SMALL_STATE(63)] = 1180,
  [SMALL_STATE(64)] = 1190,
  [SMALL_STATE(65)] = 1201,
  [SMALL_STATE(66)] = 1214,
  [SMALL_STATE(67)] = 1221,
  [SMALL_STATE(68)] = 1228,
  [SMALL_STATE(69)] = 1235,
  [SMALL_STATE(70)] = 1242,
  [SMALL_STATE(71)] = 1249,
  [SMALL_STATE(72)] = 1260,
  [SMALL_STATE(73)] = 1267,
  [SMALL_STATE(74)] = 1280,
  [SMALL_STATE(75)] = 1293,
  [SMALL_STATE(76)] = 1301,
  [SMALL_STATE(77)] = 1311,
  [SMALL_STATE(78)] = 1321,
  [SMALL_STATE(79)] = 1331,
  [SMALL_STATE(80)] = 1341,
  [SMALL_STATE(81)] = 1351,
  [SMALL_STATE(82)] = 1357,
  [SMALL_STATE(83)] = 1367,
  [SMALL_STATE(84)] = 1377,
  [SMALL_STATE(85)] = 1387,
  [SMALL_STATE(86)] = 1395,
  [SMALL_STATE(87)] = 1405,
  [SMALL_STATE(88)] = 1415,
  [SMALL_STATE(89)] = 1421,
  [SMALL_STATE(90)] = 1431,
  [SMALL_STATE(91)] = 1441,
  [SMALL_STATE(92)] = 1451,
  [SMALL_STATE(93)] = 1459,
  [SMALL_STATE(94)] = 1469,
  [SMALL_STATE(95)] = 1479,
  [SMALL_STATE(96)] = 1489,
  [SMALL_STATE(97)] = 1499,
  [SMALL_STATE(98)] = 1507,
  [SMALL_STATE(99)] = 1513,
  [SMALL_STATE(100)] = 1521,
  [SMALL_STATE(101)] = 1531,
  [SMALL_STATE(102)] = 1541,
  [SMALL_STATE(103)] = 1548,
  [SMALL_STATE(104)] = 1553,
  [SMALL_STATE(105)] = 1558,
  [SMALL_STATE(106)] = 1565,
  [SMALL_STATE(107)] = 1570,
  [SMALL_STATE(108)] = 1574,
  [SMALL_STATE(109)] = 1578,
  [SMALL_STATE(110)] = 1582,
  [SMALL_STATE(111)] = 1586,
  [SMALL_STATE(112)] = 1590,
  [SMALL_STATE(113)] = 1594,
  [SMALL_STATE(114)] = 1598,
  [SMALL_STATE(115)] = 1602,
  [SMALL_STATE(116)] = 1606,
  [SMALL_STATE(117)] = 1610,
  [SMALL_STATE(118)] = 1614,
  [SMALL_STATE(119)] = 1618,
  [SMALL_STATE(120)] = 1622,
  [SMALL_STATE(121)] = 1626,
  [SMALL_STATE(122)] = 1630,
  [SMALL_STATE(123)] = 1634,
  [SMALL_STATE(124)] = 1638,
  [SMALL_STATE(125)] = 1642,
  [SMALL_STATE(126)] = 1646,
  [SMALL_STATE(127)] = 1650,
  [SMALL_STATE(128)] = 1654,
  [SMALL_STATE(129)] = 1658,
  [SMALL_STATE(130)] = 1662,
  [SMALL_STATE(131)] = 1666,
  [SMALL_STATE(132)] = 1670,
  [SMALL_STATE(133)] = 1674,
  [SMALL_STATE(134)] = 1678,
  [SMALL_STATE(135)] = 1682,
  [SMALL_STATE(136)] = 1686,
  [SMALL_STATE(137)] = 1690,
  [SMALL_STATE(138)] = 1694,
  [SMALL_STATE(139)] = 1698,
  [SMALL_STATE(140)] = 1702,
  [SMALL_STATE(141)] = 1706,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_longid, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_longid, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_longid, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_longid, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_longid_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_longid_repeat1, 2), SHIFT_REPEAT(123),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_longid_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 7),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typbind, 7),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typbind, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 6),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typbind, 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 3),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_longid_repeat1, 2), SHIFT_REPEAT(140),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typbind, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typ_repeat2, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 6),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typ, 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typ_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 8),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typ_repeat1, 2), SHIFT_REPEAT(47),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typbind_repeat1, 2), SHIFT_REPEAT(119),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typbind_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typbind, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typbind_repeat2, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typbind_repeat2, 2), SHIFT_REPEAT(73),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 6),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exp_repeat1, 2), SHIFT_REPEAT(4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exp_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typ_repeat2, 2), SHIFT_REPEAT(75),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typ_repeat2, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valbind, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valbind, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [290] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
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
