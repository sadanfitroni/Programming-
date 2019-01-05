/*
	File name : scanner.c
	Vers : 0.01a
	Written by : Setiadi Rachmat
	Date : Fri Aug 28 10:08:03 WIT 2009
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
int isNumber(char tempNumber[30]);
int __isReserved();
int __isSymbol();
void resetToken();
void akhirToken();
void tokenNumeric();
void tokenAlphanumeric();
void tokenSymbol();

/* initialisasi token */
void init_token(char *name){
	
	if ((infile = fopen(name,"r")) == NULL) {
		printf("Error : Can’t open source code %s \n",name);
		exit(-1);
	} else return;
}

int get_token(void)
{
	resetToken();
	token.value = 0;
	n = 0;
	int status = 1;
	
	while(status == 1){
	
		kar = fgetc(infile);	// baca kar dari file, lakukan selama bukan akhir file
			
		// ketika karakter berupa spasi, 9 untuk tab, 10 untuk enter/	
		if(kar == ' ' || kar == 10 || kar == '	'){
			// do nothing
			
		// ketika karakter berupa symbol		
		}else{
			status = 0;
			
			if(isSymbol(kar) == 1){
				// membentuk token
				tokenSymbol();
				return kar;
			// ketika karakter berupa alphanumeric
			}else if(isAlphanumeric(kar) == 1){
				// membentuk token
				tokenAlphanumeric();
				return kar;
				
			// ketika karakter berupa numeric
			}else if(isNumeric(kar) == 1){
				// membentuk token
				tokenNumeric();
				return kar;
			}			
		} 
	}
}

// Fungsi untuk mengecek apakah karakter berupa numeric, dengan kembalian bertipe boolean, true jika benar numeric dan false tidak bukan numeric
int isNumeric(char tempNumeric){
	short i;
	
	for(i=0; i<10; i++){
		// bandingkan dengan numeric yang di perbolehkan
		if(tempNumeric == numeric[i]){ // bisa menggunakan enumerasi, array numeric
			return 1;	// bernilai true ketika karakter berupa numeric
		}
	}
	
	return 0; // tidak ada yang sesuai maka beri kembalian false
}

// Fungsi untuk mengecek apakah karakter berupa alphanumeric, dengan kembalian bertipe boolean, true jika benar alphanumeric dan false tidak bukan alphanumeric
int isAlphanumeric(char tempAlphanumeric){
	short i;
	
	for(i=0; i<26; i++){
		// bandingkan dengan alphanumeric yang di perbolehkan
		if(tempAlphanumeric == alphanumeric[i]){ // bisa menggunakan ascii
			return 1;	// bernilai true ketika karakter berupa alphanumeric
		}
	}
	
	for(i=0; i<26; i++){
		// bandingkan dengan alphanumeric yang kapital
		if(tempAlphanumeric == alphanumericKapital[i]){ // bisa menggunakan ascii
			return 1;	// bernilai true ketika karakter berupa alphanumeric
		}
	}
	
	return 0;	// tidak ada yang sesuai maka beri kembalian false
}

// Fungsi untuk mengecek apakah karakter berupa simbol, dengan kembalian bertipe boolean, true jika benar simbol dan false tidak bukan simbol
int isSymbol(char tempSymbol){
	short i;
	
	for(i=0; i<14; i++){
		// bandingkan dengan alphanumeric yang di perbolehkan
		if(tempSymbol == symbol[i]){ 
			return 1; // bernilai true ketika karakter berupa simbol
		}
	}
	
	return 0;	// tidak ada yang sesuai maka nilai kembalian false
}

