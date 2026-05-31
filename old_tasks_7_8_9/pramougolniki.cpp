#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if ((A == C && B + D == A) ||
        (A == D && B + C == A) ||
        (B == C && A + D == B) ||
        (B == D && A + C == B)) {

        cout << "SQUARE";
    }
    else if (A == C || A == D || B == C || B == D) {
        cout << "RECTANGLE";
    }
    else {
        cout << ":(";
    }

    return 0;
}