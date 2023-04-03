#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>



using namespace std;

float x,y;

char wybor;

int main()
{
    cout << "Podaj pierwsza liczbe: \n";
    cin >> x;
    cout << "Podaj druga liczbe: \n";
    cin >> y;

for(;;)
{
    cout << endl;
    cout << "MENEU \n";
    cout << "------------------ \n";
    cout <<"1.Dodawanie \n"; 
    cout << "2.Odejmowanie \n";
    cout << "3.Mnożenie \n";
    cout << "4.Dzielenie \n";
    cout << "5. Koniec programu \n";




    cout << endl;
    wybor=getch();

    switch(wybor)
    {
        case '1':
        {
            cout << "Suma = "<< x+y;
        }
        break;

        case '2':
        {
            cout << "Roznica = "<< x-y;
        }
        break;
        case '3':
        {
            cout << "Iloczyn = "<< x*y;
        }
        break;
        case '4':
        {
            if (y==0) cout << "Nie dzielimy przez zero. Debilu.";
            else cout << "Iloraz = "<< x/y;
        }
        break;
        case '5':
        {
            exit(0);
        }
        break;

        default: cout << "Nie ma takiej opcji w menu! Dalnie jeden. Cwelasie, kurde ten";
    }
    getchar();getchar();
    system("cls");
}
    return 0;
}