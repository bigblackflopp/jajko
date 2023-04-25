#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s="Reverse";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}