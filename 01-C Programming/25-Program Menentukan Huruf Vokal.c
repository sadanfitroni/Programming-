/*Program Memeriksa Huruf Vokal Sadan Fitroni
 *Deskripsi:
 *Nama : Sadan Fitroni
 *Tanggal/Versi:29 Desember 2015 v.1
 Compiler :Dev c++ 5.7.1
 */

#include<stdio.h>
int main (void)
{
	char c;
	scanf("%c",&c);
	if((c=='a')|| (c=='A') || (c=='i') || (c=='I') || (c=='u')  || (c=='U') || (c=='e') || (c=='E') || (c=='o') || (c=='O'))
		printf("true\n");
		else
		printf("false\n");
	return 0;
}
