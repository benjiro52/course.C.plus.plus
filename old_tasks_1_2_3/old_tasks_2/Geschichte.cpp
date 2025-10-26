#include <iostream>

using namespace std;

int main()
{
    long long  home;
    cin >> home;

    if (home == 0) {
        cout << "0";
        return 0;
    }

    cout << home * 2 - 1;

    return 0;
}