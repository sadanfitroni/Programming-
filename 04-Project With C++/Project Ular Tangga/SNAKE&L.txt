#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<bios.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<dos.h>
#define up 72
#define left 75
#define right 77
#define down 80
int l[6][2]={{3,24},{14,42},{30,86},{37,57},{50,96},{66,74}},s[11][2],nos=5,nol=6,pp1,pp2;
int coord[100][2]={{4,20},{7,20},{10,20},{13,20},{16,20},{19,20},{22,20},{25,20},{28,20},{30,20},{30,18},{27,18},{24,18},{21,18},{18,18},{15,18},{12,18},{9,18},{6,18},{3,18},{3,16},{6,16},{9,16},{12,16},{15,16},{18,16},{21,16},{24,16},{27,16},{30,16},{30,14},{27,14},{24,14},{21,14},{18,14},{15,14},{12,14},{9,14},{6,14},{3,14},{3,12},{6,12},{9,12},{12,12},{15,12},{18,12},{21,12},{24,12},{27,12},{30,12},{30,10},{27,10},{24,10},{21,10},{18,10},{15,10},{12,10},{9,10},{6,10},{3,10},{3,8},{6,8},{9,8},{12,8},{15,8},{18,8},{21,8},{24,8},{27,8},{30,8},{30,6},{27,6},{24,6},{21,6},{18,6},{15,6},{12,6},{9,6},{6,6},{3,6},{3,4},{6,4},{9,4},{12,4},{15,4},{18,4},{21,4},{24,4},{27,4},{30,4},{30,2},{27,2},{24,2},{21,2},{18,2},{15,2},{12,2},{9,2},{6,2},{3,2}};
void main()
{clrscr();
s[0][0]=95;
s[0][1]=18;
s[1][0]=77;
s[1][1]=45;
s[2][0]=60;
s[2][1]=28;
s[3][0]=34;
s[3][1]=10;
s[4][0]=20;
s[4][1]=2;
void designer();void secmn();designer();secmn();}
void designer()
 { if(bioskey(1))
 {clrscr();getch();return;}
 int j;textcolor(GREEN);textbackground(WHITE);
 clrscr();
 gotoxy(68,1);
 cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
 gotoxy(68,1);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);
 gotoxy(68,2);
 cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
 gotoxy(68,1);
 cout<<char(186)<<"   "<<char(186);   gotoxy(68,2);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);  gotoxy(68,3);
 cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
 gotoxy(68,1);
 if(bioskey(1))
 {clrscr();getch();return;}
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,2);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,3);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,4);
 cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
 gotoxy(68,1);
 if(bioskey(1))
 {clrscr();getch();return;}
 cout<<char(186)<<"   "<<char(186);gotoxy(68,2);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,3);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,4);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,5);
 cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
 gotoxy(68,1);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,2);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,3);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,4);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,5);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,6);
 cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
 gotoxy(68,1);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,2);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,3);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,4);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,5);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,6);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,7);
 cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
 gotoxy(68,1);
 if(bioskey(1))
 {clrscr();getch();return;}
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,2);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,3);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,4);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,5);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,6);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,7);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,8);
 cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
 gotoxy(68,1);
 if(bioskey(1))
 {clrscr();getch();return;}
 cout<<char(186)<<"   "<<char(186);gotoxy(68,2);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,3);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,4);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,5);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,6);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,7);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,8);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,9);
 cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
 for(int i=0;i<17;i++)
  { if(bioskey(1))
 {clrscr();getch();return;}
  gotoxy(68,i+1);
  cout<<char(186)<<"   "<<char(186);gotoxy(68,i+2);
  cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,i+3);
  cout<<char(186)<<"   "<<char(186);gotoxy(68,i+4);
  cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,i+5);
  cout<<char(186)<<"   "<<char(186);gotoxy(68,i+6);
  cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,i+7);
  cout<<char(186)<<"   "<<char(186);gotoxy(68,i+8);
  cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,i+9);
  cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
  }
 gotoxy(68,18);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,19);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,20);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,21);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,22);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,23);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,24);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,25);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);
 delay(50);clrscr();
 gotoxy(68,19);
 if(bioskey(1))
 {clrscr();getch();return;}
 cout<<char(186)<<"   "<<char(186);gotoxy(68,20);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,21);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,22);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,23);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,24);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(68,25);
 cout<<char(186)<<"   "<<char(186);
 delay(50);clrscr();
 if(bioskey(1))
 {clrscr();getch();return;}
 gotoxy(68,20);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,21);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,22);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,23);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,24);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,25);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);
 if(bioskey(1))
 {clrscr();getch();return;}
 delay(50);clrscr();
 gotoxy(68,21);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,22);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,23);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,24);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,25);
 cout<<char(186)<<"   "<<char(186);
 delay(50);clrscr();
 gotoxy(68,22);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,23);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,24);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,25);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);
 delay(50);clrscr();
 gotoxy(68,23);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,24);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(68,25);
 cout<<char(186)<<"   "<<char(186);
 delay(50);clrscr();
 if(bioskey(1))
 {clrscr();getch();return;}
 gotoxy(68,24);
 cout<<char(186)<<"   "<<char(186);gotoxy(68,25);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);
 delay(50);clrscr();
 gotoxy(68,25);
 cout<<char(186)<<"   "<<char(186);
 if(bioskey(1))
 {clrscr();getch();return;}
 clrscr();
