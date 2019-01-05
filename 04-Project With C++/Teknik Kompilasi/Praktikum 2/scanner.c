
/*
	File name : scanner.c
	Vers : 0.01a
	Written by : Setiadi Rachmat
	Date : Fri Aug 28 10:08:03 WIT 2009
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"

FILE *infile;		
token_t token;		// menampung token 

int n;				// counter character token
char namafile[20];	// menampung nama file.
char kar;			// variabel penampung karakter yang dibaca dari file
char tempKar;		// menampung character saat melakukan break pada perulangan
int tempValue;		// menampung sementara value reserved untuk digunakan pada value identifier
int isBreak = 0;	// jika bertemu symbol setelah numeric atau alphanumeric maka looping di break

// Symbol, numeric, alphanumeric yang diperbolehkan
char symbol[15] = {'+','-','*','(',')','=',',','.',';','<','>','[',']',':'};
char numeric[11] = {'0','1','2','3','4','5','6','7','8','9'};
char alphanumeric[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char alphanumericKapital[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

// deklarasi fungsi atau prosedur
int isNumeric(char tempNumeric);
int isAlphanumeric(char tempAlphanumeric);
int isSymbol(char tempSymbol);
int __isReserved();
int __isSymbol();
void resetToken();
void akhirToken();
void tokenNumeric();
void tokenAlphanumeric();
void tokenSymbol();
int get_token(void);
	
/* initialisasi token */
void init_token(char *name){
	
	if ((infile = fopen(name,"r")) == NULL) {
		printf("Error : Can’t open source code %s \n",name);
		exit(-1);
	} else return;
}

int main(int argc, char * argv[])
{
	strcpy(namafile, "example.txt");	
	init_token(namafile);
		
	n=0;
	get_token();
	
	return 0;
}

int get_token(void)
{
	token.value = 0;
	
	while((kar = fgetc(infile)) != EOF){
		
		if(kar == ' ' || kar == 9 || kar == 10){
			
		}else if(isSymbol(kar) == 1){
			tokenSymbol();
			
		}else if(isAlphanumeric(kar) == 1){

			tokenAlphanumeric();
			
		}else if(isNumeric(kar) == 1){

			tokenNumeric();
		}

	}
}

// Fungsi untuk mengecek apakah karakter berupa numeric, dengan kembalian bertipe boolean, true jika benar numeric dan false tidak bukan numeric
int isNumeric(char tempNumeric){
	short i;
	
	for(i=0; i<10; i++){

		if(tempNumeric == numeric[i]){ 
			return 1;
		}
	}
	
	return 0; 
}

// Fungsi untuk mengecek apakah karakter berupa alphanumeric, dengan kembalian bertipe boolean, true jika benar alphanumeric dan false tidak bukan alphanumeric
int isAlphanumeric(char tempAlphanumeric){
	short i;
	
	for(i=0; i<26; i++){
	
		if(tempAlphanumeric == alphanumeric[i]){ 
			return 1;	
		}
	}
	
	for(i=0; i<26; i++){
	
		if(tempAlphanumeric == alphanumericKapital[i]){ 
			return 1;
		}
	}
	
	return 0;
}

// Fungsi untuk mengecek apakah karakter berupa simbol, dengan kembalian bertipe boolean, true jika benar simbol dan false tidak bukan simbol
int isSymbol(char tempSymbol){
	short i;
	
	for(i=0; i<14; i++){
	
		if(tempSymbol == symbol[i]){ 
			return 1; 
		}
	}
	
	return 0;	
}

// Fungsi yang mengembalikan nilai index apabila token termasuk kepada reserved word
int __isReserved(){
	
	// reserved word
	char reservedName[16][11] = {"begin", "div", "do", "else", "end", "if", "procedure", "program", "then", "var", "while", "read", "write", "forward", "function"};
	short i;

	for(i=0; i<=30; i++){
		token.charvalue[i] = tolower(token.charvalue[i]);
	}
	
	for(i=0; i<15; i++){

		if((strcmp(token.charvalue, reservedName[i])) == 0){
			token.attr = RWORD;
			return i;
		}
	}
	
	return i;
}

