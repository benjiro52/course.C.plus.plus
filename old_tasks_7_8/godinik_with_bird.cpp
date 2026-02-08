#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;

    int ant = 0;
    for (int i = start + 1; i <= end - 1; ++i) {
        int min = i % 60;
        if (min == 30) {
            ant += 1;           
        } else if (min == 0) {
            int hour = (i / 60) % 12; 
            if (hour == 0) {
                hour = 12;
            }
            ant += hour;
        }
    }

    cout << ant;
    return 0;
}