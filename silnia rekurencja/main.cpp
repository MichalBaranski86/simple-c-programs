#include <iostream>

using namespace std;

long int silnia(int n)
{
    if (n==0) return 1; //przypadek podstawowy wynik 0 silnia to 1
    else return n*silnia(n-1);
}

int main()
{
    cout << "Hello world!" << endl;
    cout<<silnia(6)<<endl;
    return 0;
}
