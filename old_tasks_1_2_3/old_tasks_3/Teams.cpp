#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, x;
    cin >> n >> x;

    long long mates[n];

    for (int i = 0; i < n; i++) {
        cin >> mates[i]; 
    }
    
    long long a = mates[0];
    long long team = 0;
    
    for (int i = 1; i < n; i ++) {
        if (mates[i] - a > x) {
            team ++;
            a = mates[i];
        }

    }
    cout << team + 1;

    
    return 0;
}
