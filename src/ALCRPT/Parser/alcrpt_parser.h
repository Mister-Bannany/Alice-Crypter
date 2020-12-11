#ifndef ALCRPT_PARSER_H
#define ALCRPT_PARSER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../alcrpt_util.h"

/*!
    @author Noam Meraihia
    @date   10/12/2020
*/
typedef enum {
    ALCRPT_TT_IDENTIFIERS,
    ALCRPT_TT_NUMBERS,
    ALCRPT_TT_SEPARATORS,

} alcrpt_TokenTypes;

/*!
    @author Noam Meraihia
    @date   10/12/2020

    This structure represents a word
*/
struct _alcrpt_Token {
    string _content;
    size_t _size; // "_content" size in bytes
    ui8    _len; // "_content" lenght
    alcrpt_TokenTypes _type;

};

typedef struct _alcrpt_Token alcrpt_Token;


/*!
    @author Noam Meraihia
    @date   10/12/2020
*/
struct _alcrpt_TokenList {
    alcrpt_Token* _content;
    size_t _size; // "_content" size in bytes
    ui16    _len; // "_content" lenght

};

typedef struct _alcrpt_TokenList alcrpt_TokenList;

#endif