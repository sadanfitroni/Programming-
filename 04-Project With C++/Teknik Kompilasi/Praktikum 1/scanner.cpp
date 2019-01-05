/*
	File name : scanner.c
	Vers : 0.01a
	Written by : Setiadi Rachmat
	Date : Fri Aug 28 10:08:03 WIT 2009
	
	modified : Sadan Fitroni
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *infile;		
char token[50];		// menampung token 

int n;				// counter character token
char namafile[20];	// menampung nama file.
char kar;			// variabel penampung karakter yang dibaca dari file
char tempKar;		// menampung character saat melakukan break pada perulangan
int isBreak = 0;	// jika bertemu symbol setelah numeric atau alphanumeric maka looping di break

// Symbol, numeric, alphanumeric yang diperbolehkan 
char simbol[6] = {'+','-','*',';','.'};
char numerik[11] = {'0','1','2','3','4','5','6','7','8','9'};
char alphanumerik[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char alphanumerikKapital[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

// deklarasi fungsi atau prosedur
int isNumerik(char tempNumerik);
int isAlphanumerik(char tempAlphanumerik);
int isSimbol(char tempSymbol);
void resetToken();
void tokenNumerik();
void tokenAlphanumerik();
void tokenSimbol();
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
	
	strcpy(namafile, "example12.txt");	
	init_token(namafile);	
	n=0;
	resetToken();
	get_token();
	
	return 0;
}

int get_token(void)
{
	while((kar = fgetc(infile)) != EOF){	
	
		if(kar == ' ' || kar == 9 || kar == 10){
			
		}else if(isSimbol(kar) == 1){
					tokenSimbol();
					
		}else if(isAlphanumerik(kar) == 1){
	
			tokenAlphanumerik();

		}else if(isNumerik(kar) == 1){
		
			tokenNumerik();
		}
		
		if(isBreak == 1){
			token[n] = tempKar;
			
			printf("%s\n", token);			
			
					isBreak = 0;
			resetToken();
		}
		
	}
}


int isNumerik(char tempNumerik){
	short int i;
	
	for(i=0; i<10; i++){

		if(tempNumerik == numerik[i]){
			return 1;
		}
	}
	
	return 0;
}

int isAlphanumerik(char tempAlphanumerik){
	int i;
	
	for(i=0; i<26; i++){

		if(tempAlphanumerik == alphanumerik[i]){ 
			return 1;
		}
	}
	
	for(i=0; i<26; i++){

		if(tempAlphanumerik == alphanumerikKapital[i]){ 
			return 1;
		}
	}
	
	return 0;
}

int isSimbol(char tempSimbol){
	int i;
	
	for(i=0; i<5; i++){
	if(tempSimbol == simbol[i]){ 
			return 1; 
		}
	}
	
	return 0;
}

void resetToken(){
	int i;
	
	for(i=0; i<50; i++){
		token[i] = ' ';	
	}
	
	n = 0;	
}


void tokenNumerik(){
	token[n] = kar;	n++;
	
	while(kar != ' '){	
		
		kar = fgetc(infile); 
		
		if(isSimbol(kar) == 1){	
			isBreak = 1;
			tempKar = kar;
			break;
		}else if(isNumerik(kar) == 1){	
			token[n] = kar;					
		}else if(kar == 9 || kar == 10){	
			break;
		}
			
		n++; 
	};
		
	printf("%s\n", token);	
	resetToken();
}

// Procedure untuk membentuk token yang berupa alphanumeric
void tokenAlphanumerik(){
	token[n] = kar;	n++;
	
	while(kar != ' '){ 
		
		kar = fgetc(infile); 
		
		if(isSimbol(kar) == 1){ 
			isBreak = 1;
			tempKar = kar;
			break;
		}else if(isAlphanumerik(kar) == 1){
			token[n] = kar;						
		}else if(isNumerik(kar) == 1){ 
			token[n] = kar;					
		}else if(kar == 9 || kar == 10){ 
			break;
		}
			
		n++;			
	};
	
	printf("%s\n", token); 
	resetToken(); // hapus isi token
}

// Procedure untuk membentuk token yang berupa simbol
void tokenSimbol(){
	token[n] = kar; n++;  
	
	while(kar != ' ' ){ 
		
		kar = fgetc(infile); 
		
		if(isSimbol(kar) == 1){ 
			token[n] = kar;		
		}else if(kar == 9 || kar == 10){ 
			break;
		}
			
		n++;				
	};
	printf("%s\n", token); 
	resetToken();
}
