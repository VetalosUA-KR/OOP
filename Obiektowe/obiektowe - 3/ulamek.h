#ifndef ULAMEK_H
#define ULAMEK_H
#include <iostream>
#include<cmath>
using namespace std;

class Ulamek
{
    int l;
    int m;
    int nwd();

public:
    Ulamek(int l = 0, int m = 1) : l(l), m(m) {skroc();} //skraca ulamek na samym poczatku
    void skroc();
    virtual ~Ulamek() {}
    friend ostream& operator<<(ostream& os, const Ulamek& U); // pozwala wypisac caly ulamek
    friend istream& operator>>(istream& is, Ulamek& U); // wczytuje caly obiekt
    Ulamek operator+(const Ulamek& U) const;    //przeciazony operator dla 2 ulamkow
    Ulamek operator+(int x) const; //dodawanie liczba + ulamek
    friend Ulamek operator+(int x, const Ulamek& U); //dodawanie ulamek + liczba
    Ulamek operator-(const Ulamek& U) const; //odejmuje dwa ulamki
    Ulamek operator-() const; //tworzy ulamek przeciwny
    Ulamek operator!(); //operator sluzacy do odwracania ulamka
    Ulamek operator*(const Ulamek& U) const;    //przeciazona * sluzaca do mnozenia 2 ulamkow
    Ulamek operator*(int x) const; //mnozenie liczba * ulamek
    friend Ulamek operator*(int x, const Ulamek& U); //mnozenie ulamek * liczba
    Ulamek operator/(const Ulamek& U) const; //przeciazony operator dla samych ulamkow
    friend Ulamek operator/(int x, const Ulamek& U); // dzielenie ulamek / liczba
    Ulamek operator/(int x) const; // dzielenie liczba / ulamek

};


#endif // ULAMEK_H
