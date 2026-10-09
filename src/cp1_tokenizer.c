#include "cp1_tokenizer.h"

Token nextToken(FILE handle) {
    // TODO: Logic
    return (Token) {
        .type = TOKENTYPE_SYMBOL,
        .start = ftell(&handle),
        .end = ftell(&handle) + 1
    };
}
