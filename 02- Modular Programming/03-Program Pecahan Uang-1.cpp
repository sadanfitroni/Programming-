//Program Cash Dispenser
//Deskripsi : Menentukan jumlah lembar uang per besaran (tersedia Rp. 1.000, Rp. 5.000, Rp. 10.000, Rp. 50.000, dan Rp. 100.000) yang akan dikeluarkan sebuah cash dispenser, jika diberikan masukan besaran uang dalam ribuan. 
//Compiler : DEV-C++ 5.11
#include <stdio.h>
void Bankamatik(int IDR)
{
	int ratus, limapuluh,puluh,limaribu,ribu;
	ratus=IDR/100000;
	limapuluh=(IDR%100000)/50000;
	puluh=((IDR%100000)%50000)/10000;
	limaribu=(IDR%10000)/5000;
	ribu=((IDR%10000)%5000)/1000;
	printf("Rp.100.000 : %d , Rp.50.000 : %d , Rp.10.000 : %d , Rp.5.000 : %d dan Rp.1.000 : %d",ratus,limapuluh,puluh,limaribu,ribu);
}
int main()
{
	int uang;
	printf("masukkan nominal uang ");
	scanf("%d",&uang);
	Bankamatik(uang);
	return 0;
}
