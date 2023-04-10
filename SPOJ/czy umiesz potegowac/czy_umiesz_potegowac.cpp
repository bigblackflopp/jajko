#include <iostream>

using namespace std;

int a, b, ile, resztaa, resztab, wynik;

int main()
{

    cin>> ile;
    if (ile<=10&&ile>=1)
    {
        for (int i=0; i<ile; i++)
        {
        cin >> a;
        cin >> b;
        if (a<0 || b<0) return 0;
        resztaa=(a%10);
        resztab=(b%10);
        if (resztab==0) cout << "1"<<endl;
        else
        {
        wynik=resztaa;
        
        for (int j=1; j<resztab; j++)
        {
            wynik = wynik*resztaa;
        }
        
        cout << wynik%10<< endl;
    }
    }
    }
    return 0;
}