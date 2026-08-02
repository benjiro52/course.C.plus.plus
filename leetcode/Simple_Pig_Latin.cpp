#include <bits/stdc++.h>
using namespace std;

string pig_it(string str) {
    int start = 0;
    int end = 0;
    while (end != str.size()) {
        if (str[end] == ' ') {
            str[end - 1] = str[start];
            start = end + 1;
        }
        end++;
    }
    return str;
}

int main() {
    cout << pig_it("Pig latin is cool");
}