#ifndef KOMORKA_H
#define KOMORKA_H
#include <iostream>

using namespace std;

class Komorka
{
private:
    bool stan;
public:
    Komorka(bool s = false) { stan = s;}
    bool getStan() const { return stan; }
    void setStan (bool s) { stan = s; }
    void drukuj() const { cout << (stan? 'o' : ' '); }
};


#endif // KOMORKA_H
