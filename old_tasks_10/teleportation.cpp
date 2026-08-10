#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long t = (N - 1 + 4) / 5; 

    if (t <= (N - 1) / 3) {
        cout << t;
    } else {
        cout << -1;
    }

    return 0;
}