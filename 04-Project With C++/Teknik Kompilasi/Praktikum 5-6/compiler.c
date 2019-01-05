/*
File name : compiler.c
Vers : 0.01a
Written by : Setiadi Rachmat
Date : Fri Aug 28 10:08:03 WIT 2009

Praktikum 5-6

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
void factor(void);
void term(void);
void error();
void condition();
void inblock();
void outblock();
void paramlist();

int main(int argc,char *argv[])
{
	init_token("example61.txt");
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
	outblock();

	if (!isperiod) {
		printf("Error : Symbol '.' is expected\n");
		exit(-1);
	}
}

void statement(void)
{

	if(isidentifier){
		
		get_token();
		if(isbecomes){
			get_token();
			expression();
			
		}else{
			paramlist();
		}
		
	}else if(isbegin){
		
		do{
			get_token();
			statement();
		}while(issemicolon);
	
		if(!isend){
			printf("Error : Reserved Word 'End' is expected\n");
			exit(-1);
		}
		
		get_token();
		
	}else if(iswhile){
		
		get_token();
		condition();
		
		if(!isdo){
			printf("Error : Reserved Word 'Do' is expected\n");
			exit(-1);
		}
		
		get_token();
		statement();
		
	}else if(isif){
		
		get_token();
		condition();
		
		if(!isthen){
			printf("Error : Reserved Word 'Then' is expected\n");
			exit(-1);
		}
		
		get_token();
		statement();
		
		if(iselse){
			
			get_token();
			statement();
			
			get_token();
		}

	}else if(isread){
		
		get_token();
		if(!islparen){
			printf("Error : Symbol '(' is expected\n");
			exit(-1);
		}
		
		do{
			get_token();
			if(!isidentifier){
				printf("Error : Identifier is expected after '('\n");
				exit(-1);
			}
		
			get_token();
			if(isrparen){
				break;
			}
			
		}while(iscomma);
		
		if(!isrparen){
			printf("Error : Symbol '(' is expected\n");
			exit(-1);	
		}
		
		get_token();
		
	}else if(iswrite){
		
		get_token();
		if(!islparen){
			printf("Error : Symbol '(' is expected\n");
			exit(-1);
		}	
		
		do{
			get_token();
			expression();
		
			if(isrparen){
				break;
			}
		}while(iscomma);
		
		if(!isrparen){
			printf("Error : Symbol ')' is expected\n");
			exit(-1);
		}
		
		get_token();
	}
}

void expression(void)
{
	if (isplus || isminus) {
		get_token();
	}
	
	term();
	while (isplus || isminus) {
		get_token();
		term();
	}
}
	
void term(void)
{
	factor();
	while (istimes || isdiv) {
		get_token();
		factor();
	}

}

void factor(void)
{
	if(isnumbr) {
		
	}else if(isidentifier){
		
	}else if(islparen){
		get_token();
		expression();
		
		if(!isrparen){
			printf("Error : Symbol ')' is expected\n");
			exit(-1);
		} 

	}else{
		printf("Error : Symbol '(' or Number is expected\n");
		exit(-1);
	}	
	
	get_token();
}

void outblock(){
	
	if(!isvar){
		printf("Error : Reserved Word 'var' is expected\n");
		exit(-1);
	}
	
	do{
		get_token();
		if(!isidentifier){
			printf("Error : Identifier is expected after 'var'\n");
			exit(-1);
		}
	
		get_token();
		if(issemicolon){
			break;
		}
	}while(iscomma);

	if(!issemicolon){
		printf("Error : Symbol ';' is expected\n");
		exit(-1);
	}
	
	do{
		get_token();
		if(!isprocedure){
			break;
		}		
		
		get_token();
		if(!isidentifier){
			printf("Error : Identifier is expected after 'procedure'\n");
			exit(-1);
		}
		
		get_token();
		inblock();
		
	}while(issemicolon);
	
	statement();

}

void inblock(){
	
	if(islparen){
	
		do{
			get_token();
			if(!isidentifier){
				printf("Error : Identifier is expected after '('\n");
				exit(-1);
			}
		
			get_token();
			if(isrparen){
				break;
			}
			
		}while(iscomma);
		
		if(!isrparen){
			printf("Error : Symbol '(' is expected\n");
			exit(-1);	
		}
		get_token();
	}

	if(issemicolon){
		
		get_token();	
		if(isvar){
		
			do{
				get_token();
				if(!isidentifier){
					printf("Error : Identifier is expected after 'var'\n");
					exit(-1);
				}
			
				get_token();
				if(issemicolon){
					break;
				}
			}while(iscomma);
		
			if(!issemicolon){
				printf("Error : Symbol ';' is expected\n");
				exit(-1);
			}
		}
		get_token();
		statement();
		
		get_token();
		
	}

}

void paramlist(){
	if(islparen){
		do{
			get_token();
			expression();
			
			if(isrparen){
				break;
			}
			
		}while(iscomma);
		
		if(!isrparen){
			printf("Error : Symbol ')' is expected\n");
			exit(-1);
		}	
		
		get_token();
	}
}

void condition(){
	expression();
	
	if(iseql || isnoteql || islessthan || islesseql || isgrtrthan || isgrtreql){
		get_token();
		expression();
	}
}
