#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<int> gain(n);
    for (int i = 0; i < n; i++) {
        cin >> gain[i];
    }

    int altitude = 0;
    int maxAltitude = 0; 

    for (int i = 0; i < n; i++) {
        altitude += gain[i];
        if (altitude > maxAltitude) {
            maxAltitude = altitude;
        }
    }

    cout << maxAltitude << endl;

    return 0;
}