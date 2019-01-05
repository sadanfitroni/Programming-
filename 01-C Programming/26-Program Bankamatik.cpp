#include<stdio.h>
void Bankamatik(int IDR,int pembagi)
{	
	int i=0;
	if(IDR>=pembagi)
	{
		while(IDR>=pembagi)
		{
			IDR=IDR-pembagi;
			i=i+1;
		}
		printf("Rp. %d	: %d lembar\n",pembagi,i);
	}
}
int main()
{
	int IDR,h,j=0,array[5]={100000,50000,10000,5000,1000};
	printf("Masukkan jumlah uang	: ");scanf("%d",&IDR);
	h=IDR;
	while(j<=4)
	{
		Bankamatik(h,array[j]);
		h=IDR%array[j];
		j=j+1;
	}
}
