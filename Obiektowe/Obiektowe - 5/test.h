#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <iostream>

using namespace std;

class Test
{
    int n;
    int * tab;
public:
    Test(int n = 0);
    Test(const Test& T); //2. kontruktor kopiujacy
    virtual ~Test(); //1. destruktor
    friend ostream& operator<<(ostream& os, Test& T);
    Test& operator=(const Test& T);//3. operator przypisania
    //Regula trzech zapewnia stabilnosc obiektow
};


#endif // TEST_H_INCLUDED
