#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> k(m);
    for (int i = 0; i < m; i++) {
        cin >> k[i];
    }

    int ant = 0;

    for (int i = 0; i < m; i++) {
        if (n >= k[i]) {
            n -= k[i];
            ant++;
        }
    }

    cout << ant;

    return 0;
}
