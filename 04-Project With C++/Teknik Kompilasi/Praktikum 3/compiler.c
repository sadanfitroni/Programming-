/*
File name : compiler.c
Vers : 0.01a
Written by : Setiadi Rachmat
Date : Fri Aug 28 10:08:03 WIT 2009

Modified by	: Sadan Fitroni
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

int main(int argc,char *argv[])
{
	
	init_token("example.txt");
	program(); 
	
	printf("Congratulations : No error is found\n");
	system("pause");
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
		c
		exit(-1);
	}

	get_token();
	if (!issemicolon) {
		c
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
		
		get_token();
		statement();
		
		while(issemicolon){
			get_token();
			statement();
		}		
		
		if(isend){
			get_token();
		}
		
	}else if(isnumbr){
		
		get_token();
		if(token.value == PLUS || token.value == MINUS || token.value == TIMES){
			get_token();
			if(!isnumbr){
				printf("Error: 'Number' is expected\n", token.charvalue);
				exit(-1);
			}
		}else{
			printf("Error : 'Operator' is expected \n", token.charvalue);
			exit(-1);
		}
		get_token();
	}else{
		printf("Eror : 'Begin' or 'Number' is expected\n");
		exit(-1);
		
	}
		
}

