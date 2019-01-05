#include<stdio.h>
int main(void)
{
	int kode_bulan;
	printf("Masukan Kode bulan (1..12) :\t");
	scanf("%d",&kode_bulan);
	switch(kode_bulan)
	{
		case 1:
			printf("january\n");
			break;
		case 2:
			printf("February\n");
			break;
		case 3:
			printf("Maret\n");
			break;
		case 4:
			printf("April\n");
			break;
		case 5:
			printf("Mei\n");
			break;
		case 6:
			printf("juny\n");
			break;
		case 7:
			printf("july\n");
			break;
		case 8:
			printf("Agustus\n");
			break;
		case 9:
			printf("September\n");
			break;
		case 10:
			printf("january\n");
			break;
		case 11:
			printf("November\n");
			break;
		case 12:
			printf("Desember\n");
			break;
			default:\
			printf("salah kode bulan\n");
	}
	return 0;	
}
