#include"konto.h"

int Konto::licznik = 0;

Konto::Konto(string im, string naz, float s)
{
    ++licznik;
    imieW = im;
    nazwiskoW = naz;

    numer = "00000";
    string liczba = to_string(licznik);
    int dlugosc_licznika = liczba.length();
    for(int i=4; i>=0; i--)
    {
        numer[i] = liczba[dlugosc_licznika - 1];
        dlugosc_licznika--;
        if(dlugosc_licznika == 0) break;
    }
    //numery kont powstaja wg wzoru 00001,00002, ...
    saldo = s;
}

Konto::~Konto()
{
    cout << "Konto uzytkownika " << imieW << " " << nazwiskoW << " zostalo pomyslnie usuniete" << endl;
}

void Konto::wyswietlDane() const
{
    cout << "Imie:" << imieW << endl;
    cout << "Nazwisko:" << nazwiskoW << endl;
    cout << "Numer konta:" << numer << endl;
    cout << "Saldo:" << saldo << "zl" << endl;
}

void Konto::dodajSrodki(float ilosc)
{
    saldo += ilosc;
}

void Konto::wyplacSrodki(float ilosc)
{
    if(saldo - ilosc >= 0)
    {
        saldo -= ilosc;
    }
    else
    {
        cout << "Masz za malo srodkow na koncie by dokonac wyplaty" << endl;
    }
}


