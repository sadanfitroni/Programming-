#include<stdio.h>
#include<conio.h>

int main()
{
    int  integral, binaryInt = 0, i = 1;
    float  binaryFract = 0, k =0.1f, fractional, temp1, binaryTotal, f;

    printf("Program Convert float to binary\n");
    printf("\nInput float value : ");
    scanf("%f",&f);

    integral = (int)f;

    fractional = f - (int)f;

    while(integral>0)
    {
        binaryInt = binaryInt + integral % 2 * i;
        i = i * 10;
        integral = integral / 2;
    }

    while(k>0.00000001)
    {
        temp1 = fractional *2;
        binaryFract = binaryFract+((int)temp1)*k;
        fractional = temp1 - (int)temp1;
        k = k / 10;
    }

    binaryTotal = binaryInt +binaryFract;
    printf(" \nbinary equivalent = %lf\n\n\n\n\n", binaryTotal);
}
