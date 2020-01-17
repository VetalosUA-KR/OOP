#include "plansza.h"

Plansza::Plansza(int x, int y)
{
    this -> x = x;
    this -> y = y;
    tab = new Obiekt**[x];  ///alokacja dwuwymiarowej tablicy wskaznikow

        for(int i = 0; i < x; ++i)
        {
            tab[i] = new Obiekt*[y];
            for(int j = 0; j < y; ++j)
            {
                tab[i][j] = nullptr; ///nadanie nullptr zeby nie wskazywaly na cos w pamieci
            }
        }
}


Plansza::~Plansza()
{
    for(int i = 0; i < x; ++i)
    {
        for(int j = 0; j < y; ++j)
        {
            if(tab[i][j])
            {
                delete tab[i][j];
                tab[i][j] = nullptr;
            }
        }

        delete [] tab[i];
        tab[i] = nullptr;
    }
    delete [] tab;
    tab = nullptr;
}

ostream& operator<<(ostream & os, const Plansza& P)
{
    for(int j = 0; j < P.y; ++j)
    {
        for(int i = 0; i < P.x; ++i)
        {
            if(P.tab[i][j])
            {
                P.tab[i][j] -> drukuj(os);
                os << '\t';
            }
            else
            {
                os << ".\t";
            }
        }
        os << endl;
    }
    return os;
}

void Plansza::wstaw(int i, int j, Typ t)
{
    if (i < 0 || j < 0 || i > x - 1 || j > y - 1)
    {
        cerr << "Bledne wspolrzedne! \n";
        return;
    }
    if(tab[i][j])
    {
        delete tab[i][j];
        tab[i][j] = nullptr;
    }

    switch(t)
    {
        case Typ::A: tab[i][j] = new A; break;
        case Typ::B: tab[i][j] = new B; break;
        case Typ::C: tab[i][j] = new C; break;
    }
}

void Plansza::przesun(int i, int j, int k, int l)
{
    if (i < 0 || j < 0 || i > x - 1 || j > y - 1 || k < 0 || l < 0 || k > x - 1 || l > y - 1)
    {
        cerr << "Bledne wspolrzedne! \n";
        return;
    }
    if(tab[k][l])
    {
        delete tab[k][l];
        tab[k][l] = nullptr;
    }

    tab[k][l] = tab[i][j];
    tab[i][j] = nullptr;
}

void Plansza::zamien(int i, int j, int k, int l)
{
    if (i < 0 || j < 0 || i > x - 1 || j > y - 1 || k < 0 || l < 0 || k > x - 1 || l > y - 1)
    {
        cerr << "Bledne wspolrzedne! \n";
        return;
    }

    swap(tab[i][j], tab[k][l]);
}

void Plansza::usun(int i, int j)
{
    if(tab[i][j])
    {
        delete tab[i][j];
        tab[i][j] = nullptr;
    }
}


