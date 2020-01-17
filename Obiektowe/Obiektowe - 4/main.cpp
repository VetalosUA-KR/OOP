#include "ciag.h"

int main()
{
    srand(time(0));

    Ciag T1;
    Ciag T2(6,1,5);
    cout << T1 << endl << T2 << endl;
    ++T1;
    ++T2;
    cout << T1 << endl << T2 << endl;
    T2[2] = 10;
    cout << T2 <<endl;
    cout << "T2++ " << T2++ << endl;
    (T2++)++;
    cout << "T2 " << T2 << endl;
    T2.zaktualizujZakres();
    ++T2;
    ++T2;
    cout << "Z nowym zakresem " << T2 << endl;
    return 0;
}
