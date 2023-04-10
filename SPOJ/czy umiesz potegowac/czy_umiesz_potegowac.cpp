#include <iostream>

using namespace std;

int a, b, ile;

int main()
{
    int tab[]={0,0,0,0, 1,1,1,1,  6,2,4,8,  1,3,9,7, 6,4,6,4, 5,5,5,5, 6,6,6,6, 1,7,9,3,
 6,8,4,2,  1,9,1,9};
    cin>> ile;
    if (ile<=10&&ile>=1)
    {
        for (int i=0; i<ile; i++)
        {
        cin >> a>>b;
        if (a<0 || b<0) return 0;
        if (b==0) cout << "1"<<endl;
        else
        {
        cout <<tab[4*(a%10) + b%4] << endl;
        }
        }
    }
    return 0;
}