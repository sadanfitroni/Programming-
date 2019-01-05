 /* --------------------------------------------------------- */
 /* File Program : PTR1.CPP        */
 /* Contoh pemakaian pointer       */
 /* Tujuan : mengetahui panjang dan posisi variabel di memory */
 /* --------------------------------------------------------- */  

#include <stdio.h>

int main(){
	int x,y; //x dan y variable integer bernilai tak tentu
	int *px; //pointer untuk objek bertipe integer
	x = 87;  //x diisi nilai 87
	px = &x; //pointer px diisi alamat x atau pointer px merujuk pada variable x
	y = *px; //y diisi nilai dari variable yang ditunjuk pointer px dengan kata lain ialah variable x yang bernilai 87
	
	printf("Alamat x = %p\n", &x); // %p berfungsi menampilkan alamat dari &x dalam hexadecimal, &x berfungsi menampilkan alamat variable x dalam bentuk hexadecimal
	printf("Isi px   = %d\n", x); // %d berfungsi menampilkan nilai dari x dalam decimal
	printf("Nilai yang ditunjuk oleh px = %d\n", *px); // %d berfungsi menampilkan nilai dari *px dalam decimal, *px menghasilkan nilai yang dirujuk oleh px
	printf("Nilai y  = %d\n", y); // %d berfungsi menampilkan nilai dari y dalam decimal
   	
   	printf("Alamat y = %p\n", &y); // %p berfungsi menampilkan alamat dari &y dalam hexadecimal, &y berfungsi menampilkan alamat variable y dalam bentuk hexadecimal
   	return 0;
   
/* STUDI KASUS : */
/* - Eksekusi file program tersebut dan pahami maksud program ini */
/* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris program ) */
/* - Tambahkan pernyataan untuk menampilkan Alamat varabel y, eksekusi, dan perhatikan hasilnya */
/* - Bila pernyataan px = &x; diganti dengan y = *px; ,apa yang terjadi? */ 			//akan terjadi error karna px tidak merujuk kemanapun
/* - Tulis hasil pemahaman Anda pada kertas yang disediakan */
}