gotoxy(3,1);
cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
gotoxy(3,1);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);
gotoxy(3,2);
cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
gotoxy(3,1);
cout<<char(186)<<"   "<<char(186);   gotoxy(3,2);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);  gotoxy(3,3);
cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
gotoxy(3,1);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,2);
cout<<char(186)<<"   "<<char(186);gotoxy(3,3);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,4);
cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
gotoxy(3,1);
cout<<char(186)<<"   "<<char(186);gotoxy(3,2);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,3);
cout<<char(186)<<"   "<<char(186);gotoxy(3,4);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,5);
cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
gotoxy(3,1);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,2);
cout<<char(186)<<"   "<<char(186);gotoxy(3,3);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,4);
cout<<char(186)<<"   "<<char(186);gotoxy(3,5);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,6);
cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
gotoxy(3,1);
cout<<char(186)<<"   "<<char(186);gotoxy(3,2);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,3);
cout<<char(186)<<"   "<<char(186);gotoxy(3,4);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,5);
cout<<char(186)<<"   "<<char(186);gotoxy(3,6);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,7);
cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
gotoxy(3,1);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,2);
cout<<char(186)<<"   "<<char(186);gotoxy(3,3);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,4);
cout<<char(186)<<"   "<<char(186);gotoxy(3,5);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,6);
cout<<char(186)<<"   "<<char(186);gotoxy(3,7);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,8);
cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
gotoxy(3,1);
cout<<char(186)<<"   "<<char(186);gotoxy(3,2);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,3);
cout<<char(186)<<"   "<<char(186);gotoxy(3,4);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,5);
cout<<char(186)<<"   "<<char(186);gotoxy(3,6);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,7);
cout<<char(186)<<"   "<<char(186);gotoxy(3,8);
cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,9);
cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
for(i=0;i<17;i++)
 { if(bioskey(1))
 {clrscr();getch();return;}
 gotoxy(3,i+1);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,i+2);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,i+3);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,i+4);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,i+5);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,i+6);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,i+7);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,i+8);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,i+9);
 cout<<char(186)<<"   "<<char(186);delay(50);clrscr();
 }
 gotoxy(3,18);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,19);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,20);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,21);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,22);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,23);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,24);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,25);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);
 if(bioskey(1))
 {clrscr();getch();return;}
 delay(50);clrscr();
 gotoxy(3,19);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,20);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,21);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,22);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,23);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,24);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);gotoxy(3,25);
 cout<<char(186)<<"   "<<char(186);
 delay(50);clrscr();
 gotoxy(3,20);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,21);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,22);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,23);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,24);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,25);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);
 delay(50);clrscr();
 gotoxy(3,21);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,22);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,23);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,24);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,25);
 cout<<char(186)<<"   "<<char(186);
 delay(50);clrscr();
 gotoxy(3,22);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,23);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,24);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,25);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);
 delay(50);clrscr();
 gotoxy(3,23);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,24);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182); gotoxy(3,25);
 cout<<char(186)<<"   "<<char(186);
 delay(50);clrscr();
 gotoxy(3,24);
 cout<<char(186)<<"   "<<char(186);gotoxy(3,25);
 cout<<char(199)<<char(196)<<char(196)<<char(196)<<char(182);
 if(bioskey(1))
 {clrscr();getch();return;}
 delay(50);clrscr();
 gotoxy(3,25);
 cout<<char(186)<<"   "<<char(186);
