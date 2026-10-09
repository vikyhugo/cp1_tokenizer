#ifndef CP1_TOKENIZER_H
#define CP1_TOKENIZER_H

#include <stdio.h>

typedef enum {
    TOKENTYPE_SYMBOL,
    TOKENTYPE_NUMBER,
    TOKENTYPE_KEYWORD
} TokenType;

typedef struct {
    TokenType type;
    long int start;
    long int end;
} Token;

Token nextToken(FILE handle);

#endif
