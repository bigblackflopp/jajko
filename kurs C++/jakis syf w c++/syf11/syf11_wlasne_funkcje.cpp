#include <iostream>

using namespace std;

float metry;

float ile_cali(float m) //naglowek funkcji liczacej metry na cale
{
    float cale=m*39.37;  //
                         // to mozna zapisac po prostu return m*39.37
    return cale;         //
}

float jardy (float x)
{
    return x*1.0936;
}

void mile(float m)
{
    cout <<m<< " metrow na mile to: "<<  m*0.0006213;
}

int main()
{
    
    cout << "Podaj ile metrow: ";
    cin >> metry;

    cout << metry << " metrow na cale to: " << ile_cali(metry) << endl;
    cout << metry << " metrow na jardy to: " << jardy(metry) << endl;
    mile(metry);
    return 0;
}

