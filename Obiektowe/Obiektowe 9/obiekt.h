#ifndef OBIEKT_H_INCLUDED
#define OBIEKT_H_INCLUDED
#include <iostream>
using namespace std;

class Obiekt ///klasa abstrakcyjna posiada przynajmniej jedna metode czyto wirtualna, nie mozna tworzyc obiektow tej klasy
{
public:
    virtual ~Obiekt() {}
    virtual void drukuj(ostream& os) = 0; //metoda czysto wirtualna
};

class A : public Obiekt
{
public:
    ~A() {cout << "~A\n";}
    void drukuj(ostream& os) {os << 'A';}
};

class B : public Obiekt
{
public:
    ~B() {cout << "~B\n";}
    void drukuj(ostream& os) {os << 'B';}
};

class C : public Obiekt
{
public:
    ~C() {cout << "~C\n";}
    void drukuj(ostream& os) {os << 'C';}
};

#endif // OBIEKT_H_INCLUDED
