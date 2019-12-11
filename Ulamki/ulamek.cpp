#include "ulamek.h"
#include <cmath>
#include <iostream>

using namespace std;

/*

int d = nwd(x.licznik, x.mianownik);
 x.licznik /= d;
 x.mianownik /= d;
 return x;

*/

int Ulamek::nwd()
{
    int a = abs(l);
    int b = abs(m);
  while(a != b)
  {
      if(a > b)
      {
          a = a-b;
      }
      else
      {
          b = b-a;
      }
  }
  return a;
}


void Ulamek::skroc()
{
    int NWD = nwd();
    l = l / NWD;
    m = m / NWD;
}

///funkcja (nie jest metoda klassa)
ostream& operator<<(ostream& os, const Ulamek& U)
{
    os<<'['<<U.l<<'/'<<U.m<<']';
    return os;
}

istream& operator>>(istream& is, Ulamek& U)
{
    cout<<"l = "; is>>U.l;
    cout<<"m = "; is>>U.m;
    return is;
}

/// ulamek + ulamek
Ulamek Ulamek::operator+(const Ulamek& U) const
{
    cout<<"uk+ul"<<endl;
    return Ulamek(this->l*U.m + this->m*U.l, this->m * U.m);
}

Ulamek Ulamek::operator*(const Ulamek& U) const
{
    return Ulamek(l*U.l, m*U.m);
}

Ulamek operator+(int x, const Ulamek& U)
{
    return U + x;
}

Ulamek Ulamek::operator-(const Ulamek& U) const
{

    return * this + (-U);
}

/// ulamek + liczba
Ulamek Ulamek::operator+(int x) const
{
    return *this + Ulamek(x);
}

Ulamek Ulamek::operator-() const
{
    return Ulamek(-this->l, this->m);
}
