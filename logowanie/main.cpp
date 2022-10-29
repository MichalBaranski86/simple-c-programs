#include <iostream>

using namespace std;

string login,haslo;
int main()
{
    cout << "Podaj login" << endl;
    cin>>login;
    cout<<"Podaj haslo"<<endl;
    cin>>haslo;

    if ((login=="kokos")&&(haslo=="zapolice"))
    {
        cout<<"Poprawny login i haslo"<<endl;
    }
    if ((login=="kokos")&&(haslo!="zapolice"))
    {
        cout<<"Niepoprawne haslo ";
    }
    if ((login!="kokos")&&(haslo=="zapolice"))
    {
        cout<<"Niepoprawny login";
    }
    if ((login!="kokos")&&(haslo!="zapolice"))
    {
        cout<<"Niepoprawny login i haslo";


    return 0;
}
