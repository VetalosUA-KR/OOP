#include "przelacznik.h"

int main()
{
    //zmienne automatyczne, odkladane na stos
    Przelacznik p1;
    Przelacznik p2("czarny");

    {   //blok wewnetrzny
            Przelacznik p("rozowy",1,false);
            p.drukuj();
    }

    Przelacznik p3("czerwony",2);
    Przelacznik p4("teczowy",3,true);
    p4.wcisnij();
    p1.drukuj();
    p2.drukuj();
    p3.drukuj();
    p4.drukuj();

    //zmienne tworzone dynamicznie odkladane na sterte
    Przelacznik* wsk=new Przelacznik("szary",2,true);
    wsk -> drukuj();
    delete wsk;
    wsk = nullptr;

    return 0;
}
