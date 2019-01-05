/*Program volume limas_Sadan Fitroni
 *Deskripsi:
 *Nama : Sadan Fitroni
 *Tanggal/Versi:28 November 2015 v.1
 Compiler :
 */
#include<stdio.h>
int main(void)
{
	float P,L,T,volume;
	scanf("%f\n",&P);
	scanf("%f\n",&L);
	scanf("%f",&T);
	
	volume=(P*L*T)/3 ;
	printf("%.6f\n",volume);
	return 0;
	
}