textcolor(RED);textbackground(WHITE); clrscr();
 for(i=25;i>19;i--)       ////////////snake starts
  {if(bioskey(1))
 {clrscr();getch();return;}
  gotoxy(28,i);cout<<char(254);delay(50);}
 for(i=19,j=25;i>10;i--,j--)
  {if(bioskey(1))
 {clrscr();getch();return;}
  gotoxy(28,i);cout<<char(254);gotoxy(28,j);cout<<" ";delay(50);}
 gotoxy(28,10);cout<<char(254);gotoxy(28,15);cout<<" ";delay(50);
 for(i=29,j=15;i<31;i++,j--)
  {
  if(bioskey(1))
 {clrscr();getch();return;}
  gotoxy(i,10);cout<<char(254);gotoxy(28,j);cout<<" ";delay(50);}
 gotoxy(28,16);cout<<" ";
 gotoxy(31,10);cout<<char(254);gotoxy(28,13);cout<<" ";delay(50);
 gotoxy(31,9);cout<<char(219);gotoxy(28,12);cout<<" ";delay(50);
 gotoxy(31,8);cout<<char(254);gotoxy(28,11);cout<<" ";delay(50);
 gotoxy(30,8);cout<<char(254);gotoxy(28,10);cout<<" ";delay(50);
 gotoxy(29,8);cout<<char(254);delay(50);
 gotoxy(29,7);cout<<char(219);delay(50);
 gotoxy(29,6);cout<<char(254);delay(50);
 gotoxy(30,6);cout<<char(254);delay(50);
 gotoxy(31,6);cout<<char(254);delay(50);
 gotoxy(32,10);cout<<"NAKE";
 gotoxy(35,12);cout<<"AND";  //snake ends
 for(i=80;i>74;i--)
  {
  if(bioskey(1))
 {clrscr();getch();return;}
  gotoxy(i,17);cout<<char(254);delay(50);}
 for(i=74,j=80;i>33;i--,j--)
  {
  if(bioskey(1))
 {clrscr();getch();return;}
  gotoxy(i,17);cout<<char(254);gotoxy(j,17);cout<<" ";delay(50);}
 gotoxy(33,17);cout<<char(254);gotoxy(38,17);cout<<" ";delay(50);
 gotoxy(33,16);cout<<char(254);gotoxy(37,17);cout<<" ";delay(50);
 gotoxy(33,15);cout<<char(254);gotoxy(36,17);cout<<" ";delay(50);
 gotoxy(33,14);cout<<char(254);delay(50);
 gotoxy(33,13);cout<<char(254);delay(50);
 gotoxy(36,17);
 cout<<"ADDER";
 delay(2000);
 }
void coordin(int i)
 {
 int x=coord[i-1][0];
 int y=coord[i-1][1];
 gotoxy(x,y);
 }
