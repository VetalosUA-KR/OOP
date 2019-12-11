#include "ab.h"
#include <iostream>
#include <cstring>

using namespace std;

/*void Transport::rusz()
{
    cout<<typRuchu<<endl;
}*/

Transport::Transport(char* tr, char * n, int ik, bool cl)
{
    typRuchu = new char[strlen(tr)+1];
    strcpy(typRuchu, tr);

    nazwa = new char [strlen(n)+1];
    strcpy(nazwa, n);

    ileKol = ik;
    czyLata = cl;
}

Transport::~Transport()
{
    delete [] typRuchu;
    delete [] nazwa;
}

Transport::Transport(const Transport& T)
{
    typRuchu = new char[strlen(T.typRuchu)+1];
    strcpy(typRuchu, T.typRuchu);

    nazwa = new char [strlen(T.nazwa)+1];
    strcpy(nazwa, T.nazwa);

    ileKol = T.ileKol;
    czyLata = T.czyLata;
}

Transport& Transport::operator=(const Transport& T)
{
    if(this == &T) return * this;
    delete [] typRuchu;
    delete [] nazwa;
    typRuchu = new char[strlen(T.typRuchu)+1];
    strcpy(typRuchu, T.typRuchu);

    nazwa = new char [strlen(T.nazwa)+1];
    strcpy(nazwa, T.nazwa);

    ileKol = T.ileKol;
    czyLata = T.czyLata;
}

void Transport::wypisz()
{
    cout<<"typ transportu -> "<<nazwa<<endl;
    cout<<"typRuchu transportu -> "<<typRuchu<<endl;
    cout<<"czyLata transport -> "<<czyLata<<endl;
    cout<<"ileKol ma transport -> "<<ileKol<<endl;
}


Auto & Auto::operator = (const Auto & A)
{

}

void Auto::wypisz()
{
    Transport::wypisz();
    cout<<"waga auta = "<<waga<<endl;
}






