#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int coins = 0;     
    int ant = 0;    
    for (int i = 0; i < n; i++) {
        int pay;
        cin >> pay;

        int change = pay - 5;  
        int need = change / 5; 

        coins -= need;
        if (pay == 5) {
            coins++; 
        }

        if (coins < 0 && -coins > ant) {
            ant = -coins;
        }
    }

    cout << ant;
    return 0;
}