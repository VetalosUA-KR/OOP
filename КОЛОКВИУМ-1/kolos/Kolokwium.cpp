#include "Kolokwium.h"
#include <iostream>
#include <cstring>

using namespace std;

int Kolokwium::liczbaPunktow = 30;

Kolokwium::Kolokwium(const char* _student, float _ocena)
{
    student = new char[strlen(_student)+1];
    strcpy(student, _student);
    this->ocena = _ocena;
    liczbaPunktow++;
}

Kolokwium::~Kolokwium()
{
    cout<<"delete ->"<<student<<endl;
    liczbaPunktow--;
    delete [] student;
}

void Kolokwium::zmienNazweStudenta(const char* st)
{
    student = new char[strlen(st)+1];
    strcpy(student, st);
}



void Kolokwium::setOcena(float value)
{
    if(ocena >= 0) this->ocena = value;
    else this->ocena = 0;
}


istream & operator>>(istream& is, Kolokwium& K)
{
    //cout<<"podaj imie studenta ->";is>>K.student;
    //cout<<"podaj nazwisko studenta ->";is>>K.student;
    cout<<"podai imie i nazwosko -> ";
    gets(K.student);
    cout<<"podaj ocene studenta ->";is>>K.ocena;
    return is;
}

operator ! (Kolokwium &k)
{
    cout<<" operator ! "<<endl;
    k.setOcena(0);
    return true;
}

/*void Kolokwium::wypisz() const
{
    cout<<"imie i nazwisko studenta -> "<<student<<endl;
    cout<<"ocena studenta -> "<<ocena<<endl;
    cout<<"liczba punktow -> "<<liczbaPunktow<<endl;
    cout<<"*************"<<endl;
}*/

void Kolokwium::wypisz() const
{
    cout<<"imie i nazwisko studenta ->"<<student<<endl;
    cout<<"ocena studenta -> "<<ocena<<endl;
    cout<<"liczba punktow -> "<<liczbaPunktow<<endl;
}

