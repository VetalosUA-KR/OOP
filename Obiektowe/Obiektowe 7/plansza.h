#ifndef PLANSZA_H_INCLUDED
#define PLANSZA_H_INCLUDED

#include"komorka.h"
#include <cstdlib>
#include <ctime>

class Plansza
{
    int wymX;
    int wymY;
    Komorka** tab;
    int liczbaSasiadow(int i, int j) const;

public:
    Plansza(int wymX = 10, int wymY = 10);
    Plansza(const Plansza& P);
    virtual ~Plansza();
    Plansza& operator=(const Plansza& P);
    friend ostream& operator<<(ostream& os, const Plansza& P);
    void gra();
};


#endif // PLANSZA_H_INCLUDED
