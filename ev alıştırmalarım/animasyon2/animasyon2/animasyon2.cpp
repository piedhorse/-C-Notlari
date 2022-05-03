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

void kursorugizle()
{
    handle_t out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorinfo;
}






char sahne[genislik][yukseklik];

void sahneyiciz()
{
    for (int y = 0; y < yukseklik; y++)
    {
        for (int x = 0; x < genislik; x++)
        {
            cout << sahne[x][y];

        }
        cout << endl;

    }
}

void sinirlariolustur()
{
    for (int x = 0; x < genislik; x++)
    {
        sahne[x][0] = 219;
        sahne[x][yukseklik - 1] = 219;
    }
    for (int y = 0; y < yukseklik; y++)
    {

        sahne[0][y] = 219;
        sahne[genislik - 1] [y]= 219;

    }
}







int main()
{
    sahne [30][10]='a';
    sinirlariolustur();
    sahneyiciz();
    sahne[30][10] = 'a';
    gotoxy(0, 0);
    sahneyiciz();
    while (true)
    {
        sahne[20 + i][10] = 'a';
        gotoxy(0, 0);

        sahneyiciz();
        i++


    }
    cin.get();
}
