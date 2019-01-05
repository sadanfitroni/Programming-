#include<stdio.h>
int main(void)
{
	int i,j ;
	int X[6][6] ;
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			X[i][j]=i;
			printf("%d\t",X[i][j]);
			j++;
		}
		printf("\n");
		i++;
	} 
	
	
}

