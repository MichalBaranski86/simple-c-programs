#include <iostream>
#include <fstream>

using namespace std;

string imie,nazwisko;
int telefon;


int main()
{
    cout << "Podaj imie" ; cin>>imie;
    cout << "Podaj nazwisko" ;cin>>nazwisko;
    cout << "Podaj telefonu" ;cin>>telefon;

    fstream plik;
    plik.open("kokos.txt",ios::out);

    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<telefon<<endl;

    plik.close();
    return 0;
}
