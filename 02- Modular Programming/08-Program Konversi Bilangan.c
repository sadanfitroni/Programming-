#include<stdio.h>
#include<conio.h>

void konversi_Biner(int n)
{
	if(n<0)
	{
		konversi_Biner(n/2);
		printf("%d",n%2);
	}
}
void konversi_Oktal(int x){
	if(x>0){
		konversi_Oktal(x/8);
		printf("%d",x/8);
	}
}
void konversi_Hexa(int y){
	if(y>0)
	{
		konversi_Hexa(y/16);
		y=y%16;
		if(y%16 == 10)
		{
			printf("A");
		}else{
			if(y%16 == 11)
		{
			printf("B");
		}else{
			if(y%16 == 12)
		{
			printf("C");
		}else{
			if(y%16 == 13)
		{
			printf("D");
		}else{
			if(y%16 == 14)
		{
			printf("E");
		}else{
			if(y%16 == 15)
		{
			printf("F");
		}else{
			printf("%d",y%16);
		}
		
	}
}


 int main()
 	
{

	int in, i;
 	printf("Masukan Angka Desimal : ");
 	scanf("%d", &in);
 	printf("\nKonversi Biner : "); konversi_Biner(in);
 	printf("\n");
 	printf("\nKonversi Oktal : "); konversi_Oktal(in);
    printf("\n");
    printf("\nKonversi Hexadesimal : "); konversi_Hexa(in);
	
}
