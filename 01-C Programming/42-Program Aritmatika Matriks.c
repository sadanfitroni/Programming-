#include<stdio.h>
#include<math.h>

int main()
{
	int X[2][2]={{3,5},{4,7}};
	int Y[2][2]={{2,9},{4,5}};
	int Z[2][2];
	int i,j,k;
	printf("Matriks Ke 1\n\n");
	i=0;
	while(i<=1)
	{
		j=0;
		while(j<=1)
		{
			printf("%d\t",X[i][j]);
			j=j+1;
		}
		printf("\n");
		i=i+1;
	}
	printf("\nMatriks Ke 2\n\n");
	i=0;
	while(i<=1)
	{
		j=0;
		while(j<=1)
		{
			printf("%d\t",Y[i][j]);
			j=j+1;
		}
		printf("\n");
		i=i+1;
	}
	printf("\nHasil Penjumlahan\n");
//	printf("%d\t",Z[i][j]);
	i=0;
	while(i<=1)
	{
		j=0;
		while(j<=1)
		{
		 	Z[i][j]=X[i][j]+Y[i][j];
		 	printf("%d\t",Z[i][j]);
			j=j+1;
		}
	
		printf("\n");
		i=i+1;
	}
	
	printf("\nHasil Pengurangan\n");
	i=0;
	while(i<=1)
	{
		j=0;
		while(j<=1)
		{
			Z[i][j]=X[i][j]-Y[i][j];
		 	printf("%d\t",Z[i][j]);
			j=j+1;
		}
		printf("\n");
		i=i+1;
	}

	i=0;
	while(i<=1)
	{
		j=0;
		while(j<=1)
		{
			k=0;
			while(k<=1)
			{
			 Z[i][j]=X[i][k]*Y[k][j]+X[k][i]*Y[j][k];
			}
			k++;
		}
		j++;
	}
	printf("\n");
	i++;
	printf("Hasilnya =%d",Z[i][j]);
}
