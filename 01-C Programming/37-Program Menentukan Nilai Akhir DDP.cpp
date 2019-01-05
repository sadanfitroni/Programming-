// Program Menghitung Nilai rata rata DDP 
#include<iostream>
#include<'stdio.h'>
using namespace std;
int main()
{
	float Nilai_Quiz, Nilai_Tugas, Nilai_UTS, Nilai_UAS, Nilai_rata_rata;
	cout<<"Masukan Nilai Quiz anda : ";
	cin<<Nilai_Quiz;
	printf("\n");
	Nilai_Quiz = (Nilai_Quiz)*(0.2) ;
	printf("Masukan Nilai Tugas anda :");
	scanf("%f", &Nilai_Tugas);
	printf("\n");
	Nilai_Tugas = (Nilai_Tugas)*(0.25) ;
	printf("Masukan Nilai UTS anda :");
	scanf("%f", &Nilai_UTS);
	printf("\n");
	Nilai_UTS = (Nilai_UTS)*(0.25) ;
	printf("Masukan Nilai UAS anda :");
	scanf("%f", &Nilai_UAS);
	printf("\n");
	Nilai_UAS = (Nilai_UAS)*(0.3) ;
	
	Nilai_rata_rata = (Nilai_Quiz+Nilai_Tugas+Nilai_UTS+Nilai_UAS) ;
	printf("Nilai rata rata anda adalah =%.0f",Nilai_rata_rata);
	return 0 ;
	
}
