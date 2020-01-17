#ifndef KONTO_H
#define KONTO_H
#include <iostream>
#include<string>
using namespace std;


class Konto
{
    string imieW;
    string nazwiskoW;
    string numer;
    float saldo;
    static int licznik; //statyczny int ktory zmienia sie dla wszystkich obiektow

public:
    Konto(string im="Jan", string naz="Kowalski", float s=100);
    virtual ~Konto();
    void wyswietlDane() const;
    void dodajSrodki(float);
    void wyplacSrodki(float);
    //static int getLicznik() {return licznik}; //pozwala dostac sie do pola statycznego
};

#endif // KONTO_H
