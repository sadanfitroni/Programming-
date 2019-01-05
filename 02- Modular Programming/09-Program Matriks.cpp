#include<stdio.h>
#include<stdlib.h>
#include<iostream>

// Deklarasi Global
// Banyaknya jumlah maksimum baris matriks 
#define baris 10
//Banyaknya jumlah maksimum baris matriks
#define kolom 9
using namespace std;

int i,j ;
// void tukar  (int *x, int *y) ; definisi modul ini ditulis di awal jika modul tersebut ditempatkan dibawah modul yang memanggilnya 

// proses Pengisian Mtriks secara acak dan menampilkannya
void FillArray (int A[baris][kolom])
{//randomize();
	  printf("Matriks Sebelum dilakukan sorting\n");
	  for (i=0;i<baris;i++)
	  {
	  	for(j=0;j<kolom;j++)
	  	{
	  		A[i][j]=rand()%100+1; // Mengisi angka secara acak dari selang 0-100
	  		cout<<A[i][j]<<"\t";
	  	}cout<<endl;
	  	
	  }
	  printf("\n");
}
void tukar (int *x, int *y)
{
	int temp;
	temp= *x;
	*x=*y;
	*y=temp;
}
/* Proses Pengurutan angka pada baris yang terkecil ke yang terbesar */
void RowSort(int A[baris][kolom],int brs, int klm)
{
	int k;
	// proses Pengurutan angka pada baris 
	for(i=0;i<brs;i++)
	{
		for (j=0;j<klm-1;j++)
		{
			for(k=j+1;k<klm;k++)
			{
				if(A[i][j]>A[i][k])
				{
					tukar(&A[i][j],&A[i][k]);
					/* modul tukar tsb mengganktikan operasi sebagai berikut 
					temp =A[i][j];
					A[i][j]=A[i][k];
					A[i][k]=temp;
					*/
				}
			}
		}
	}
}

/* Proses pengurutan angka pada kolom dari yang terkecil ke yang terbesar */
void ColumnSort (int A[baris][kolom],int brs,int klm)
{
	int k;
	// Proses pengurutan angka pada kolom
	for(j=0;j<klm;j++)
	{
		for(i=0;i<brs-1;i++)
		{
			for(k=i+1;k<brs;k++)
			{
				if(A[i][j>A[k][j]])
				{
					tukar(&A[i][j],&A[k][j]);
				}
			}
		}
	}
}
void ShowArray(int A[baris][kolom], char ket[5])
{
	printf("\nMatriks setelah di_Sort pers %s \n\n");
	for(i=0;i<baris;i++)
	{
		for(j=0;j<kolom;j++)
		{
			cout<<(A[i][j])<<"\t";
		}cout<<endl;
	}
}
// Fungsi / Mlodul utama 
int main()
{
	// Deklarsi Lokal
	int x[baris][kolom];
	//Memanggil modular showArray
	FillArray(x);
	//Memanggil Modular ExchangeRow
	RowSort(x,baris,kolom);
	//Menampilkan Hasil urut baris
	ShowArray(x, "baris");
	// Memanggil modular ExchangeColumns 
	ColumnSort (x,baris,kolom);
	//Menampilkan hasil urut kolom
	ShowArray(x, "kolom");
	return 0; 
}

