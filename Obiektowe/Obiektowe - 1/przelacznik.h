#ifndef PRZELACZNIK_H
#define PRZELACZNIK_H

#include<iostream>
using namespace std;

class Przelacznik
{
    private:
        string kolor;
        int liczbaPrzyciskow;
        bool czyWlaczony;
    public:
        Przelacznik(string = "bialy", int = 1, bool = false);
        //wartosci domysle w kontruktorze
        ~Przelacznik();
        void drukuj() const;
        void wcisnij();

};


#endif // PRZELACZNIK_H

