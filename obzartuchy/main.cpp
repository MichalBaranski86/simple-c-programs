#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int testy = 0;
    cin >> testy;
    while (testy--)
    {
        int ile_las = 0, wpud = 0, wynik = 0;
        cin >> ile_las >> wpud;
        for (int i =0; i < ile_las;i++)
        {
            int czas = 0;
            cin >> czas;
            wynik = wynik + (86400 / czas);
        }
        cout << ceil(float(wynik) / float(wpud)) << "\n";
    }
    return 0;
}
