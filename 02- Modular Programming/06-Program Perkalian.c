/*Program Pembagian_Sadan Fitroni
 *Deskripsi: Menentukan Hasil Perkalian dengan menggunakan Modular Programming
 *Nama : Sadan Fitroni
 *Tanggal: 15 Desember 2015 v.1
 Compiler :Dev C++ 5.7.1
 */
#include<stdio.h>
int kali(int b, int p, int *h)

{
	int bp, n;
	bp=p ;
	if(b==0 || p==0)
	{
		h=0;
	}else{
		if(bp<0)
		{
			bp=bp*-1;
		}
		
		}
		n=1;
		while (n<=bp)
		{
			*h=*h+b;
			n=n+1;
		}
	if (p<0)
	{
		*h=-*h;
	}
	return 0;	
} // end prosedure kali 


int main()
{
	int bil, pengali, hasil;
	hasil=0;
	printf("Masukan Bilangan Pertama  :");scanf("%d",&bil);
	printf("Masukan Bilangan Kedua    :");scanf ("%d",&pengali );
	kali(bil, pengali,&hasil);
	printf("Hasil Perkaliannya adalah :%d ",hasil);
	printf("\n\n");
	printf("	** Program Perklian dengan Modular Programming **\n");
	printf("		     Created By Sadan fitroni\n");
	printf("		       	 Nim : 151511029\n");
	
} // end modul utama 



