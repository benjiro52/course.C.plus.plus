#include <iostream>

using namespace std;

int main() 
{
    int k, p, s;
    cin >> k >> p >> s;

    int k2 = k * 100;
    int s2 = s * 100;

    int ant = k2 * (100 + p) / 100;

    cout << s2 / ant;

    return 0;
}
