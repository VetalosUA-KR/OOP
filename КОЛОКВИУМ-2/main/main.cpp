#include <iostream>
#include "liczba.h"

using namespace std;

int main()
{
    Liczba l;
    l.wczytajLiczbe("dwa", 2);
    cout<<l<<endl;
    Liczba l2;
    cout<<l2<<endl;
    l2 = l;
    cout<<l2<<endl;
    Liczba l3("tri", 3);
    cout<<l3<<endl;
    l = l2 = l3;
    cout<<"l = "<<l<<"  l2 = "<<l2<<"  l3 = "<<l3<<endl;

    return 0;
}
