#include "liczba.h"
#include <iostream>
#include <cstring>

using namespace std;

int Liczba::ile = 0;

Liczba::Liczba(char * naz, float wa)
{
    nazwaLiczby = new char[strlen(naz)+1];
    strcpy(nazwaLiczby, naz);
    wartosc = wa;
    ile++;
}

Liczba::~Liczba()
{
    ile--;
    delete [] nazwaLiczby;
}

ostream & operator << (ostream & os, const Liczba& L)
{
    cout<<"nazwa liczby = ";
    os<<L.nazwaLiczby;
    cout<<"\t wartosc = ";
    os<<L.wartosc<<endl;
    return os;
}

Liczba& Liczba::operator=(const Liczba& L)
{
    if(this == &L) return *this;
    delete [] nazwaLiczby;
    nazwaLiczby = new char[strlen(L.nazwaLiczby)+1];
    strcpy(nazwaLiczby, L.nazwaLiczby);
    wartosc = L.wartosc;
}

void Liczba::wczytajLiczbe(const char* nazwe, float liczba)
{
    if(nazwaLiczby == nullptr) delete [] nazwaLiczby;
    nazwaLiczby = new char[strlen(nazwe)+1];
    strcpy(nazwaLiczby, nazwe);
    wartosc = liczba;
}

void Liczba::zmienNazweLiczby(char * naz)
{
    if(nazwaLiczby == nullptr) delete [] nazwaLiczby;
    nazwaLiczby = new char[strlen(naz)+1];
    strcpy(nazwaLiczby, naz);
}

Liczba& Liczba::operator~()
{
    wartosc = wartosc*(-1);
}
