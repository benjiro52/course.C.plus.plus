#include <iostream>

using namespace std;

int main() 
{
    int n, s, v = 0;
    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        v = v + a; 
        if (v > s && i != n) {
            v--;
        }
    }

    cout << v;

    return 0;
}
