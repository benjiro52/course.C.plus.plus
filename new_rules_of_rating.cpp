#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> marks(N);
    for (int i = 0; i < N; ++i) {
        cin >> marks[i];
    }

    int min_val = marks[0], max_val = marks[0];
    int min_idx = 0, max_idx = 0;
    for (int i = 0; i < N; ++i) {
        if (marks[i] < min_val) {
            min_val = marks[i];
            min_idx = i;
        }
        if (marks[i] >= max_val) { 
            max_val = marks[i];
            max_idx = i;
        }
    }

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        if (i != min_idx && i != max_idx) {
            sum += marks[i];
        }
    }

    for (int i = 0; i < N; ++i) {
        if (i > 0) cout << " ";
        if (i == min_idx || i == max_idx) {
            cout << "(" << marks[i] << ")";
        } else {
            cout << marks[i];
        }
    }
    
    cout << " = " << sum;

    return 0;
}