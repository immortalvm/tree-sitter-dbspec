#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"
#include <assert.h>
// #include <wctype.h>
// #include <string.h>
// #include <stdio.h>

enum TokenType {
  NEWLINE,
  INDENT,
  DEDENT,
  INTER_START,
  INTER_START2,
  INTER_END,
  RAW,
  STRING_START,
  STRING_CONTENT,
  STRING_END,
  COMMENT,
  END_OF_FILE,
  SKIP,
  SET_INTER,
};

typedef struct Scanner {
  char pending_dedents;
  char reference_indent;
  char indent_counter;
  int32_t inter_char;
} Scanner;

void *tree_sitter_dbspec_external_scanner_create() {
  Scanner* scanner = ts_malloc(sizeof(Scanner));
  scanner->pending_dedents = 0;
  scanner->reference_indent = 1;
  scanner->indent_counter = 1;
  scanner->inter_char = '$';
  return scanner;
}

void tree_sitter_dbspec_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  ts_free(scanner);
}

unsigned tree_sitter_dbspec_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  buffer[0] = scanner->pending_dedents;
  buffer[1] = scanner->reference_indent;
  buffer[2] = scanner->indent_counter;

  char *ptr = (char*)&(scanner->inter_char);
  buffer[4] = *(ptr++);
  buffer[5] = *(ptr++);
  buffer[6] = *(ptr++);
  buffer[7] = *(ptr++);
  return 8;
}

void tree_sitter_dbspec_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  scanner->pending_dedents = (length > 0) ? buffer[0] : 0;
  scanner->reference_indent = (length > 1) ? buffer[1] : 1;
  scanner->indent_counter = (length > 2) ? buffer[2] : 1;
  if (length > 7) {
    char* ptr = (char*)&(scanner->inter_char);
    *(ptr++) = buffer[4];
    *(ptr++) = buffer[5];
    *(ptr++) = buffer[6];
    *(ptr++) = buffer[7];
  } else {
    scanner->inter_char = '$';
  }
}

static inline void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static inline void skip(TSLexer *lexer) {
  lexer->advance(lexer, true);
}

bool tree_sitter_dbspec_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *s = (Scanner *)payload;

  // From https://tree-sitter.github.io/tree-sitter/creating-parsers :
  // "If a syntax error is encountered during regular parsing,
  // tree-sitter’s first action during error recovery will be to call
  // your external scanner’s scan function with all tokens marked
  // valid."
  bool recovery_mode = valid_symbols[INDENT] && valid_symbols[RAW];
  if (recovery_mode) {
    // We choose to fail rather than recover (for now).
    // printf("Recovery\n"); fflush(stdout);
    return false;
  }

  if (valid_symbols[SET_INTER]) {
    s->inter_char = lexer->lookahead;
    advance(lexer);
    lexer->result_symbol = SET_INTER;
    return s->inter_char != 0;
  }

  bool skipping = false;

  while (!lexer->eof(lexer)) {

    if (s->indent_counter && lexer->lookahead == '\t') {
      if (s->indent_counter < s->reference_indent) {
        s->indent_counter++;
        skip(lexer);
        skipping = true;
        continue;

      } else if (valid_symbols[INDENT]) {
        assert (s->indent_counter == s->reference_indent);
        s->reference_indent = ++s->indent_counter;
        advance(lexer);
        lexer->result_symbol = INDENT;
        return true;
      }
    }

    char x = lexer->lookahead;

    switch (x) {
    case '\r':
    case '\n':
      s->pending_dedents = 0;
      s->indent_counter = 1;
      if (valid_symbols[NEWLINE]) {
        // Advance over \r\n if possible, otherwise only \r or \n.
        advance(lexer);
        if (x == '\r' && !lexer->eof(lexer) && lexer->lookahead == '\n') {
          advance(lexer);
        }
        lexer->result_symbol = NEWLINE;
        return true;
      }
      if (valid_symbols[RAW] || valid_symbols[STRING_CONTENT]) {
        return false;
      }
      skip(lexer);
      skipping = true;
      continue;
    case ' ':
    case '\t':
      if (valid_symbols[RAW] && s->indent_counter == s->reference_indent) {
        advance(lexer);
        lexer->result_symbol = RAW;
        return true;
      }
      // printf("%d\n", s->indent_counter); fflush(stdout);
      if (s->indent_counter) {
        // Do not allow space or tab at the beginning of lines except in RAW.
        return false;
      }
      if (valid_symbols[RAW] || valid_symbols[STRING_CONTENT]) {
        break;
      }
      skip(lexer);
      skipping = true;
      continue;
    }

    break;
  }

  s->pending_dedents += s->indent_counter && s->indent_counter < s->reference_indent
    ? s->reference_indent - s->indent_counter : 0;

  if (skipping || s->indent_counter) {
    s->indent_counter = 0;
    lexer->result_symbol = SKIP;
    return true;
  }

  // printf("HERE: %d %c\n", lexer->lookahead, lexer->lookahead); fflush(stdout);

  if (s->pending_dedents && valid_symbols[DEDENT]) {
    s->pending_dedents--;
    s->reference_indent--;
    lexer->result_symbol = DEDENT;
    return true;
  }

  switch (lexer->lookahead) {

  case '"':
    if (valid_symbols[STRING_START]) {
      advance(lexer);
      lexer->result_symbol = STRING_START;
      return true;
    }
    if (valid_symbols[STRING_END]) {
      advance(lexer);
      lexer->result_symbol = STRING_END;
      return true;
    }
    break;

  case '#':
    if (valid_symbols[COMMENT]) {
      skip(lexer);
      while (!lexer->eof(lexer)
             && lexer->lookahead != '\r'
             && lexer->lookahead != '\n') {
        advance(lexer);
      }
      lexer->result_symbol = COMMENT;
      return true;
    }
    break;

  case '}':
    if (valid_symbols[INTER_END]) {
      advance(lexer);
      lexer->result_symbol = INTER_END;
      return true;
    }
    break;

  case '\\':
    if (valid_symbols[STRING_CONTENT]) {
      // Escaped strings will be handled by the parser.
      return false;
    }
    break;
  }

  if (lexer->lookahead ==  s->inter_char) {
    advance(lexer);
    if (valid_symbols[INTER_START] && lexer->lookahead == '{') {
      advance(lexer);
      lexer->result_symbol = INTER_START;
      return true;
    }
    if (valid_symbols[INTER_START2] && lexer->lookahead ==  s->inter_char) {
      advance(lexer);
      if (lexer->lookahead == '{') {
        advance(lexer);
        lexer->result_symbol = INTER_START2;
        return true;
      }
      // NB. At this point we will have advanced over two characters.
    }
    if (valid_symbols[STRING_CONTENT]) {
      lexer->result_symbol = STRING_CONTENT;
      return true;
    }
    if (valid_symbols[RAW]) {
      lexer->result_symbol = RAW;
      return true;
    }
    return false;
  }

  if (lexer->eof(lexer)) {
    lexer->result_symbol = END_OF_FILE;
    return valid_symbols[END_OF_FILE];
  }
  if (valid_symbols[STRING_CONTENT]) {
    advance(lexer);
    lexer->result_symbol = STRING_CONTENT;
    return true;
  }
  if (valid_symbols[RAW]) {
    advance(lexer);
    lexer->result_symbol = RAW;
    return true;
  }
  return false;
}
