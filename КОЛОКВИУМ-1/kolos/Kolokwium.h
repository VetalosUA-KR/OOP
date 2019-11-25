#ifndef KOLOS_H
#define KOLOS_H
#include <iostream>

using namespace std;

class Kolokwium
{
private:
    static int liczbaPunktow;// maksymalna liczba punktow (ustaw na 30)
    char* student; // imie i nazwisko
    float ocena;
public:

    Kolokwium(const char* _student, float _ocena);
    ~Kolokwium();
    void wypisz() const;//metoda wypisuje wszystkie pola skladowe obiektu
    friend istream & operator>>(istream& is, Kolokwium& K);//wczytuje pola do obiektu na podane przez uzytkownika
    void zmienNazweStudenta(const char* st);
    friend operator ! (Kolokwium & k);// zeruje ocene dla danego obiektu
    void setOcena(float value);


};

#endif // KOLOS_H
