#include <iostream>

using namespace std;

int potega(int p, int w)
{
    if(w==0) return 1; //przypadek podstawowy
    else return p*potega(p,w-1);
}

int p=3, w=5;
int wynik=1;

int main()
{
    cout << potega(3,4) << endl;

    while (w>0)
    {
        wynik = wynik*p;
        w--;
    }
    cout<<wynik;
    return 0;
}
