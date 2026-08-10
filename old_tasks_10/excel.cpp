#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    
    int d = b - a;
    
    for (int i = 0; i < n; i++) {
        cout << a + i * d << " ";
    }
    return 0;
}