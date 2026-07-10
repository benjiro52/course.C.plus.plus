#include <iostream>

using namespace std;

int main() {
    int n, ant = 0;
    cin >> n;

    int j[100] = {0};

    for (int i = 0; i != n; i++) {
        int a;
        cin >> a;

        int a_bin = 0;
        while (a > 0) {
            a_bin += a % 2;
            a /= 2;
        }
        j[a_bin]++;
    }

    for (int i = 0; i < 100; i++) {
        if (j[i] > ant) ant = j[i];
        //cout << j[i] << endl;
    }

    cout << ant;
}