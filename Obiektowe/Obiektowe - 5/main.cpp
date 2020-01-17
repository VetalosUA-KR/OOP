#include"test.h"
int main()
{
    Test t1;
    Test t2(6);
    cout << t1 << endl;
    cout << t2 << endl;

    {
        Test t = t2; //konstruktor kopiujacy
        cout << "kopia: " << t << endl;
    }

    cout << "t2: " << t2 << endl;

    {
        Test t(100);
        t = t2; //operator przypisanie

        cout << "kopia t2: " << t2 << endl;
    }

    cout << "t2: " << t2 << endl;


    return 0;
}
