#ifndef TEST_H
#define TEST_H

#include <iostream>
using namespace std;

class Test
{
    int n;
    bool * tab;
public:
    Test(int n = 0);
    Test(const Test& T);// kostruktor koliujacy
    virtual ~Test();
    friend ostream& operator<<(ostream & os, const Test& T);

    Test& operator = (const Test& T);//operator pezypisania
};


#endif // TEST_H






