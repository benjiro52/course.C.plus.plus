#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vec(N + 1, 0);

    for (int d = 1; d <= N; d++) {
        for (int j = d; j <= N; j += d) {
            vec[j]++;
        }
    }

    int number = 1;
    int mx = vec[1];

    for (int i = 2; i <= N; i++) {
        if (vec[i] > mx) {
            mx = vec[i];
            number = i;
        }
    }

    cout << number << endl;
    cout << mx << endl;

    return 0;
}