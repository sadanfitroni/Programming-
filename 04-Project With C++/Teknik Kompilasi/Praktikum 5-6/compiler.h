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
#define isplus (token.attr == SYMBOL && token.value == PLUS)
#define isminus (token.attr == SYMBOL && token.value == MINUS)
#define istimes (token.attr == SYMBOL && token.value == TIMES)
#define isdiv (token.attr == RWORD && token.value == DIV)
#define islparen (token.attr == SYMBOL && token.value == LPAREN)
#define isrparen (token.attr == SYMBOL && token.value == RPAREN)
#define isvar (token.attr == RWORD && token.value == VAR)
#define iscomma (token.attr = SYMBOL && token.value == COMMA)
#define isprocedure (token.attr == RWORD && token.value == PROCEDURE)
#define iswhile (token.attr == RWORD && token.value == WHILE)
#define isif (token.attr == RWORD && token.value == IF)
#define isbecomes (token.attr == SYMBOL && token.value == BECOMES)
#define isdo (token.attr == RWORD && token.value == DO)
#define isthen (token.attr == RWORD && token.value == THEN)
#define iselse (token.attr == RWORD && token.value == ELSE)
#define iseql (token.attr == SYMBOL && token.value == EQL)
#define islessthan (token.attr == SYMBOL && token.value == LESSTHAN)
#define islesseql (token.attr == SYMBOL && token.value == LESSEQL)
#define isnoteql (token.attr == SYMBOL && token.value == NOTEQL)
#define isgrtrthan (token.attr == SYMBOL && token.value == GRTRTHAN)
#define isgrtreql (token.attr == SYMBOL && token.value == GRTREQL)
#define isread (token.attr == RWORD && token.value == READ)
#define iswrite (token.attr == RWORD && token.value == WRITE)