int menu()
 {
  textbackground(BLACK);textcolor(WHITE);  clrscr();
char key;int i,x=11;
for(i=1;i>0;i++)
{
r://textbackground(BLACK);
clrscr();
gotoxy(30,10);
cout<<"SNAKE & LADDER";gotoxy(31,11);
if(!(x<11||x>13))
{if(x==11)
 {cout<<"NEW GAME\n";gotoxy(31,12);}
else
{cout<<"new game\n";gotoxy(31,12);}
if(x==12)
{cout<<"INSTRUCTIONS\n";gotoxy(31,13);}
else
{cout<<"instructions\n";gotoxy(31,13);}
if(x==13)
{cout<<"ABOUT\n";gotoxy(31,14);}
else
{cout<<"about\n";gotoxy(31,14);}
}
else
{
if(x<11)
 {x++;goto r;}
if(x>13)
 {x--;goto r;}
}
gotoxy(3,25);cout<<"Esc-quit game\t\t"<<char(30)<<" "<<char(31)<<"-select option";
if(i==1)
{gotoxy(30,x);cout<<(char)16;}
if(x<11||x>13)
{
if(x<11)
{x++;gotoxy(30,x);cout<<(char)16;}
if(x>13)
{x--;gotoxy(30,x);cout<<(char)16;}
}
else
{gotoxy(30,x);cout<<(char)16;}
key=getch();
if(key==13)
return x-10;
if(key==27)
return -1;
if(key==0)
{
key=getch();
switch(key)
 {
 case up:
 case right:
 i++;x--;goto r;
 case down:
 case left:
 i++;x++;goto r;
 }
}
}}
void about()
 {
 clrscr();
 gotoxy(25,11);cout<<"Developed by  :AKHIL MOHAN";
 gotoxy(25,10);cout<<"Title         :SNAKE & LADDER";
 gotoxy(25,12);cout<<"Special Thanks:JUSTINE CYRIAC";
 gotoxy(40,13);cout<<"DEPT. OF COMP.SCIENCE,SAPS,ANAKKAL";
 gotoxy(2,25);cout<<"Press any key to return...";
 getch();
 }
void secmn()
 {
 clrscr();   int op;
 void newgame();int escape();void instruction();
 do
 {
 textcolor(WHITE); clrscr();
 op=menu();
 switch(op)
 {
 case 1:
 newgame();
 break;
 case 2:
 instruction();
 break;
 case -1:
 op=escape();
 if(op==-1)
 exit(0);
 break;
 case 3:
 about();break;
 }
}
while(op!=-1);
}
int escape()
 {textcolor(RED);
 clrscr();
 gotoxy(20,12);cout<<"ARE YOU SURE YOU WANT TO EXIT(Y/N):";char ex=getch();
 if(ex=='Y'||ex=='y')
 {cout<<"Y";clrscr();gotoxy(20,12);cout<<"THANK YOU FOR PLAYING THE GAME";delay(1500);return -1;}
 else
 {cout<<"N";return 1;}
 }
void instruction()
 {
 clrscr();
cout<<"Thank you for choosing the game\n";
cout<<"INSTRUCTIONS:\n";
cout<<"Onscreen instruction will be given while playing.\n";
cout<<"Each game starts with both the players out of the game board.You need to get\n"; cout<<"'1' on your throw to enter the game board.Player 1 starts the game and\n";
cout<<"continues alternatively except in some cases.Two players cannot sit together in\n";
cout<<"a box.Therefore the one who comes second will be given more priority and\n";
cout<<"the other will be pushed one box backwards.When the player who threw the dice\n";
cout<<" gets a ladder ,he climbs it and will be given 3 options:\n";
cout<<"i)to throw the dice again.\n";
cout<<"ii)to destroy the ladder .\n";
cout<<"iii)to convert the ladder to snake with its head one box behind.\n";
cout<<"When a player who was pushed backwards gets a ladder,he climbs it and will be\n";
cout<<"given only the last 2 options.You need to reach an exact 100 to win the game(not";
cout<<"greater than 100).\n";
cout<<"Because of insufficient graphics knowledge I could not draw the snakes and\n"; cout<<"ladders.Instead I have marked their postions in separate columns.Hope you will\n";
cout<<"adjust with that.\n";
cout<<"NOW ENJOY THE GAME.";
 gotoxy(2,25);cout<<"Press any key to return...";
 getch();
 }
