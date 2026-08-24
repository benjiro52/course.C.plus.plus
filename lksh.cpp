#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;

    if (sum % 3 != 0) {
        cout << "NO SOLUTIONS";
        return 0;
    }

    int x = sum / 3;
    int answer = 0;

    if (a > x) answer += a - x;
    if (b > x) answer += b - x;
    if (c > x) answer += c - x;

    cout << answer;
    return 0;
}