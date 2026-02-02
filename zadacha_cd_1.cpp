#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, k;
    cin >> w >> h >> k;

    int ant = 0;

    for (int r = 1; r <= k; r++) {
        if (k % r != 0) { 
            continue;
        }
        
        int c = k / r;

        if (w % c == 0 && h % r == 0) {
            ant++;
        }
    }
    
    cout << ant;
}
