// Mencari rata rata nilai Ulangan Harian DDP 
#include<stdio.h>
int main (void)
{
	int Ulangan1, Ulangan2, Ulangan3,Rata_rata_nilai ;
	
	printf("Masukan Nilai Ulangan1");
	scanf("%d",&Ulangan1);
	printf("\n");
	printf("Masukan Nilai Ulangan2");
	scanf("%d",&Ulangan2);
	printf("\n");
	printf("Masukan nilai ulangan3");
	scanf("%d",&Ulangan3);
	
	Rata_rata_nilai = (Ulangan1+Ulangan2+Ulangan3)/(3) ;
	printf("Jadi Rata rata nilai ulangan harian DDP anda adalah =%d",Rata_rata_nilai);
	return 0 ;
	
}
