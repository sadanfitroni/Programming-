#include <stdio.h>
#include <windows.h>

main(){
 int i, j, k;

 printf("\nTekan Ctrl + C atau Ctrl + Pause Break untuk berhenti !!\n");
 system("pause");
 for(i = 0; i <= 60;){//jam
  for(j = 0; j <= 60;){//menit
   for(k = 0; k <= 60;){//detik
    Sleep(100);
    printf("Stopwatch = %d : %d : %d\n", i, j, k);
    Sleep(900);
    system("cls");
    k++;
    if(k == 60){
     k = 0;
     j++;
    }
    if(j == 60){
     j = 0;
     i++;
    }
   }
  }
 }
}
