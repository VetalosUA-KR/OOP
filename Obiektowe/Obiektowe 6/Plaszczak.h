#ifndef PLASZCZAK_H_INCLUDED
#define PLASZCZAK_H_INCLUDED
#include <iostream>
using namespace std;

enum Kierunek {G, D, L, P};

class Plaszczak
{
    char wyglad;
    string imie;
    int pozX;
    int pozY;

public:
    Plaszczak(char w = '?', string i = "Brak") : wyglad(w), imie(i) {pozX = 1; pozY = 1;}
    virtual ~Plaszczak() {}
    void ruch(Kierunek k);
    int getPozX() {return pozX;}
    int getPozY() {return pozY;}
    friend ostream& operator<<(ostream& os, const Plaszczak& P);
};



#endif // PLASZCZAK_H_INCLUDED
