#ifndef ULAMEK_H
#define ULAMEK_H

#include <iostream>

using namespace std;

class Ulamek
{
    int l;
    int m;


public:
    int nwd();
    Ulamek(int l = 0, int m = 1): l(l), m(m) {}
    virtual ~Ulamek() {}
    friend ostream& operator<<(ostream& os, const Ulamek& U);
    friend istream& operator>>(istream& is, Ulamek& U);
    Ulamek operator+(const Ulamek& U) const;
    Ulamek operator*(const Ulamek& U) const;
    Ulamek operator+(int x) const;
    friend Ulamek operator+(int x, const Ulamek& U);
    Ulamek operator-(const Ulamek& U) const;
    Ulamek operator-() const;


    void skroc();
};

#endif // ULAMEK_H
