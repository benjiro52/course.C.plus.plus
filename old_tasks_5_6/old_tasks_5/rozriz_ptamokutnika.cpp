#include <iostream>

using namespace std;

int main() 
{
    long long n; 
    cin >> n; 
    long long x = (n + 1) / 2; 
    cout << (n * (n + 1)) / 2 - (x * (x + 1)) / 2 - (n / 2 + 1) / 2 << "\n";
}
