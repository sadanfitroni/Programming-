#ifndef list_H
#define list_H

#include "boolean.h"
#include <stdlib.h>

#define nil  NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

typedef struct node *address;
typedef char infotype;

typedef struct node
{
	infotype info[10];
	address next;
}node;

typedef struct list
{
	infotype kota[10];
	address first;
}list;

boolean list_empty(list  L);

void create_list(list *L);

address alokasi(infotype X[]);
/*
void dealokasi(address *P);

int count_element(list L);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

address search(list L, infotype  X);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
void insert_first(list *L, address P);
/*
void insert_after(list *L, address P, address Prec);
*/
void insert_last(list  *L, address P);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

void insert_value_first(list *L, infotype X[]);
/*
void insert_value_after(list *L, infotype X, infotype prec_value);
*/
void insert_value_last(list *L, infotype X[]);

//------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
void delete_all(list *L);

void delete_first(list *L, address *P);

void delete_last(list *L, address *P);

//------------------------------------------------------------------------------------------------------------------------------------------------------------

void print_info(list L);
*/
#endif
