#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int maxWidth = 2 * n + 1;

    for (int k = 1; k <= n; k++) {
        
        for (int row = 0; row <= k; row++) {
            
            int numStars = 2 * row + 1;
            
            int numDots = (maxWidth - numStars) / 2;

            for (int i = 0; i < numDots; i++) {
                cout << ".";
            }

            for (int i = 0; i < numStars; i++) {
                cout << "*";
            }

            for (int i = 0; i < numDots; i++) {
                cout << ".";
            }
            
            cout << endl;
        }
    }

    return 0;
}