#include <iostream>
#include <fstream>
using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imie: \n"; cin >> imie;
    cout << "Podaj nazwisko: \n"; cin >> nazwisko;
    cout << "Podaj numer telefonu: \n"; cin >> nr_tel;

    fstream tekst;
    tekst.open("wizytowka.txt", ios::out | ios::app);
    
    tekst<<imie<<endl;
    tekst<<nazwisko<<endl;
    tekst<<nr_tel<<endl;
    
    tekst.close();

    return 0;
}