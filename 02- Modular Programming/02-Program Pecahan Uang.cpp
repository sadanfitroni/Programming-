#include <stdio.h>
int ratus(int u)
{
	return u/100000;
}
int puluh(int u)
{
	return (u%100000)/10000;
	
}
int lima(int u)
{
	return (u%10000)/5000;
	
}
int ribu(int u)
{
	return ((u/1000)%100)%5;
}

int main()
{
	int uang;
	printf("masukkan jumlah uang ");
	scanf("%d",&uang);
	printf("Rp.100.000 : %d lembar, Rp.10.000 : %d lembar, Rp.5.000 : %d lembar, dan Rp.1000 : %d lembar",ratus(uang),puluh(uang),lima(uang),ribu(uang));
	return 0;
}


