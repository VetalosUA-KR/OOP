#ifndef PLANSZA_H_INCLUDED
#define PLANSZA_H_INCLUDED

#include"obiekt.h"

enum class Typ {A, B, C};

class Plansza
{
    int x;
    int y;
    Obiekt* **tab; ///dwuwymiarowa tablica wskaznikow

public:
    Plansza(int x = 10, int y = 10);
    virtual ~Plansza();
    friend ostream& operator<<(ostream & os, const Plansza& P);
    void wstaw(int i, int j, Typ t);
    void przesun(int i, int j, int k, int l);
    void zamien(int i, int j, int k, int l);
    void usun(int i, int j);
};

#endif // PLANSZA_H_INCLUDED
