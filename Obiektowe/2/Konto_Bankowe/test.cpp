#include"konto.h"
int main()
{
    Konto k1;
    k1.dodajSrodki(250);
    k1.wyplacSrodki(400);
    k1.wyswietlDane();

    Konto k2("Arkadiusz", "Pstrag", 366.72);
    k2.wyswietlDane();
    return 0;
}
