#ifndef PLANETA_H_INCLUDED
#define PLANETA_H_INCLUDED
#include"Plaszczak.h"

class Planeta
{
    char granica;
    string nazwa;
    int X;
    int Y;
    Plaszczak* postac;

public:
    Planeta(string n, int x, int y, char g, Plaszczak* p);
    virtual ~Planeta() {}
    friend ostream& operator<<(ostream & os, const Planeta& P);
    void ruch(Kierunek k) {postac -> ruch(k);}
};


#endif // PLANETA_H_INCLUDED
