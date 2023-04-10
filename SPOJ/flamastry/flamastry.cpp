#include <iostream>
#include <string>

using namespace std;

string wyraz;

int ile;

int main()
{
    cin >> ile;

    for (int j=0; j<ile; j++)
    {
    int a=2;
    int b=0;
    cin >> wyraz;
    int dlugosc=wyraz.length();
    if (dlugosc>200) return 0;
    else {
    for (int i=0; i<dlugosc; i++)
    {
        if (wyraz[a-2]==wyraz[a-1])
        {
            a++;
            b++;
        }
        else if (wyraz[a-2]!=wyraz[a-1])
        {
            if (b==0)
            {
                b=0;
                cout << wyraz[a-2];
                a++;
            }

            if (b==1)
            {
                b=0;
                cout << wyraz[a-3];
                cout << wyraz[a-2];
                a++;
            }
            if (b>=2)
            {
                cout << wyraz[a-b];
                cout << b+1;
                a++;
                b=0;
            }
        }
    }
    cout << endl;
    }
}
return 0;
}