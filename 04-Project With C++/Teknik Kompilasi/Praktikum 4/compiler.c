/*
File name : compiler.c
Vers : 0.01a
Written by : Setiadi Rachmat
Date : Fri Aug 28 10:08:03 WIT 2009
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "scanner.h"
#include "compiler.h"

extern token_t token;

void program(void);
void statement(void);
void expression(void);
void factor (void);
void term (void);
void error (void);

int main(int argc,char *argv[])
{	
	init_token("test1.txt");
	program();
	printf("Congratulations : No error is found\n");
	
}

void program(void)
{
	get_token();
	if (!isprogram) {
		printf("Error : Reserved Word 'program' is expected\n");
		exit(-1);
	}

	get_token();
	if (!isidentifier) {
		printf("Error : Identifier is expected after 'program' \n");
		exit(-1);
	}

	get_token();
	if (!issemicolon) {
		printf("Error : Symbol ';' is expected\n");
		exit(-1);
	}
	
	get_token();
	statement();
	if (!isperiod) {
		printf("Error : Symbol '.' is expected\n");
		exit(-1);
	}
}

void statement(void)
{
	if(isbegin){
		
		do{
			get_token();
			statement();
		}while(issemicolon);
		
		if(isend){
			get_token();
		}
		
	}else{
		expression();
	}	
		
}

void expression(void){
	if(isplus || isminus)
		get_token();
		term();
		while (isplus || isminus){
			get_token();
			term();
		}			
}

void term (void){
	factor();
	while (istimes || isdiv){
		get_token();
		factor();
	}
}

void factor (void){
	if (isnumbr){
		get_token();
		return; 
	}else if (islparen){
		get_token();
		expression();
		if (isrparen){
			get_token();
			return; 
		}else {
			error();
		}
	}else {
		error();
	}
}

void error(){
	printf("Error : Number or symbol '(' or ')' is expected ");
	exit (-1);
}