int dice()
 {         int cr,randnum;unsigned int seedval;time_t t;
 int i,j,k;seedval=(unsigned)time(&t);srand(seedval);
 for(j=0;j<6;j++)
  for(i=1;i<=6;i++)
    {
    gotoxy(35,22);cout<<" ";
    gotoxy(37,22);cout<<" ";
    gotoxy(35,23);cout<<" ";
    gotoxy(36,23);cout<<" ";
    gotoxy(37,23);cout<<" ";
    gotoxy(35,24);cout<<" ";
    gotoxy(37,24);cout<<" ";
    switch(i)
     {
     case 1:
     gotoxy(36,23);cout<<char(249);break;
     case 2:
     gotoxy(35,22);cout<<char(249);
     gotoxy(37,24);cout<<char(249);break;
     case 3:
     gotoxy(35,22);cout<<char(249);
     gotoxy(37,24);cout<<char(249);
     gotoxy(36,23);cout<<char(249);break;
     case 4:
     gotoxy(35,22);cout<<char(249)<<" "<<char(249);
     gotoxy(35,24);cout<<char(249)<<" "<<char(249);
     break;
     case 5:
     gotoxy(35,22);cout<<char(249)<<" "<<char(249);
     gotoxy(35,24);cout<<char(249)<<" "<<char(249);
     gotoxy(36,23);cout<<char(249);break;
     case 6:
     gotoxy(35,22);cout<<char(249)<<" "<<char(249);
     gotoxy(35,23);cout<<char(249)<<" "<<char(249);
     gotoxy(35,24);cout<<char(249)<<" "<<char(249);

     break;
     }
     delay(40);
    }
   k=rand(); k%=6;k+=1;
   gotoxy(35,22);cout<<" ";
    gotoxy(37,22);cout<<" ";
    gotoxy(35,23);cout<<" ";
    gotoxy(36,23);cout<<" ";
    gotoxy(37,23);cout<<" ";
    gotoxy(35,24);cout<<" ";
    gotoxy(37,24);cout<<" ";
    switch(k)
     {
     case 1:
     gotoxy(36,23);cout<<char(249);break;
     case 2:
     gotoxy(35,22);cout<<char(249);
     gotoxy(37,24);cout<<char(249);break;
     case 3:
     gotoxy(35,22);cout<<char(249);
     gotoxy(37,24);cout<<char(249);
     gotoxy(36,23);cout<<char(249);break;
     case 4:
     gotoxy(35,22);cout<<char(249)<<" "<<char(249);
     gotoxy(35,24);cout<<char(249)<<" "<<char(249);
     break;
     case 5:
     gotoxy(35,22);cout<<char(249)<<" "<<char(249);
     gotoxy(35,24);cout<<char(249)<<" "<<char(249);
     gotoxy(36,23);cout<<char(249);break;
     case 6:
     gotoxy(35,22);cout<<char(249)<<" "<<char(249);
     gotoxy(35,23);cout<<char(249)<<" "<<char(249);
     gotoxy(35,24);cout<<char(249)<<" "<<char(249);
     }
      return k;
   }
void printer()
 {
 clrscr();
 gotoxy(2,1);int i,j;cout<<char(201);void coordin(int);
 for(i=0;i<9;i++)
  cout<<char(205)<<char(205)<<char(209);
 cout<<char(205)<<char(205)<<char(187);
 for(i=0;i<19;i++)
  {
  gotoxy(2,i+2);
  if(i%2==0)
   {
   cout<<char(186);
   for(j=0;j<9;j++)
    cout<<"  "<<char(179);
   cout<<"  "<<char(186);
   }
  else
   {
   cout<<char(199);
   for(j=0;j<9;j++)
    cout<<char(196)<<char(196)<<char(197);
   cout<<char(196)<<char(196)<<char(182);
   }
  }
 gotoxy(2,21);
 cout<<char(200);
 for(i=0;i<9;i++)
  cout<<char(205)<<char(205)<<char(207);
 cout<<char(205)<<char(205)<<char(188);
 gotoxy(1,19);cout<<char(2);gotoxy(1,20);cout<<char(1);
 for(i=1;i<100;i++)
  {
  coordin(i);cout<<i;
  }
 for(i=0;i<25;i++)
  {
  gotoxy(59,i+1);cout<<char(219);
  }
 gotoxy(60,3);cout<<"Esc-Return from Game";
 gotoxy(60,5);cout<<"PLAYER 1";gotoxy(66,6);cout<<char(1)<<"-0";
 gotoxy(60,8);cout<<"PLAYER 2";gotoxy(66,9);cout<<char(2)<<"-0";
 gotoxy(34,21);cout<<char(201);
 for(i=0;i<4;i++)
  cout<<char(205);
 cout<<char(187);
 for(i=0;i<3;i++)
 {gotoxy(34,i+22); cout<<char(186)<<"    "<<char(186);  }
 gotoxy(34,25);
 cout<<char(200);
 for(i=0;i<4;i++)
  cout<<char(205);
 cout<<char(188);
 gotoxy(49,1);cout<<"LADDERS";gotoxy(50,2);cout<<l[0][0]<<" - "<<l[0][1];
 for(i=1;i<6;i++)
  {
  gotoxy(49,i+2);
  cout<<l[i][0]<<" - "<<l[i][1];
  }
 gotoxy(49,8);cout<<"SNAKES";
 for(i=0;i<5;i++)
  {
  gotoxy(49,i+9);
  cout<<s[i][0]<<" - "<<s[i][1];
  }
 gotoxy(3,2);cout<<char(127);
 }
