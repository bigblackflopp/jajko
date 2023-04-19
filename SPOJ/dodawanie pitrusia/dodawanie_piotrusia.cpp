#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int ile, numer, ilerazy, i;
bool dlugos;

int palindrom (int number, bool dlugosc)
{
    dlugosc=dlugos;
    int bufor=number;
    int odwnumber=0;
    int odwnumber2;
    if (dlugosc==true)
    {
        return number;
    }
    else
    {
        while(bufor!=0)
        {
            odwnumber=odwnumber * 10 + bufor%10;
            bufor/=10;
        }
        if (odwnumber==number)
        {
            return number;
        }
        else
        {
        int calosc=number+odwnumber;
        int bufor2=calosc;
        while(bufor2!=0)
        {
            odwnumber2=odwnumber2*10+bufor2%10;
            bufor2/=10;
        }
        
        if (odwnumber2==calosc)
        {
            return odwnumber2;
        }
        else
        {
            i++;
            return palindrom(calosc, dlugosc);
        }
    }
}
}
int main()
{
    cin >> ile;
    if (ile<=80)
    {
        for (int j=0; j<ile; j++)
        {
            i=0;
            cin>>numer;
            if (numer<=80)
            {
            string check;
            check=to_string(numer);
            if (check.length()==1)
            {
                dlugos=true;
            }
            else
            {
                dlugos=false;
            }
            cout << palindrom(numer, dlugos)<<' '<<i<<endl;
            }
        }
    }
    return 0;
}