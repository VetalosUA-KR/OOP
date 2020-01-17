#ifndef HERO_H
#define HERO_H

struct wsp
{
    int x;
    int y;

    void setWSP(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    int getX(){return x;}
    int getY(){return y;}
};

class Hero
{
    wsp wspolrzedna;
    char poz;
public:
    Hero(int x, int y, char p)
    {
        wsp.setWSP(x, y);
        poz = p;
    }
    void ruch(int kierunek)
    {
        if()
        {

        }
    }
};


#endif // HERO_H
