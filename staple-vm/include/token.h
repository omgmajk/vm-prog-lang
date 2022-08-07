#ifndef STAPLE_TOKEN_H
#define STAPLE_TOKEN_H

struct _Token {
	int type;
	int data;
	int line;
};
typedef struct _Token Token; // I guess this is how he makes it "private"

Token *token_create(int data, int type, int line);
void token_destroy(Token *tok);

struct _TokenList {
	Token **data; // List of tokens
	int ptr;
	int size;
};
typedef struct _TokenList TokenList;

TokenList *token_list_create(int size);
void token_list_add(TokenList *list, Token *tok);
Token *token_list_get(TokenList *list, int index);
//void token_list_destroy(TokenList *list);

#endif // STAPLE_TOKEN_H
