#include <iostream>
#include "ryba.h"
#include <cstring>

using namespace std;

int main()
{
    Ryba r("karas", 15);
    Ryba r2("as", 15);

    char * v = new char[3];
    ///v = "12";
    strcpy(v, "12");

    char * v2 = new char[3];
    ///v2 = "34";
    strcpy(v2, "34");

    char * rez = new char[strlen(v)+strlen(v2)+1];
    cout<<rez<<endl;
    //strcat(v, v2);
    strcat(rez, v);
    strcat(rez, v2);
    cout<<"v = "<<v<<endl;
    cout<<"v2 = "<<v2<<endl;

    cout<<"rez = "<<rez;

    /*char* slovo1  =  "Proger-";
    char* slovo2  =  "tester-";
    char* slovo3  =  "student-";
    char* slovo = new char[strlen(slovo1) + strlen(slovo2) + strlen(slovo3) + 1];

    cout<<slovo<<endl;
    strcat(slovo, slovo1);
    strcat(slovo, slovo2);
    strcat(slovo, slovo3);
    printf(slovo);
    cout<<endl<<slovo[0]<<endl;
    cout<<slovo[1]<<endl;
    cout<<slovo[2]<<endl;
    cout<<slovo[3]<<endl;
    cout<<slovo[4]<<endl;*/
    return 0;
}
