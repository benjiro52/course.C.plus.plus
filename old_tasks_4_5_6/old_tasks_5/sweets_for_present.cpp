#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, sum = 0, children = 0;
    cin >> n;

    int sweets[5000]; 

    for (int i = 0; i < n; i++) {
        cin >> sweets[i];
    }
    int mx = sweets[0]; 

    for (int i = 1; i < n; i++) {
        if (sweets[i] > mx) {
            mx = sweets[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (sweets[i] < mx) { 
            sum += mx - sweets[i];
            children++;
        }
    }

    cout << sum << " " << children;

    return 0;
}
