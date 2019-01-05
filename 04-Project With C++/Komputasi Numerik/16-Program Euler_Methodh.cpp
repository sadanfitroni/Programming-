// ============================================================//
// Nama    : Sadan Fitroni 									   |
// Nim     : 151511029 										   |	
// Kelas   : 3A-JTK-Polban 									   |
// Program : Euler Methodh  								   |
// ============================================================//

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float f(float(x),float(y))
{
return (-y);
}

int main(){

 cout.precision(4);
 cout.setf(ios::fixed); 
 int n,i,m;
 float h;
 cout<<"|=============================================|\n";
 cout<<"|-----------------EULER METHODH---------------|\n"; 
 cout<<"|------------Persamaan : dy/dx = -y-----------|\n"; 
 cout<<"|=============================================|\n";
 cout<<"Jumlah Iterasi : "<<endl; cin>>n;
 cout<<"Nilai(h) :"<<endl; cin>>h;
 double y[n],x[n];
 cout<<"Nilai x0 : "<<endl;
 cin>>x[0];
 cout<<"Nilai y0 : "<<endl;
 cin>>y[0];
 for(i=1;i<=n;i++){
	x[i]=x[i-1]+h;
 }

 for(i=1;i<=n;i++) {
 	y[i]=y[i-1]+(h*f(x[i-1],y[i-1]));
 }

 for(m=0;m<=56;m++) cout<<"-";			
 	cout<<"\nIterasi Ke "<<setw(10)<<"x"<<setw(15)<<"y"<<endl;
 for(m=0;m<=56;m++) cout<<"-";		
 cout<<"\n";
 for(i=1;i<=n;i++){
 	cout<<setw(5)<<i<<setw(20)<<x[i]<<setw(15)<<y[i]<<endl;
 }
 for(m=0;m<=56;m++) cout<<"-";		
 cout<<"\n";
 return 0;
}
