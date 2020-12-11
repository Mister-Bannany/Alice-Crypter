#ifndef ALCRPT_CRYPTER_H
#define ALCRPT_CRYPTER_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../alcrpt_util.h"

/*!
    @author Noam Meraihia
    @date   10/12/2020

    This structure contains all the information
    the program needs to recognize a dictonary

*/
struct _alcrpt_Dictionary {
    FILE*  _fdict; // The file containing dictionary
    size_t _fsize; // The file size in bytes
    ui16   _size; // The size of dictionary
    i16*   _index; // An array containing all the indexes of dictionary
    string _char; // An array containing all the character of dictionary

};

typedef struct _alcrpt_Dictionary alcrpt_Dictionary;

/*!
    @author Noam Meraihia
    @date   10/12/2020

    This structure contains all the information
    the program needs to encrypt and decrypt data.

*/
struct _alrpt_Reader {
    alcrpt_Dictionary* _dictionary;
    char _currentChar;
    char _prevChar;
    char _nextChar;

};

#endif