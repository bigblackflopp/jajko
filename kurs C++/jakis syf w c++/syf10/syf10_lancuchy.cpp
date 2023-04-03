#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    {
    string imie;

    cout << "Podaj imie \n";
    cin >> imie;

    int dlugosc=imie.length();
    cout << dlugosc<<endl;

    if (imie[dlugosc-1]=='a')
    cout << "Wydaje mi sie ze jestes kobieta \n";

    else cout << "Wydaje mi sie ze jestes chlopem \n";
    }
    //odwracanie napisu

    string wyraz;

    cout << "Podaj wyraz do odwrocenia" <<endl;
    cin >> wyraz;

    int dlugosc2=wyraz.length();

    for(int i=dlugosc2-1; i>=0; i--)
    {
        cout << wyraz[i];
    }

    return 0;

}