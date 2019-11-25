#ifndef KONTO_H
#define KONTO_H

#include <iostream>
using namespace std;

class Konto
{
private:
    string imie ;
    string nazwisko;
    string numerKonta;
    int saldo;
    static int nu;

public:
    Konto(string i=" ", string n=" ", int s = 0);
    ~Konto();
    void wypiszWlascicelia() const;
    void wplacenie(int ile);
    void wyplacenie(int ile);
    static int getNu(){return nu;}


};



#endif // KONTO_H
