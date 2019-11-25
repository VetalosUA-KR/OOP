#include <iostream>
#include "liczba.h"

using namespace std;

int main()
{
    Liczba l;
    cout<<l<<endl;
    ~l;
    cout<<l<<endl;
    ~l;
    cout<<l<<endl;

    return 0;
}
