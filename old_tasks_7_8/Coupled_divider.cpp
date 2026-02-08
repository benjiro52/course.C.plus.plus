#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ant = 1;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            long long a = i;
            long long b = n / i;

            if ((n - a) % a == 0){
                ant = max(ant, a);
            } 
            if ((n - b) % b == 0 && b < n) {
                ant = max(ant, b);
            }
        }
    }

    cout << ant;
}