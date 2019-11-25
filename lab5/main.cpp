#include <iostream>
#include "test.h"

using namespace std;

int main()
{
    Test t1;
    Test t2(15);
    //cout<<t1<<endl;
    //cout<<t2<<endl;

    //Test t = t2;
    //Test t(t2);
    {
        Test t(100);
        t = t2;
        cout<<t2<<endl;
    }
    cout<<t2<<endl;

    return 0;
}







