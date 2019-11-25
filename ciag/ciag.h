#ifndef CIAG_H
#define CIAG_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Ciag
{
    int n;
    int min;
    int max;

    int *T;
public:
    Ciag(int n = 0, int min = 0, int max = 0);
    Ciag & Ciag(const Ciag & C);
    virtual ~Ciag();
    friend ostream& operator<<(ostream &os, const Ciag& C);
    Ciag& operator++();   /// ++c увеличиваем размер ciag'a на 1
    Ciag operator++(int); /// c++
    Ciag & operator = (const Ciag & C);
    void aktualizuj();

    int& operator[](unsigned int indeks);

};



#endif // CIAG_H
