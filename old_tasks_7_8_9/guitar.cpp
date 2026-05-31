#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s[3][1000];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < n; ++j)
            cin >> s[i][j];

    for (int t = 0; t < n; ++t) {
        int notes[3], cnt = 0;
        for (int i = 0; i < 3; ++i)
            if (s[i][t] > 0)
                notes[cnt++] = s[i][t];
        if (cnt > 1) {
            int mn = notes[0], mx = notes[0];
            for (int i = 1; i < cnt; ++i) {
                if (notes[i] < mn) mn = notes[i];
                if (notes[i] > mx) mx = notes[i];
            }
            if (mx - mn > 3) {
                cout << "No\n" << t + 1 << endl;
                return 0;
            }
        }
    }
    // 
    cout << "Yes";
    return 0;
}
