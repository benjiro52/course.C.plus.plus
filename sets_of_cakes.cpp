#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    
    long long y = (2 * b - a);
    long long x = (2 * a - b);

    if (y % 3 != 0 || x % 3 != 0 || y < 0 || x < 0) {
        cout << -1;
    } else {
        cout << x / 3 << " " << y / 3;
    }
    return 0;
}                       