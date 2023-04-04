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
                if (tab[j]<tab[j-1])
                    {
                        int bufor;
                        bufor=tab[j-1];
                        tab[j-1]=tab[j];
                        tab[j]=bufor;
                    }
            }
    }

}

void quicksort(int *tablica, int lewy, int prawy)
{
    int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while(tablica[i]<v) i++;
        while(tablica[j]>v) j--;
        if(i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++;
            j--;
        }
    }
    while(i<=j);
    if(j>lewy) quicksort(tablica,lewy, j);
    if(i<prawy) quicksort(tablica, i, prawy);
}


int main()
{
    cout << "Ile liczb w tablicy?";
    cin >> ile;

    int *tablica;
    tablica = new int [ile];

    int *tablica2;
    tablica2=new int [ile];

    srand(time(NULL));
    for (int i =0; i<ile; i++)
{
    tablica[i]= rand()%100000+1;
}

//przepisanie tablicy do tab2

for (int i=0; i<ile; i++)
{
    tablica2[i]=tablica[i];
}

cout << "Start bubble sortu, czekaj..."<< endl;

start=clock();

quicksort(tablica2, 0, ile-1);

stop = clock();

czas = (double)(stop-start)/ CLOCKS_PER_SEC;

cout << "Czas quick sortu to: "<< czas<< " sekund"<<endl;
cout << "Po sortowaniu: "<< endl;


for (int i =0; i<ile; i++)
{
    cout <<tablica2[i]<< " ";
}

    delete [] tablica;
    delete [] tablica2;

return 0;

}