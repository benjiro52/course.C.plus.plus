#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int n = 0;

    if (a > b) {
        for (int i = b; i <= a; i++) {
            int check = sqrt(i);
            if (check * check == i) {
                cout << check * check << " ";
                n ++;
            }
        }
    } else {
        for (int i = a; i <= b; i++) {
            int check = sqrt(i);
            if (check * check == i) {
                cout << check * check << " ";
                n ++;
            }
        }
    }


    if (n == 0) {
        cout << "Absent";
    }

    return 0;
}