#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string napis = "Ala ma psa.";
    string nowynapis = napis.substr(4,7);
    cout << nowynapis;

   return 0;
}

