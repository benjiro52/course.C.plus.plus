#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x = n;
    while (true) {
        long long t = x, a = 0;
        while (t > 0) {
            a++;
            t /= 10;
        }
        long long y = x / 10;
        long long moved = n;
        for (int i = 1; i < a; i++) moved *= 10;
        moved += y;
        if (moved == x * n) {
            cout << x;
            break;
        }
        x = x * 10 + n;
    }
    return 0;
}