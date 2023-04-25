#include <iostream>

using namespace std;

int ile, a, b;

int nwd (int c, int d)
{
	int pom;
    
	while(d!=0)
    {
		pom = d;
		d = c%d;
		c = pom;	
	}
	
    return c;
}

int main()
{
    cin >>ile;

    for (int i=0; i<ile; i++)
    {
        cin>>a;
        cin>>b;
        cout << nwd(a, b)<< endl;
    }
    return 0;
}