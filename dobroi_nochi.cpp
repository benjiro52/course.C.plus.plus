#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m, n;
    cin >> h >> m >> n;

    int total = (h * 60 + m + n) % (24 * 60);

    cout << setfill('0') << setw(2) << total / 60 << ":" << setw(2) << total % 60;
}