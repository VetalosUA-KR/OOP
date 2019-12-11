#include <iostream>
#include "world.h"

using namespace std;

int main()
{
    World w('@',10,10);
    w.createKom();
    w.nextGeneration();
    return 0;
}