// Fungsi yang mengembalikan nilai index apabila token termasuk kepada reserved word
int __isReserved(){
	
	// reserved word
	char reservedName[16][11] = {"begin", "div", "do", "else", "end", "if", "procedure", "program", "then", "var", "while", "read", "write", "forward", "function"};
	short i;

	// untuk keamanan dibuat menjadi lowercase
	for(i=0; i<=30; i++){
		token.charvalue[i] = tolower(token.charvalue[i]);
	}
	
	for(i=0; i<15; i++){
		//bandingkan dengan reserved word yang ada dan membuat atributte adalah reserved wrod
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
	short i;
//	j = 0;
	
	for(i=0; i<30; i++){
	 	token.charvalue[i] = ' ';
	}
	
	n = 0;	// index array token dimulai kembali dari awal
}

// Procedure yang membuat akhir dari sebuah tokn
void akhirToken()
{
	short i, j;
	
	for(i=0; i<30; i++){
		if(token.charvalue[i] == ' '){
			token.charvalue[i] = '\0'; // ketika menemukan spasi maka dianggap akhir token dan ditandai dengan '\0'
		}
	}

}

// Procedure untuk membentuk token yang berupa numeric
void tokenNumeric(){
	token.attr = NUMBER;
	token.charvalue[n] = kar;	n++;	// karakter pertama yang dibaca yang sudah dicek berupa numeric, dan increment pengisian di index array berikutnya
	
	while(kar != ' '){	// ketika karakter bukan spasi
		
		kar = fgetc(infile); // membaca karakter
		
	    if(isNumeric(kar) == 1){	// karakter berupa numeric, masukkan ke dalam array token
			token.charvalue[n] = kar;		
		}else if(isSymbol(kar) == 1){ 
			ungetc(kar, infile);
			break;
		}else if(kar == 9 || kar == 10){	// interup jika karakter berupa tab atau enter tanpa menyimpan karakter tersebut
			break;
		}
			
		n++; // increment index array token
	};
	
	token.value = atoi(token.charvalue); // merubah nilai string menjadi integer
}

// Procedure untuk membentuk token yang berupa alphanumeric
void tokenAlphanumeric(){
	
	token.attr = IDENTIFIER;
	token.charvalue[n] = kar;	n++;	// karakter pertama yang dibaca yang sudah dicek berupa alphanumeric, dan increment pengisian di index array berikutnya
	
	while(kar != ' '){ // ketika karakter bukan spasi
		
		kar = fgetc(infile); // membaca karakter
		
		if(isAlphanumeric(kar) == 1){ // karakter berupa alphanumeric, masukkan ke dalam array token
			token.charvalue[n] = kar;						
		}else if(isNumeric(kar) == 1){ // numeric masih diditerima sebagai alphanumeric jika tidak dipisahkan dengan spasi atau tab atau enter
			token.charvalue[n] = kar;					
		}else if(isSymbol(kar) == 1){ // karakter berupa symbol maka interup looping dan tampung karakter tersebut
			 ungetc(kar,infile);
		 	break;
		}else if(kar == 9 || kar == 10){ // interup jika karakter berupa tab atau enter tanpa menyimpan karakter tersebut
			break;
		}
			
		n++;	// increment index array token
	};
	
	akhirToken();
	token.value = __isReserved();	
	if(token.value == 15){			// jika alphanumeric bukan termasuk reserved word maka value nya adalah value reserved word terakhir
		token.value = tempValue;
	}else{
		tempValue = token.value; 	// menampung value reserved word yang terakhir
	}
	
}
// Procedure untuk membentuk token yang berupa simbol
void tokenSymbol(){
	token.attr = SYMBOL;
	
	// symbol awal yang bisa menjadi symbol yang double
	if(kar==':' || kar=='<' || kar=='>' || kar=='.')
	{
		do{
			token.charvalue[n] = kar; n++;  // karakter pertama yang dibaca yang sudah dicek berupa numeric, dan increment pengisian di index array berikutnya
			kar = fgetc(infile);
			
			// symbol symbol double yang diperbolehkan
			if(kar == '=' || kar == '>' || kar == '.'){
				if( (token.charvalue[n-1] == '.' && kar == '.') ||
					(token.charvalue[n-1] == '<' && kar == '>') ||
					(token.charvalue[n-1] == '<' && kar == '=') ||
					(token.charvalue[n-1] == '>' && kar == '=') ||
					(token.charvalue[n-1] == ':' && kar == '=')){
						// do nothing
					}else{
						ungetc(kar, infile);
						break;	
					}	
			}else{
				ungetc(kar, infile);
				break;
			}
			
		}while ((isSymbol(kar)==1) && n<2);// maksimal dua symbol
		
    }else{
		token.charvalue[n] = kar; n++;  // karakter pertama yang dibaca yang sudah dicek berupa numeric, dan increment pengisian di index array berikutnya
		kar = fgetc(infile); // membaca karakter
			
		if(isSymbol(kar) == 1){ // karakter berupa symbol, masukkan ke dalam array token
			ungetc(kar, infile);
		}else if(isAlphanumeric(kar) == 1){
			ungetc(kar, infile);
		}else if(isNumeric(kar) == 1){
			ungetc(kar, infile);
		}
	}
	
	akhirToken();
	token.value = __isSymbol();
}
