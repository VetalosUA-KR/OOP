#include "kontoBankowe.h"
#include <string>

int Konto::nu = 0;

Konto::~Konto()
{

}

Konto::Konto(string i, string n, int s)
{
    imie = i;
    nazwisko = n;
    saldo = s;
    nu++;
    if(nu < 10)
    {
        numerKonta = "0000"+std::to_string(nu);
    }
    else
    {
        numerKonta = "000"+std::to_string(nu);
    }

}

void Konto::wypiszWlascicelia() const
{
    cout<<"imie -> "<<imie<<endl;
    cout<<"nazwisko -> "<<nazwisko<<endl;
    cout<<"numer konta -> "<<numerKonta<<endl;
    cout<<"ile piendzy -> "<<saldo<<endl;
}

void Konto::wplacenie(int ile)
{
    saldo += ile;
}

void Konto::wyplacenie(int ile)
{
    saldo -= ile;
}
