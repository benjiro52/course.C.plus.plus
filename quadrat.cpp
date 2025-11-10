#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> a(n + 1, n); 

    a[0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            a[i] = min(a[i], a[i - j * j] + 1);
        }
    }
    cout << a[n];   
}