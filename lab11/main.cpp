#include "stos.h"

int main()
{
    StosTP<char> znaki;

    znaki + 's';
    znaki + 'q';
    znaki + 'e';

    znaki.print();

    znaki--;
    cout<<endl;
    znaki.print();


    return 0;
}
