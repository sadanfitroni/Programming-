#include <stdio.h>
int main(void)
{
	 float Quis, Tugas, UAS, UTS ;
	 float nilaiakhir ;
	 do {
	 printf ("Nilai Quis Siswa\t");
 	 scanf("%f", &Quis) ; 
 	 if (Quis>100){
 	 
	  printf("Data Salah, Try Again\n");
 }
	 }	while(Quis > 100);
 	 {
     printf ("Nilai Tugas Siswa\t");
 	 scanf ("%f", &Tugas);
 	 }while (Tugas>100);
 	 {
 	 printf("Nilai UTS Siswa\t\t") ;
 	 scanf("%f", &UTS);
	 }while (UTS>100);
 	 printf("Nilai UAS Siswa \t");
 	 scanf("%f", &UAS) ;
 
 	 
 	 nilaiakhir = ((Quis * 15)/100) + ((Tugas * 20)/100) + ((UAS * 30)/100) + ((UAS*35)/100) ; 
 	 printf("Hasil akhir nilai Reyvan adalah %2.f",nilaiakhir); 
 
 	
}
