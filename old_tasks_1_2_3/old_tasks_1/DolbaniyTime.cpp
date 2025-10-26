#include <iostream>

using namespace std;

int main()
{
    int g, h, s, antwort, interpritation, anotherinterpritation;
    cin>>g>>h>>s;

    interpritation = (g * 3600) + (h * 60) + s + 1;
    
    cout << interpritation / 3600 % 24 << " " << interpritation / 60 % 60 << " " << interpritation % 60;
    
    return 0;
}