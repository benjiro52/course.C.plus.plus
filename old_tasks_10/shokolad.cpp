#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    
    int plitka = 1;
    while (plitka < k) {
        plitka *= 2;
    }
    
    int breaks = 0;
    int current = plitka;
    int collected = 0;
    
    while (collected < k) {
        if (collected + current <= k) {
            collected += current;
        } else {
            current /= 2;
            breaks++;
        }
    }
    
    cout << plitka << " " << breaks;

    return 0;   
}