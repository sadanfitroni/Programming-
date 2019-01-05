// ============================================================//
// Nama    : Sadan Fitroni 									   |
// Nim     : 151511029 										   |	
// Kelas   : 3A-JTK-Polban 									   |
// Program : Runge-Kutta Methodh 							   |
// ============================================================//

#include<stdio.h>
#include<math.h>
#include<iostream>

double f(double x, double y){
    return x+y;
}
main(){
    int i;
    double x,y,x0,y0,h,k1,k2,k3,k4;
 
 	printf("|=============================================|\n");
	printf("|----------RUNGE KUTTA METHODH ORDE 4---------|\n"); 
    printf("|=============================================|\n");
	
    printf("\n");
    printf("y'= x+y\n");
    printf("x0: ");
    scanf("%lf",&x0);
    printf("y0: ");
    scanf("%lf",&y0);
    printf("xn: ");
    scanf("%lf",&x);
    printf("h: ");
    scanf("%lf",&h);
    printf("x\t\ty\t\tk1\t\tk2\t\tk3\t\tk4\n");
    printf("_________________________________________________________________________________________\n");
    //Begin Runge-Kutta Routine
    while((x-x0)>0.0000000001){
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2.0,y0+k1/2.0);
        k3=h*f(x0+h/2.0,y0+k2/2.0);
        k4=h*f(x0+h,y0+k3);
        printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",x0,y0,k1,k2,k3,k4);
        y=y0+1/6.0*(k1+2*k2+2*k3+k4);
        y0=y;
        x0=x0+h;
    }
    printf("%lf\t%lf\n",x0,y0);
    printf("__________________________________________________________________________________________\n");
    printf("Nilai y = %lf\n\n",y);
}
