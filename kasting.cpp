#include <bits/stdc++.h>
using namespace std;

int main() {
    int type;
    cin >> type;

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    
    if (type == 2) {
        cout << min({a, b, c});
    } else {
        cout << max(0, a + b + c - 2 * n);
    }
    
    
    return 0;
}