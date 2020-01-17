#ifndef ZBIOR_H
#define ZBIOR_H
#include "punkt.h"
#include <iostream>

using namespace std;

class Zbior
{
    Punkt ** tab; /// ??????????????????????
    int ilosc;
public:
    Zbior(int i);
    friend ostream& operator << (ostream & os, const Zbior & z);
    friend istream& operator >> (istream & is, Zbior & z);
};

Zbior::Zbior(int i)
{
    for(int j = 0; j < i; j++)
    {
        tab[j] = new Punkt();
    }
    ilosc = i;
}

ostream& operator << (ostream & os, const Zbior & z)
{
    for(int i = 0; i < z.ilosc; i++)
    {
        os<<*z.tab[i];
    }

    return os;
}

/// jak mozna skrocic ?
istream& operator >> (istream& is, Zbior &z)
{
    if(z.ilosc == 0)
    {
        int il;
        cout<<"podaj ilosc elementow -> ";cin>>il;
        z.ilosc = il;
        for(int i = 0; i < il; i++)
        {
            int tx;
            int ty;
            cout<<"podaj x -> ";cin>>tx;
            cout<<"podaj y -> ";cin>>ty;
            z.tab[i] = new Punkt(tx, ty);
        }
        return is;
    }
    else
    {
        for(int i = 0; i < z.ilosc; i++)
        {
            delete z.tab[i];
        }
        int il;
        cout<<"podaj ilosc elementow -> ";cin>>il;
        z.ilosc = il;
        for(int i = 0; i < il; i++)
        {
            int tx;
            int ty;
            cout<<"podaj x -> ";cin>>tx;
            cout<<"podaj y -> ";cin>>ty;
            z.tab[i] = new Punkt(tx, ty);
        }
        return is;
    }
}

#endif // ZBIOR_H















