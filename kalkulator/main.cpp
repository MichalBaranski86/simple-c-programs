#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

float l1,l2;
char wybor;
int main()
{
     while(wybor!=5)


     {


    cout << "Podaj pierwsza liczbe" << endl;
    cin>>l1;
    cout<<"Podaj druga liczbe"<<endl;
    cin>>l2;
    cout<<"Kalkulator mega"<<endl;
    cout<<"--------------------";
    cout<<"Wybierz dzialanie "<<endl;

    cout<<"1.Dodawanie"<<endl;
    cout<<"2.Odejmowanie"<<endl;
    cout<<"3.Mnozenie"<<endl;
    cout<<"4.Dzielenie"<<endl;
    cout<<"5.Koniec programu"<<endl;
    cout<<"Wybierz";
    cout<<endl;
    wybor=getch();

    switch(wybor)
{


    case '1':

    cout<<"Dodawanie"<<endl<<l1+l2<<endl;

    break;

    case '2':

    cout<<"Odejmowanie"<<endl<<l1-l2<<endl;
     break;

    case '3':
    cout<<"Mnozenie"<<endl<<l1*l2<<endl;

     break;
    case '4':

     cout<<"Dzielenie"<<endl<<l1/l2<<endl;
     break;
    case '5':
        exit(0);

    default: cout<<"Nie ma takiej opcji";
}
    getchar(); getchar();
    system("cls");

}
}
