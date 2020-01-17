#ifndef PLANSZA_H
#define PLANSZA_H

#include "obiekt.h"

enum class Typ {A, B, C};

class Plansza
{
    int x;///wierszy
    int y;///kolumny
    Obiekt* **tab;
    bool czyPoprawneWsp(int i, int j);
public:
    Plansza(int x = 10, int y = 10);
    virtual ~Plansza();

    friend ostream& operator<<(ostream & os, const Plansza & p);

    void wstaw(int i, int j, Typ t);
    void usun(int i, int j);
    void przesun(int i, int j, int ni, int nj);
    void zmien(int i, int j, int ni, int nj);
};


#endif // PLANSZA_H
