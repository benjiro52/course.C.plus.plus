#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int maxHeight = 0;
    int ant = 0;

    for (int i = 0; i < N; i++) {
        int h;
        cin >> h;

        if (h > maxHeight) {
            maxHeight = h;
            ant++;
        }
    }

    cout << ant;

    return 0;
}