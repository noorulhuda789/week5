#include<iostream>
#include<windows.h>
using namespace std;
char GetCharAtxy(short int,short int);
void gotoxy(int x,int y);
void erase(int x,int y);
void maze();
main()
{
  system("cls");
  int x=4;
  int y=4;
  bool game=true;
   maze();
  gotoxy(x,y);
  cout<<"p";
  while(true)
{
  if(GetAsyncKeyState(VK_UP))
   {
   char  position=GetCharAtxy(x,y-1);
   if(position==' ')
         {
            erase(x,y);
           y=y-1;
          gotoxy(x,y);
           cout<<"p";
        }
        }
if(GetAsyncKeyState(VK_DOWN))
   {
   char  position=GetCharAtxy(x,y+1);
   if(position==' ')
         {
            erase(x,y);
            y=y+1;
          gotoxy(x,y);
           cout<<"p";
        }
      }
if(GetAsyncKeyState(VK_LEFT))
   {
   char  position=GetCharAtxy(x-1,y);
   if(position ==' ')
         {
            erase(x,y);
           x=x-1;
          gotoxy(x,y);
           cout<<"p";
        }
      }  
if(GetAsyncKeyState(VK_RIGHT))
   {
   char  position=GetCharAtxy(x+1,y);
   if(position==' ')
         {
           erase(x,y);
          x=x+1;
          gotoxy(x,y);
           cout<<"p";
        }
   }
  if(GetAsyncKeyState(VK_ESCAPE))
    {
      game=false;
    }
   Sleep(200);
}
}
void maze()
 {
 cout<<"###########" <<endl;
 cout<<"#         #" <<endl;
 cout<<"#         # " <<endl;
 cout<<"#         # " <<endl;
 cout<<"#         #" <<endl;
 cout<<"#         # " <<endl;
 cout<<"#         #" <<endl;
 cout<<"#         #" <<endl;
 cout<<"##########";
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 }

char GetCharAtxy(short int x,short int y)
{
 CHAR_INFO ci;
 COORD xy={0,0};
 SMALL_RECT rect={x,y,x,y};
 COORD coordbufsize;
 coordbufsize.X=1;
 coordbufsize.Y=1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordbufsize,xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void erase(int x,int y)
{
  gotoxy(x,y);
  cout<<" ";
}  
