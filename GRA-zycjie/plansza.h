#ifndef PLANSZA_H
#define PLANSZA_H
#include "komorka.h"
#include <cstdlib>
#include <ctime>

class Plansza
{
private:
    int x;
    int y;

    Komorka ** tab;
    int ileSasiadow(int i, int j) const;

public:
    Plansza(int x = 40, int y = 40);
    Plansza(const Plansza & P);

    virtual ~Plansza();
    void drukuj() const;
    void gra();

    Plansza & operator = (const Plansza & P);

};



#endif // PLANSZA_H
