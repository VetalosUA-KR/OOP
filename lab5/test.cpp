#include "test.h"


Test::Test(int n)
{
    this -> n = n;
    if(n > 0)
    {
        tab = new bool[n];
        for(int i = 0; i < n; i++)
        {
            tab[i] = i % 2;
        }
    }
    else
    {
        n = 0;
        tab = nullptr;
    }
}

Test::Test(const Test& T)
{
    this -> n = T.n;
    if(n > 0)
    {
        tab = new bool[n];
        for(int i = 0; i < n; i++)
        {
            tab[i] = T.tab[i];
        }
    }
    else
    {
        n = 0;
        tab = nullptr;
    }
}

Test::~Test()
{
    if (tab != nullptr)
    {
        delete [] tab;
        tab = nullptr;
    }
}

ostream& operator<<(ostream & os, const Test& T)
{
    for(int i = 0; i < T.n; i++)
    {
        os << T.tab[i];
    }
    return os;
}

Test & Test::operator = (const Test& T)
{
    //czy objekty sa te same
    if(this == &T) return *this;

    //destruktor
    if (tab != nullptr)
    {
        delete [] tab;
        tab = nullptr;
    }

    //kostruktor koliujacy
    this -> n = T.n;
    if(n > 0)
    {
        tab = new bool[n];
        for(int i = 0; i < n; i++)
        {
            tab[i] = T.tab[i];
        }
    }
    else
    {
        n = 0;
        tab = nullptr;
    }
    return *this;
}



