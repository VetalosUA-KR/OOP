#include "plansza.h"

int main()
{
    Plansza P(5, 6);
    cout << P << endl;
    P.wstaw(0, 0, Typ::A);
    P.wstaw(1, 1, Typ::B);
    P.wstaw(2, 3, Typ::C);
    P.wstaw(3, 4, Typ::A);
    cout << P << endl;
    P.przesun(0, 0, 1, 1);
    P.przesun(2, 2, 3, 2);
    cout << P << endl;
    P.zamien(1, 1, 2, 3);
    cout << P << endl;
    P.usun(1 ,1);
    cout << P << endl;
    return 0;
}
