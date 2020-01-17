#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <iostream>
using namespace std;

enum Direction {U, R, D, L};
enum Color {W, B};

class Element
{
    Color color;
public:
    Element(Color c = W) : color(c) {}
    virtual ~Element() {}
    Color getColor() const
    {
        return color;
    }

    void setColor(Color c)
    {
        color = c;
    }

    void print() const
    {
        cout << ((color == W)?' ':char(219));
    }
};


class Ant
{
    Direction d;
    int x;
    int y;
public:
    Ant(int x, int y) : d(U), x(x), y(y) {};
    void print() const
    {
        if (d==U) cout << char(24);
        else if (d==D) cout << char(25);
        else if (d==R) cout << char(26);
        else cout << char(27);
    }

    void changeDirection(Direction d)
    {
        this -> d = d;
        switch (d)
        {
            case U: x--; break;
            case R: y++; break;
            case D: x++; break;
            case L: y--; break;
        }


    }
    Direction getDirection() {return d;}
    int getX()  {return x;}
    int getY()  {return y;}
    void setX(int x) {this -> x = x;}
    void setY(int y) {this -> y = y;}

};

#endif // ELEMENT_H_

