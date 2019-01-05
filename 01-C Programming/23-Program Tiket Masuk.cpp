#include<stdio.h>

void ticket(int age, int *price)
{
	if(age<4)
	{
		*price = 0;
	}
	else if(age>=4 && age<=12)
	{
		*price = 25000;
	}
	else if(age>12)
	{
		*price = 35000;
	}
}

int main()
{
	int hasil=0,age,jp,price=0,i=0;
	printf("Masukkan jumlah pengunjung	: ");scanf("%d",&jp);printf("\n");
	while(i<jp)
	{
		printf("Masukkan umur	: ");scanf("%d",&age);
		ticket(age,&price);
		i++;
		hasil = hasil + price;
	}
	printf("--------------------------------\nTotal biaya	: %d",hasil);
}
