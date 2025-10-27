#include <iostream>
using namespace std;

int main() {
    long long s;
    cin >> s;

    for (long long p = 2; p * 2 <= s; p++) {
        int j = 1;
        for (long long d = 2; d * d <= p; d++) {
            if (p % d == 0) {
                j = 0;
                break;
            }
        }
        if (j) {
            long long x = s - p;
            if (x > 0 && x % p == 0) {
                cout << x << endl;
            }
        }
    }
    return 0;
}