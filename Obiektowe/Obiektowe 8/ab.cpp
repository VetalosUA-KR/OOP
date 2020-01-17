#include "ab.h"
A::A(int n)
{
    this -> n = n;
    tab = new bool[n];
    for(int i = 0; i < 10; i++)
    {
        tab[i] = i % 2;
    }
}

A::A(const A& a)
{
    this -> n = a.n;
    tab = new bool[n];
    for(int i = 0; i < 10; i++)
    {
        tab[i] = a.tab[i];
    }
}

A::~A()
{
    cout << "~A\n";
    delete [] tab;
    tab = nullptr;
}

A& A::operator=(const A& a)
{
    if(this == &a) return *this;

    delete [] tab;
    tab = nullptr;

    this -> n = a.n;
    tab = new bool[n];
    for(int i = 0; i < 10; i++)
    {
        tab[i] = a.tab[i];
    }

    return *this;
}


void A::drukuj() const
{
    for(int i = 0; i < n; i++)
    {
        cout << tab[i];
    }
    cout << endl;
}


B::B(int n, float x) : A(n) //konstruktor klasy macierzystej
{
    this -> x = x;
}

B::B(const B& b) : A(b)
{
    this -> x = b.x;
}

B::~B()
{
    cout << "~B\n";
}


B& B::operator=(const B& b)
{
    (A&)(*this) = (A&)b; //rzutowanie na referencje do klasy macierzystej

    if(this == &b) return *this;

    this -> x = b.x;

    return *this;
}

void B::drukuj() const //przesloniecie metody
{
    A::drukuj();
    cout << "X: " << x << endl;
}


