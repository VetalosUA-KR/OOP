#ifndef PLANETA_H
#define PLANETA_H

#include "plasczak.h"
#include <iostream>

using namespace std;

class Planeta
{
    string nazwa;
    char mur;
    Para wymiar;
    Plasczak* postac; /// указатель на нашего героя
public:
    ///в конструктор передаем указатель на героя
    Planeta(string n, char m, int x, int y, Plasczak* p);
    virtual ~Planeta() {}
    friend ostream& operator<<(ostream& os, const Planeta& P);
    void ruch(Kierunek k)
    {
        if (!(k == G && postac->getPozycja().pozY == 1) &&
            !(k == D && postac->getPozycja().pozY == wymiar.pozY-2) &&
            !(k == L && postac->getPozycja().pozX == 1) &&
            !(k == P && postac->getPozycja().pozX == wymiar.pozX-2))
        {
            postac -> ruch(k);
        }


    }
};


#endif // PLANETA_H
