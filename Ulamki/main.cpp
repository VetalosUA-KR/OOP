#include <iostream>
#include "ulamek.h"

using namespace std;

int main()
{

    Ulamek u1(20,10);
    Ulamek u2(30,15);

    //cout<<u1<<" + "<<u2<<" = "<< u1+u2<<endl;
    //cout<<u1<<" * "<<u2<<" = "<< u1*u2<<endl;
    cout<<u1<<" + "<<3<<" = "<< u1+3<<endl;

    cout<<3<<" + "<<u1<<" = "<< 3+u1<<endl;

   // cout<<u1<<" - "<<u2<<" = "<< u1-u2<<endl;
    //cout<<"Ulamek przeciwny do "<<u1<<" : "<<-u1<<endl;

   // cout<<"//////"<<endl;


    //cout<<u2 .nwd();

    return 0;
}
