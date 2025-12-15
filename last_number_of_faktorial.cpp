#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
        while (fact % 10 == 0) {
            fact /= 10;
        } 
        fact %= 1000000; 
    }
    cout << fact % 10;
    return 0;
}