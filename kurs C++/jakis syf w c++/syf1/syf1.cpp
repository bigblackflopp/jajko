#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout<<"Podaj swoj numer PIN: ";
    cin>> PIN;

    if(PIN=="6969")
    {
        cout << "Poprawny PIN";
    }
    else
    {
        cout << "Niepoprawny pin";
    }
    return 0;
}
