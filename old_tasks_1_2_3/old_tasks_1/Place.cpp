#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n, m, t, k = 0;
    cin >> n >> m >> t;

    While(t > 0 && n > 0 && m > 0) {
        t -= (n - 2) * 2 + m * 2;
        n -= 2, m -= 2;
        k ++;
    }

    if (t == 0) {
        cout << k;
    }else {
        cout << --k;
    }

    
    return 0;

}