#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int first_max = max(a[0], a[1]);
    int second_max = min(a[0], a[1]);
    cout << second_max << " ";

    for (int i = 2; i < n; i++) {
        if (a[i] > first_max) {
            second_max = first_max;
            first_max = a[i];
        } else if (a[i] > second_max) {
            second_max = a[i];
        }
        cout << second_max << " ";
    }

    return 0;
}