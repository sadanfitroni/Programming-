// program menentukan huruf kapital atau bukan 
#include<stdio.h>
int main(void)
{
	char karakter [6];
	printf("Masukan karakter\t");
		scanf("%c",karakter);
	if(karakter>= "A" && karakter <="Z")
	{
		printf("Huruf Kapital");
	}else
	{
		printf("Bukan huruf kapital");
	}
	
} 
