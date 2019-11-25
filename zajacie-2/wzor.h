#ifndef WZOR_H
#define WZOR_H

#include <iostream>
using namespace std;


class Wzor
{
private:
    int liczba;
    char znak;
public:
    Wzor(char z = '?', int l = 3);
    virtual ~Wzor();
    void opis() const;
    void drukuj() const;
    void ustaw(char z, int l);
};




#endif // WZOR_H
