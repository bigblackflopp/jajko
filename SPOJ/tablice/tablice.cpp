#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int ile;
    cin >> ile;

    for (int i=0; i<ile; i++)
    {
        int liczba;
        cin >> liczba;
        if (liczba<100)
        {
        int tablica[liczba];
        for (int j=0; j<liczba; j++)
        {
            int cyfra;
            cin >> cyfra;
            tablica[j]=cyfra;
        }
        for (int i=liczba-1;i>=0; i--)
        {
        cout<<tablica[i]<<" ";
        }
        }
    }
    return 0;
}