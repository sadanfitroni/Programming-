//Menentukan bilangan terbesar
#include<stdio.h>
int main(void)
{
	int a,b,Max ;
	printf("Masukan nilai a :");
	scanf("%d",&a);
	printf("Masukan nilai b :");
	scanf("%d",&b);
	if(a>b)
	{
		Max=a;
	}else
	{
		Max=b;
	}printf("Jadi nilai maksimumnya adalah =%d",Max);
}
