#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    long long n, p, t, mn, mx;
    cin >> n >> p >> t;

    mn = max(0ll, p + t - n);
    mx = min(p, t);

    cout << mn << " " << mx;
    return 0;
}
