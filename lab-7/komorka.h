#ifndef KOMORKA_H
#define KOMORKA_H
#include <iostream>

using namespace std;

struct para
{
    int pozX;
    int pozY;


};

class Komorka
{
private:
    para wsp;
    char widok;
public:
    Komorka(int x = 0, int y = 0, char w = 'o')
    {
        wsp.pozX = x;
        wsp.pozY = y;
        widok = w;
    }
    void wyp()
    {
        cout<<"x = "<<wsp.pozX<<"\t y = "<<wsp.pozY<<endl;
    }
    para getWsp()
    {
        return wsp;
    }
    char getWidok(){ return widok; }
};


#endif // KOMORKA_H
