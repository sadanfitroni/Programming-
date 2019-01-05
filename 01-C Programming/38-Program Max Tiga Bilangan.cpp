/*Program Maksimal3bilangan_Sadan Fitroni
 *Deskripsi:
 *Nama : Sadan Fitroni
 *Tanggal/Versi:1 Desember 2015 v.1
 Compiler :
 */
 
 #include<stdio.h>
int main (void)

 {
 	int x,y,z ;
 	scanf("%d\n",&x);
 	scanf("%d\n",&y);
 	scanf("%d",&z);
 	if((-30 <=x<=30) && (-30<= y<=30) && (-30<=z<=30)) ;
 	{
 		if(x>y && x>z)
 		{
 			printf("%d\n",x);
 		}else{
 			if(y>x && y>z)
 			{
 				printf("%d\n",y);
 			}else{
 				printf("%d\n",z);
 			}
 		}
 	}
 	
 	return 0 ;

 }
