#include<stdio.h>
#include<conio.h>
#include<process.h>

int main (void)
{
	/*
	 kamus data */
	int A[6][6],B[6][6],C[6][6],D [6][6],E[6][6],F[6][6],G [6][6], i,j, pilih ;
	char lagi ;
	/*program*/
	do 
	{
		system("cls") ;
		printf (" <<< Menu >>>\n");
		printf("\n");
		printf("1. Menapilkan Matriks A\n");
		printf("2. Menapilkan MatriksB\n");
		printf("3. Menapilkan Matriks C\n");
		printf("4. Menapilkan Matriks D\n");
		printf("5. Menapilkan Matriks E\n");
		printf("\n");
		printf("pilih No (1-6) :");
		scanf("%d", &pilih);
		switch (pilih) 
		
		{
			case 1 :
				printf("Matriks A\n");
				i = 1 ;
				while (i<=5) 
				{
					j = 1 ;
					while (j<=i)
					{
						A [i] [j] = j;
						printf ("%d\t", A [i] [j]);
						j++ ;      // j = j+1
						
						
					}
					printf("\n");
					i++   ;      // i+1
					
				}
				break;
				
				case 2 :
				printf ("Matriks B\n") ;
				i=1;
				while (i<=5) 
				{
					j=1;
					do 
					{
						B[i][j] = i;
						printf("%d\t", B[i][j] );
						j++ ;
						
					}while (j<=i);
					printf("\n");
					i++ ;
					
				}
				break ;
				case 3 :
				printf("Matriks C\n");
				i=1 ;
				while (i<=5)
				{
					j=1;
					while (j<=6-i)
					{
						C[i][j]=j ;
						printf("%d\t",C[i][j]);
						j=j+1;
						
					}
					printf("\n");
					i=i+1;
					
				}
				break;
				case 4 : 
				printf("Matriks D\n");
				i=1;
				while (i<=5)
				
				{
					j=1 ;
					while (j<=5)
					{
						D[i][j]=i;
						printf("%d\t", D[i][j]);
						j=j+1;
						
					}
					printf("\n");
					i=i+1;
					
				}
				break;
				case 5 :
				printf("Matriks 5 E\n");
				i=1;
				while (i<=5)
				{
					j=1;
					while(j<=6-i)
					{
						E[i][j]= 6-j;
						printf("%d\t", E[i][j]);
						j=j+1;
						
					}
					printf("\n");
					i=i+1;
					
				}
				break;
			
				
		}
		lagi=getch();
		
	}while ((pilih>=1) && (pilih<=5));
	return 0 ;
}
