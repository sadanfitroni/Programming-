// ============================================================//
// Nama    : Sadan Fitroni 									   |
// Nim     : 151511029 										   |	
// Kelas   : 3A-JTK-Polban 									   |
// Program : Newton Raphson Methodh 						   |
// ============================================================//
#include <stdio.h>
#include <math.h>

float f(float x){
	return (pow(x,2.0)-2*x-5);
//	return (pow(x,3.0)-20);
}

int main(){
	float x[100] = {0};
	x[0] = 2;
	x[1] = 3;
	float res;
	int n, iteration;
	printf("Masukkan jumlah iterasi:");
    scanf("%d",&iteration);
	printf("X0 = %f\n", x[0]);
	printf("X1 = %f", x[1]);
	for(n = 1; n<iteration; n++){
		x[n+1] = (x[n-1]*f(x[n])-x[n]*f(x[n-1]))/(f(x[n])-f(x[n-1]));
		printf("\nX%d = %f\t|\terror X%d = %f", n+1, x[n+1], n+1, fabs(x[n+1]-x[n]));
		if ((fabs(x[n+1]-x[n])) <= 0.000001) {
			break;
		}
	}
	return 0;
}
