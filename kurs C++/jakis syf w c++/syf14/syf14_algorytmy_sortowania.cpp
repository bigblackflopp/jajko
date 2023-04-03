#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int ile;
clock_t start, stop;
double czas;

void bubblesort(int *tab, int n)
{
    for (int i=1; i<n; i++)
    {
        for (int j=n-1; j>=1; j--)
            {
                if (tab[j]>tab[j-1])
                    {
                        int bufor;
                        bufor=tab[j-1];
                        tab[j-1]=tab[j];
                        tab[j]=bufor;
                    }
            }
    }

}

int main()
{
    cout << "Ile liczb w tablicy?";
    cin >> ile;

    int *tablica;
    tablica = new int [ile];

    srand(time(NULL));
    for (int i =0; i<ile; i++)
{
    tablica[i]= rand()%100000+1;
}

cout << "Start bubble sortu, czekaj..."<< endl;

start=clock();

bubblesort(tablica,ile);

stop = clock();

czas = (double)(stop-start)/ CLOCKS_PER_SEC;

cout << "Czas bubble sortu to: "<< czas<< " sekund"<<endl;
cout << "Po sortowaniu: "<< endl;


for (int i =0; i<ile; i++)
{
    cout <<tablica[i]<< " ";
}

    delete [] tablica;

return 0;

}