#include"test.h"
Test::Test(int n)
{
    this -> n = n;

    if(n > 0)
    {
        tab = new int[n];
        for(int i = 0; i < n; ++i)
        {
            tab[i] = i;
        }
    }

    else
    {
        n = 0;
        tab = nullptr;
    }
}

Test::Test(const Test& T)
{
    n = T.n;

    if(n > 0)
    {
        tab = new int[n];
        for(int i = 0; i < n; ++i)
        {
            tab[i] = T.tab[i];
        }
    }

    else
    {
        n = 0;
        tab = nullptr;
    }
}



Test::~Test()
{
   if(tab != nullptr)
   {
       delete [] tab;
       tab = nullptr;
   }
}

ostream& operator<<(ostream& os, Test& T)
{
    for(int i = 0; i < T.n; ++i)
    {
        os << T.tab[i] << '\t';
    }
    return os;
}

Test& Test::operator=(const Test& T)
{
    if(this == &T) return *this; //jezeli bysmy przypisali taki sam obiekt

    if(tab != nullptr)
   {
       delete [] tab;
       tab = nullptr;
   }

   n = T.n;

    if(n > 0)
    {
        tab = new int[n];
        for(int i = 0; i < n; ++i)
        {
            tab[i] = T.tab[i];
        }
    }

    else
    {
        n = 0;
        tab = nullptr;
    }

    return * this;

}
