/*Program ParkirMalam_Minggu_Sadan Fitroni
 *Deskripsi:
 *Nama : Sadan Fitroni
 *Tanggal/Versi:30 November 2015 v.1
 Compiler :
 */
 #include<stdio.h>
 int main()
 {
 	//kamus Data
 	int Jenis_Kendaraan, waktu, Total_Biaya ;
 	scanf("%d\n", &Jenis_Kendaraan) ;
 	scanf("%d", &waktu);
 	
 	if(0<waktu && waktu <=24)
 	{
 		switch(Jenis_Kendaraan){
 			case 1:
 				if(waktu<=5)
 				{
 					Total_Biaya= waktu *1500;
 					printf("%d",Total_Biaya);
 				}
 			break ;	
 		}
 	}

} 	

