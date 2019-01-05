#include<stdio.h>
#include<conio.h>
int main(void)
{
	int P[11][11];
	int b,k;
	
	P[1][1] =1;
	printf("%d\n",P[1][1]);
	P[2][1] =1;
	printf("%d\t",P[2][1]);
	P[2][2] =1;
	printf("%d\n",P[2][2]);
	b=3 ;
	
	while (b<=10)
	{
		P[b][1]=1;
		printf("%d\t",P[b][1]);
		k=2;
	
	while(k<=b-1)
	{
		P[b][k]=P[b-1][k-1]+P[b-1][k];
		printf("%d	",P[b][k]);
		k=k+1;
	}
	P[b][k]=1;
	printf("%d\t",P[b][k]);
	printf("\n");
	b=b+1 ;
	}
}
