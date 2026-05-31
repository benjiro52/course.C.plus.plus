#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k, ant = 0;
    cin >> k;

    while (k % 10 == 0 && k > 0) k /= 10;
    while (k > 0) {
        if (k % 10 == 0) ant++;
        k /= 10;
    }
    cout << ant;
} 