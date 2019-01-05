/*Program Biaya_Setelah_Bunga_Sadan Fitroni
 *Deskripsi: Menghitung total Bayar
 *Nama : Sadan Fitroni
 *Tanggal/Versi:29 November 2015 v.1
 Compiler :Dev-C++ 5.7.1
 */
 #include<stdio.h>
 int main(void)
 {
 
// Kamus data
 float Total_Biaya,Bunga,bunga;
 float Biaya_Awal;
 scanf("%f",&Biaya_Awal);
 scanf("%f",&bunga);
 
 if(Biaya_Awal<=150000)
 {
 	if(bunga>=0 && bunga<=100)
 	{
 		Total_Biaya=Biaya_Awal+(bunga*Biaya_Awal/100);
 		printf("%.2f",Total_Biaya);
 	}
 }
 return 0;
}
 
