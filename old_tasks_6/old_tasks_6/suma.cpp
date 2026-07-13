#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> ant(n + 1, 0);
    ant[0] = 1;

    for (int i = 1; i <= n; i += 2) {
        for (int j = i; j <= n; j++) {
            ant[j] += ant[j - i];
        }
    }
    
    cout << ant[n];
    
    return 0;
}