#include <stdio.h>
#include <conio.h>
void main()
{
    int A[5][5], i, j, det;
    //Input Matriks A
    printf("Masukan Matriks A\n");
    printf("------------------\n");
    for(i=1;i<4;i++)
    {
       for(j=1;j<4;j++)
       {
          printf("[%d][%d]: ",i,j);
          scanf("%i",&A[i][j]);
       }
    }
    printf("\n\n");
    //Matriks A
    printf("Matriks\n");
    printf("------------------\n");
    for(i=1;i<4;i++)
    {
       for(j=1;j<4;j++)
       {
          printf("%3i",A[i][j]);
       }
       printf("\n");
    }
    printf("\n\n");
    //Determinan Matriks A
    det=((A[1][1]*A[2][2]*A[3][3])+(A[1][2]*A[2][3]*A[3][1])+(A[1][3]*A[2][1]*A[3][2]))-((A[3][1]*A[2][2]*A[1][3])+(A[3][2]*A[2][3]*A[1][1])+(A[3][3]*A[2][1]*A[1][2]));
    printf("Determinan = %i",det);
    printf("\n");
    getch();
}
