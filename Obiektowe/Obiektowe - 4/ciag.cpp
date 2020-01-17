#include "ciag.h"
Ciag::Ciag(int n, int min, int max)
{
    this -> n = n;
    this -> min = min;
    this -> max = max;

    if (n > 0)
    {
        tab = new int[n];
        for(int i = 0; i < n; i++)
        {
            tab[i] = rand() % (max - min + 1) + min;
        }
    }
    else if (n == 0)
    {
        tab = nullptr;
    }
    else
    {
        n = min = max = 0;
        cerr << "Niepoprawna liczba elementow!/n";
        tab = nullptr;
    }
}

Ciag::Ciag(const Ciag& C)
{
    n = C.n;
    min = C.min;
    max = C.max;

    if (n > 0)
    {
        tab = new int[n];
        for(int i = 0; i < n; i++)
        {
            tab[i] = C.tab[i];
        }
    }
    else if (n == 0)
    {
        tab = nullptr;
    }
    else
    {
        n = min = max = 0;
        cerr << "Niepoprawna liczba elementow!/n";
        tab = nullptr;
    }
}


Ciag::~Ciag()
{
    cout << "Usunieto ciag " << *this << endl;
    if (tab != nullptr)
    {
        delete [] tab;
        tab = nullptr;
    }
}

ostream& operator<<(ostream& os, const Ciag& C)
{
    os << "(";
    for(int i = 0; i < C.n; i++)
    {
        os << C.tab[i] << (i == C.n-1?"":",");
    }
    os << ")" << endl;
    return os;
}

Ciag& Ciag::operator++()
{
    int* tmp = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        tmp[i] = tab[i];
    }

    tmp[n] = rand() % (max - min + 1) + min;

    if (tab != nullptr)
    {
        delete [] tab;
        tab = nullptr;
    }

    tab = tmp;
    n++;

    return *this; //zwraca caly obiekt
}

Ciag Ciag::operator++(int)
{
    Ciag kopia = *this; //konstruktor kopiujacy
    ++(*this);
    return kopia;
}

Ciag& Ciag::operator=(const Ciag& C)
{
    if(this == &C) return *this;

    if (tab != nullptr)
    {
        delete [] tab;
        tab = nullptr;
    }

    n = C.n;
    min = C.min;
    max = C.max;

    if (n > 0)
    {
        tab = new int[n];
        for(int i = 0; i < n; i++)
        {
            tab[i] = C.tab[i];
        }
    }
    else if (n == 0)
    {
        tab = nullptr;
    }
    else
    {
        n = min = max = 0;
        cerr << "Niepoprawna liczba elementow!/n";
        tab = nullptr;
    }

    return * this;
}


int& Ciag::operator[](int x)
{
    return tab[x];
}

void Ciag::zaktualizujZakres()
{
    int tmpMax = tab[0];
    int tmpMin = tab[0];
    for(int i = 0; i < n; i++)
    {
        if(tab[i] > tmpMax) tmpMax = tab[i];
        if(tab[i] < tmpMin) tmpMin = tab[i];
    }

    this -> max = tmpMax;
    this -> min = tmpMin;
}




