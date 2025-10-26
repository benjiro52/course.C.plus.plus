#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    int i = 0, j = 0;
    int x = -1;
    char c;

    while (i < n && j < m) {
        if (s[i] != t[j]) {
            if (x == -1) {
                x = i + 1; 
                c = t[j]; 
                j++;       
            } else {
                j++; 
            }
        } else {
            i++;
            j++;
        }
    }

    cout << x << " " << c;

    return 0;
}
