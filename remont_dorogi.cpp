#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, n;
    cin >> l >> n;

    vector<int> road(n);
    for (int i = 0; i < n; i++) {
        cin >> road[i];
    }

    int ant = 0;
    int i = 0;

    while (i < n) {
        if (road[i] == 1) {
            ant++;
            i += l;
        } else {
            i++;
        }
    }
    
    cout << ant;
    return 0;
}