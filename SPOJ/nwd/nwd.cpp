#include <iostream>

using namespace std;

int ile, a, b;

int nwd (int a, int b)
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
    cin >>ile;

    for (int i=0; i<ile; i++)
    {
        cin>>a>>b;
        if (0<=a<=1000000 && 0<=b<=1000000)
        {
        cout << nwd(a, b);
        }
    }
    return 0;
}