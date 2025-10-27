#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, mx_index = 0, ant = 0;
    cin >> n >> k;

    vector<int> candies(n);
    for (int i = 0; i < n; i++) {
        cin >> candies[i];
    }

    int mx = candies[0];
    for (int i = 0; i < n; i++) {
        if (candies[i] > mx) {
            mx = candies[i];
            mx_index = i;
        }
    }

    for (int i = 0; i < n; i++) {
        ant += candies[mx_index]; 
        candies[mx_index] += k;   
    }

    cout << ant;
}