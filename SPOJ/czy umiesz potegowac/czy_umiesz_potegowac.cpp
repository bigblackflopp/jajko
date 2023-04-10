#include <iostream>

using namespace std;

unsigned int a, b, ile, resztaa, resztab, wynik;

int main()
{

    cin>> ile;
    if (ile<=10&&ile>=1)
    {
        wynik=0;
        cin >> a;
        cin >> b;

        resztaa=(a%10);
        resztab=(b%10);
        
        wynik=resztaa*resztab

        for (int i=1; i<resztab; i++)
        {
            wynik = wynik*resztab
        }
        
        cout << wynik;

    }


    return 0;
}