#include <iostream>
#include "planeta.h"
#include <windows.h>
#include <conio.h>


using namespace std;



void ustawKursor(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    Plasczak Teodor("Teodor", '@'); /// создаем нашего героя
    Planeta Rect001("Rect001", '#', 20, 20, &Teodor); /// создаем игровое поле, в которое передаем адрес на нашего героя

    /// "отрисовка"
    cout<<Rect001<<endl;

    char z;
    do
    {
        z = getch();
        switch (z)
        {
            case 72: Rect001.ruch(G); break;
            case 80: Rect001.ruch(D); break;
            case 75: Rect001.ruch(L); break;
            case 77: Rect001.ruch(P); break;
        }
        ustawKursor(0,0);
        cout<<Rect001<<endl;
    }
    while(z != 27);

    return 0;
}
