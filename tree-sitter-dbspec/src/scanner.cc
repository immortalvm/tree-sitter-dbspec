#include <tree_sitter/parser.h>
#include <cstring>
// uncomment to disable assert()
//#define NDEBUG
#include <cassert>
#include <stdio.h>

// For experimental test output
#include <iostream>

/* Inspired by scanner.cc in tree-parser-python (2023-02-14)
and https://tree-sitter.github.io/tree-sitter/creating-parsers#external-scanners . */

namespace {

  enum TokenType {
    NEWLINE,
    INDENT,
    DEDENT,
    INTER_START,
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

  struct Scanner {
    Scanner() {
      deserialize(NULL, 0);
    }

    unsigned serialize(char *buffer) {
      buffer[0] = pending_dedents;
      buffer[1] = reference_indent;
      buffer[2] = indent_counter;
      // https://stackoverflow.com/a/18877977
      char *ptr = (char*)&inter_char;
      buffer[4] = *(ptr++);
      buffer[5] = *(ptr++);
      buffer[6] = *(ptr++);
      buffer[7] = *(ptr++);
      return 8;
    }

    void deserialize(const char *buffer, unsigned length) {
      pending_dedents = (length > 0) ? buffer[0] : 0;
      reference_indent = (length > 1) ? buffer[1] : 1;
      indent_counter = (length > 2) ? buffer[2] : 1;
      if (length > 7) {
        char* ptr = (char*)&inter_char;
        *(ptr++) = buffer[4];
        *(ptr++) = buffer[5];
        *(ptr++) = buffer[6];
        *(ptr++) = buffer[7];
      } else {
        inter_char = '$';
      }
    }

    void advance(TSLexer *lexer) {
      lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer) {
      lexer->advance(lexer, true);
    }

    // The current implementation is somewhat inefficient since it
    // returns one token for every string character, etc.
    // https://github.com/tree-sitter/tree-sitter/issues/706#issuecomment-675769219
    bool scan(TSLexer *lexer, const bool *valid_symbols) {

      // From https://tree-sitter.github.io/tree-sitter/creating-parsers :
      // "If a syntax error is encountered during regular parsing,
      // tree-sitter’s first action during error recovery will be to call
      // your external scanner’s scan function with all tokens marked
      // valid."
      bool recovery_mode = valid_symbols[INDENT] && valid_symbols[RAW];
      if (recovery_mode) {
        // We choose to fail rather than recover (for now).
        // std::cout << "Recovery" << std::endl;
        return false;
      }

      if (valid_symbols[SET_INTER]) {
        inter_char = lexer->lookahead;
        advance(lexer);
        lexer->result_symbol = SET_INTER;
        return inter_char != 0;
      }

      bool skipping = false;

      while (lexer->lookahead) {

        if (indent_counter && lexer->lookahead == '\t') {
          if (indent_counter < reference_indent) {
            indent_counter++;
            skip(lexer);
            skipping = true;
            continue;

          } else if (valid_symbols[INDENT]) {
            assert (indent_counter == reference_indent);
            reference_indent = ++indent_counter;
            advance(lexer);
            lexer->result_symbol = INDENT;
            return true;
          }
        }

        switch (lexer->lookahead) {
        case '\r':
        case '\n':
          pending_dedents = 0;
          indent_counter = 1;
          if (valid_symbols[NEWLINE]) {
            advance(lexer);
            lexer->result_symbol = NEWLINE;
            return true;
          }
          if (valid_symbols[RAW]) {
            advance(lexer);
            lexer->result_symbol = RAW;
            return true;
          }
          skip(lexer);
          skipping = true;
          continue;
        case ' ':
        case '\t':
          if (valid_symbols[RAW] && indent_counter == reference_indent) {
            advance(lexer);
            lexer->result_symbol = RAW;
            return true;
          }
          // std::cout << (int) indent_counter << std::endl;
          if (indent_counter) {
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

      pending_dedents += indent_counter && indent_counter < reference_indent
        ? reference_indent - indent_counter : 0;

      if (skipping || indent_counter) {
        indent_counter = 0;
        lexer->result_symbol = SKIP;
        return true;
      }

      // std::cout << "HERE: " << lexer->lookahead << " " << char(lexer->lookahead) << std::endl;

      if (pending_dedents && valid_symbols[DEDENT]) {
        pending_dedents--;
        reference_indent--;
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
          while (lexer->lookahead
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

      if (lexer->lookahead ==  inter_char) {
        advance(lexer);
        if (valid_symbols[INTER_START] && lexer->lookahead == '{') {
          advance(lexer);
          lexer->result_symbol = INTER_START;
          return true;
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

    char pending_dedents; // 0-255

    //  Off by one, so that 0 can mean "not beginning of line".
    char reference_indent; // 1-255
    char indent_counter; // 0-255

    int32_t inter_char;
  };

}

extern "C" {

void *tree_sitter_dbspec_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_dbspec_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_dbspec_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_dbspec_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_dbspec_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
