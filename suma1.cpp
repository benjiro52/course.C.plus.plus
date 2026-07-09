#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> vec(N + 1);

    vec[0] = 1;

    for (int i = 1; i <= N; i += 2) {
        for (int j = i; j <= N; j++) {
            vec[j] += vec[j - i];
        }
    }

    cout << vec[N];

    return 0;
}