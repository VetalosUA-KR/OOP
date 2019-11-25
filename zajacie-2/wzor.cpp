#include "wzor.h"

Wzor::Wzor(char z, int l) : liczba(l), znak(z) {}

Wzor::~Wzor()
{
    cout<<"Obiekt ("<<liczba<<","<<znak<<") usuniety"<<endl;
}

void Wzor::opis() const
{
    cout<<liczba<<" x \' "<<znak<<" \' \n";
}

void Wzor::drukuj() const
{
    for(int i = 0; i < liczba; i++)
    {
        cout<<znak;
    }
    cout<<endl;
}
void Wzor::ustaw(char z, int l)
{
    liczba = l;
    znak = z;
}
