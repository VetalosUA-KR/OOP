#include <iostream>
#include <cstring>
#include "Kolokwium.h"

using namespace std;

int main()
{
    Kolokwium k("vitalii voitenko", 4.5);

    k.wypisz();

    //k.zmienNazweStudenta("new student");
    //k.wypisz();
    {
        Kolokwium k1("vtoroj student", 3);
        k1.wypisz();
    }

    Kolokwium k2("old st", 5);
    k2.wypisz();





}
