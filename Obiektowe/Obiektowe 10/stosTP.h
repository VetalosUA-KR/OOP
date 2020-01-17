#ifndef STOSTP_H_INCLUDED
#define STOSTP_H_INCLUDED
using namespace std;

template <typename T>
class StackTP
{
    struct Node //klasa gdzie wszytskie skladowe sa publiczne
    {
        T value;
        Node * next;

        Node(const T & v, Node * n) : value(v), next(n) {} //lista inicjalizacyjna
    };

    Node * top;

public:
    StackTP();
    void operator+(const T & v); //push
    void drukuj() const;
    T operator--();
    void usun();
    T& operator[](int i);
  ~StackTP();





};


template <typename T>
StackTP<T>::StackTP()
{
    top = nullptr;
}

template <typename T>
void StackTP<T>::operator+(const T& v)
{
    Node * nowy = new Node(v, top);
    top = nowy;
}

template <typename T>
void StackTP<T>::drukuj() const
{
    Node * temp = top;

    while(temp != nullptr)
    {
        cout << temp -> value << endl;
        temp = temp -> next;
    }
}

template <typename T>
T StackTP<T>::operator--()
{
    if(top != nullptr)
    {
        Node * temp = top;
        top = top -> next;
        T value = temp -> value;
        delete temp;
        return value;
    }
    cerr << "Pusty stos" << endl;
    return 0;
}

template <typename T>
void StackTP<T>::usun()
{
    while(top)
    {
        --(*this);
    }
}

template <typename T>
T& StackTP<T>::operator[](int i)
{
    Node * temp = top;

    for(int j = 0; j < i; j++)
    {
      temp = temp -> next;
    }

    return temp -> value;
}

template <typename T>
StackTP<T>::~StackTP()
{
    (*this).usun();
}

#endif // STOSTP_H_INCLUDED
