#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout.precision(2);      
    cout.setf(ios::fixed);    
    int i=0,j=0,n,k;
    cout<<"\Input jumlah Nilai : ";    
    cin>>n;
    double x[n], y[n][n];            
    cout<<"\nInput Nilai x\n";
    
	for (i=0;i<n;i++)           
        cin>>x[i];
    cout<<"\nInput Nilai y\n";
    
	for (i=0;i<n;i++)           
        cin>>y[i][0];
    
	for (j=1;j<n;j++)           
        for (i=0;i<n-j;i++)
        {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    cout<<"\nForward Table \n\n";
    cout<<"x"<<setw(10)<<"y"<<setw(10);  
    for (i=1;i<n;i++) 
        cout<<"y"<<i<<setw(10);
    cout<<"\n-----------------------------------------------------------------------\n";    
        
    k=n;
    for (i=0;i<n;i++)         
    {
        cout<<x[i]<<setw(10);
        for (j=0;j<k;j++)
        {            
            cout<<y[i][j];
            cout<<setw(10);
        }
        cout<<"\n";
        k--;
    }
return 0;
} 
