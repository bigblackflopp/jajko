#include <iostream>

using namespace std;

int ile, gra, grb, wynik;

int NWD(int a, int b)
{
	int pom;

  	while(b!=0)
	{
        pom = b;
    	b = a%b;
    	a = pom;  
  	}
    return a;
}

int main()
{

    cin>> ile;
    if (ile<=20&&ile>=1)
    {
    for (int i=0; i<ile; i++)
    {
        cin>>gra>>grb;
        if (10<=gra<=30 && 10<=grb<=30)
        {
        cout <<gra/NWD(gra, grb)*grb<<endl;
        }
    }


    return 0;
}
}