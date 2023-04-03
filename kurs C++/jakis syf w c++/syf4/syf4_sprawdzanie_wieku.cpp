#include <iostream>

using namespace std;

int wiek;

int main()
{
 cout<< "Ile masz lat? \n";
 cin >> wiek;
 if (wiek<18)
 {
    cout<< "Jestes niepelnoletni i nie mozesz zostac prezydentem \n";
 }
 else if ((wiek>=18) && (wiek<35))
 {
    cout << "Jestes pelnoletni ale nie mozesz zostac prezydentem";
 }
 else
 {
    cout << "Jestes pelnoletni i mozesz zostac prezydentem";
 }
 return 0;
}