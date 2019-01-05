#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a,b,c ;
	printf("Masukan nilai a :");
	scanf("%d",&a);
	printf("Masukan nilai b :");
	scanf("%d",&b);
	
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}printf("FPB nya adalah =%d",a);
}





