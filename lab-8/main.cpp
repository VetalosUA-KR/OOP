#include <iostream>

using namespace std;

class Object
{
public:
    virtual int drukuj() = 0;
};


class A : public Object
{
public:

    virtual int drukuj()
    {

        return 'A';
    }

};

class B : public Object
{
public:

    virtual int drukuj()
    {

        return 'B';
    }

};

class C : public Object
{
public:

    virtual int drukuj()
    {

        return 'C';
    }

};

class Plasz
{
private:
    int x;
    int y;
    int **tab;

public:
    Plasz(int x = 0,int y = 0)
    {
        this->x = x;
        this->y = y;
        tab = new int*[x];

        for(int i=0;i<this->x;i++)
        {
            tab[i] = new int [y];
        }


        for(int i=0;i<this->x;i++)
        {
            for(int j=0;j<this->y;j++)
            {
                tab[i][j] = '.';
            }
        }

    }


    void wstaw(int x1,int y1, Object &o)
    {
        tab[x1][y1] = o.drukuj();
    }

    friend ostream& operator<<(ostream& out , const Plasz &pl);
};

ostream& operator<<(ostream& out , const Plasz &pl)
{
    for(int i=0;i<pl.x;i++)
    {
        for(int j=0;j<pl.y;j++)
        {
            out<<(char)pl.tab[i][j]<<" ";
        }
        out<<endl;
    }
    return out;
}


int main()
{

    Plasz pl(5,5);
    cout<<pl<<endl;
    Object* obj;
    Object* obj2;
    Object* obj3;
    A a;
    B b;
    C c;

    obj = &a;
    obj2 = &b;
    obj3 = &c;



    pl.wstaw(3,3,*obj);

    pl.wstaw(0,0,*obj2);

    pl.wstaw(1,3,*obj3);

    cout<<pl<<endl<<endl;

    return 0;
}
