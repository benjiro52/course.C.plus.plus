#include <iostream>

using namespace std;

int main() 
{
    long long n, a, b, zero = 0;
    cin >> n >> a >> b;

    long long min_known = max(zero, a - b);

    long long max_known = min(a, n - b);

    cout << min_known << endl << max_known;

    return 0;
}