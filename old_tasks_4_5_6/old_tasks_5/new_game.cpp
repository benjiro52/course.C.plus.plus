#include <iostream>

using namespace std;

int main()
{
    int l, r, ant = 0;
    cin >> l >> r;

    while (l <= r) {
        ant++;
        long long x = ant + 1;

        if (l % x == 0) {
            l += x;
        } else {
            l += x - (l % x);
        }
    }

    cout << ant;
    
    return 0;
}