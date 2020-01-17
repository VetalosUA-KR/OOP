#ifndef AB_H_INCLUDED
#define AB_H_INCLUDED
#include <iostream>
using namespace std;

class A //klasa macierzysta
{
    int n;
    bool * tab;

public:
    A(int n = 10);
    A(const A& a);
    virtual ~A();
    A& operator=(const A& a);
    virtual void drukuj() const; //pozwala na przedefiniowanie metody w klasie potomnej
};

class B : public A //dziedziczenie po klasie A
{
    float x;

public:
    B(int n = 3, float x = 0.0);
    B(const B& b);
    ~B();
    B& operator=(const B& b);
    void drukuj() const;
};

#endif // AB_H_INCLUDED
