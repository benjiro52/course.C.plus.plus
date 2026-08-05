#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int arr[6] = {10, 25, 3, 47, 8, 16};
    int ans = arr[0];
    
    for (int i = 1; i < 6; i++) { 
        if (arr[i] > ans) {
            ans = arr[i]; 
        }
    }
    
    cout << ans;
}