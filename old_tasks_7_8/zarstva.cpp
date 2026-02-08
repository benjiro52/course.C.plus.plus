#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long ant = 0;

    for (int n = a; n <= b; n++) {
        for (int k = c; k <= d; k++) {
            bool prime = true;

            if (k < 2) prime = false;
        
            for (int i = 2; i * i <= k; i++) {
                if (k % i == 0) {
                    prime = false;
                    break;
                }
            }

            if (n == 1) {
                if (prime) {
                    ant++;
                }
            } else if (n == 2) {
                if (prime) {
                    ant++;
                }
                else if (k % 2 == 0 && k >= 4) {
                    ant++;
                }
                else if (k % 2 == 1 && k >= 5) {
                    ant++;
                }
            } else {
                if (k >= 2) {
                    ant++;
                }
            }
        }
    }
    
    cout << ant;

    return 0;
}
