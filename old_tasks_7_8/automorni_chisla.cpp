#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        int a = i * i;

        int b = i;
        int c = 1;

        while (b > 0) {
            c *= 10;
            b /= 10;
        }
        
        if (a % c == i) {
            cout << i << " " << a << " " << endl;
        }
    }
    
    return 0;
}
