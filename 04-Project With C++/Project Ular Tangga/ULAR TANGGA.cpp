#include <time.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
// PROTOTYPE //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void gotoxy(int,int);															//menempatkan kursor pada koordinat (x,y)
int cursor(int,int,int);														//menggerakan kursor ke atas / ke bawah
void opening();																	//tampilan pembuka game
int menu_game();																//emilihan menu permainan
void single_player();															//data bermain sendiri
void multi_player();															//data bermain multi peemain
void help();																	//penjelasan permainan
void SEBELUM_EXIT();
void About_Us();
void exit();																	//keluar program
void level();																	//modul menentukan level
void player_number();															//modul menentukan jumlah pemain
void computer_option();															//modul aktivasi komputer
void symbol();																	//modul menentukan symbol pemain (bidak)
void symbol_color(int,int,int,int);												//modul menambilkan bidak pemain sesuai warnanya
void field_show();																//modul menampilkan papan permainan
void play_game();																//modul permainan dimulai
void random_ular_tangga();														//modul merandom lokasi ular dan tangga
void random_turn();																//modul merandom urutan
void random_symbol();															//modul random symbol computer
void profil();																	//menampilkan profil pemain
int roll_dice(int);																//modul merandom dadu		
void highscore();																//menuliskan highscore pemain
void save_data();
// VARIABEL GLOBAL //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
typedef struct
{
	int turn;																	//urutan bermain
	int symbol;																	//bidak pemain
	int position;																//posisi bidak	
}theplayer;
typedef struct
{
	char name[10];																//nama pemenang
	int turn_count;																//jumlah putaran
}data_highscore;
theplayer player_com[4];														//variabel all player
data_highscore new_score;														//high score baru
data_highscore win[10];															//data high score pemenang
int i,j,k,l,temp;																//variabel pembantu
int menu;																		//pilih menu
int player;																		//jumlah player
bool computer;																	//keterangan komputer
int all_player;																	//all player
int winner;																		//pemenang
int snake;																		//jumlah ular
int ladder;																		//jumlah tangga
int snakefield[7][2];															//awal dan akhir ular
int ladderfield[7][2];															//awal dan akhir tangga
int field[100];																	//papan permainan
bool motion;																	//aktifasi animasi
bool keterangan;
// MAIN PROGRAM //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int main()
{
	save_data();
 do{
	opening();																	//tampilan pembuka game
	menu=menu_game();															//pemilihan menu permainan
	switch(menu)
	  {
		case 1:single_player();play_game();break;
		case 2:multi_player();play_game();break;
		case 3:help();break;
		case 4:About_Us();break;
		case 5:SEBELUM_EXIT();
		if (menu==1){
	 		exit();
		 }
		break;		
	  }	
   }while(menu!=1);
	//menu_save();
	return 0;
}
// MODUL PROGRAM //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void gotoxy(int x, int y)														//modul menempatan kursor														
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void setcolor(unsigned color)													//mengubah warna
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); 								//membuat objek hCon
	SetConsoleTextAttribute(hCon,color); 										//program untuk merubah warna,color akan diganti dengan nilai i nantinya
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
int cursor(int option,int x,int y)												//modul menggerakan cursor ke atas / ke bawah
{
	int select=1;
	int input;
	gotoxy(x,y);printf("%c",16);
	do
	{
		input=getch();															//mengisi nilai input
		if(input==80)															//input key bergerak ke bawah
		{
			gotoxy(x,y);printf(" ");
			y++;select++;
			if(select>option)
			{
				y=y-option;
				select=1;
			}
			gotoxy(x,y);printf("%c",16);
		}
		if(input==72)															//input key bergerak ke atas 
		{
			gotoxy(x,y);printf(" ");
			y--;select--;
			if(select<1)
			{
				y=y+option;
				select=option;
			}
			gotoxy(x,y);printf("%c",16);			
		}															
	}
	while(input!=13);															//berakhir saat input berisi enter
	return select;																//modul memberikan output nilai select
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void opening()																	//modul menampilkan pembukaan game
{
	system("color 0B");
	for(i=1;i<=10;i++)
	{
//	setcolor(77);
	system("cls");
	gotoxy(0,i+0);     			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
	gotoxy(i-1,1);     			printf("##     ##  ##           ##     ######      ###########    ##     ###     ##  ##########  ##########     ##		\n");	
	gotoxy(19-i,2); 			printf("##     ##  ##         ##  ##   ##   ##          ##      ##  ##   ####    ##  ##          ##           ##  ##	\n");
	gotoxy(i-1,3); 				printf("##     ##  ##        ##    ##  ##   ##          ##     ##    ##  ## ##   ##  ##          ##          ##    ##	\n");
	gotoxy(19-i,4); 			printf("##     ##  ##        ##    ##  ######           ##     ##    ##  ##  ##  ##  ##   #####  ##   #####  ##    ##	\n");
	gotoxy(i-1,5); 				printf("##     ##  ##        ########  #####            ##     ########  ##   ## ##  ##      ##  ##      ##  ########	\n");
	gotoxy(19-i,6);				printf("##     ##  ##        ##    ##  ##  ##           ##     ##    ##  ##    ####  ##      ##  ##      ##  ##    ##	\n");
	gotoxy(i-1,7);	            printf("#########  ########  ##    ##  ##   ##          ##     ##    ##  ##     ###  ##########  ##########  ##    ##	\n");
	Sleep(50);
	}
	printf("				ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป	\n");
	printf("				บ                                                               บ	\n");
	printf("				ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ	\n");
	printf("				                           PLEASE WAIT	                          	\n");
	for(i=1;i<=27;i++)
	{
		gotoxy(69+i,11);printf("-");
		gotoxy(59-i,11);printf("-");
		Sleep(25);
	}
	for (i=1;i<=63;i++)
	{
		gotoxy(32+i,9);printf("%c",219);
		Sleep(50);
	}	
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
int menu_game()																	//modul menampilkan menu permainan
{
	setcolor(14);
	gotoxy(0,23);
	printf("\t\t\t\t\t      ษอออออออออออออออออออออออออออออออออป\n");
	printf("\t\t\t\t\t      บ            MENU GAME            บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ        1 SINGLE PLAYER          บ\n");
	printf("\t\t\t\t\t      บ        2 MULTI PLAYER           บ\n");
	printf("\t\t\t\t\t      บ        3 HELP                   บ\n");
	printf("\t\t\t\t\t      บ        4 ABOUT US               บ\n");
	printf("\t\t\t\t\t      บ        5 EXIT                   บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ        CHOOSE THE MENU          บ\n");
	printf("\t\t\t\t\t      ศอออออออออออออออออออออออออออออออออผ\n");
	return cursor(5,52,26);														//memilih menu dengan kursor
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void single_player()															//data bermain sendiri
{
	level();																	//modul menentukan level
	player=1;																	//player otomatis 1
	computer=true;																//computer otomatis ada 3
	symbol();																	//modul menentukan symbol pemain (bidak)
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void multi_player()																//data bermain multi pemain
{
	level();																	//modul menentukan level
	player_number();															//modul menentukan jumlah pemain
	if(player<4)																//modul komputer aktif jika player_number<4
	{computer_option();}
	else
	{computer=false;}															//komputer di nonaktifkan
	symbol();																	//modul menentukan symbol pemain (bidak)
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void help()																		//penjelasan permainan
{
	FILE *tutorial;
	char help;
	int back;


	tutorial=fopen("tutorial.TXT","r");
	if (tutorial == NULL)
	{
		printf("File tidak dapat dibuka\n\r");
		exit(0);
	}
	
	system("cls");	
	while((help=getc(tutorial))!=EOF)
	   {
	   	putch(help);
	   }
  	fclose(tutorial);
  	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
  	system("pause");
	main();
    
}
void About_Us()
{
	FILE *About_Us;
	char about_Us;
	int back;


	About_Us=fopen("about_us.TXT","r");
	if (About_Us == NULL)
	{
		printf("File tidak dapat dibuka\n\r");
		exit(0);
	}
	
	system("cls");	
	while((about_Us=getc(About_Us))!=EOF)
	   {
	   	putch(about_Us);
	   }
  	fclose(About_Us);
  	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
  	system("pause");
  	system("cls"); 
	main();
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------
void SEBELUM_EXIT()															//modul aktivasi komputer
{
	gotoxy(0,23);
	printf("\t\t\t\t\t      ษอออออออออออออออออออออออออออออออออป\n");
	printf("\t\t\t\t\t      บ           EXIT OPTION           บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ       ARE U SURE FOR EXIT       บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ            1. YES               บ\n"); 
	printf("\t\t\t\t\t      บ            2. NOT               บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ        CHOOSE THE OPTION        บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      ศอออออออออออออออออออออออออออออออออผ\n");
	menu=cursor(2,55,28);														//memilih menggunakan kursor	
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void exit()																	//keluar program
{
	system("cls");
	save_data();
	
	if(motion==true)
	{
		for(i=2;i<=18;i++)
		{
			gotoxy(0,i);
			printf("                                                                                                                             ");
			gotoxy(1,38-i);
			printf("                                                                                                                             ");
			Sleep(75);
		}
		for(i=32;i<65;i++)
		{
			gotoxy(i,19);
			printf(" ");
			gotoxy(128-i,19);
			printf(" ");
			Sleep(25);
		}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
	exit(0);	
	}
	else
	{
		for(i=0;i<=65;i++)
		{	
			for(j=0;j<50;j++)
			{
				gotoxy(i,j);printf("%c",219);
				gotoxy(124-i,j);printf("%c",219);
			}
			Sleep(25);
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		if(winner<player)
		{
			for(i=1;i<=10;i++)
			{	save_data();	
				system("cls");
				gotoxy(25-i,5);	 	printf("           ###     ###  ###    ###    ###     ###       ### ### ###   ###\n");
				gotoxy(5+i,6); 		printf("           ###   ### ##   ##  ###    ###     ###       ### ### ####  ###\n");
				gotoxy(25-i,7); 	printf("           ### ### ##     ## ###    ###     ###       ### ### ##### ###\n");
				gotoxy(5+i,8); 		printf("           #####  ##     ## ###    ###     ### ##### ### ### #########\n");
				gotoxy(25-i,9); 	printf("           ###   ##     ## ###    ###     ###### ###### ### ### #####\n");
				gotoxy(5+i,10);		printf("          ###    ##   ##   ###  ###      #####   ##### ### ###  ####\n");
				gotoxy(25-i,11);	printf("         ###      ###      ######       ####     #### ### ###   ###\n");
				Sleep(50);
			}
		}
			else
		{
			for(i=1;i<=10;i++)
			{
				system("cls");
				gotoxy(25-i,5);		printf("           ###     ###  ###    ###    ###     ###        ###     ######  #######\n");	
				gotoxy(5+i,6); 		printf("           ###   ### ##   ##  ###    ###     ###      ##   ##  ##       #######\n");
				gotoxy(25-i,7); 	printf("           ### ### ##     ## ###    ###     ###     ##     ## ##       ##     \n");
				gotoxy(5+i,8); 		printf("           #####  ##     ## ###    ###     ###     ##     ##  #####   ####   \n");
				gotoxy(25-i,9); 	printf("           ###   ##     ## ###    ###     ###     ##     ##       ## ##     \n");
				gotoxy(5+i,10);		printf("          ###    ##   ##   ###  ###      #######  ##   ##        ## #######\n");
				gotoxy(25-i,11);	printf("         ###      ###      ######       #######    ###     ######  #######\n");
				Sleep(50);
			}
		}
	}	
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void level()																	//modul menentukan level
{
	gotoxy(0,23);
	printf("\t\t\t\t\t      ษอออออออออออออออออออออออออออออออออป\n");
	printf("\t\t\t\t\t      บ          SELECT LEVEL           บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ        1 EASY                   บ\n");
	printf("\t\t\t\t\t      บ        2 MEDIUM                 บ\n");
	printf("\t\t\t\t\t      บ        3 HARD                   บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ       CHOOSE THE LEVEL          บ\n");
	printf("\t\t\t\t\t      ศอออออออออออออออออออออออออออออออออผ\n");
	menu=cursor(3,52,26);														//level dipili dengan menggunakan kursor
	switch(menu)
	{
		case 1:
			snake=10;
//			if (player)
			ladder=8;
			break;
		case 2:
			snake=10;
			ladder=8;
			break;
		case 3:
			snake=10;
			ladder=8;
			break;
	}	
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void player_number()															//modul menentukan jumlah pemain
{
//	gotoxy(0,23);
//	printf("\t\t\t\t\t      ษอออออออออออออออออออออออออออออออออป\n");
//	printf("\t\t\t\t\t      บ         NUMBER OF PLAYER        บ\n");
//	printf("\t\t\t\t\t      บ                                 บ\n");
//	printf("\t\t\t\t\t      บ        1 TWO                    บ\n");
//	printf("\t\t\t\t\t      บ        2 THREE                  บ\n"); 
//	printf("\t\t\t\t\t      บ        3 FOUR                   บ\n");
//	printf("\t\t\t\t\t      บ                                 บ\n");
//	printf("\t\t\t\t\t      บ                                 บ\n");
//	printf("\t\t\t\t\t      บ                                 บ\n");
//	printf("\t\t\t\t\t      บ      CHOOSE THE OPTION          บ\n");
//	printf("\t\t\t\t\t      ศอออออออออออออออออออออออออออออออออผ\n");
//	menu=cursor(3,52,26);														//memilih banyak pemain menggunakan kursor
	switch(menu)
	{
		case 1:player=2;break;
//		case 2:player=3;break;
//		case 3:player=4;break;
	}
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void computer_option()															//modul aktivasi komputer
{
//	gotoxy(0,23);
//	printf("\t\t\t\t\t      ษอออออออออออออออออออออออออออออออออป\n");
//	printf("\t\t\t\t\t      บ         COMPUTER OPTION         บ\n");
//	printf("\t\t\t\t\t      บ                                 บ\n");
//	printf("\t\t\t\t\t      บ       PLAY WITH COMPUTER ?      บ\n");
//	printf("\t\t\t\t\t      บ                                 บ\n");
//	printf("\t\t\t\t\t      บ           1. YES                บ\n"); 
//	printf("\t\t\t\t\t      บ           2. NOT                บ\n");
//	printf("\t\t\t\t\t      บ                                 บ\n");
//	printf("\t\t\t\t\t      บ                                 บ\n");
//	printf("\t\t\t\t\t      บ      CHOOSE THE OPTION          บ\n");
//	printf("\t\t\t\t\t      ศอออออออออออออออออออออออออออออออออผ\n");
//	menu=cursor(2,55,28);														//memilih menggunakan kursor
//	if(menu==1)
//	{computer=true;}
//	else
//	{computer=false;}	
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void symbol()																	//modul menentukan symbol pemain (bidak)
{
	int symbol[player];
	gotoxy(0,23);
	printf("\t\t\t\t\t      ษอออออออออออออออออออออออออออออออออป\n");
	printf("\t\t\t\t\t      บ         PLAYER x SYMBOL         บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ        1 HEART    ( )           บ\n");
	printf("\t\t\t\t\t      บ        2 DIAMOND  ( )           บ\n");
	printf("\t\t\t\t\t      บ        3 CLUB     ( )           บ\n");
	printf("\t\t\t\t\t      บ        4 SPADE    ( )           บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ                                 บ\n");
	printf("\t\t\t\t\t      บ        CHOOSE THE COLOR         บ\n");
	printf("\t\t\t\t\t      ศอออออออออออออออออออออออออออออออออผ\n");
	symbol_color(3,249,67,26);													//menampilkan contoh symbol pemain
	symbol_color(4,250,67,27);
	symbol_color(5,252,67,28);
	symbol_color(6,253,67,29);
	for(i=0;i<player;i++)														//memilih symbol dengan kursor
	{			
		gotoxy(63,24);printf("%d",i+1);
		keterangan=false;
		while(keterangan==false)
		{
			menu=cursor(4,52,26);
			keterangan=true;
			for(j=0;j<i;j++)													//mencegah pemilihan menu yang sama
			{
				if(menu==symbol[j])
				{keterangan=false;}
			}	
			gotoxy(52,26+menu-1);printf(" ");					
		}
		gotoxy(0,25+menu);printf("\t\t\t\t\t      บ        %d   Selected         บ\n",menu);
		switch(menu)															
		{																		//menyimpan symbol player
			case 1:
				symbol[i]=1;
				player_com[i].symbol=3;	
				break;
			case 2:
				symbol[i]=2;
				player_com[i].symbol=4;
				break;
			case 3:
				symbol[i]=3;
				player_com[i].symbol=5;
				break;
			case 4:
				symbol[i]=4;
				player_com[i].symbol=6;
				break;
		}
	}
	system("cls");
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void symbol_color(int symbol,int colour,int x,int y)							//modul menambilkan bidak pemain sesuai warnanya
{																				//240-255 warna dengan back ground putih
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);			//hitam 240 biru 249 hijau 250 merah 252 ungu 253
	gotoxy(x,y);printf("%c",symbol);											//menampilkan symbol
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);				
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void field_show()																//menampilkan lapangan permainan
{
	system("color 2f");
	int color_code;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			color_code=47;														//inisialisasi warna(hitam)
			if(i%2==0)
			{k=j;}
			else
			{k=9-j;}
			if(motion==true)
			{Sleep(50);}
			else
			{
				for(l=0;l<snake;l++)											//menandai lokasi ular(merah)
				{
					if(i*10+j+1==snakefield[l][0]+1)
					{color_code=46;}
				}
				for(l=0;l<ladder;l++)											//menandai lokasi tangga(biru)
				{
					if(i*10+j+1==ladderfield[l][0]+1)
					{color_code=43;}
				}	
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color_code);		
			gotoxy(30+6*k,5+4*(9-i)+0);	printf("ษอออป\n");
			gotoxy(30+6*k,5+4*(9-i)+1);	printf("บ   บ\n");
			gotoxy(30+6*k,5+4*(9-i)+2);	printf("ศอออผ\n");
			gotoxy(30+6*k,5+4*(9-i)+3);	printf("  %d  \n",i*10+j+1);
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),24);
			switch(field[i*10+j])												//menampilkan simbol pemain pada papan
			{
				case 3 : symbol_color(3,249,32+6*k,6+4*(9-i));break;//9
				case 4 : symbol_color(4,250,32+6*k,6+4*(9-i));break;//10
				case 5 : symbol_color(5,252,32+6*k,6+4*(9-i));break;//12
				case 6 : symbol_color(6,253,32+6*k,6+4*(9-i));break;//13
			}
		}
	}	
	motion=false;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void play_game()																//modul permainan dimulai											
{
	int turn=1;
	int dice;
	for(i=2;i<=18;i++)
	{
		gotoxy(0,i);
		printf("                                                                                                                             ");
		gotoxy(1,38-i);
		printf("                                                                                                                             ");
		Sleep(75);
	}
	for(i=32;i<65;i++)
	{
		gotoxy(i,19);
		printf(" ");
		gotoxy(128-i,19);
		printf(" ");
		Sleep(25);
	}
	for(i=0;i<100;i++)															//mengisi seluruh elemen array lapangan permainan(menandakan kosong)
	{field[i]=' ';}
	for(i=0;i<4;i++)
	{
		player_com[i].position=0;												//mengisi seluruh posisi awal
	}
	motion=true;
	new_score.turn_count=1;
	field_show();
	random_ular_tangga();
	random_turn();
	random_symbol();
	profil();
	gotoxy(45,46);system("pause");
	keterangan=false;
	while(keterangan==false)	
	{
		if(turn==5)																//mengembalikan ke giliran pertama
		{
			turn=1;
			new_score.turn_count++;
			profil();
		}
		for(l=0;l<all_player;l++)
		{
			if(player_com[l].turn==turn)
			{dice=roll_dice(l);}												//menentukan siapa yang bermain
		}
		if(dice!=6)
		{
			turn++;
		}
		for(i=0;i<all_player;i++)
		{
			if(player_com[i].position==99)
			{
				keterangan=true;												//mengubah untuk menghentikan loop
				winner=i;														//menyimpan siapa yang ada di finish
			}
		}
	}
	gotoxy(101,28);printf("CONGRATULATION !");
	if(winner<player)
	{
		gotoxy(101,30);printf("PLAYER   %c WIN !",player_com[winner].symbol);
	}
	else
	{
		gotoxy(101,30);printf("COMPUTER %c WIN !",player_com[winner].symbol);	
	}
	switch(player_com[winner].symbol)
	{
		case 3 : symbol_color(3,249,110,30);break;
		case 4 : symbol_color(4,250,110,30);break;
		case 5 : symbol_color(5,252,110,30);break;
		case 6 : symbol_color(6,253,110,30);break;
	}
	gotoxy(45,46);system("pause");
	exit();
	//highscore();
	exit(0);
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void random_ular_tangga()														//modul merandom posisi tangga dan ular
{
//	srand(time(NULL));
	gotoxy(98,5);		printf("ษออออออออออออออออออป");
	for(i=6;i<25;i++)
	{
		gotoxy(98,i);	printf("บ                  บ");
	}
	gotoxy(98,25);		printf("ศออออออออออออออออออผ");
	gotoxy(103,7);
	printf("SNAKE :\n");
	for(i=0;i<7;i++)															//random lokasi ular
	{												
		snakefield[i][0]=(i+3)*10+5+rand()%4;
		do
		{	
		snakefield[i][1]=(i+1)*10+5+rand()%4;
		}
		while(snakefield[i][1]==snakefield[i-2][0]);
		if(i<snake)
		{
			gotoxy(103,8+i);
			printf("%d TO %d\n",snakefield[i][0]+1,snakefield[i][1]+1);
		}
	}
	gotoxy(103,16);
	printf("LADDER :\n");
	for(i=0;i<7;i++)															//random lokasi tangga
	{
		do
		{
		ladderfield[i][0]=(i+1)*10+rand()%5;
		}
		while(ladderfield[i][0]==ladderfield[i-2][1]);
		ladderfield[i][1]=(i+3)*10+rand()%5;
		if(i<ladder)
		{
			gotoxy(103,17+i);
			printf("%d TO %d\n",ladderfield[i][0]+1,ladderfield[i][1]+1);
		}
	}
	field_show();
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void random_turn()																//modul merandom giliran bermain
{			
	srand(time(NULL));														
	if(computer==1)																//menentukan computer ikut bermain atau tidak
	{all_player=4;}
	else
	{all_player=player;}
	player_com[0].turn=rand()%all_player+1;										//random urutan tampil
	for(i=1;i<all_player;i++)
	{
		keterangan=false;
		while(keterangan==false)
		{
			player_com[i].turn=rand()%all_player+1;
			keterangan=true;
			for(j=i-1;j>=0;j--)
			{
				if(player_com[i].turn==player_com[j].turn)
				{keterangan=false;}
			}
		}
	}
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void random_symbol()															//modul random symbol computer
{
	for(i=player;i<all_player;i++)												//random symbol(computer)
	{
		keterangan=false;
		while(keterangan==false)
		{
			player_com[i].symbol=rand()%4+3;
			keterangan=true;
			for(j=i-1;j>=0;j--)
			{
				if(player_com[i].symbol==player_com[j].symbol)
				{keterangan=false;}
			}
		}
	}
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void profil()																	//menampilkan profil pemain
{
	gotoxy(5,5);		printf("ษอออออออออออออออออออป");
	for(i=6;i<44;i++)
	{
		gotoxy(5,i);	printf("บ                   บ");
	}
	gotoxy(5,44);		printf("ศอออออออออออออออออออผ");
	for(i=0;i<all_player;i++)
	{
		j=0;
		if(i<player)															//keterangan pemain atau komputer
		{
			gotoxy(9,7+9*i+j++);printf("PLAYER-%d  ( )",i+1);
		}
		else
		{
			gotoxy(9,7+9*i+j++);printf("COM-%d     ( )",i-player+1);	
		}
		switch(player_com[i].turn)
		{
			case 1:gotoxy(9,7+9*i+j++);printf("FIRST  - 1ST");break;
			case 2:gotoxy(9,7+9*i+j++);printf("SECOND - 2ND");break;
			case 3:gotoxy(9,7+9*i+j++);printf("THIRD  - 3RD");break;
			case 4:gotoxy(9,7+9*i+j++);printf("FOURTH - 4TH");break;
		}
		gotoxy(9,7+9*i+j++);printf("POSITION : %d",player_com[i].position+1);
		gotoxy(9,7+9*i+j++);printf("%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,191);
		gotoxy(9,7+9*i+j++);printf("%c       %c",179,179);
		gotoxy(9,7+9*i+j++);printf("%c       %c",179,179);
		gotoxy(9,7+9*i+j++);printf("%c       %c",179,179);
		gotoxy(9,7+9*i+j++);printf("%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,217);
		switch(player_com[i].symbol)
		{
			case 3 : symbol_color(3,249,20,7+9*i);break;
			case 4 : symbol_color(4,250,20,7+9*i);break;
			case 5 : symbol_color(5,252,20,7+9*i);break;
			case 6 : symbol_color(6,253,20,7+9*i);break;
		}
		gotoxy(102,32);     printf("%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,191);
		gotoxy(102,33);     printf("%c       %c",179,179);
		gotoxy(102,34);     printf("%c       %c",179,179);
		gotoxy(102,35);     printf("%c       %c",179,179);
		gotoxy(102,36);     printf("%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,217);
		gotoxy(101,38);printf("TURN : %d",new_score.turn_count);
	}	
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
int roll_dice(int turn)															//modul merandom dadu												
{	
	srand(time(NULL));
	int dice;
	if(turn<player)
	{
		gotoxy(101,28);printf("PLAYER-%d ( )",l+1);
	}
	else
	{
		gotoxy(101,28);printf("COM-%d    ( )",l-player+1);
	}
	switch(player_com[turn].symbol)
	{
		case 3 : symbol_color(3,249,111,28);break;
		case 4 : symbol_color(4,250,111,28);break;
		case 5 : symbol_color(5,252,111,28);break;
		case 6 : symbol_color(6,253,111,28);break;
	}
	gotoxy(101,30);printf("ROLL THE DICE !       \n");
	field[player_com[turn].position]=player_com[turn].symbol;					//mengisi field dengan symbol
	field_show();
	gotoxy(45,46);
	if(turn<player)
	{system("pause");}
	else
	{
		printf("                                   ");
		Sleep(2000);
	}
	for(i=0;i<20;i++)
	{
		dice=rand()%6+1;														//random dadu
		switch(dice)
		{
		case 1:
			gotoxy(10,7+9*turn+4);printf("       ");gotoxy(103,33);printf("       ");
			gotoxy(10,7+9*turn+5);printf("   O   ");gotoxy(103,34);printf("   O   ");
			gotoxy(10,7+9*turn+6);printf("       ");gotoxy(103,35);printf("       ");
			break;
		case 2:
			gotoxy(10,7+9*turn+4);printf("     O ");gotoxy(103,33);printf("     O ");
			gotoxy(10,7+9*turn+5);printf("       ");gotoxy(103,34);printf("       ");
			gotoxy(10,7+9*turn+6);printf(" O     ");gotoxy(103,35);printf(" O     ");
			break;
		case 3:
			gotoxy(10,7+9*turn+4);printf("     O ");gotoxy(103,33);printf("     O ");
			gotoxy(10,7+9*turn+5);printf("   O   ");gotoxy(103,34);printf("   O   ");
			gotoxy(10,7+9*turn+6);printf(" O     ");gotoxy(103,35);printf(" O     ");
			break;
		case 4:
			gotoxy(10,7+9*turn+4);printf(" O   O ");gotoxy(103,33);printf(" O   O ");
			gotoxy(10,7+9*turn+5);printf("       ");gotoxy(103,34);printf("       ");
			gotoxy(10,7+9*turn+6);printf(" O   O ");gotoxy(103,35);printf(" O   O ");
			break;
		case 5:
			gotoxy(10,7+9*turn+4);printf(" O   O ");gotoxy(103,33);printf(" O   O ");
			gotoxy(10,7+9*turn+5);printf("   O   ");gotoxy(103,34);printf("   O   ");
			gotoxy(10,7+9*turn+6);printf(" O   O ");gotoxy(103,35);printf(" O   O ");
			break;
		case 6:
			gotoxy(10,7+9*turn+4);printf(" O   O ");gotoxy(103,33);printf(" O   O ");
			gotoxy(10,7+9*turn+5);printf(" O   O ");gotoxy(103,34);printf(" O   O ");
			gotoxy(10,7+9*turn+6);printf(" O   O ");gotoxy(103,35);printf(" O   O ");
			break;
		}
		Sleep(50);
	}
	gotoxy(101,30);printf("MOVE %d STEP !         \n",dice);
	gotoxy(45,46);	
	if(turn<player)
	{system("pause");}
	else
	{Sleep(2000);}
	gotoxy(45,46);printf("                                   ");
	temp=dice;
	keterangan=false;
	do
	{
	field[player_com[turn].position]=' ';
		if(keterangan==false)
		{
			
			player_com[turn].position=player_com[turn].position+1;				//memindahkan posisi satu persatu
		}
		else
		{
			player_com[turn].position=player_com[turn].position-1;
		}
		for(i=0;i<all_player;i++)												//mengisi papan dengn bidak
		{
			field[player_com[i].position]=player_com[i].symbol;
		}
	field[player_com[turn].position]=player_com[turn].symbol;
	field_show();
	Sleep(500);
	temp--;
		if(player_com[turn].position==99)
		{
			keterangan=true;													//jika posisi melebihi batas papan
		}
	}while(temp!=0);
	keterangan=false;
	profil();
	field_show();
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
	for(i=0;i<snake;i++)														//bila posisi berada pada ular
	{
		if(snakefield[i][0]==player_com[turn].position)
		{
			gotoxy(101,30);printf("YOU`RE ON A SNAKE !\n");
			gotoxy(45,46);	
			if(turn<player)
			{system("pause");}
			else
			{Sleep(2000);}
			gotoxy(101,30);printf("MOVE TO %d !        \n",snakefield[i][1]+1);
			gotoxy(45,46);	
			if(turn<player)
			{system("pause");}
			else
			{Sleep(2000);}
			field[player_com[turn].position]=' ';
			player_com[turn].position=snakefield[i][1];
			field[player_com[turn].position]=player_com[turn].symbol;
			profil();
		}
	}
	for(i=0;i<ladder;i++)														//bila posisi berada pada tangga
	{
		if(ladderfield[i][0]==player_com[turn].position)
		{
			gotoxy(101,30);printf("YOU`RE ON A LADDER !\n");
			gotoxy(45,46);
			if(turn<player)
			{system("pause");}
			else
			{Sleep(2000);}
			gotoxy(101,30);printf("MOVE TO %d !         \n",ladderfield[i][1]+1);
			gotoxy(45,46);	
			if(turn<player)
			{system("pause");}
			else
			{Sleep(2000);}
			field[player_com[turn].position]=' ';
			player_com[turn].position=ladderfield[i][1];
			field[player_com[turn].position]=player_com[turn].symbol;
			profil();
		}
	}
	field_show();
	for(i=0;i<4;i++)															//bila posisi pemain sama
	{
		if(player_com[turn].position==player_com[i].position && turn!=i)
		{
			if(i<player)
			{
				gotoxy(101,30);printf("PLAYER-%d ( ) DIE",i+1);
			}
			else
			{
				gotoxy(101,30);printf("COM-%d    ( ) DIE",i-player+1);
			}
			switch(player_com[i].symbol)
			{
				case 3 : symbol_color(3,249,111,30);break;
				case 4 : symbol_color(4,250,111,30);break;
				case 5 : symbol_color(5,252,111,30);break;
				case 6 : symbol_color(6,253,111,30);break;
			}
			gotoxy(45,46);
			if(turn<player)
			{system("pause");}
			else
			{Sleep(2000);}
			player_com[i].position=0;
			field[player_com[i].position]=player_com[i].symbol;				
			profil();
		}
	}
	return dice;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void highscore()
{
	
}
void save_data()
{
	FILE *fjuara;
	char nama [20];
	char date [25];
	char time [8];
	fjuara= fopen("Data_Winner.txt", "a");
	if(fjuara!=NULL)
	{
		//gotoxy(0,23);
		printf("\t\t\t\t\t	ษอออออออออออออออออออออออออออออออออป\n");
		printf("\t\t\t\t\t	บ      The Winner Of The Game     บ\n");
		printf("\t\t\t\t\t	ศอออออออออออออออออออออออออออออออออผ\n");
		printf("\n\t\t\t\t\t\t Nama Lengkap  :");
		gets(nama);
		printf("\t\t\t\t\t\t Tanggal       :");
		gets(date);
		printf("\t\t\t\t\t\t Time          :");
		gets(time);
		fprintf(fjuara, "\t%s\t%s\t\t%s\n",nama,date,time);
		printf("				ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป	\n");
		printf("				บ                                                               บ	\n");
		printf("				ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ	\n");
		printf("				                        **COGRATULATION** 	                     	\n");
		//fprintf(fjuara, "\t%s\t%s\t%s\n",nama,date,time);
	for(i=0;i<=23;i++)
	{
		gotoxy(73+i,10);printf("=");
		gotoxy(55-i,10);printf("=");
		Sleep(30);
	}
	for (i=1;i<=63;i++)
	{
		gotoxy(32+i,8);printf("%c",219);
		Sleep(50);
	}
	}
}
