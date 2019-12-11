#ifndef ZWIERZE_H
#define ZWIERZE_H

#include<iostream>
using namespace std;

class Zwierze
{
public:
    virtual void dajGlos() const = 0;
    virtual ~Zwierze() {}
};



class Pies : public Zwierze
{
public:
    void dajGlos() const
    {
        cout<<"gaw"<<endl;
    }
};

class Kot : public Zwierze
{
    void dajGlos() const
    {
        cout<<"mau"<<endl;
    }
};

class Swinia : public Zwierze
{
    void dajGlos() const
    {
        cout<<"chru"<<endl;
    }
};

class Wrobel : public Zwierze
{
    void dajGlos() const
    {
        cout<<"kapitan dzek wrobel"<<endl;
    }
};


#endif // ZWIERZE_H
