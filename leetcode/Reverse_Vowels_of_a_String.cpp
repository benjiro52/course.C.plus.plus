#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "IceCreAm";

    int left = 0;
    int right = s.size() - 1;

    while (right > left) {
        if (s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u' ||
            s[right] == 'A' || s[right] == 'E' || s[right] == 'I' || s[right] == 'O' || s[right] == 'U') {
            if (s[left] == 'a' || s[left] == 'e' || s[left] == 'i' || s[left] == 'o' || s[left] == 'u' ||
                s[left] == 'A' || s[left] == 'E' || s[left] == 'I' || s[left] == 'O' || s[left] == 'U') {
                swap(s[left], s[right]);
                right--;
            }
            left++;
        } else {
            right--;
        }
    }

    cout << s;

    return 0;
}