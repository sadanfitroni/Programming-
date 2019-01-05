#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x);
float absolut(float x);

int main(){
	float x=0, batasBawah=1, batasAtas=2, error=1, toleransiError=0.00001;
	int counter=1, maks=20;
	double nilaiTengah;

	printf("   |     a    |    b     |    f(a)   |   f(b)   |    x     |    f(x)   \n");
	while(counter<=maks && error>toleransiError){
		
		nilaiTengah = (batasBawah + batasAtas) / 2;
		printf("%-2d |", counter);
		printf(" %.5f | %.5f |", batasBawah , batasAtas);
		printf(" %.6f | %.6f |", f(batasBawah), f(batasAtas));
		printf(" %.5f | %.6f \n", nilaiTengah, f(nilaiTengah));
		
		if(f(batasBawah) * f(nilaiTengah) < 0){
			batasAtas = nilaiTengah;
		}
		
		if(f(batasAtas) * f(nilaiTengah) < 0){
			batasBawah = nilaiTengah;
		}
		
		error = absolut(f(nilaiTengah));
		counter++;
	}	
	
	printf("\nx = %.5f dengan f(x) = %.6f\n", nilaiTengah, f(nilaiTengah));
	return 0;
}


float f(float x){
	return pow(x,3)-x-1;
}

float absolut(float x){
	if(x<0){
		x = -x;
	}
	return x;
}

