#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long a, b, n, days = 0;
    cin >> a >> b >> n;

    while (n > 0) {
        n = n - b;

        if (days % a == 0) {
            n = n - 1;
        }

        if (n >= 0) {
            days ++;
        }
    } 
    cout << days;

    return 0;
}
