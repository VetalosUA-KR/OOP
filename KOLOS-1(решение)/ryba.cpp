#include "ryba.h"
#include <iostream>
#include <cstring>
#include <string>



using namespace std;

int Ryba::ilosc = 0;

Ryba::Ryba(char* t, int z)
{
    typ = new char[strlen(t)+1];
    strcpy(typ, t);
    zanurenie = z;
    ilosc++;
}

Ryba::Ryba(Ryba& r)
{
    typ = new char[strlen(r.typ)+1];
    strcpy(typ, r.typ);
    zanurenie = r.zanurenie;
    ilosc++;
}

Ryba::Ryba()
{
    typ = new char[3];
    strcpy(typ, "NaN");
    zanurenie = 1;
    ilosc++;
}

Ryba::~Ryba()
{
    delete [] typ;
    ilosc--;
}

ostream& operator<<(ostream& os, const Ryba & r)
{
    os<<"typ = "<<r.typ<<"\t"<<"zanurenie = "<<r.zanurenie<<endl;
    return os;
}

istream& operator>>(istream& is, Ryba & r)
{
    if(r.typ != nullptr) delete [] r.typ;
    cout<<"podaj typ -> ";
    char * bufer;
    cin>>bufer;
    r.typ = new char [strlen(b)+1];
    strcpy(r.typ, bufer);
    delete [] bufer;

    cout<<endl<<"podaj zanurenie -> ";
    is>>r.zanurenie;
    return is;
}

Ryba operator+(int x, Ryba& r)
{
    r.zanurenie += x;
    return r;
}

Ryba& Ryba::operator = (const Ryba& r)
{
    if(this == &r) return *this;
    delete [] typ;
    typ = new char[strlen(r.typ)+1];
    strcpy(typ, r.typ);
    zanurenie = r.zanurenie;

    return *this;
}

void Ryba::zmienZanurenie(int z)
{
    zanurenie = z;
}

