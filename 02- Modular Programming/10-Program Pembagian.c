#include<stdio.h>
int sisa ;
public static int bagi (int a, int b, int h){
	int x=a;
	int y=b;
	h=0;
	if(x<0)
	{
		x=-x;
	}if(y<0)
	{
		y=x-y;
	}
	sisa=a;
	while((x-y)>y || x-y >=0)
	{
		h++;
		x=x-y;
		sisa=x;
	}
	if(a<0  || b<0){
		h=-h;
	}
	if(a<0 && b<0)
	{
		sisa=-sisa;
	}
	return h;
}
