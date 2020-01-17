#ifndef PLANSZA_H
#define PLANSZA_H
#include <iostream>

using namespace std;

enum Kierunek {G, P, D, L};

struct wsp
{
    int x;
    int y;

    void setWSP(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    int getX(){return x;}
    int getY(){return y;}
};


class Plansza
{
private:
    int x;
    int y;
    char **komorki;
    wsp heroPos;
    char wid;
    Kierunek poz;
public:

    Plansza(wsp world, wsp mrowka);
    void print();
    void nextStep(Kierunek k);
    void setPozRight()
    {
        if(static_cast<int>(poz++)) > 4)
        {
            poz = 1;
        }
        else poz ++;
    }
    void setPozLeft()
    {
        if((poz--) < 1)
        {
            poz = 4;
        }
        else poz--;
    }
};


Plansza::Plansza(wsp world, wsp mrowka)
{
    x = world.getX();
    y = world.getY();
    heroPos.setWSP(mrowka.getX(), mrowka.getY());

    komorki = new char*[x];
    for(int i = 0; i < x; i++)
    {
        komorki[i] = new char[y];
    }


    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            komorki[i][j] = ' ';
        }
    }
    poz = 1;
    komorki[mrowka.getX()][mrowka.getY()] = (char)24;
}

void Plansza::nextStep(Kierunek k)
{
    if(komorki[heroPos.getX()][heroPos.getY()] == ' ')
    {
        setPozRight();
    }
    else
    {
        setPozLeft();
    }
}

void Plansza::print()
{
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cout<<komorki[i][j];
        }
        cout<<endl;
    }
}

///219

//27 pravo
//26 levo
//25 down
//24 up

#endif // PLANSZA_H
