#include <iostream>

using namespace std;

int main() 
{
    string s;
    cin >> s;
    
    int n = s.length();
    int ant = 0;

    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            ant++;
        }
    }

    if (ant == 0 || ant == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
