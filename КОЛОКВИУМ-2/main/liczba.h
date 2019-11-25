#include <iostream>
using namespace std;


class Liczba
{
private:
    static int ile;
    char * nazwaLiczby;
    float wartosc;
public:
    Liczba(char * naz = "zero", float wa = 1);
    ~Liczba();
    Liczba & operator = (const Liczba& L);
    friend ostream & operator << (ostream & os, const Liczba& L);
    void wczytajLiczbe(const char* nazwe, float liczba);
    void zmienNazweLiczby(char * naz);
    Liczba & operator~();
};
