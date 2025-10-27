#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    int min_cost = n;

    for (int i = 0; i <= (n / a) + 1; i++) {
        for (int j = 0; j <= (n / c) + 1; j++) {
            int all_mb = i * a + j * c;
            if (all_mb >= n) {
                int cost = i * b + j * d;
                min_cost = min(min_cost, cost);
            }
        }
    }

    cout << min_cost;

    return 0;
}