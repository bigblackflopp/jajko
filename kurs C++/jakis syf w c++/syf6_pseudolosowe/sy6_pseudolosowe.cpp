#include <iostream>
#include <cstd#lib>
#include <time.h>

using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Pomyslalem liczbe z zakresy 1 do 100 \n";
    srand(time(NULL));
    liczba=rand()%100+1;
    while(strzal!=liczba)
    {
        ile_prob++;
        cout << "Zgadnij jaka to liczba (to twoja "<<ile_prob<<" proba )\n" ;
        cin>> strzal;
        

        if(strzal==liczba)
        cout<< "Udalo sie. A ty dobry jestes. (jakby co to wygrales w "<<ile_prob<< " probie) \n";

        if (strzal<liczba)
        cout << "To za malo \n";

        else if (strzal>liczba)
        cout << "To za duzo \n";
        
    }

system("pause");
    return 0;
}

