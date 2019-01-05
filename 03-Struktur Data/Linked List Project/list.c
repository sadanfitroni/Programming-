#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "boolean.h"
#include "list.h"

boolean list_empty(list  L)
{
    return(first(L)==nil);
}

void create_list(list *L)
{
	first(*L)=nil;
}

address alokasi(infotype  X[])
{
   address P;
   P=(address)malloc(sizeof(node));
   if(P!=nil) 
   {
   		strcpy(info(P),X);
    	next(P)=nil;
   }
   return P;
}
/*
void dealokasi(address *P)
{
    next(*P)=nil;
    free(*P);
}

int count_element(list L)
{
  address P;
  int element=0;
  if(list_empty(L))
  {
  	return 0;
  } 
  else 
  {
    P=first(L);
    do 
	{
    	element++;
        P=next(P);
    }while(P!=nil);
  }
  return element;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

address search(list L, infotype  X)
{
	address P=first(L);
   	boolean found=false;
	while((P!=nil)&&(!found))
	{
		if(info(P)==X)
		{
			found=true;
		}
		else
		{
			P=next(P);
		}
	}
   	return P;
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

void insert_first(list *L, address P)
{ 
    next(P)=first(*L);
	first(*L)=P;
}
/*
void insert_after(list *L, address P, address Prec)
{ 
  	next(P)=next(Prec);
  	next(Prec)=P;
}
*/
void insert_last(list  *L, address P)
{ 
    address last;
    if(list_empty(*L)) 
	{ 
     	insert_first(&(*L),P);
    }
    else 
	{
      	last=first(*L);
        while(next(last)!=nil)  
		{ 
            last=next(last);
		}
		next(last)=P;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

void insert_value_first(list *L, infotype X[])
{ 
   address P=alokasi(X);
   if(P!=nil) 
   { 
      insert_first(&(*L),P);
   }
}
/*
void insert_value_after(list *L, infotype X, infotype prec_value)
{
	address P=alokasi(X);
	address Prec=search(*L,prec_value);
	insert_after(&(*L),P,Prec);
}
*/
void insert_value_last(list *L, infotype X[])
{ 
     address P=alokasi(X);
     if(P!=nil)
     {  
	 	insert_last(&(*L),P);
	 }
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
void delete_all(list *L)
{
   address X;
   while(!list_empty(*L)) 
   {
    delete_first(&(*L),&X);
   }
}

void delete_first(list *L, address *P)
{
	  *P=first(*L);
      first(*L)=next(first(*L));
      next(*P)=nil;
}

void delete_last(list *L, address *P)
{
  address last,prec_last;

  last=first(*L);
  if(next(last)==nil)  
  { 
    delete_first(&(*L),&(last));
  }
  else 
  { 
    prec_last=nil;
    while(next(last)!=nil)
	{  
      prec_last=last;
      last=next(last);
    } 
    *P=last;
    next(prec_last)=nil;
  }
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
	
void print_info(list L)
{  	int i;
  	address P=first(L);
 	if( P==nil) 
    {
    	printf("List Kosong !\n");
    } 
  	else 
    {
     	printf("[ ");
      	while(P!=nil)
	    {
      		printf("%d ",info(P));
      		P=next(P);
      		i++;
      	} 
      	printf("]");
  	}
  	printf("\n");
}

