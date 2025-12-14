#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long ant = (m - 1) % n + 1;
    
    cout << ant;
    return 0;
}