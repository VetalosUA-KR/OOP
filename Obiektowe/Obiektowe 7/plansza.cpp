#include "plansza.h"
Plansza::Plansza(int wymX, int wymY)
{
    this -> wymX = wymX;
    this -> wymY = wymY;

    tab = new Komorka*[wymX];

    for(int i = 0; i < wymX; i++)
    {
        tab[i] = new Komorka[wymY];
    }

    for(int i = 1; i < wymX - 1; ++i)
    {
        for(int j = 1; j < wymY - 1; ++j)
        {
            tab[i][j].setStan(rand() % 2);
        }
    }

}

Plansza::Plansza(const Plansza& P)
{
    this -> wymX = P.wymX;
    this -> wymY = P.wymY;

    tab = new Komorka*[wymX];

    for(int i = 0; i < wymX; i++)
    {
        tab[i] = new Komorka[wymY];
    }

    for(int i = 0; i < wymX; ++i)
    {
        for(int j = 0; j < wymY; ++j)
        {
            tab[i][j].setStan(P.tab[i][j].getStan());
        }
    }
}



Plansza::~Plansza()
{
    for(int i = 0; i < wymX; i++)
    {
        delete tab[i];
        tab[i] = nullptr;
    }
    delete [] tab;
    tab = nullptr;
}

Plansza& Plansza::operator=(const Plansza& P)
{
    if(this == &P) return *this;

    for(int i = 0; i < wymX; i++)
    {
        delete tab[i];
        tab[i] = nullptr;
    }
    delete [] tab;
    tab = nullptr;

    this -> wymX = P.wymX;
    this -> wymY = P.wymY;

    tab = new Komorka*[wymX];

    for(int i = 0; i < wymX; i++)
    {
        tab[i] = new Komorka[wymY];
    }

    for(int i = 0; i < wymX; ++i)
    {
        for(int j = 0; j < wymY; ++j)
        {
            tab[i][j].setStan(P.tab[i][j].getStan());
        }
    }

    return * this;

}


ostream& operator<<(ostream& os, const Plansza& P)
{
    for(int i = 0; i < P.wymX; ++i)
    {
        for(int j = 0; j < P.wymY; ++j)
        {
            os << P.tab[i][j];
        }
        os << endl;
    }

    return os;
}


int Plansza::liczbaSasiadow(int i, int j) const
{
    int ile = 0;
    if(tab[i + 1][j].getStan() == true) ile++;
    if(tab[i - 1][j].getStan() == true) ile++;
    if(tab[i][j + 1].getStan() == true) ile++;
    if(tab[i][j - 1].getStan() == true) ile++;

    if(tab[i + 1][j + 1].getStan() == true) ile++;
    if(tab[i + 1][j - 1].getStan() == true) ile++;
    if(tab[i - 1][j + 1].getStan() == true) ile++;
    if(tab[i - 1][j - 1].getStan() == true) ile++;
    return ile;
}

void Plansza::gra()
{
    Plansza kopia = *this;

    for(int i = 1; i < wymX - 1; i++)
    {
        for(int j = 1; j < wymY - 1; j++)
        {
            int ile = liczbaSasiadow(i, j);
            if (ile == 3)
            {
                kopia.tab[i][j].setStan(true);
            }
            else if(ile < 2 || ile > 3)
            {
                kopia.tab[i][j].setStan(false);
            }
        }
    }

    *this = kopia;
}

