#include "plansza.h"


Plansza::Plansza(int x, int y)
{
    this->x = x;
    this->y = y;

    tab = new Obiekt**[x];
    for(int i = 0; i < x; i++)
    {
        tab[i] = new Obiekt*[y];
        for(int j = 0; j < y; j++)
        {
            tab[i][j] = nullptr;
        }
    }
}

Plansza::~Plansza()
{
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
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

ostream& operator<<(ostream & os, const Plansza & p)
{
    for(int j = 0; j < p.y; j++)
    {
        for(int i = 0; i < p.x; i++)
        {
            if(p.tab[i][j])
            {
                p.tab[i][j]->drukuj(os);
                os<<" ";
            }
            else
            {
                os<<" . ";
            }
        }
        os<<endl;
    }

    return os;
}

void Plansza::wstaw(int i, int j, Typ t)
{
    if(!czyPoprawneWsp(i,j))
    {
        cout<<"Blede wsp"<<endl;
        return;
    }
    if(tab[i][j])
    {
        delete tab[i][j];
        tab[i][j] = nullptr;
    }

    switch (t)
    {
        case Typ::A: tab[i][j] = new A; break;
        case Typ::B: tab[i][j] = new B; break;
        case Typ::C: tab[i][j] = new C; break;
    }
}

void Plansza::usun(int i, int j)
{
    if(!czyPoprawneWsp(i,j) && tab[i][j])
    {
        delete tab[i][j];
        tab[i][j] = nullptr;
    }
}

void Plansza::przesun(int i, int j, int ni, int nj)
{
    if(czyPoprawneWsp(i,j) && czyPoprawneWsp(ni,nj) && tab[i][j])
    {
        if(tab[ni][nj])
        {
            delete tab[ni][nj];
            tab[ni][nj] = nullptr;
        }
        tab[ni][nj] = tab[i][j];
        tab[i][j] = nullptr;
    }
}

void Plansza::zmien(int i, int j, int ni, int nj)
{
    if(czyPoprawneWsp(i,j) && czyPoprawneWsp(ni,nj))
    {
        swap(tab[i][j], tab[ni][nj]);
    }
}


bool Plansza::czyPoprawneWsp(int i, int j)
{
    if (i < 0 || j < 0 || i > x-1 || j > y-1) return false;
    return true;
}













