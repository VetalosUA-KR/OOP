#include <iostream>
#include "plansza.h"
#include <windows.h>

void ustawKursor(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

using namespace std;

int main()
{
    srand(time(0));

    Plansza p1;

    std::ios_base::sync_with_stdio(false);


    while(true)
    {
        p1.drukuj();
        Sleep(200);
        p1.gra();
        ustawKursor(0,0);
    }


    return 0;
}
