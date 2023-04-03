#include <iostream>

using namespace std;

string imie; int liczba;

int main()
{
  cout << "podaj imie \n";
  cin >> imie;
  cout << "podaj liczbe calkowita \n";
  cin >> liczba;

  for (int i=1; i<=liczba; i++)
  {
    cout << i <<". "<< imie<< endl;
  }
  return 0;
}