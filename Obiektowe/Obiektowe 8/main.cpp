#include "ab.h"

int main()
{
    A* wsk1 = new A(7);
    A* wsk2 = new B(10, 5.6);

    wsk1 -> drukuj();
    wsk2 -> drukuj();

    delete wsk1;
    delete wsk2;

    return 0;
}
