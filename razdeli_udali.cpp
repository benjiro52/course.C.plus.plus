#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    long long answer = 0;

    for (int i = 0; i < k; i++) {
        long long maximum = 0;

        for (int j = 0; j < n; j++) {
            long long number;
            cin >> number;

            if (number > maximum) {
                maximum = number;
            }
        }

        answer += maximum;
    }

    cout << answer;

    return 0;
}