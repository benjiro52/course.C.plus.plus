#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    int k;
    cin >> a >> b >> c >> k;

    long long ans = 0;

    if (k == 0) ans = max(a-2,0LL) * max(b-2,0LL) * max(c-2,0LL);          // inside
    else if (k == 1) ans = 2 * (max(a-2,0LL)*max(b-2,0LL) + max(a-2,0LL)*max(c-2,0LL) + max(b-2,0LL)*max(c-2,0LL)); // faces
    else if (k == 2) ans = 4 * (max(a-2,0LL) + max(b-2,0LL) + max(c-2,0LL)); // edges
    else if (k == 3) ans = 8; // corners
    else ans = 0; // impossible

    cout << ans << endl;
}
