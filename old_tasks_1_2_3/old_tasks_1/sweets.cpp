#include <iostream>

using namespace std;

int main()
{
    int a, b, c, antwort, a2, b2, c2;
    cin>>a>>b>>c;

    a2 = a - (a - 1);
    b2 = b - (b - 1);
    c2 = c - (c - 1);

    if (a == 0) {
        antwort = 0;
        cout<<antwort;
        return 0;
    }
    if (b == 0) {
        antwort = 1;
        cout<<antwort;
        return 0;
    }
    if (c == 0) {
        antwort = 2;
        cout<<antwort;
        return 0;
    }

    if (a == 1 || b == 1 || c == 1) {
        antwort = (a + b + c) - (a - a2) - (b - b2) - (c - c2);
        cout<<antwort;
        return 0;
    }
    else {
        antwort = (a - a2) + (b - b2) + (c - c2) + 1;
        cout<<antwort;
        return 0;
    }
}