#include <iostream>

using namespace std;

int main() 
{
    long long n, sazhen, arshin, pyad, vershok;
    cin >> n;

    sazhen = n / (3 * 4 * 4);
    n %= (3 * 4 * 4);

    arshin = n / (4 * 4);
    n %= (4 * 4);

    pyad = n / 4;
    vershok = n % 4;

    cout << sazhen << " " << arshin << " " << pyad << " " << vershok;

    return 0;
}