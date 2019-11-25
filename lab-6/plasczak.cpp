#include "plasczak.h"
#include <iostream>

using namespace std;

ostream& operator <<(ostream& os, const Plasczak& P)
{
    os<<P.wyglad;
    return os;
}

void Plasczak::ruch(Kierunek k)
{
    switch (k)
    {
        case G: wsp.pozY--; break;
        case D: wsp.pozY++; break;
        case L: wsp.pozX--; break;
        case P: wsp.pozX++; break;
    }
}

Para Plasczak::getPozycja() const
{
    return wsp;
}

