#include <bits/stdc++.h>
using namespace std;

int main() {
    int w[4];
    cin >> w[0] >> w[1] >> w[2] >> w[3];
    
    for (int mask = 1; mask <= 14; mask++) {
        int left = 0, right = 0;
        for (int i = 0; i < 4; i++) {
            if (mask & (1 << i)) {
                left += w[i];
            } else {
                right += w[i];
            }
        }
        if (left == right) {
            for (int i = 0; i < 4; i++) {
                if (mask & (1 << i)) {
                    cout << w[i] << " ";
                }
            }
            cout << endl;
            for (int i = 0; i < 4; i++) {
                if (!(mask & (1 << i))) {
                    cout << w[i] << " ";
                }
            }
            return 0;
        }
    }
    
    cout << -1;
}