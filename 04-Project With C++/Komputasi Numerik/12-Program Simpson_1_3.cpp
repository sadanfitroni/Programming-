// ============================================================//
// Nama    : Sadan Fitroni 									   |
// Nim     : 151511029 										   |	
// Kelas   : 3A-JTK-Polban 									   |
// Program : Integrasi Numerik menggunakan Metode Simpson 1/3  |
// ============================================================//

#include<iostream>
#include<cmath>
using namespace std;
double f(double x)
{
    double a=4+x*x; // Fungsi    
    return a;
}
int main()
{   cout.precision(4);      
    cout.setf(ios::fixed);
    int n,i;            
    double a,b,c,h,sum=0,integral;
    cout<<"|=============================================|\n";
	cout<<"|-----INTEGRASI NUMERIK METODE SIMPSON 1/3----|\n"; 
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
    for (i=1;i<n;i+=2)
    {
        sum=sum+4.0*y[i];          
    }
    for (i=2;i<n-1;i+=2)
    {
        sum=sum+2.0*y[i];              
    }
    integral=h/3.0*(y[0]+y[n]+sum);
    cout<<"\nNilai Integral "<<integral<<"\n"<<endl;
    return 0;
} 
