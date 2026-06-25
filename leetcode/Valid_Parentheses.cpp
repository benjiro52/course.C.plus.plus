#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "([)]";
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        } else {
            if (st.empty()) {
                cout << "false";
                return 0;
            }

            if (s[i] == ')' && st.top() == '(' || s[i] == ']' && st.top() == '[' || s[i] == '}' && st.top() == '{') {
                st.pop();
            } else {
                cout << "false";
                return 0;
            }
        }
    }

    if (!st.empty()) {
        cout << "false";
        return 0;
    }

    cout << "true";
    return 0;
}