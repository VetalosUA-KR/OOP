#ifndef PUNKT_H
#define PUNKT_H
#include <iostream>

using namespace std;

class Punkt
{
    int x;
    int y;
public:
    Punkt(int _x = 10, int _y = 10) : x(_x), y(_y) {}

    friend ostream & operator << (ostream & os, const Punkt &p);

    //Punkt();
    void print()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};

ostream& operator << (ostream & os, const Punkt &p)
{
    os<<"[x = "<<p.x<<"] | [y = "<<p.y<<"]"<<endl;
    return os;
}

/*Punkt::Punkt()
{
    x = 10;
    y = 10;
}*/


#endif // PUNKT_H
