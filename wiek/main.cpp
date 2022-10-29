#include <iostream>

using namespace std;

int wiek;
int main()
{
    cout<<"ile masz lat"<<endl;
    cin>>wiek;

    if (wiek>=18)
    {

    cout<<"Jestes pelnoletni";

    }
    else
    {
        cout<<"Jestes niepelnoletni";

    }
    if(wiek>=35)
    {
        cout<<"Mozesz kandydowac na prezydenta";
    }
    else
    {
        cout<<"Nie mozesz kandydowac";
    }
    return 0;
}
