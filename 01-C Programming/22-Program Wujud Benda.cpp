/*Program wujud_Benda_Sadan Fitroni
 *Deskripsi:
 *Nama : Sadan Fitroni
 *Tanggal/Versi:29 November 2015 v.1
 Compiler :
 */
#include<stdio.h>
int main(void)
{
	// kamus data
	float suhu ;
	//algoritma 
	scanf("%f",&suhu);
	if(suhu <150)
	{
		printf("wujud cair\n");
	}else{
		printf("wujud non cair\n");
	}
	return 0;
	 
}
