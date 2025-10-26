#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;

    long long res = a + n;

    if (a > 0 && res <= 0) {
        res --;
    } else if (a < 0 && res >= 0) res++;
    cout << res;
    
}