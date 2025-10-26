#include <iostream>

using namespace std;

int main()
{
    int n, number, mx, mn, mid;
    cin >> n >> number;
    
    mid = number;
    mx = number;
    mn = number;
    for (int i = 2; i <= n; i ++) {
        cin >> number;
        if (number > mx) {
            mx = number;
        }
        if (number < mn) {
            mn = number;
        }
        if (mid != mn && mid != mx) {
            mid = number;
        }
    }
    
    
    cout << mid;
    return 0;
}