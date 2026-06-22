#include <bits/stdc++.h>
using namespace std;

int main() {
    string haystack = "leetcode";
    string needle = "leeto";

    int pos = haystack.find(needle);
    if (haystack.find(needle) != string::npos) {
        cout << pos;
    } else {
        cout << "-1";
    }
    
}