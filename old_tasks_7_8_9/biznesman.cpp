#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> sellers(n);
    vector<int> buyers(m);

    for (int i = 0; i < n; i++) {
        cin >> sellers[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> buyers[i];
    }

    sort(sellers.begin(), sellers.end());
    sort(buyers.begin(), buyers.end());

    int deals = min(n, m);
    long long ant = 0;

    for (int i = 0; i < deals; i++) {
        int buyer = buyers[m - 1 - i];
        int seller = sellers[i];
        if (buyer > seller) {
            ant += buyer - seller;
        }
    }
    
    cout << ant;
    return 0;
}