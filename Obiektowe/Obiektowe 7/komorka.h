#ifndef KOMORKA_H_INCLUDED
#define KOMORKA_H_INCLUDED

#include <iostream>
using namespace std;

class Komorka
{
    bool stan;

public:
    Komorka(bool s = false) {stan = s;}
    virtual ~Komorka() {}
    bool getStan() const {return stan;}
    void setStan(bool s) {stan = s;}
    friend ostream& operator<<(ostream& os, const Komorka& K)
    {
        os << (K.stan? 'o':' ');
        return os;
    }
};


#endif // KOMORKA_H_INCLUDED
