#include<stdio.h>
int main(void)
{
	int i,j ;
	int X[7][4] ;
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
		
			if(j<=5-i)
			{
				printf("	");
			}else{
				X[i][j]=i;
				printf("%d\t",X[i][j]);	
			}
			j=j+1;
		}
	printf("\n");	
	i++;
	}


}
