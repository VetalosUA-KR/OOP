#include "ciag.h"

int main ()
{
    srand(time(0));

    Ciag T1;
    Ciag T2(5,1,6);
    cout<<T1<<endl<<T2<<endl;
    ++T1; ++T2;
    cout << T1 << endl << T2 << endl;
    T2[2] = 100;
    T2.aktualizuj();
    cout<<T2<<endl;
    cout<<++(++(++T2))<<endl; //сделать дома
    /*cout<<"T2++"<<T2++<<endl;
    cout<<"T2"<<T2<<endl;*/


    return 0;
}








