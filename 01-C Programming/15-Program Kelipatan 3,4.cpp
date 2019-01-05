/*Program kelipatan 3,4_Sadan Fitroni
 *Deskripsi:
 *Nama : Sadan Fitroni
 *Tanggal/Versi:30 November 2015 v.1
 Compiler :
 */
#include<stdio.h>
#include<conio.h>
main(void)
{
		/* Kamus Data*/
		int bilangan;
		int cek ; // berisi 1 jika bilanagan merupakan kelipatan 3 dan 4
				 // berisi jika 0 jika sebaliknya 
		/* *Algoritma */
		cek=0;
		scanf("%d",&bilangan);
		if(bilangan%3==0 && bilangan%4==0)
		{
			cek=1;
		}
		printf("%d\n",cek);
		return 0;
		
}
