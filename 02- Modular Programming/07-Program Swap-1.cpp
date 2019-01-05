#include<stdio.h>
// deklarasi modul yang digunakan 
int maxab (int x, int y);
void tukar (int *x, int *y);

int main()
{
	/* Program utama 
	*Membaca dua bilangan bulat
	* Menuliskan masksimum dua bilangan yang dibaca dg menggunakan fungsi 
	*Menukar kedua bilangan dengan prosedure */
	
	/*Kamus data */
	int a, b, c;
	printf("Maksimum dua bilangan :\n");
	printf("Ketikan dua bilangan , pisahkan dengan Return :\n");
	scanf("%d %d", &a,&b);
	printf("Kedua Bilngan : a=%d, b=%d \n", a,b);
	// Menampilkan meaksimum dari dua bilangan dapat dilakukan dengan 2 cara 
	// cara 1
	// c=maxab (a,b); printf(" Maksimum =%d\n", c);
	//cara ke 2 
	printf(" maksimum =%d\n", maxab(a,b));
	printf("Menukar kedua bilangan diatas :\n") ;
	tukar (&a,&b);
	printf("Kyedua bilangan setelah ditukar : a=%d, b=%d \n", a, b);
	return 0;
}

/* Body Realisasi prosedure /fungsi */
int maxab (int x, int y) // Parameter xx,y merupakan passing parameter by value
{
	/* Algoritma mencari maksimum dua bilangan bulat */
	if(x>=y)
	{
		return x;
	}else{
		return y;
	}
	/*Cara lain :
	return (( x>=) ? x:y);
	*/
	
}/* end function maxab */

void tukar( int *x, int*y)  // Parameter x, y merupakan passing parameter by adress
{
	int temp;
	/* Menukar 2 bilangan integer */
	temp=*x;
	*x=*y;
	*y=temp;
	
} // end prosedure tukar 
