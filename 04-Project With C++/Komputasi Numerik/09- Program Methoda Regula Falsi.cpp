#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x);
float absolut(float x);

int main(){
	const float e=2.718281828;
	float x=0, batasBawah=2, batasAtas=3, error=1, toleransiError=0.001;
	int counter=1, maks=20;
	
	printf("   |     a    |    b     |    f(a)   |   f(b)   |    x     |    f(x)   \n");
	while(counter <= maks && error > toleransiError){
		x = ((f(batasAtas) * batasBawah) - (f(batasBawah) * batasAtas)) / (f(batasAtas) - f(batasBawah));
		error = absolut(f(x));
				
		printf("%-2d |", counter);
		printf(" %.5f | %.5f |", batasBawah , batasAtas);
		printf(" %.6f | %.6f |", f(batasBawah), f(batasAtas));
		printf(" %.5f | %.6f \n", x, f(x));
		
		if(f(x) * f(batasBawah) <0 ){
			batasAtas = x;
		}

		if(f(x) * f(batasAtas) <0 ){
			batasBawah = x;
		}
	
		counter++; 
	}
	printf("\nx = %.5f dengan f(x) = %.6f\n", x, f(x));	
	return 0;
}

float f(float x){
	return pow(x,2)-2*x-5;
}

float absolut(float x){
	if(x<0){
		x = -x;
	}
	return x;
}

