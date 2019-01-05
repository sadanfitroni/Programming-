#include"stdio.h"
main()
{// program mencari kpk
    int x,y,a,b,c,d,e,z,fpb,FPB;
   
    printf("Masukan nilai a:"); scanf("%d",&a);
    printf("Masukan nilai b:"); scanf("%d",&b);
    printf("Masukan nilai c :");scanf("%d",&c);
    x=a;y=b;z=c;
    while(x!=y)
    {
        if(x<y) {
        	x=x+a ;
        }else{
        	y=y+b;
        }
    }
    while(y!=z){
    	if(y<z){
    		y=y+b;
    	}else{
    		z=z+c;
    	}
    }
    while (b!=0)
	{
	
	c=a%b;
	a=b ;
	b=c ;
	fpb=a ;
	
	}
	while(d!=0){
		e=fpb%d;
		fpb=d ;
		d=e;
		FPB = fpb;
   
   }
    printf("jadi kpk dari a,b dan c = %d\n",y);//cetak nilai x atau y sama saja
    printf("Jadi FPB dari a,b,c =%d\n",FPB);
}
