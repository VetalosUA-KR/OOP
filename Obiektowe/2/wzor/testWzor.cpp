#include "wzor.h"


int main()
{
    Wzor s1;
    Wzor s2('+',4);

    s1.opis();
    s1.drukuj();
    s2.opis();
    s2.drukuj();

    s1.ustaw('*',10);
    s1.opis();
    s1.drukuj();

    return 0;
}
