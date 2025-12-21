#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> T(N + 1, 0);
    T[0] = 1;

    if (N >= 2) T[2] = 1;
    if (N >= 3) T[3] = 1;
    
    for (int i = 4; i <= N; ++i) {
        T[i] = T[i - 2] + T[i - 3];
    }
    cout << T[N] << endl;

    return 0;
}