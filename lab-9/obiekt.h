#ifndef OBIENT_H
#define OBIENT_H

#include <iostream>

using namespace std;

class Obiekt
{
public:
    virtual ~Obiekt() {}
    virtual void drukuj(ostream& os) = 0;
};

class A :public Obiekt
{
public:
    ~A() {cout<<" ~A\n";}
    void drukuj(ostream& os) {os<<" A";}
};

class B : public Obiekt
{
public:
    ~B() {cout<<" ~B\n";}
    void drukuj(ostream& os) {os<<" B";}
};

class C : public Obiekt
{
public:
    ~C() {cout<<" ~C\n";}
    void drukuj(ostream& os) {cout<<" C";}
};






#endif // OBIENT_H
