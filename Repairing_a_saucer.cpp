#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (n == k) {
        cout << "0";
        return 0;
    }

    int parts = n / k;
    int ant = (parts - 1) * n * 2;
    
    cout << ant;
}