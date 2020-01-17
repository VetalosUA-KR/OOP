#include <iostream>
#include "stosTP.h"


int main()
{
    StackTP<char> znaki;
    znaki+'s';
    znaki+'o';
    znaki+'r';
    znaki+'s';
    znaki[1]='t';
    znaki.drukuj();
    cout << endl << --znaki << endl << endl;
    znaki.usun();
    return 0;
}
