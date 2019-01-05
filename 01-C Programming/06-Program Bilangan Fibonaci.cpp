#include<stdio.h>
int main(void)
	{
		int baris,i,j,k,tengah,a,b,c,batas_tengah;
		printf("Masukan Maksimal Baris : \n");
		scanf("%d",&baris);
		tengah = baris;
		
		i=0;
		while(i<baris)
			{
				
				j=0;
				while(j < tengah)
					{
						printf(" ");
						j++;
					}
				tengah--;
				a=i;
				k=1;
				b=0;
				while(k<=i)
					{
						if(k==1 or k==i)
							{
								printf("1 ");
							}
						else if(k==2)
							{
								printf("%d ",i-1);
							}
						else
							{
								printf("%d ",k);
							}
						k++;
					}
				printf(" %d",i);
				printf("\n");
				i++;
			}
		printf("==> THIS PROGRAM MADE BY DYAS NURHAKIM.");
	}
