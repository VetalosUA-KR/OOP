#include "wzor.h"

Wzor::Wzor(char z, int dl)
{
    znak=z;
    dlugosc=dl;
}

Wzor::~Wzor()
{
    cout<<"Obiekt ("<<dlugosc<<","<<znak<<") zostal usuniety"<<endl;
}


void Wzor::opis() const
{
    cout<<dlugosc<<" x \'"<<znak<<"\'"<<endl;
}

void Wzor::drukuj() const
{
    for(int i=0; i<dlugosc; i++)
    {
        cout<<znak;
    }
    cout<<endl;
}

void Wzor::ustaw(char z, int dl)
{
    znak=z;
    dlugosc=dl;
}

