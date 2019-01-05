// Program 
#include<stdio.h>
#include<string.h>
int main()
{
	int i, jum,p;
	char string[30];
	char kar ;
	printf("Masukan kata : ");
	scanf("%d",&p);
	gets(string);
	jum=0;
	for(i=0; i<(int) strlen(string);i++)
	{
		kar=string[i];
		if(kar>='A'||'a' && kar <='Z'||'z')
		{
			jum++;
		}
	}
	printf("jumlah huruf  =%d\n",jum);
	return 0;
}
