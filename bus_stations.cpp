#include <iostream>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    int a = n % k;

    cout << min(a, k - a);
    return 0;
}
