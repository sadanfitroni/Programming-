#include <stdio.h>
#include<iostream>

using namespace std;
 
void binary(int number)
{
    int rem;
 
    if (number <= 1)
    {
        cout << number;
        return;
    }
    rem = number % 2;
    binary(number / 2);
    cout << rem;
}
 
int main()
{
    int decimal, biner;
    printf("Input Number : ");
    scanf("%d",&decimal);
 
    if (dec < 0)
        printf("%d Bukan nilai integer.",decimal);
    else
    {
        printf("Nilai Biner dari %d is ",decimal);
        binary(decimal);
    }
    return 0;
}
