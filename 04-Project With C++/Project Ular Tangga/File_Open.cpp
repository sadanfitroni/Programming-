#include<stdio.h>
#include<stdlib.h>

main()
{
	FILE *fptr;
	char filename [15];
	char ch;
	
	printf("Masukan nama file untuk dibuka\n");
	gets(filename);
	fptr=fopen(filename,"r");
	
	if(fptr==NULL)
	{
		printf("File tidak bisa dibuka\n");
		exit(0);
	}
	
	ch=fgetc(fptr);
	
	while(ch!=EOF)
	{
		printf("%c", ch);
		ch=fgetc(fptr);
	}
	
	fclose(fptr);
	
}
