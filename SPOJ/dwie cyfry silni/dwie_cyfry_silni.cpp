#include <iostream>
#include <string>

using namespace std;

unsigned int ile, liczba; 

int main()

{
    cin >> ile;
    if (ile >=1 && ile<=30)
    {
    for (int i=0; i<ile; i++)
        {
            int wyniksilni=1;
            string gotowy;
            cin >> liczba; 
            if (liczba<1000000000)
            {
             for(int j=1;j<=liczba;j++)
            {    
                wyniksilni=wyniksilni*j;    
            }
            gotowy=to_string(wyniksilni);
            cout << gotowy[gotowy.size()-2]<<" ";
            cout << gotowy[gotowy.size()-1]<<endl;

            }
            else return 0;
        }
    return 0;
    }
    else return 0;
}