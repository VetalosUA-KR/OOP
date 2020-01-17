#include "pane.h"
#include <windows.h>

void pozxy( int y, int x )
{
    COORD c;

    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), c );
}

Pane::Pane(int n) : n(n)
{
    isOut = false;
    tab = new Element*[n];

    for (int i = 0; i < n; i++)
    {
        tab[i] = new Element[n];
    }

    ant = new Ant(n/2, n/2);
}

Pane::~Pane()
{
    for (int i = 0; i < n; i++)
    {
        delete [] tab[i];
    }

    delete [] tab;

    delete ant;
}

void Pane::cycle()
{
    int x = ant -> getX();
    int y = ant -> getY();
    if (x < 0 || y < 0 || x > n - 1 || y > n - 1)
    {
        isOut = true;
        return;
    }

    Direction d = ant -> getDirection();
    Color c = tab[x][y].getColor();


    if (c == W)
    {
        tab[x][y].setColor(B);
        ant -> changeDirection(Direction(((int)d+1)% 4));
    }
    else
    {
        tab[x][y].setColor(W);
        ant -> changeDirection(Direction(((int)(4+d)-1) % 4));
    }

    pozxy( ant->getX(), ant->getY() );
    ant->print();
    pozxy(0,0);
    pozxy(x,y);
    tab[x][y].print();
    pozxy(0,0);
}

void Pane::print() const
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == ant -> getX() && j == ant -> getY())
            {
                ant -> print();
            }
            else
            {
                tab[i][j].print();
            }
        }
        cout << endl;
    }
}

bool Pane::getIsOut()
{
    return isOut;
}


