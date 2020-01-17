#include <iostream>
#include "plasza.h"



using namespace std;

int main()
{

    wsp world;
    world.setWSP(20, 20);

    wsp hero;
    hero.setWSP(10,10);

    Plansza uniweers(world, hero);
    uniweers.print();

    cout << "Hello world!" << endl;
    return 0;
}
