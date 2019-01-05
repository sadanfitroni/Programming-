#include<stdio.h>
int main(void)
{
	int i,j ;
	int A[6][6];
	
	j=1;
	while(j<=5)
	{
		i=1;
		while(i<=6-j)
		{
			A[i][j]=i;
			printf("%d",A[i][j]);
			i++;
		}
		printf("\n");
		j++;
	}
}
