#include <iostream>
#include <math.h>
using namespace std;
int ile, tab[10000], t=24*60*60, N, M;
float pud=0, k=0;
int main()
{
    cin>>ile;
    for (int i=1; i<=ile; i++)
    {
        cin>>N>>M;
        for (int j=0; j<N; j++)
        {
            cin>>tab[j];
            k+=t/tab[j];
            pud=k/M;
        }
        cout<<ceil(pud)<<endl;
        k=0;
    }
    return 0;
}
