#include "pane.h"
#include <windows.h>
#include <conio.h>

int main()
{
    Pane P(100);
    P.print();
    char z;

    /*do
    {
        z = getch();
        P.cycle();
    }
    while (z!=27 && !P.getIsOut());*/


    while (!P.getIsOut())
    {
        P.cycle();
        //Sleep(100);
    }

    return 0;
}
