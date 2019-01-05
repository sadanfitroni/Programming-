// Program Fahrenreit dan celcius 
#include <stdio.h> 
main (void) 
{
	float F ;
	float C ;
	float x, y ,step ;
	
	scanf ("%f", &x) ;
	scanf (" %f", &y) ;
	scanf("%f", &step) ;

	F = x ;
	while (F <= y) ;
	{
		C = (5.0/9.0) * ( F - 32) ;
		printf ("%3.0f  %6.1f\n.",F,C) ;
		
		F=F + step ;
		
	}		
}
