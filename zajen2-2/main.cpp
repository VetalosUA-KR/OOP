#include <iostream>
#include "kontoBankowe.h"

using namespace std;

int main()
{
    for(int i = 0; i < 15; i++)
    {
        Konto k1;
        k1.wypiszWlascicelia();
        cout<<"***********"<<endl;
    }
    return 0;
}
