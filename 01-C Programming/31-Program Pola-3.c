#include<stdio.h>
int main(void)
{
	int i,j ;
	int X[6][6] ;
	
	j=1;
	while(j<=5)
	{
		i=1;
		while(i<=j)
		{
			X[i][j]=i;
			printf("%d\t",X[i][j]);
			i++;
		}
		printf("\n");
		j++;
	} 
	
	
}