// Fungsi yang mengembalikan nilai index apabila token termasuk kepada symbol, termasuk symbol yang dua
int __isSymbol(){
	
	// jeni-jenis symbol
	char symbolType[20][3] = {"+","-","*","(",")","=",",",".",";",":=","<","<=","<>",">",">=","[","]","..",":"};
	short i;
	
	for(i=0; i<15; i++){
		if((strcmp(token.charvalue, symbolType[i])) == 0){
			return i;
		}
	}
	
	return i;
}

// Procedure untuk menghapus karakter pada token
void resetToken(){
	short i, j;
	j = 0;
	
	for(i=0; i<30; i++){
	 	token.charvalue[i] = ' ';
	}
	
	n = 0;	
}

// Procedure yang membuat akhir dari sebuah tokn
void akhirToken()
{
	short i;
	
	for(i=0; i<30; i++){
		if(token.charvalue[i] == ' '){
			token.charvalue[i] = '\0';
		}
	}

}

// Procedure untuk membentuk token yang berupa numeric
void tokenNumeric(){
	token.attr = NUMBER;
	token.charvalue[n] = kar;	n++;	
	
	while(kar != ' '){
		
		kar = fgetc(infile); 
		
	    if(isNumeric(kar) == 1){
			token.charvalue[n] = kar;		
		}else if(isSymbol(kar) == 1){ 
			ungetc(kar, infile);
			break;
		}else if(kar == 9 || kar == 10){	
			break;
		}
			
		n++; 
	};
	
	token.value = atoi(token.charvalue);
		
	printf("%3d %3d %s\n", token.attr, token.value, token.charvalue); 
	resetToken(); // hapus isi token
	
}

// Procedure untuk membentuk token yang berupa alphanumeric
void tokenAlphanumeric(){
	
	token.attr = IDENTIFIER;
	token.charvalue[n] = kar;	n++;
	
	while(kar != ' '){ 
		
		kar = fgetc(infile);
		
		if(isAlphanumeric(kar) == 1){ 
			token.charvalue[n] = kar;						
		}else if(isNumeric(kar) == 1){ 
			token.charvalue[n] = kar;					
		}else if(isSymbol(kar) == 1){ 
		 	ungetc(kar,infile);
		 	break;
		}else if(kar == 9 || kar == 10){ 
			break;
		}
			
		n++;			
	};
	
	akhirToken();
	token.value = __isReserved();	
	if(token.value == 15){			
		token.value = tempValue;
	}else{
		tempValue = token.value; 
	}
	
	printf("%3d %3d %s\n", token.attr, token.value, token.charvalue); 	
	resetToken(); 
}

// Procedure untuk membentuk token yang berupa simbol
void tokenSymbol(){
	token.attr = SYMBOL;
	
	if(kar==':' || kar=='<' || kar=='>' || kar=='.')
	{
		do{
			token.charvalue[n] = kar; n++;  
			kar = fgetc(infile);
			
			if(kar == '=' || kar == '>' || kar == '.'){
				if( (token.charvalue[n-1] == '.' && kar == '.') ||
					(token.charvalue[n-1] == '<' && kar == '>') ||
					(token.charvalue[n-1] == '<' && kar == '=') ||
					(token.charvalue[n-1] == '>' && kar == '=') ||
					(token.charvalue[n-1] == ':' && kar == '=')){
						// fo nothing
					}else{
						ungetc(kar, infile);
						break;	
					}	
			}else{
				ungetc(kar, infile);
				break;
			}
			
		}while ((isSymbol(kar)==1) && n<2);
		
    }else{
		token.charvalue[n] = kar; n++; 
		kar = fgetc(infile); 
			
		if(isSymbol(kar) == 1){ 
			ungetc(kar, infile);
		}else if(isAlphanumeric(kar) == 1){
			ungetc(kar, infile);
		}else if(isNumeric(kar) == 1){
			ungetc(kar, infile);
		}
	}
	
	akhirToken();
	token.value = __isSymbol();
	
	printf("%3d %3d %s\n", token.attr, token.value, token.charvalue); 
	resetToken(); 
}
