/*
File name : compiler.h
Vers : 0.01a
Written by : Setiadi Rachmat
Date : Fri Aug 28 10:08:03 WIT 2009
*/
#define isprogram (token.attr == RWORD && token.value == PROGRAM)
#define isbegin (token.attr == RWORD && token.value == BEGIN)
#define isend (token.attr == RWORD && token.value == END)
#define isidentifier (token.attr == IDENTIFIER)
#define isnumbr (token.attr == NUMBER)
#define issemicolon (token.attr == SYMBOL && token.value == SEMICOLON)
#define isperiod (token.attr == SYMBOL && token.value == PERIOD)

