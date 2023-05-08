#include <iostream>

using namespace std;

int main()
{
    int ile_zest, kier, kroki, x, y;
    cin>>ile_zest;
    for (int i=0; i<ile_zest; i++)
    {
        x=0;
        y=0;
        int ile_wsk;
        cin>>ile_wsk;
        for (int j=0; j<ile_wsk; j++)
        {
            kier=0;
            cin>>kier>>kroki;
            switch(kier)
            {
                case 0:
                y=y+kroki;
                break;

                case 1:
                y=y-kroki;
                break;

                case 2:
                x=x-kroki;
                break;

                case 3:
                x=x+kroki;
                break;
            }
        }
        if (y>0)
        {
            cout << "0 "<< y<<endl;
            if (x>0) cout << "3 "<< x<< endl;
            if (x<0) cout << "2 "<< x*(-1)<< endl;
            else;
        }
        if (y<0)
        {
            cout << "1 "<< y*(-1)<<endl;
            if (x>0) cout << "3 "<< x<< endl;
            if (x<0) cout << "2 "<< x*(-1)<< endl;
            else;
        }
        if (x==0&&y==0) cout<<"studnia"<<endl;
    }
    return 0;
}