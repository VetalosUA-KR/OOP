#include <iostream>

using namespace std;

class Ryba
{
private:
    static int ilosc;
    char * typ;
    int zanurenie;
public:
    Ryba(char * t, int z);
    Ryba(Ryba & r);
    Ryba();
    virtual ~Ryba();

    friend ostream& operator<<(ostream& os, const Ryba & r);

    friend istream& operator>>(istream& is, Ryba & r);

    Ryba & operator = (const Ryba & r);
    friend Ryba operator+(int x, Ryba& r);

    void zmienZanurenie(int z);
};
