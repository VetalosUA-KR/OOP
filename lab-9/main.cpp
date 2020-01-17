#include <iostream>
#include "plansza.h"

using namespace std;

int main()
{
    Plansza p(10,10);
    cout<<p<<endl<<endl;
    p.wstaw(0,0,Typ::A);
    p.wstaw(1,1,Typ::B);
    cout<<p<<endl;
    p.zmien(0,0,1,1);
    cout<<p<<endl;
    return 0;
}