void rubber()
 {   int i,j;
 for(j=0;j<4;j++)
  {
  gotoxy(2,j+22);
  for(i=0;i<31;i++)
   cout<<" ";
  }
 }
int checker(int x)
 {int i;
 for(i=0;i<nol;i++)
  {
  if(x==l[i][0])
   return 1;
  }
 for(i=0;i<nos;i++)
  {
  if(x==s[i][0])
   return 1;
  }
 return 0;
 }
void printplayer(int n,int o,int p)
 {
/* if(p==1)
  {
  gotoxy(54,6);cout<<n;
  }
 else
  {
  gotoxy(54,9);cout<<n;
  }*/
 coordin(o);cout<<" ";
 coordin(o);cout<<o;
 coordin(n);
 if(p==1)
  {cout<<char(1);gotoxy(68,6);cout<<n;}
 else
  {cout<<char(2);gotoxy(68,9);cout<<n;}

 }
int changer(int x)
 {
 for(int i=0;i<nol;i++)
  {
  if(x==l[i][0])
   return l[i][1];
  }
 for(i=0;i<nos;i++)
  {
  if(x==s[i][0])
   return s[i][1];
  }
 }
void delladder(int x)
 {
 for(int i=0;i<6;i++)
  {gotoxy(49,i+2);cout<<"       ";}
 for(i=0;i<nol;i++)
  {
  if(x==l[i][1])
   {
   for(;i<nol;i++)
    {
    l[i][0]=l[i+1][0];
    l[i][1]=l[i+1][1];
    }
   nol--;
   break;
   }
  }
 for(i=0;i<nol;i++)
  {
  gotoxy(49,i+2);
  if(l[i][0]==3)
   {
   gotoxy(50,i+2);
   cout<<"3 - 24";continue;
   }
  cout<<l[i][0]<<" - "<<l[i][1];
  }
 }
void convert(int x)
 {
 for(int i=0;i<6;i++)
  {gotoxy(49,i+2);cout<<"       ";}
 for(i=0;i<nol;i++)
  {
  if(x==l[i][1])
   {
   s[nos][0]=l[i][1]-1;
   s[nos][1]=l[i][0];
   nos++;
   for(;i<nol;i++)
    {
    l[i][0]=l[i+1][0];
    l[i][1]=l[i+1][1];
    }
   nol--;
   break;
   }
  }
 for(i=0;i<nol;i++)
  {
  gotoxy(49,i+2);
  if(l[i][0]==3)
   {
   gotoxy(50,i+2);
   cout<<"3 - 24";continue;
   }
  cout<<l[i][0]<<" - "<<l[i][1];
  }
 for(i=0;i<nos;i++)
  {
  gotoxy(49,i+9);
  cout<<s[i][0]<<" - "<<s[i][1];
  }
 }
