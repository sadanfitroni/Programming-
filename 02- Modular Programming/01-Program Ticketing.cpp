#include <stdio.h>
	
void Ticket(int Age, int *Price)
{
	if(Age>=4 && Age<=12)
		{
			*Price=*Price+25000;
		}
		else if(Age>12)
		{
			*Price=*Price+35000;
		}
}
int main()
{
	int usia,jumlah,i=0,harga=0;
	printf("masukkan total pembeli ");
	scanf("%d",&jumlah);
	while(i<jumlah)
	{
		printf("masukkan umur orang ke-%d ",i+1);
		scanf("%d",&usia);
		Ticket(usia,&harga);
		i++;
	}
	printf("Total biaya %d",harga);
	return 0;
}

