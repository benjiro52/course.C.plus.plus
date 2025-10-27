#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n % 2 == 0)
        cout << n * (n - 2);
    else
        cout << n * (n - 1);
    return 0;
}