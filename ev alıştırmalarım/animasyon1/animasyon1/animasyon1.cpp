#include <iostream>
#include<Windows.h>
using namespace std;
const int genislik = 80;
const int yukseklik = 20;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}


int main()
{
    for (int i = 0; i < genislik; i++) {
        cout << "a";
        Sleep(30);
    }
    for (int i = 0; i < yukseklik; i++)
    {
        gotoxy(genislik - 1, i);
        cout << "a" << endl;//asagı inmesi için endl yaptım
        Sleep(30);
    }
    for (int i = 0; i < genislik; i++) {
        gotoxy(genislik -i-1, yukseklik - 1);
        cout << "a";
        Sleep(30);
    }
    for (int i = 0; i < yukseklik; i++)
    {
        gotoxy(0,yukseklik -i);
        cout << "a" << endl;//asagı inmesi için endl yaptım
        Sleep(30);
    }
    cin.get();





}


