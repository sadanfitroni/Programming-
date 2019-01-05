#include<stdio.h>
/* Upa program 1 */
void baca ( int *A, int *B)
// Membaca nilai A dan B
{
printf("A :") ; scanf("%d", &A);
printf("B :") ; scanf("%d", &B);
}
  // Upa Program kedua 
  void Tukar (int *A, int *B)
  // Menukarkan nilai A dan B
  {
  	int temp ;
  	temp=*A;
  	*A=*B;
  	*B=temp;
  }
  // Upa program ke tiga 
  void Tulis(int A, int B)
  {
  // Mencetak nilai Adan B
  printf("%d\n",A);
  printf("%d\n",B);
  
  }
