#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, n, w;
    cin >> l >> n >> w;

    int freeSpace = l - n * w;

    if (freeSpace % (n + 1) == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}