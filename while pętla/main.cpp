#include <iostream>

using namespace std;

int populacja=1;int godzin;

int main()
{
    while(populacja<=1000000000)
    {

        godzin++;
        populacja=populacja*2;

        cout<<"Minelo godzin:"<<godzin<<endl;
        cout<<"Liczba bakterii:"<<populacja<<endl;
    }
    return 0;
}
