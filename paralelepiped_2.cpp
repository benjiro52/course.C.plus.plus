#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    while (k--) {
        long long a, b, h;
        cin >> a >> b >> h;

        if (a == 1 || b == 1 || h == 1) {
           cout << "YES" << endl; 
        }
        else {
            cout << "NO";
        }
    }

    return 0;
}