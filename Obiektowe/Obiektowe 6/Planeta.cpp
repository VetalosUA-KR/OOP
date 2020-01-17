#include"Planeta.h"

Planeta::Planeta(string n, int x, int y, char g, Plaszczak* p)
{
    nazwa = n;
    X = x;
    Y = y;
    granica = g;
    postac = p;
}


ostream& operator<<(ostream & os, const Planeta& P)
{
    for(int j = 0; j < P.Y; ++j)
    {
        for(int i = 0; i < P.X; ++i)
        {
            if(i == 0 || j == 0 || i == P.X - 1 || j == P.Y - 1)
            {
                os << P.granica;
            }

            else if (i == P.postac -> getPozX() && j == P.postac -> getPozY())
            {
                os << *(P.postac);
            }

            else
            {
                os << ' ';
            }
        }
        os << endl;
    }

    return os;
}
