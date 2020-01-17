#include "przelacznik.h"
Przelacznik::Przelacznik(string k, int l, bool c)
{
    kolor=k;
    liczbaPrzyciskow=l;
    czyWlaczony=c;
}

//Przelacznik::Przelacznik(string k, int l, bool c) : kolor(k), liczbaPrzyciskow(l), czyWlaczoby(c) {}
// konstruktor z lista inicjalizacyjna

Przelacznik::~Przelacznik()
{
    cout<<" --- Usuwam przelacznik koloru "<<kolor<<" --- "<<endl;
}

void Przelacznik::drukuj() const
{
    cout<<"-----------------------\n"
        <<"kolor: "<<kolor<<endl
        <<"liczba przyciskow: "<<liczbaPrzyciskow<<endl
        <<"czy Wlaczony?: "<<(czyWlaczony?"TAK":"NIE")<<endl //zamienia true na TAK
        <<"-----------------------"<<endl;
}

void Przelacznik::wcisnij()
{
    czyWlaczony=!czyWlaczony;
}
