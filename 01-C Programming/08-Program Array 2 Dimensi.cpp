#ifndef boolean_h
#define boolean_h
#define true 1
#define false 0
#define boolean unsigned char
#endif
#include<stdio.h>
int main(void)

{
	int M[5][6] = {{0,0,0,0,0,0},
				{0,9,40,3,4,1},
				{0,5,85,12,15,17},
				{0,18,20,2,45,90},
				{0,40,4,1,7,13}} ;
	int X[11] ={0,0,0,0,0,0,0,0,0,0,0};
	int b,i,j,k,n,e,c,d ;
	boolean test ;
				
	n=1;
	b=1;
	while (b<=4)
	{
		k=1;
		while(k<=5){
			if (M[b][k]<=1) {
			test=false;
			}else{
				i=0;
				j=1;
			}
			while (j<=M[b][k]){
			if (M[b][k] %j==0){
			i=i++;
			}
			j++;
			
			if (i==2){
				test=true;
			}else{
				test=false;
			}
			if (test){
				X[n]=M[b][k];
				n++;
			}
			k++;
		}
		
	}
	
	b++;

d=1;
while( d<=4 )
{
	e=1;
	while(e<=5)
	{
		if(e!=1){
			printf("\t");
		}
		printf("%d", M[d][e]);
		e++;
	}
	printf("\n");
	d++;
}


printf("\n");
c=1;
while(c<=10)
{
	printf("%d",X[c]);
	c++;
}
return 0;
	}
}


