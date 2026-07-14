#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int k = ceil(sqrt(a));
    bool found = false;

    while (k * k <= b) {
        cout << k * k << " ";
        found = true;
        k++;
    }

    if (!found) {
        cout << "Absent";
    }

    return 0;
}