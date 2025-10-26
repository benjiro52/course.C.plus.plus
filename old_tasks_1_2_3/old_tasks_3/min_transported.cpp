#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, v1, v2, t1, t2, ant = 0, i = 0;
    cin >> x >> v1 >> t1 >> v2 >> t2;

    int mx_t = max(t1,t2);
    int mx_v = max(v1,v2);

    if (x % mx_v == 0) {
        i = x / mx_v;
    } else {
        i = x / mx_v + 1; 
    }

    ant = mx_t * (i + 1);
    cout << ant;
    // cout << i;

    return 0;
}