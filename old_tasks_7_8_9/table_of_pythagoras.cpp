#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, d;
    cin >> n >> d;
    
    long long a = 0;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if ((i * j) % 10 == d) {
                a++;
            }
        }
    }
    
    long long ant = (n / 10) * (n / 10) * a;
    
    long long rem = n % 10;
    for (long long i = 1; i <= n; i++) {
        for (long long j = (n / 10) * 10 + 1; j <= n; j++) {
            if ((i * j) % 10 == d) {
                ant++;
            }
        }
    }   

    cout << ant;
}