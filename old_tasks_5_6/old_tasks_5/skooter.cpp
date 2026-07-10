#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    long long heights[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int max_distance = 0;

    for (int i = 0; i < n; ++i) {
        long long current_height = heights[i];
        int distance = 0;   
        for (int j = i + 1; j < n; ++j) {
            if (heights[j] < current_height) {
                distance++;
            } else {
                return 0;
            }
        }

        max_distance = max(max_distance, distance);
    }

    cout << max_distance;

    return 0;
}