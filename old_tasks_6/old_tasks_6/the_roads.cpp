#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long a = 1, b = 2, c = n - 3;
    long long min_sum = a * a + b * b + c * c;

    for (long long a = 1; a <= n - 3; a++) {
        for (long long b = a + 1; b <= n - a - 2; b++) {
            long long c = n - a - b;
            if (c <= b) {
                continue;
            }

            long long sum = a * a + b * b + c * c;
            if (sum < min_sum) {
                min_sum = sum;
                a = a;
                b = b;
                c = c;
            }
        }
    }
    cout << a << " " << b << " " << c;
    return 0;
}
