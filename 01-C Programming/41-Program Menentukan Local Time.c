/*
Program C untuk memperoleh
informasi waktu lokal
*/

#include <stdio.h>
#include <conio.h>
#include <time.h>

main()
{
    time_t ambil_waktu;

    time(&ambil_waktu);
    printf("Waktu daerah  : \n %s ", ctime (&ambil_waktu));

    getch();
   // return 0;
}
