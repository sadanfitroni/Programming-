#include<stdio.h>
#include<math.h>

int faktorial(int m)
{
	if(m == 1)
		return 1;
	else
		return (m * faktorial(m-1));	
}

float abs(float suku){
	
	if(suku < 0){
		suku = -suku;
	}
	
	return suku;
}

int main(){
	
	 int tanda=1 , n=0, i=0;
	 float suku=1, jumlah=0 , cosinus=0, eps, x=0.25;
	 const float epsilon = 0.0000001;
	 
	 while(abs(suku) >= epsilon){
	 	
		jumlah+=suku;
	 	tanda= -tanda;
	 	n+=2;
		suku = tanda * pow(x,n) / faktorial(n);	 		 	
	 	i++;
	 	printf("%e \t %d\n", suku, i);
	 }
	 
	 cosinus = jumlah;
	 printf("\nNilai cosinus %f dengan jumlah deret %d",cosinus,i);
	 
	return 0;
}













