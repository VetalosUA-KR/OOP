#include "Zwierze.h"
#include <cstdlib>
#include <ctime>


int main()
{
    srand(time(0));

    int n;
    cout<<"n = ";
    cin>>n;
    Zwierze** zoo = new Zwierze*[n];
    for(int i = 0; i < n; i++)
    {
        int nr = rand() % 4;
        switch (nr)
        {
        case 0:
            zoo[i] = new Pies;
            break;
        case 1:
            zoo[i] = new Kot;
            break;
        case 2:
            zoo[i] = new Swinia;
            break;
        case 3:
            zoo[i] = new Wrobel;
            break;
        }
    }

    for(int i = 0; i < n; i++)
    {
        zoo[i]->dajGlos();
        delete zoo[i];
    }

    delete [] zoo;


    return 0;
}
