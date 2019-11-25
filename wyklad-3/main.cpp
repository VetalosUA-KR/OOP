#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Test
{
    int x;
    bool* taknie;
public:
    Test(int x = 0, bool* taknie = nullptr)
    {
        this -> x = x;
        this -> taknie = new bool[x];
        for (int i = 0; i < x; ++i)
        {
            this->taknie[i] = rand() % 2;
        }
    }

    //2. konstrukor kopiujacy
    Test(const Test& T)
    {
        this -> x = T.x;
        this -> taknie = new bool[x];
        for (int i = 0; i < x; ++i)
        {
            this->taknie[i] = T.taknie[i];
        }
    }

    //1. destruktor
    virtual ~Test()
    {
        if (taknie)
            delete [] taknie;
        taknie = nullptr;
    }

    //3. operator przypisania
    Test& operator=(const Test& T)
    {
        if (this == &T) return *this;//2.

        if (this->taknie) //1.
            delete [] this -> taknie;
        this -> taknie = nullptr;

        this -> x = T.x;
        this -> taknie = new bool[x];
        for (int i = 0; i < x; ++i)
        {
            this->taknie[i] = T.taknie[i];
        }

        return *this;//3.
    }

    void print() const
    {
        cout << "adres: " << taknie << " ";
        for (int i = 0; i < x; ++i)
        {
            cout << taknie[i];
        }
        cout << endl;
    }
};

int main()
{
    /*srand(time(0));
    Test T(10);
    T.print();

    {
        Test V = T;//konstruktor kopiujacy
        V.print();
    }

    T.print();

    {
        Test V(1000);
        V = T; //operator= (przypisania)
        //V.operator=(T);
        V.print();
    }

    T.print();*/




    return 0;
}
