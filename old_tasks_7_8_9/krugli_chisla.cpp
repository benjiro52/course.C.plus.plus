#include <iostream>
using namespace std;

int main() {
    long long K;
    cin >> K;

    long long x = K - 1;
    string s = "";

    if (x == 0) {
        cout << 0;
        return 0;
    }

    while (x > 0) {
        if (x % 2 == 0) {
            s = '0' + s;
        } else {
            s = '5' + s;
        }
        x /= 2;
    }
    
    cout << s;
    return 0;
}
