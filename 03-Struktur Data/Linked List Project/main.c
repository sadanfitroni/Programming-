#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "list.h"
int main()
{
	int n,i,choose;
	char jwb;
	char nama[10];
	bool ket;
	
	printf("Jumlah Kota yang akan diinpput : ");
	scanf("%d", &n);
	
	list a[n];		
	for (i=1;i<=n;i++)
	{
		create_list(&a[i]);
		printf("Kota ke %d = ",i);
		scanf("%s",a[i].kota);
		ket = true;
		
		while(ket)
		{
			printf("Nama Mahasiswa : ", i);
			scanf("%s",nama);
			insert_value_last(&a[i],nama);
			
			printf("Tambah ? y/n\n");
			scanf(" %c",&jwb);
			
			if (jwb == 'n')
			{
				ket = false;
			}
			
		}
		do{
		system("cls");
		printf("================================================\n");
		printf("=====================MENU=======================\n");
		printf("================================================\n");
		printf("\t\t1. Insert/Tambah Data\n");
		printf("\t\t2. Tampilkan Data\n");
		printf("\t\t3. Search Data\n");
		printf("\t\t4. Delete Data\n");
		printf("\t\t5. Exit\n");
		printf("\t\tPilihan : "); scanf("%d",choose);
		switch(choose){
			case 1:
				Insert();
				break;
			case 2:
				Show();
				break;
			case 3:
				Search();
				break;
			case 4:
				Delete();
				break;
			case 5:
				Exit();*/
		}while(choose!=6);
		
	}

	
		printf("\n\njumlah kota yang ada = %d",n);
		i=1;
		while (i<=n)
		{			
			printf("\ndaftar kota yang ada : %s", a[i]);
			i++;
		}
		printf("Nama Mahasiswa Berdasarkan Kota : ");		
	return 0;
}
