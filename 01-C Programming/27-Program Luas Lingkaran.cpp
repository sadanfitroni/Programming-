# include <stdio.h>
int main(void)

{
	double jari_jari ;
	double luas ;
	printf ("Masukan jari jari") ;
	scanf (" %lf", &jari_jari);
	
	luas = 3.14 * jari_jari * jari_jari ;
	printf (" luas lingkaran = %lf\n", luas) ;
	return 2 ;
	
}
