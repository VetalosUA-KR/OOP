#include "Planeta.h"
#include <conio.h>
#include <windows.h>

void ustawKursor(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int main()
{
    Plaszczak Teodor('@', "Teodor");
    Planeta Rect001("Rect001", 30, 20, '#', &Teodor);

    char znak;
    do
    {
        znak = getch();
        switch (znak)
        {
            case 'w' : Rect001.ruch(G); break;
            case 's' : Rect001.ruch(D); break;
            case 'a' : Rect001.ruch(L); break;
            case 'd' : Rect001.ruch(P); break;
        }
        ustawKursor(0,0);
        cout << Rect001 << endl;

    }while(znak != 27); //escape

    return 0;
}
