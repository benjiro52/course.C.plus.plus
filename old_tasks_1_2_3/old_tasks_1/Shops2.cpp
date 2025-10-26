#include <iostream>

using namespace std;

int main()
{
    int a, b, c, antwort;
    cin>>a>>b>>c;   

    if (c == 0) {
        antwort = a + b;
        cout<<antwort;
        return 0;
    }
    if (c != 0) {
        antwort = (a - c) + (b - c) + c;
        cout<<antwort;
        return 0;
    }
}