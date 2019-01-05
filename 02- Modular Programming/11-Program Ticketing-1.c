#include<stdio.h>
int Age,price,JP;
void Ticket(int Age,int *price,int JP)
{

if(Age<4)
{
	*price=0*JP;
}else{
	if(Age>=4 && Age <=12)
	{
		*price=25000*JP;
	}else{
		if(Age>12){
			*price=35000*JP;
		}
	}
}
}
int main()
{
	int Age,price,JP1,JP2,JP3,price1,price2,price3,Total_Price;
	
	//printf("Input Umur Pengunjung <4 Tahun : ");
	//scanf("%d",&Age);
	printf("Input Jumlah Pengunjung <4 Tahun : ");
	scanf("%d",&JP1);
	Ticket(Age,&price1,JP1);
	printf("Jumlah harga 1 : %d\n",price1);
	//printf("Input Umur Pengunjung antara 4-12 Tahun : ");
	//scanf("%d",&Age);
	printf("Input Jumlah Pengunjung antara 4-12 Tahun : ");
	scanf("%d",&JP2);
	Ticket(Age,&price2,JP2);
	printf("Jumlah harga 2 : %d\n",price2);
	//printf("Input Umur Pengunjung >12 Tahun : ");
	//scanf("%d",&Age);
	printf("Input Jumlah Pengunjung >12 Tahun : ");
	scanf("%d",&JP3);
	Ticket(Age,&price3,JP3);
	printf("Jumlah harga 3 : %d\n",price3);
	Total_Price=price1 + price2 + price3;
	printf("Total Price : %d",Total_Price);
	return 0;
	
}