void comment(int c,int p)
 {
 char player[9];
 if(p==1)
  strcpy(player,"PLAYER 1");
 else
  strcpy(player,"PLAYER 2");
 gotoxy(3,22);
 switch(c)
  {
  case 1:
  cout<<player<<" entered the game ";gotoxy(3,23);cout<<"board";break;
  case 2:
  cout<<player<<" got a ladder.Press D ";gotoxy(3,23);
  cout<<"to destroy the ladder or C to";gotoxy(3,24);
  cout<<"convert ladder to snake.Press";gotoxy(3,25);
  cout<<"space to throw dice again";break;
  case 3:
  cout<<player<<" got a ladder.Press D ";gotoxy(3,23);
  cout<<"to destroy the ladder or C to";gotoxy(3,24);
  cout<<"convert ladder to snake";break;
  case 4:
  textcolor(RED);textbackground(WHITE);clrscr();gotoxy(20,12);cout<<player<<" won the game";delay(2000);break;
  case 5:
  cout<<player<<" could not enter the";gotoxy(3,23);
  cout<<"game board.Try next time";break;
  case 6:
  cout<<"Oops! "<<player<<" has been caught";gotoxy(3,23);
  cout<<"by the snake";break;
  case 7:
  cout<<"Sorry."<<player<<" was pushed out";gotoxy(3,23);
  cout<<"of the game board by the";gotoxy(3,24);
  cout<<"other.Enter the game board in";gotoxy(3,25);
  cout<<"your next chance";break;
  }
 }
void newgame()
 {
 pp1=pp2=0;
 clrscr();void player1();void player2();printer();
 for(int i=1;i>0;i++)
  {
  if(i%2==1)
   player1();
  else
   player2();
  }
 }
void player1()
 {
 int t,temp;char key,choice;
 gotoxy(3,22);cout<<"PLAYER 1:Press space to  throw";gotoxy(3,23);cout<<"the dice";
 do
  {
  key=getch();rubber();choice=key;repeat:key=choice;
  if(key==32)
   {
   t=dice();gotoxy(13,23);cout<<t;delay(1000);gotoxy(13,23);cout<<" ";
   }
  else
  if(key==27)
   secmn();
  }
 while(key!=27&&key!=32);
 if(pp1==0)
  {
  if(t==1)
   {
   gotoxy(3,22);comment(1,1);delay(3000);rubber();pp1=1;gotoxy(1,20);
   cout<<" ";gotoxy(4,20);cout<<char(1);gotoxy(68,6);cout<<"1";
   }
  else
   {
   gotoxy(3,22);comment(5,1);delay(3000);rubber();
   }
  }
 else
  {
  temp=pp1;
  pp1+=t;
  if(pp1>100)
   {pp1-=t;gotoxy(3,22);cout<<"PLAYER 1 should get exact "<<100-pp1<<" to";gotoxy(3,23);cout<<"win the game";delay(3000);rubber();}
  if(pp1==100)
   {
   comment(4,1);delay(5000);secmn();
   }
  if((pp1==pp2&&(pp1!=0&&pp2!=0))&&(pp1!=1&&pp2!=1))
   {
   pp2--;
   if(checker(pp2)==1)
    {
    pp2=changer(pp2);printplayer(pp2,pp1,2);
    if(pp2>pp1)
     {
     gotoxy(3,22);comment(3,2);delay(3000);rubber();
     do
      {
      choice=getch();
      if(choice==27)
       secmn();
       else
       if(choice=='D'||choice=='d')
	{delladder(pp2);return;}
       else
       if(choice=='C'||choice=='c')
	{convert(pp2);return;}
       }
      while(choice!=27&&((choice!='D'||choice!='d')&&(choice!='C'||choice!='c')));
     }
     else
      {
      gotoxy(3,22);comment(6,2);delay(3000);rubber();
      }
     }
    else
     printplayer(pp2,pp1,2);
    }
   else
   if(pp1==pp2&&(pp1==1&&pp2==1))
    {
    pp2=0;gotoxy(3,22);comment(7,2);delay(3000);rubber();
    gotoxy(3,20);cout<<" ";
    gotoxy(3,19);cout<<char(2);
    }
   if(checker(pp1)==1)
    {
    pp1=changer(pp1);printplayer(pp1,temp,1);
    if(pp1>temp)
     {
     gotoxy(3,22);comment(2,1);delay(3000);rubber();
     do
      {
      choice=getch();
      if(choice==32)
       goto repeat;
      else
      if(choice==27)
       secmn();
      else
      if(choice=='D'||choice=='d')
       {delladder(pp1); }
      else
      if(choice=='C'||choice=='c')
       {
       convert(pp1);
       if(pp1==(pp2+1))
	{
	pp2=changer(pp2);comment(6,2);delay(3000);rubber();printplayer(pp2,pp1-1,2);
	}
    //   goto last;
       }
      }
     while((choice!=27&&choice!=32)&&((choice!='D'||choice!='d')&&(choice!='C'||choice!='c')));
    }
   else
    {
    gotoxy(3,22);
    comment(6,1);delay(3000);rubber();
    }
   }
  else
   printplayer(pp1,temp,1);
  }

 }
