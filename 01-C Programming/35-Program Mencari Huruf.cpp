/*Program Mencari Huruf Sadan Fitroni
 *Deskripsi:
 *Nama : Sadan Fitroni
 *Tanggal/Versi: 29 Desember 2015 v.1
 Compiler :
 */
 #include<stdio.h>
 int main(void)
 {
 	 int i,found;
 	 char Huruf,X[10]="JTKPOLBAN"; char Y[10]="jtkpolban";
 	 scanf("%c",&Huruf);

 	 i=0;
 	 found=0; 
 	 while(i<9)
 	 {
 	  if(Huruf==X[i] || Huruf==Y[i])
 	  {
 	  	found=1;
 	  	break;
 	  }
 	  i++;
 	 }
 	 
	  if(found==1)
	  {
	  	printf("ada\n");
	  }else{
	  	printf("tidak ada\n");
	  }
	  	
	 return 0;
 }
 
