#include <bits/stdc++.h>
using namespace std;

int main() {
    long long K;
    cin >> K;

    if (K == 1) {
        cout << 0;
        return 0;
    }

    queue<string> q;
    q.push("5");

    long long a = 2;

    while (!q.empty()) {
        string cur = q.front();
        q.pop();

        if (a == K) {
            cout << cur;
            return 0;
        }

        q.push(cur + "0");
        a++;

        if (a == K) {
            cout << cur + "0";
            return 0;
        }

        q.push(cur + "5");
        a++;

        if (a == K) {
            cout << cur + "5";
            return 0;
        }
    }

    return 0;
}