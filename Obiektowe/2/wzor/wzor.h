#ifndef WZOR_H
#define WZOR_H

#include <iostream>
using namespace std;

class Wzor
{
    int dlugosc;
    char znak;

public:
    Wzor(char z='?', int dl=3);
    virtual ~Wzor();
    void opis() const;
    void drukuj() const;
    void ustaw(char,int);

};

#endif // WZOR_H
