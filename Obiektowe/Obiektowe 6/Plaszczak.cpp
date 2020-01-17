#include "Plaszczak.h"

void Plaszczak::ruch(Kierunek k)
{
    switch (k)
    {
        case G: if(pozY <= 1) break; else pozY--; break; //losowac kolor Teodora
        case D: pozY++; break;
        case L: pozX--; break;
        case P: pozX++; break;
    }
}


ostream& operator<<(ostream& os, const Plaszczak& P)
{
    os << P.wyglad;
    return os;
}
