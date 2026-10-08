#include <iostream>
using namespace std;

int main() {
    long long N, M, x, y;
    cin >> N >> M;
    cin >> x >> y;

    long long rRight = N - x;
    long long rDown  = y - 1;
    long long rLeft  = x - 1;
    long long rUp    = M - y;
    long long r = min(min(rRight, rDown), min(rLeft, rUp));
    long long segment;

    if (r == rRight) {
        segment = 1;
    }
    else if (r == rDown) {
        segment = 2; 
    }
    else if (r == rLeft) {
        segment = 3; 
    }
    else {
        segment = 4; 
    }

    long long s = 4 * r + segment;
    long long previous = 0;

    for (long long i = 1; i < s; i++) {
        previous += (i + 1) / 2;
    }
    long long currentLength = (s + 1) / 2;

    cout << previous + currentLength;

    return 0;
}