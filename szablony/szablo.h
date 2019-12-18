#ifndef SZABLON_H
#define SZABLON_H
#include <iostream>

using namespace std;

template <typename Typ, int n>
class TabTP
{
private:
    Typ tablica[n];
public:
    TabTP() {cout<<"konstruktor bezparametrowy"<<endl;};
    explicit TabTP(Typ & w);
    virtual Typ & operator [] (int);
    void print()
    {
        for(int i = 0; i < n; i++)
        {
            cout<<tablica[i]<<" ";
        }
    }
};

template <typename Typ, int n>
TabTP<Typ, n>::TabTP(Typ & w)
{
    cout<<"konstruktor"<<endl;
    for(int i = 0; i < n; i++)
    {
        tablica[i] = w;
    }
}
template <typename Typ, int n>
Typ & TabTP<Typ, n>::operator [](int i )
{
    if(i < 0 || i > n) {cerr << "Blad"; exit(1);}
    return tablica[i];
}





#endif // SZABLON_H
