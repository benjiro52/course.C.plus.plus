#include <iostream>
using namespace std;

int main() {
    string p, s;
    cin >> p >> s;
    for (int i = 0; i <= s.size() - p.size(); i++) {
        int matches = 0;
        for (int j = 0; j < p.size(); j++) {
            cout << p[j];
            if (s[i + j] == p[j]) matches++;
            else break;
        }
        if (matches == p.size()) {
            cout << endl << i + 1;
            return 0;
        }
    }
    cout << endl << 0;
    return 0;
}
