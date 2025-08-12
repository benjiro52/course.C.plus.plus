#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> ant(m);
    for (int j = 0; j < m; j++) {
        int l, r, x;
        cin >> l >> r >> x;

        int b = 0;
        for (int i = l - 1; i < r; i++) { 
            if (a[i] == x + (i - (l - 1))) { 
                b++;
            }
        }
        ant[j] = b;
    }

    for (int i = 0; i < m; i++) {
        cout << ant[i] << endl;
    }

    return 0;
}