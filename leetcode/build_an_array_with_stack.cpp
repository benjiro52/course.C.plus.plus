#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> target = {1,3};
    stack<int> st;
    int n = 3;
    int k = 0;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        nums[i] = i + 1;
    } 

    for (int i = 0; i < n; i++) {
        if (k == target.size()) {
            break;
        }
        
        if (nums[i] == target[k]) {
            st.push(i);
            cout << "Push ";
            k++;
        } else if (nums[i] != target[k]){
            st.push(i);
            cout << "Push ";

            st.pop();
            cout << "Pop ";
        } 
    }

    return 0;
}