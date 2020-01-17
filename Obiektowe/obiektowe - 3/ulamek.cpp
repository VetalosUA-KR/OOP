#include "ulamek.h"
int Ulamek::nwd()
{
    int a = abs(l);
    int b = abs(m);

    while(a != b)
       if(a > b)
           a -= b;
       else
           b -= a;
    return a;
}

void Ulamek::skroc()
{
    int NWD = nwd();
    l /= NWD;
    m /= NWD;
}

ostream& operator<<(ostream& os, const Ulamek& U)
{
    os << U.l << '/' << U.m;
    return os;
}

istream& operator>>(istream& is, Ulamek& U)
{
    cout << "l= "; is >> U.l;
    cout << "m= "; is >> U.m;
    return is;
}

Ulamek Ulamek::operator+(const Ulamek& U) const
{
    return Ulamek(this -> l * U.m + U.l * this -> m, this -> m * U.m);
}

Ulamek Ulamek::operator+(int x) const
{
    return *this + Ulamek(x);
}

Ulamek operator+(int x, const Ulamek& U)
{
    return U + x;
}

Ulamek Ulamek::operator-(const Ulamek& U) const
{
   return *this + (-U);
}

Ulamek Ulamek::operator-() const
{
    return Ulamek(- this -> l ,this -> m);
}

Ulamek Ulamek::operator!()
{
    return Ulamek(m,l);
}

Ulamek Ulamek::operator*(const Ulamek& U) const
{
    return Ulamek(this -> l * U.l , this -> m * U.m);
}

Ulamek Ulamek::operator*(int x) const
{
    return *this * Ulamek(x);
}

Ulamek operator*(int x, const Ulamek& U)
{
    return U * x;
}

Ulamek Ulamek::operator/(const Ulamek& U) const
{
    return Ulamek( this -> l * U.m, this -> m * U.l);
}

Ulamek operator/(int x, const Ulamek& U)
{
    return U * !Ulamek(x);
}


Ulamek Ulamek::operator/(int x) const
{
    return *this * !Ulamek(x);
}



