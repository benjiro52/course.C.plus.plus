#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    long long a2 = n / a;
    long long b2 = n / b;
    long long c2 = n / c;

    long long lcm_ab = lcm(a, b);
    long long lcm_bc = lcm(b, c);
    long long lcm_ac = lcm(a, c);

    long long ab = n / lcm_ab;
    long long bc = n / lcm_bc;
    long long ac = n / lcm_ac;

    long long lcm_abc = lcm(lcm_ab, c);
    long long abc = n / lcm_abc;

    long long ant = a2 + b2 + c2 - ab - bc - ac + abc;

    cout << ant;

    return 0;
}