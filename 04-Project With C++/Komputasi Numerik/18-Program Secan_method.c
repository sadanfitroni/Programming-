/*
Nama 		: Sadan Fitroni 
Nim  		: 151511029
Praktikum 	: Secan Method Program for f(x) = x^3-20  
*/

#include<stdio.h>
float f(float x)
{
    return(x*x*x-20); // f(x)= x^3-20
}
float main()
{
    float x0,x1,x2;
    int count=1,n;
    float e = 0.00005; 
    printf("Input Nilai x0 dan x1 :"); 
    scanf("%f%f",&x0,&x1);
    printf("\nInput maksimum iterasi :");
    scanf("%d",&n);
    do
    {
        if(f(x0)==f(x1))
        {
            printf("\n Solusi tidak ditemukan.\n");
        return;
        }
        x2=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
        x0=x1;
        x1=x2;
        printf("\n Iterasi ke-%d    x=%f\n",count,x2);
        count++;
        if(count==n)
        {
        break;
        }
    } while(fabs(f(x2))>e);
    printf("\nSolusi :  %f",x2);
 
}

