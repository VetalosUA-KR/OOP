#ifndef CIAG_H
#define CIAG_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Ciag
{
    int n; //liczba el
    int min;
    int max;
    int * tab;

public:
    Ciag(int n = 0, int min = 0, int max = 0);
    Ciag(const Ciag& C);
    virtual ~Ciag();
    friend ostream& operator<<(ostream& os, const Ciag& C);
    Ciag& operator++();//pre
    Ciag operator++(int); //post, int jest w srodky tylko dla rozroznienia operatorow
    Ciag& operator=(const Ciag& C);
    int& operator[](int x);
    void zaktualizujZakres();
};


#endif // CIAG_H


