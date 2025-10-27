#include <iostream>

using namespace std;

int main() 
{
    int n, ant = 0;
    cin >> n;

    int marks[35];
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    int mn = 0, mx = 0;
    for (int i = 1; i < n; i++) {
        if (marks[i] < marks[mn]) {
            mn = i;
        }
        if (marks[i] >= marks[mx]) { 
            mx = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i != mn && i != mx) {
            ant += marks[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (i == mn || i == mx) {
            cout << "(" << marks[i] << ")";
        } else {
            cout << marks[i];
        }
        if (i != n - 1) {
            cout << " ";
        }
    }

    cout << " = " << ant;

    return 0;
}