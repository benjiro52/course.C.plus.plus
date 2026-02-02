#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, k;
    cin >> w >> h >> k;
    int ant = 0;

    for (int a = 1; a <= w; ++a) {
        if (w % a != 0) {
            continue;
        }
        for (int b = 1; b <= h; ++b) {
            if (h % b != 0) {
                continue;
            }
            int cnt = (w / a) * (h / b);
            if (cnt == k) {
                ant++;
            }
        }
    }
    if (w != h) {
        for (int a = 1; a <= h; ++a) {
            if (h % a != 0){
                continue;
            } 
            for (int b = 1; b <= w; ++b) {
                if (w % b != 0) {
                    continue;
                }
                if (a == b) {
                    continue;
                } 
                int cnt = (h / a) * (w / b);
                if (cnt == k) {
                    ant++;
                }
            }
        }
    }
    cout << ant;
}