#include <bits/stdc++.h>
using namespace std;

int main() {
    int north, east, south, west, k, x = 0, y = 0, steps = 0;
    cin >> north >> east >> south >> west >> k;

    while (true) {
        for (int i = 0; i < north; i++) {
            y++;
            steps++;
            if (abs(x) == k || abs(y) == k) {
                cout << steps << endl;
                return 0;
            }
        }
        for (int i = 0; i < east; i++) {
            x++;
            steps++;
            if (abs(x) == k || abs(y) == k) {
                cout << steps << endl;
                return 0;
            }
        }
        for (int i = 0; i < south; i++) {
            y--;
            steps++;
            if (abs(x) == k || abs(y) == k) {
                cout << steps << endl;
                return 0;
            }
        }
        for (int i = 0; i < west; i++) {
            x--;
            steps++;
            if (abs(x) == k || abs(y) == k) {
                cout << steps << endl;
                return 0;
            }   
        }
    }
    
}