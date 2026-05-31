#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int horiz = 0, vert = 0;

    for (int i = 0; i < n; i++) {
        int len = 0;
        for (int j = 0; j < n; j++) {
            if (vec[i][j] == '-') {
                len++;
            } else {
                if (len >= 2) horiz++;
                len = 0;
            }
        }
        if (len >= 2) horiz++;
    }

    for (int j = 0; j < n; j++) {
        int len = 0;
        for (int i = 0; i < n; i++) {
            if (vec[i][j] == '-') {
                len++;
            } else {
                if (len >= 2) vert++;
                len = 0;
            }
        }
        if (len >= 2) vert++;
    }

    cout << horiz << " " << vert;
    return 0;
}