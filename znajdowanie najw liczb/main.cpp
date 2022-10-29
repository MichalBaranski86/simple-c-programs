#include <iostream>

using namespace std;

int a,b,c,m;
int main()
{
    cout << "podaj 3 liczby po spacji" << endl; // 2 3 3
    cin>>a>>b>>c;
/*
    if((a>=b)&&(a>=c))
        cout<<"Najwieksza liczba to "<<a;
    else if((b>=a)&&(b>=c))
        cout<<"Najwieksza liczba to "<<b;
    else if((c>=b)&&(c>=a))
        cout<<"Najwieksza liczba to "<<c;
*/

    m=a;
    if(b>m)m=b;
    if (c>m) m=c;
    cout<<"Najwieksza liczba to \n"<<m;

return 0;
}
