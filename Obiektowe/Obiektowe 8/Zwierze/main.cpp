#include "zwierze.h"
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    cout << "Liczba zwierzat: ";
    int n;
    cin >> n;

    Zwierze** zoo = new Zwierze*[n]; //tablica wskaznikow

    for(int i = 0; i < n; ++i)
    {
        int nr = rand() % 7;

        switch(nr)
        {
        case 0 :
            zoo[i] = new Kot();
            break;

        case 1 :
            zoo[i] = new Pies();
            break;

        case 2 :
            zoo[i] = new Waz();
            break;

        case 3 :
            zoo[i] = new Swinia();
            break;

        case 4 :
            zoo[i] = new Kon();
            break;

        case 5 :
            zoo[i] = new Krowa();
            break;

        case 6 :
            zoo[i] = new Owca();
            break;
        }
    }

    for(int i = 0; i < n; ++i)
    {
        zoo[i] -> dajGlos();
        delete zoo[i];
    }

    delete [] zoo;


    return 0;
}
