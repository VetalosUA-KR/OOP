#ifndef STOS_H
#define STOS_H

#include <iostream>

using namespace std;

template<typename T>
class StosTP
{
    struct Node
    {
        T dane;
        Node *next;
        Node(T d,Node *n = nullptr)
        {
            dane = d;
            next = n;
        }
    };

    int ilosc;
    Node *top;

public:

    StosTP();
    void operator+(const T &d);
    T& operator[] (int index);
    T operator--();
    T operator--(int a);
    void usun();
    friend ostream& operator<<(ostream& out,const T &d);
    void print() const;

};

template<typename T>
StosTP<T>::StosTP()
{
    this->top = nullptr;
    this->ilosc = 0;
}

template<typename T>
void StosTP<T>::operator+(const T &d)
{
    ///1 sposób
    /*Node * newNode = new Node(d,top);
    this->top = newNode;*/

    ///2 sposób
    Node *newNode = new Node(d);
    newNode->next = top;
    top = newNode;
    this->ilosc++;
}

template<typename T>
T& StosTP<T>::operator[](int index)
{
    if(index < 0)
    {
        //cerr << "Index is < 0";
        throw logic_error("Index is < 0 ");
        exit(-1);
    }
    else
    {
        Node *it = top;
        int i = 0;
        while(it != nullptr)
        {
            if(index == i)
            {
               return it->dane;
            }
            it = it->next;
            i++;
        }
    }
}

template<typename T>
T StosTP<T>::operator--(int a)
{
    if(top)
    {
        Node * tmp = top;
        while(tmp->next->next)
        {
            tmp = tmp->next;
        }
        delete tmp->next;
        tmp->next = nullptr;
    }
}

template<typename T>
T StosTP<T>::operator--()
{
    if(top != nullptr)
    {
        Node *killer = top;

        T rezult = killer->dane;

        top = top->next;

        delete killer;

        return rezult;
    }
    else
    {
        cout<<"Stos is empty "<<endl;
        return 0;
    }


}

template<typename T>
void StosTP<T>::print() const
{
    Node *it = top;

    while(it != nullptr)
    {
        cout<<it->dane<<" ";
        it = it->next;
    }
}


#endif // STOS_H
