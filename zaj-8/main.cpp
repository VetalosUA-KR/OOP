#include <iostream>
#include "ab.h"

using namespace std;

int main()
{
    /*Transport t("jedzie", "sampchod", 4, false);
    t.wypisz();

    cout<<endl<<endl;

    Auto bmw(t, 1500);
    bmw.wypisz();*/

    Transport * wsk1 = new Transport("jedzie", "sampchod", 4, false);
    Transport * wsk2 = new Auto("lata", "boing", 16, true, 1500000);

    wsk1 -> wypisz();
    cout<<endl;
    wsk2 -> wypisz();

    return 0;
}
