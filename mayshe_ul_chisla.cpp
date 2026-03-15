#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long step = 1;
    long long a = n;
    while (a > 0) {
        step *= 10;
        a /= 10;
    }

    long long ant = 0;
    long long now = n;
    while (now <= m) {
        ant++;
        now += step;
    } 
    
    cout << ant;
    return 0;
}