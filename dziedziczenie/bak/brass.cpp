#include<iostream>
#include "brass.h"

using namespace std;

/// форматирование
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

///Методы Brass
Brass::Brass(const string& s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt)
{
    if(amt < 0)
        cout<<"Negative deposit not allowed; "
            <<"deposit is cancelled.\n";       // отрицательный не допускается
    else
        balance += amt;
}

void Brass::Withdraw(double amt)
{
    // установка формата ###.##
    format initialState = setFormat();
    precis prec = cout.precision(2);
    if(amt < 0)
        cout<<"Withdrawal amount must be positive; "
            <<"withdrawal canceled.\n";     //снимаемая сумма должны быть положительной
    else if(amt <= balance)
        balance -= amt;
    else
        cout<<"Withdrawal amount of $"<<amt<<" exceeds your balance.\n"
        <<"Withdrawal canceled.\n"; //снимаемая сумма превышает текущий баланс"
    restore(initialState, prec);
}

double Brass::Balance() const
{
    return balance;
}

void Brass::ViewAcct() const
{
    //Установка формата ###.##
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout<<"Client: "<<fullName<<endl;
    cout<<"Account Number: "<<acctNum<<endl;
    cout<<"Balance: $"<<balance<<endl;
    restore(initialState, prec);
}

///Методы BrassPlus
BrassPluss::BrassPluss(const string& s, long an, double bal, double ml, double r):Brass(s, an, bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPluss::BrassPluss(const Brass& ba, double ml, double r):Brass(ba)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPluss::ViewAcct() const
{
    //Установка формата ###.##
    format initialState = setFormat();
    precis prec = cout.precision(2);
    Brass::ViewAcct();
    cout<<"Maximum loan: $"<<maxLoan<<endl;
    cout<<"Owed to bank: $"<<owesBank<<endl;
    cout.precision(3);
    cout<<"Loan Rate: "<<100*rate<<"%\n";
    restore(initialState, prec);
}

void BrassPluss::Withdraw(double amt)
{
    //Установка формата ###.##
    format initialState = setFormat();
    precis prec = cout.precision(2);
    double bal = Balance();
    if(amt <= bal)
        Brass::Withdraw(amt);
    else if(amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout<<"Bank advance: $"<<advance<<endl;
        cout<<"Finance change: $"<<advance * rate<<endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
    {
        cout<<"Credit limit exceeded. Transaction cancelled.\n";
        restore(initialState, prec);
    }
}

format setFormat()
{
    //Установка формата ###.##
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}
void restore(format f, precis p)
{
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}











