#include <bits/stdc++.h>
using namespace std;

int main() {
    char best_letter;
    int best_height = 0;
    
    for (int i = 0; i < 5; i++) {
        char letter;
        int height;
        cin >> letter >> height;
        
        if (height >= best_height) {
            best_height = height;
            best_letter = letter;
        }
    }
    
    cout << best_letter;
}