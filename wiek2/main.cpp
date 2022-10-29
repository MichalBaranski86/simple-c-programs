#include <iostream>

using namespace std;

int wiek;
int main()
{
    cout << "Podaj wiek" << endl;
    cin>>wiek;

    if(wiek<18)
    {


        cout<<"Jestes niepelnoletni i nie mozesz kandydowac na prezydenta";
    }
    else if((wiek>=18)&&(wiek <=35))
    {
        cout<<"Jestes pelnoletni,lecz nie mozesz kandydowac";
    }
    else
    {
        cout<<"Mozesz kandydowac na prezydenta";
    }
    return 0;
}
