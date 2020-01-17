#include "plansza.h"
#include <windows.h>

void ustawKursor(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
    srand(time(0));

    Plansza p(50,50);


    while(true)
    {
        cout << p << endl;
        Sleep(50);
        p.gra();
        ustawKursor(0,0);
    }

    return 0;
}
