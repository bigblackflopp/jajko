#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin>> haslo;

    if((login=="admin")&&(haslo=="kokodzambo"))
    {
    cout<< "Login i haslo poprawne";
    }
    else
    {
        cout<<"Bledny login lub haslo";
    }
}