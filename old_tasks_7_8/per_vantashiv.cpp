#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w, light = 0, medium = 0, heavy = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> w;
        if (w >= 100) {
            heavy++;
        } else if (w >= 50) {
            medium++;
        } else {
            light++;
        }
    }
    
    int carts = heavy;

    int pair = min(light, medium);
    carts += pair;
    light -= pair;
    medium -= pair;

    carts += medium;
    carts += (light + 1) / 2;

    cout << carts;

    return 0;
}