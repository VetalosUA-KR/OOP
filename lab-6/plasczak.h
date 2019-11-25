#ifndef PL_H
#define PL_H
#include<iostream>

using namespace std;

enum Kierunek {G, D, L, P};

struct Para
{
    int pozX;
    int pozY;

    Para(int pozX = 2, int pozY = 2) : pozX(pozX), pozY(pozY) {}
};

class Plasczak
{
    Para wsp;
    string imie;
    char wyglad;
public:
    Plasczak(string i, char w) : imie(i), wyglad(w) {}
    virtual ~Plasczak() {}
    friend ostream& operator <<(ostream& os, const Plasczak& P);
    void ruch(Kierunek k);
    Para getPozycja() const;
};


#endif // PL_H
