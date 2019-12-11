#include "ciag.h"

int main ()
{
    srand(time(0));

    //Ciag t1;
    Ciag t2(5,1,6);
    cout<<t2<<endl;
    Ciag t;
    cout<<t<<endl;
    t = t2;
    cout<<t<<endl;

    /*cout<<T1<<endl<<T2<<endl;
    ++T1; ++T2;
    cout << T1 << endl << T2 << endl;
    T2[2] = 100;
    T2.aktualizuj();
    cout<<T2<<endl;
    cout<<++(++(++T2))<<endl; //сделать дома*/
    /*cout<<"T2++"<<T2++<<endl;
    cout<<"T2"<<T2<<endl;*/


    return 0;
}








