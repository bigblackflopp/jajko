#include <iostream>

using namespace std;

float oceny[5]; float suma=0, srednia;

int main()
{
    for (int i=0; i<5; i++)
    {
        cout << "podaj "<<i+1<<" ocene smieciolaku: \n";
        cin >> oceny[i];
        suma=suma+oceny[i];
    
    }
    srednia=suma/5;
    cout << "\n srednia rowna sie "<< srednia;

    return 0;
}