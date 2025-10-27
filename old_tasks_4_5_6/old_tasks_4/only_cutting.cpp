#include <iostream>

using namespace std;

int main()
{
    int n, m;
    long long antwort = 0;
    cin >> n >> m;

    while (n > 0 && m > 0) {
        antwort += max(n, m) / min(n, m);
        if (n > m) {
            n = n % m;
        } else {
            m = m % n;
        }
    }

    cout << antwort;
}   