#include <iostream>
using namespace std;

int main() {
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    int ant = 0;
    if (n <= k) {
        ant = n * a;
    } else {
        ant = k * a + (n - k) * b;
    }

    cout << ant;
    return 0;
}