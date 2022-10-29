#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>


using namespace std;

float x,y;
char wybor;

int main()
{


    for(;;)
    {


    cout << "Witaj w programie kalkulator :)" << endl;
    cout<<"Podaj pierwsza liczbe"<<endl;
    cin>>x;
    cout<<"Podaj druga liczbe"<<endl;
    cin>>y;

    cout<<"Menu kalkulatora"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Wybierz dzialanie"<<endl;
    cout<<"1 Dodawanie"<<endl;
    cout<<"2 Odejmowanie"<<endl;
    cout<<"3 Mnozenie"<<endl;
    cout<<"4 Dzielenie"<<endl;
    cout<<"5 Koniec programu"<<endl;


    cout<<endl;
    wybor=getch();

    switch(wybor)
    {
    case '1':
        cout<<"Suma"<<x+y<<endl;
    break;
    case '2':
        cout<<"Roznica"<<x-y<<endl;
    break;
    case '3':
        cout<<"Iloczyn"<<x*y<<endl;
    break;
    case '4':
        if(y==0)cout<<"Nie dzielimy przez 0"<<endl;
        else cout<<"Iloraz"<<x/y<<endl;
    break;


    case '5':
        exit(0);
    break;
    default: cout<<"Nie ma takiej opcji w menu"<<endl;

    }
    getchar();getchar();
    system("cls");

    return 0;

    }
}
