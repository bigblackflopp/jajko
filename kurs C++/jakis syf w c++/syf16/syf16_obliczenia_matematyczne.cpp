#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int popx=3, R, D, odl1, odl2;

long long int x;

int main()
{

    //cout << "Ile razy dzisiaj zalales herbate?"<<endl;

    //cout << "Gracz 1: ";
    //cin>> R;
    //cout << "Gracz 2: ";
    //cin >> D;

    //odl1 = abs(popx-R);
    //odl2 = abs(popx-D);

    //if (odl1<odl2) cout << "Gracz 1 wygral. Łał, a ty dobry jestes."<<endl;
    //if (odl2<odl1) cout << "Gracz 2 wygral. Łał, a ty dobry jestes."<<endl;
    //else cout << "REMIS";//
    //getchar();
    //return 0;

    x=pow(2,32)-1;
    cout << setprecision(20);
    cout << x<<endl;

    return 0;
}