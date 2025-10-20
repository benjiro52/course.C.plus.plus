#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long a = 1, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    } 
    
    cout << b;
    return 0;
}
