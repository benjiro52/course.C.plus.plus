#include <iostream>

using namespace std;

int main()
{
    short s, e;
    cin >> s >> e;

    if (e > s) {
        cout << e - s;
        return 0;
    }
    else {
        cout << 12 - s + e;
    }
}