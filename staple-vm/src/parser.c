#include "../include/parser.h"

void parser_start(TokenList *list, char *source) {
	char lex[256];
	int lexi = 0; // Lexical index
	int i = 0; // Source index

	while(1) {
	while(source[i] != ' ' && source[i] != '\n' && source[i] != '\0') {
		lex[lexi++] = source[i++];
	}
	}
	lex[lexi] = '\0';
}
