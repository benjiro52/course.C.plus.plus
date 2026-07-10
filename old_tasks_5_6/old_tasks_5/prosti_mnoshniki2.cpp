#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    int first = 0;

    for (long long i = 2; i * i <= n; i++) {
        int a = 0; 
        while (n % i == 0) {
            a++;
            n /= i;
        }
        if (a > 0) {
            if (first) {
                cout << "*";
            }
            cout << i;
            if (a > 1) {
                cout << "^" << a;
            }
            first = 1;
        }
    }

    if (n > 1) {
        if (first) {
            cout << "*";
        }
        cout << n;
    }

    cout << endl;
    return 0;
}