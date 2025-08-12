#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    if (C + D <= E) {
        cout << 1;
    } else if (B + C <= E) {
        cout << 2;
    } else if (A + B <= E) {
        cout << 3;
    } else {
        cout << 4;
    }

    return 0;
}
