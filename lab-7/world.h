#ifndef WORLD_H
#define WORLD_H
#include <iostream>
#include "komorka.h"

using namespace std;

class World
{
private:
    char mur;
    para wymiar;


public:
    World(char m, int x, int y)
    {
        mur = m;
        wymiar.pozX = x;
        wymiar.pozY = y;
    }

    Komorka komorki[1];
    Komorka k1;

    void createKom()
    {
        komorki[0] = k1;
    }

    void nextGeneration()
    {
        for(int x = 0; x < wymiar.pozX-1; x++)
        {
            for(int y = 0; y < wymiar.pozY-1; y++)
            {
                if(x == wymiar.pozX && y == wymiar.pozY) cout<<mur;
                else cout<<".";

                for(int k = 0; k < 3; k++)
                {
                    if(komorki[k].getWsp().pozX == x && komorki[k].getWsp().pozY == y) cout<<komorki[k].getWidok();
                }
            }
            cout<<endl;
        }
    }
};



#endif
