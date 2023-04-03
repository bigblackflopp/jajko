#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

string temat, nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna[5];
string odpowiedz;
int punkty=0;

int main()
{
    int nr_linii=1;
    string linia;
    int nrpytania=0;

    fstream plik;
    plik.open("quiz.txt", ios::in);

    if (plik.good()== false)
    {
        cout << "Nie udalo otworzyc sie pliku, sprawdz czy wogole go masz. Dalniaku jeden";
        exit(0);
    }

    while (getline(plik, linia))
    {
        switch(nr_linii)
        {
            case 1: temat=linia; break;
            case 2: nick = linia; break;
            case 3: tresc[nrpytania] = linia; break;
            case 4: odpA[nrpytania]= linia; break;
            case 5: odpB[nrpytania]=linia; break;
            case 6: odpC[nrpytania]=linia; break;
            case 7: odpD[nrpytania]=linia; break;
            case 8: poprawna[nrpytania]=linia; break;
        }
        if(nr_linii==8) {nr_linii=2; nrpytania++;}
        nr_linii;
    nr_linii++;
    }
    plik.close();

    for(int i=0; i<=4; i++)
    {
        cout << endl<<tresc[i]<<endl;
        cout <<"A: "<< odpA[i]<< endl;
        cout <<"B: "<< odpB[i]<< endl;
        cout <<"C: "<< odpC[i]<< endl;
        cout <<"D: "<< odpD[i]<< endl;

        cout << "Twoja odpowiedz to: ";
        cin >> odpowiedz;

        transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);

        if (odpowiedz==poprawna[i])
        {
            cout << "Dobrze, dostajesz punkt. Farciarz."<< endl;
            punkty++;
        }
        else cout << "Podales zla odpowiedz, a ta poprawna to: "<< poprawna[i]<< ". Nastepnym razem strzelaj lepiej."<< endl;
    }

if(punkty==5)
{
    cout << "Wow, dostales maxa, czyli 5. Co jest.";
}

if (punkty-5==-5)
{
cout << "Deklu nic nie strzeliles. Powodzenia nastepnym razem";
}
else
{
cout<<"Koniec quizu. Zdobyte punkty: "<<punkty;
}
    return 0;

}