#include "plansza.h"




Plansza::Plansza(int x, int y)
{
    this->x = x;
    this->y = y;

    tab = new Komorka*[x];
    for(int i = 0; i < x; i ++)
    {
        tab[i] = new Komorka[y];
    }

    for(int i = 1; i < x-1; i++)
    {
        for(int j = 1; j < y-1; j++)
        {
            tab[i][j].setStan(rand() % 2);
        }
    }
}

Plansza::Plansza(const Plansza& P)
{
    this->x = P.x;
    this->y = P.y;

    tab = new Komorka*[x];
    for(int i = 0; i < x; i ++)
    {
        tab[i] = new Komorka[y];
    }

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            tab[i][j].setStan(P.tab[i][j].getStan());
        }
    }
}

Plansza& Plansza::operator=(const Plansza& P)
{
    if(this == &P) return *this;

    for(int i = 0; i < x; i++)
    {
        delete [] tab[i];
    }
    delete [] tab;

    this->x = P.x;
    this->y = P.y;

    tab = new Komorka*[x];
    for(int i = 0; i < x; i ++)
    {
        tab[i] = new Komorka[y];
    }

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            tab[i][j].setStan(P.tab[i][j].getStan());
        }
    }

    return *this;
}

int Plansza::ileSasiadow(int i, int j) const
{
    int stan = 0;
    for(int k = i-1; k < i+2; k++)
    {
        for(int n = j-1; n < j+2; n++)
        {
            stan += tab[k][n].getStan();
        }
    }
    stan -= tab[i][j].getStan();
    //cout<<"ile = "<<stan<<endl;
    return stan;
}

void Plansza::gra()
{
    Plansza kopia = *this;// kostruktor kopijacy
    for(int i = 1; i < x-1; i++)
    {
        for(int j = 1; j < y-1; j++)
        {
            int ile = ileSasiadow(i, j);
            if(ile == 3)
            {
                kopia.tab[i][j].setStan(true);
            }
            else if((ile < 2 || ile > 3))
            {
                kopia.tab[i][j].setStan(false);
            }
        }
    }

    *this = kopia;
}

Plansza::~Plansza()
{
    for(int i = 0; i < x; i++)
    {
        delete [] tab[i];
    }
    delete [] tab;
}

void Plansza::drukuj() const
{
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            tab[i][j].drukuj();
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
