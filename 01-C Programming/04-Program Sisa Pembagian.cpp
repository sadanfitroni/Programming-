#include<stdio.h>

int m,n,sisa;
int bagi(int i, int j)
{
	while(m<=j)
	{
		i=i-j;
		m++;
	}
	sisa=i;
	return m;
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	bagi(a,b);
	printf("%d",bagi(a,b));
	printf("sisa %d",sisa);
}