void player2()
 {
 int t,temp;char key,choice;
 gotoxy(3,22);cout<<"PLAYER 2:Press space to  throw";gotoxy(3,23);cout<<"the dice";
 do
  {
  key=getch();rubber();choice=key;repeat:key=choice;
  if(key==32)
   {
   t=dice();gotoxy(13,23);cout<<t;delay(1000);gotoxy(13,23);cout<<" ";
   }
  else
  if(key==27)
   secmn();
  }
 while(key!=27&&key!=32);
 if(pp2==0)
  {
  if(t==1)
   {
   gotoxy(3,22);comment(1,2);delay(3000);rubber();pp2=1;gotoxy(1,19);
   cout<<" ";gotoxy(4,20);cout<<char(2);gotoxy(68,9);cout<<"1";
   }
  else
   {
   gotoxy(3,22);comment(5,2);delay(3000);rubber();
   }
  }
 else
  {
  temp=pp2;
  pp2+=t;
  if(pp2>100)
   {pp2-=t;gotoxy(3,22);cout<<"PLAYER 2 should get exact "<<100-pp2<<" to";gotoxy(3,23);cout<<"win the game";delay(3000);rubber();}
  if(pp2==100)
   {
   comment(4,2);delay(5000);secmn();
   }
  if((pp2==pp1&&(pp2!=0&&pp1!=0))&&(pp2!=1&&pp1!=1))
   {
   pp1--;
   if(checker(pp1)==1)
    {
    pp1=changer(pp1);printplayer(pp1,pp2,1);
    if(pp1>pp2)
     {
     gotoxy(3,22);comment(3,1);delay(3000);rubber();
     do
      {
      choice=getch();
      if(choice==27)
       secmn();
       else
       if(choice=='D'||choice=='d')
       {delladder(pp1);return;}
       else
       if(choice=='C'||choice=='c')
	{convert(pp1); return;}
       }
      while(choice!=27&&((choice!='D'||choice!='d')&&(choice!='C'||choice!='c')));
     }
     else
      {
      gotoxy(3,22);comment(6,1);delay(3000);rubber();
      }
     }
    else
     printplayer(pp1,pp2,1);
    }
   else
   if(pp2==pp1&&(pp2==1&&pp1==1))
    {
    pp1=0;gotoxy(3,22);comment(7,1);delay(3000);rubber();
    gotoxy(3,20);cout<<" ";
    gotoxy(2,19);cout<<char(1);
    }
   if(checker(pp2)==1)
    {
    pp2=changer(pp2);printplayer(pp2,temp,2);
    if(pp2>temp)
     {
     gotoxy(3,22);comment(2,2);delay(3000);rubber();
     do
      {
      choice=getch();
      if(choice==32)
       goto repeat;
      else
      if(choice==27)
       secmn();
      else
      if(choice=='D'||choice=='d')
      { delladder(pp2); }
      else
      if(choice=='C'||choice=='c')
       {
       convert(pp2);
       if(pp2==(pp1+1))
	{
	pp1=changer(pp1);comment(6,1);delay(3000);rubber();printplayer(pp1,pp2-1,1);
	}
      // goto last;
       }
      }
     while((choice!=27&&choice!=32)&&((choice!='D'||choice!='d')&&(choice!='C'||choice!='c')));
    }
   else
    {
    gotoxy(3,22);
    comment(6,2);delay(3000);rubber();
    }
   }
  else
   printplayer(pp2,temp,2);
  }

 }









