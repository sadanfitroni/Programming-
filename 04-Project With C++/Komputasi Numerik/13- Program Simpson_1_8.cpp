// ============================================================//
// Nama    : Sadan Fitroni 									   |
// Nim     : 151511029 										   |	
// Kelas   : 3A-JTK-Polban 									   |
// Program : Integrasi Numerik menggunakan Metode Simpson 3/8  |
// ============================================================//
#include<iostream>
#include<cmath>
using namespace std;
double f(double x)
{
    double a=1/(1+x*x); 
    return a;
}
int main()
{    cout.precision(4);      
    cout.setf(ios::fixed);
    int n,i;       
    double a,b,c,h,sum=0,integral;
   	cout<<"|=============================================|\n";
	cout<<"|-----INTEGRASI NUMERIK METODE SIMPSON 3/8----|\n"; 
	cout<<"|-----------------f(x) = 4x^2-----------------|\n"; 
    cout<<"|=============================================|";

	cout<<"\nInput Batas Integral \nInitial limit,a= ";
    cin>>a;
    cout<<"Final Limit 		 b = ";             
    cin>>b;
    cout<<"Input Subinterval n = ";     
    cin>>n; 
    double x[n+1],y[n+1];
    h=(b-a)/n;                      
    for (i=0;i<n+1;i++)
    {                       
        x[i]=a+i*h;          
        y[i]=f(x[i]);
    }
    for (i=1;i<n;i++)
    {
        if (i%3==0)
        sum=sum+2*y[i];
        else
        sum=sum+3*y[i];
    }
    integral=3*h/8*(y[0]+y[n]+sum);  
    cout<<"\nNilai Integral:"<<integral<<endl;
    return 0;
}
