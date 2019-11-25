#include "ciag.h"

Ciag::Ciag(int n, int min, int max) /// : n(n), min(min), max(max) {}
{
    this -> n = n;
    this -> min = min;
    this -> max = max;

    if(n > 0)
    {
        T = new int[n];
        for(int i = 0; i < n; i++)
        {
            T[i] = rand() % (max - min + 1) + min;
        }
    }
    else if(n == 0)
    {
        T = nullptr;
    }
    else
    {
        cerr<<"Nie poprawna liczba elementow"<<endl;
        n = max = min = 0;
        T = nullptr;
    }
}

Ciag::~Ciag() /// : n(n), min(min), max(max) {}
{
    cout<<"Usunieto ciag"<< *this<<endl;
    if(T != nullptr)
    {
        delete [] T ;
        T = nullptr;
    }
}

ostream& operator<<(ostream &os, const Ciag& C)
{
    os<<'(';
    for(int i = 0; i < C.n; i++)
    {
        os<<C.T[i]<<(i==C.n-1?"":",");
    }
    os<<')';
    return os;
}

Ciag& Ciag::operator++()
{
    int * tmp = new int[n + 1];
    for(int i = 0; i < n; i++)
    {
        tmp[i] = T[i];
    }

    tmp[n] = rand() % (max - min + 1) + min;

    if(T != nullptr)
    {
        delete [] T ;
        T = nullptr;
    }

    T = tmp;
    n++;
    return *this;
}

int& Ciag::operator[](unsigned int indeks)
{
    return T[indeks];
}

Ciag Ciag::operator++(int)
{
    Ciag kopia = *this;/// dziala konstruktor kopiujacy
    ++(*this);
    return kopia;
}

void Ciag::aktualizuj()
{
    for(int i = 0; i < this->n; i++)
    {
        if(T[i] > max) max = T[i];
        if(T[i] < min) min = T[i];
    }
}


Ciag::Ciag(const Ciag& C)
{
    this -> n = C.n;
    this -> min = C.min;
    this -> max = C.max;

    if(n > 0)
    {
        T = new int[n];
        for(int i = 0; i < n; i++)
        {
            T[i] = C.T[i];
        }
    }
    else if(n == 0)
    {
        T = nullptr;
    }
    else
    {
        cerr<<"Nie poprawna liczba elementow"<<endl;
        n = max = min = 0;
        T = nullptr;
    }
}












