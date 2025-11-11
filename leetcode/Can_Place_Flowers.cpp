#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;
    int ans = 0;

    for (int i = 0; i < flowerbed.size(); i++) {
        if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) && flowerbed[i] == 0) {
            flowerbed[i] = 1; 
            ans++;
        }
    }

    if (ans >= n) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}
