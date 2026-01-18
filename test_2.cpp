#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        int sq = i * i;

        int t = i;
        int p = 1;


        while (t > 0) {
            p *= 10;
            t /= 10;
        }

        if (sq % p == i) {
            cout << i << " " << sq << " ";
        }
    }

    return 0;
}
