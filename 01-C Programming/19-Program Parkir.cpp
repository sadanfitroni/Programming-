/*Program Parkir_Sadan Fitroni
 *Deskripsi:
 *Nama : Sadan Fitroni
 *Tanggal/Versi:30 November 2015 v.1
 Compiler :
 */
 #include<stdio.h>
 int main(void)
 {
 	int Jenis_Kendaraan, Waktu, Total_Biaya ;
 	scanf("%d",&Jenis_Kendaraan);
 	scanf("%d",&Waktu);
 	
 	switch(Jenis_Kendaraan)
	{
 		case 1:
 			Total_Biaya=1000*Waktu+1000;
 			break;
 		case 2:
 			Total_Biaya=500*Waktu+500;
 			break;
 	}
 	printf("%d\n",Total_Biaya);
 	return 0;
 }
