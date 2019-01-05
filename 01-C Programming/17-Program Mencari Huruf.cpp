/*Program mencari_Huruf_Sadan Fitroni
 *Deskripsi:
 *Nama : Sadan Fitroni
 *Tanggal/Versi:29 November 2015 v.1
 Compiler :
 */
 #include<stdio.h>
 #include<string.h>
 main()
 {
 	// kamus data
 	
 	char X[10]="JTKPolban" ;
 	int i ;
 	char huruf;
 	//Algoritma
 	i=1;
 	while (i<10)
 	scanf("%s",huruf);
 	{
 		if (X[i]==huruf)
 		{
 			printf("ada\n");
 		}else{
 			printf("tidak ada\n");
 		}
 		i++;
 	}
 	return 0;
 }
