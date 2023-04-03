#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

using namespace std;
int x= 10;
int y= 10;
int owocx;
int owocy;
bool gameover;
enum edir {LEWO, PRAWO, GORA, DOL};
edir kierunek;
int wynik;
int dlOgon;
int ogonX[181], ogonY[181];

int def()
{
    gameover=0;
    owocx=rand()%19;
    owocy=rand()%19;
    wynik=0;
}

int rysuj()
{
    system("cls");
    ifstream mapa("mapa.txt");
    char znak[20][20];
    for (int i = 0; i < 20; i++)
    {
        string input;
        getline(mapa, input);
        for ( int j = 0; j < input.length(); j++)
        {
            znak[i][j] = input[j];
            if(i==x && j==y)
            {
                znak[i][j]='*';
            }

            if (i==owocx && j==owocy)
            {
                znak[i][j]='&';
            }
            for (int k=0; k<dlOgon; k++)
            {
                if (ogonX[k]== i && ogonY[k]==j)
                {

                    znak[i][j]='o';
                }

            }
        }
    }
        for(int m=0; m<20; m++)
        {
            for (int n=0; n<20; n++)
            {
                cout << znak[m][n];
            }
            cout << endl;
        }
        cout << endl;
        cout << "Wynik: "<< wynik<< endl;
}
int ruch()
{

    if (_kbhit())
{
    switch(_getch())
    {
    case 'a':

        kierunek= LEWO;

        break;

    case 'w':
        kierunek = GORA;
        break;

    case 's':
        kierunek = DOL;
        break;

    case 'd':
        kierunek = PRAWO;
        break;

    }

}
}
int logika()
{
    int prevX = ogonX[0];
    int prevY = ogonY[0];
    int prev2X, prev2Y;
    ogonX[0] = x;
    ogonY[0] = y;
    for (int i = 1; i < dlOgon; i++)
    {
        prev2X = ogonX[i];
        prev2Y = ogonY[i];
        ogonX[i] = prevX;
        ogonY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (kierunek)
    {
    case LEWO:
        y--;
        break;
    case PRAWO:
        y++;
        break;

    case GORA:
        x--;
        break;

    case DOL:
        x++;
        break;
    default:
        break;
    }
        if (x==owocx && y==owocy)
        {
            wynik=wynik+10;
            owocx=rand()%19;
            owocy=rand()%19;
            dlOgon++;
        }
        for (int i=0; i<dlOgon; i++)
            if (x==ogonX[i] && y== ogonY[i])
        {
            gameover=true;
        }

        if (x>18 || x<1 || y>18 || y<1)
        {
            gameover=true;
        }



    }


int main()
{
    def();
    while(true)
    {
    rysuj();
    ruch();
    logika();
    _sleep(80);

    if (gameover==true)
    {
        system ("cls");
            cout << "---------------------------------------- \n";
            cout << "KONIEC GRY. TWOJ WYNIK: "<< wynik<< endl;
            cout << "---------------------------------------- \n";
            _getch();
        return 0;
    }

}
}


