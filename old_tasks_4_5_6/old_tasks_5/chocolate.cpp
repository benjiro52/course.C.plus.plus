#include <iostream>

using namespace std;

int main() {
    long long n, m, x, y;
    cin >> n >> m >> x >> y;

    long long total_squares = n * m;

    if (x + y == total_squares && (x % n == 0 || x % m == 0 || y % n == 0 || y % m == 0)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}