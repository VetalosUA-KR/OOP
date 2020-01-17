#ifndef ZWIERZE_H_INCLUDED
#define ZWIERZE_H_INCLUDED
#include <iostream>

using namespace std;

class Zwierze //klasa abstrakcyjna
{
public:
    virtual ~Zwierze() {}
    virtual void dajGlos() const = 0; //metoda czysto wirtualna
};

class Kot : public Zwierze
{
public:
    void dajGlos() const
    {
        cout << "Miau \n";
    }
};

class Pies : public Zwierze
{
public:
    void dajGlos() const
    {
        cout << "Hau \n";
    }
};

class Waz : public Zwierze
{
public:
    void dajGlos() const
    {
        cout << "Sssssss \n";
    }
};

class Swinia : public Zwierze
{
public:
    void dajGlos() const
    {
        cout << "Kwiiiii \n";
    }
};

class Kon : public Zwierze
{
public:
    void dajGlos() const
    {
        cout << "Ihaha \n";
    }
};

class Krowa : public Zwierze
{
public:
    void dajGlos() const
    {
        cout << "Muuuuu \n";
    }
};

class Owca : public Zwierze
{
public:
    void dajGlos() const
    {
        cout << "Beeee \n";
    }
};

#endif // ZWIERZE_H_INCLUDED
