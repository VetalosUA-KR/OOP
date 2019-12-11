#ifndef AB_H
#define AB_H

#include <iostream>
using namespace std;

class Transport
{
private:
    char * typRuchu;
    int ileKol;
    bool czyLata;
    char * nazwa;
public:
    Transport(char * tr, char * n, int ik, bool cl);
    virtual ~Transport();
    Transport(const Transport & T);
    Transport & operator = (const Transport & T);
    //virtual void rusz();
    virtual void wypisz();
};

class Auto : public Transport
{
private:
    int waga;
public:
    Auto(char * tr, char * n, int ik, bool cl, int w): Transport(tr,n,ik,cl)
    {
        waga = w;
    }

    Auto(const Transport & t, int w) : Transport(t)
    {
        waga = w;
    }

    Auto & operator = (const Auto & A);
    void wypisz();
};


#endif // AB_H
