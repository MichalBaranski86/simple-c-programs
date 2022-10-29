#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba,strzal,ile_prob=0;
int main()
{
    cout<<"Witaj pomyslalem liczbe z zakresu od 1-100"<<endl;
    srand(time(NULL));
    liczba = rand()%100+1;


    while(strzal!=liczba)
    {
        ile_prob++;
        cout<<"Zgadnij jaka:"<<"to Twoja"<<ile_prob<<"proba";
        cin>>strzal;

        if(strzal==liczba)

            cout<<"Udalo sie wygrywasz w"<<ile_prob<<"probie"<<endl;

        else if(strzal<liczba)
            cout<<"Za mala:"<<endl;

        else if(strzal>liczba)
            cout<<"Za duza";


    }

    system("pause");
    return 0;
}
