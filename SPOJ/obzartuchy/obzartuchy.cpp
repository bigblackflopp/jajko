#include <iostream>
#include <math.h>
using namespace std;
float pud=0, k=0;
int tab[10000];
int main()
{  
    int ile;
    cin >> ile;
    for (int i=0; i<ile; i++)
    {
        int N=0, M=0;
        cin >>N>>M;
        for (int j=0; j<N; j++)
        {
            cin >> tab[j];
            k+=86400/tab[j];
            pud=k/M;
        }
        cout <<ceil(pud)<<endl;
        k=0;
    }
    return 0;
    }