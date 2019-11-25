#include "planeta.h"
#include <iostream>

using namespace std;


Planeta::Planeta(string n, char m, int x, int y, Plasczak* p)
{
    nazwa = n;
    mur = m;
    wymiar = Para(x,y);
    postac = p;
}

ostream& operator<<(ostream& os, const Planeta& P)
{
    for(int y = 0; y < P.wymiar.pozY; y++)
    {
        for(int x = 0; x < P.wymiar.pozX; x++)
        {
            if(x == 0 || y == 0 || x == P.wymiar.pozX-1 || y == P.wymiar.pozY-1)
            {
                os<<P.mur;
            }
            else if(x == P.postac->getPozycja().pozX &&
                    y == P.postac->getPozycja().pozY)
            {
                os<< *(P.postac);
            }
            else
            {
                os<<" ";
            }
        }
        os<<endl;
    }
    return os;
}
