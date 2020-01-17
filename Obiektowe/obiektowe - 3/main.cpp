#include "ulamek.h"

int main()
{
    Ulamek u1(1,4);
    Ulamek u2(2,10);

    cout << u1 << " + " << u2 << " = " << u1 + u2 << endl;
    cout << "Ulamek przeciwny do " << u1 << " : " << -u1 << endl;
    cout << u1 << " - " << u2 << " = " << u1 - u2 << endl;
    cout << u1 << " + " << 5 << " = " << u1 + 5 << endl;
    cout << 5 << " + " << u1 << " = " << 5 + u1 << endl;
    cout << "Ulamek odwrotny do: " << u2 << " : " << !u2 << endl;
    cout << u1 << " * " << u2 << " = " << u1 * u2 << endl;
    cout << u1 << " * " << 5 << " = " << u1 * 5 << endl;
    cout << 5 << " * " << u1 << " = " << 5 * u1 << endl;
    cout << u1 << " / " << u2 << " = " << u1 / u2 << endl;
    cout << u1 << " / " << 3 << " = " << u1 / 3 << endl;
    cout << 3 << " / " << u1 << " = " << 3 / u1 << endl;



    return 0;
}
