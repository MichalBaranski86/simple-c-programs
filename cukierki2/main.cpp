#include <iostream>

using namespace std;

int uczniowie,cukierki,x,y;

int main()
{
    cout << "Podaj liczbe uczniow w klasie" << endl;
    cin>>uczniowie;
    cout<<"Podaj liczbe cukierkow ,ktore kupila mama"<<endl;
    cin>>cukierki;

    x=cukierki/(uczniowie-1);
    cout<<"Dla kazdego ucznia przypadlo po "<<x<<" cukierkow"<<endl;
    y=cukierki - x*(uczniowie-1);
    cout<<"Jasiowi zostalo "<<y<<" cukierkow"<<endl;
    return 0;
}
