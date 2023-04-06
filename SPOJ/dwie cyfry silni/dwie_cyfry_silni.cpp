#include <iostream>
#include <string>

using namespace std;

unsigned int ile; 
int liczba;
int main()

{
    cin >> ile;
    if (ile >=1 && ile<=30)
    {
        for (int i=0; i<ile; i++)
        {
            cin >> liczba;
    if(liczba >=0 && liczba<=9)
        {
    switch (liczba)
    {
        case 0:
        cout << "0 1 "<< endl;
        break;

        case 1:
        cout << "0 1 "<<endl;
        break;

        case 2:
        cout << "0 2 "<<endl;
        break;

        case 3:
        cout << "0 6 "<<endl;
        break;

        case 4:
        cout << "2 4 "<<endl;
        break;

        case 5:
        cout << "2 0 "<<endl;
        break;

        case 6:
        cout << "2 0 "<<endl;
        break;

        case 7:
        cout << "4 0 "<<endl;
        break;

        case 8:
        cout << "2 0 "<<endl;
        break;

        case 9:
        cout << "8 0 "<<endl;
        break;
    }
    }
    if (liczba < 0)
    {
        cout << "0 1 "<<endl;
    }

    if (liczba>9)
    {
        cout << "0 0 "<<endl;
    }
}
return 0;
}
}
