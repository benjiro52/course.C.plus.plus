#include <bits/stdc++.h>
using namespace std;

int main() {
    int H1, M1, H2, M2;
    if (!(cin >> H1 >> M1 >> H2 >> M2)) return 0;

    int start = H1 * 60 + M1;
    int endt  = H2 * 60 + M2;

    int ans = 0;
    for (int t = start + 1; t <= endt - 1; ++t) {
        int minute = t % 60;
        if (minute == 30) {
            ans += 1;           
        } else if (minute == 0) {
            int hour = (t / 60) % 12; 
            if (hour == 0) hour = 12;
            ans += hour;
        }
    }

    cout << ans << '\n';
    return 0;
}
