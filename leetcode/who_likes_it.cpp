#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> names0;
    vector<string> names1 = {"Peter"}; 
    vector<string> names2 = {"Jacob", "Alex"};
    vector<string> names3 = {"Max", "John", "Mark"};
    vector<string> names4 = {"Alex", "Jacob", "Mark", "Max"};
    
    if (names0.size() == 0) {
        cout << "no one likes this" << endl;
    }
    if (names1.size() == 1) {
        cout << names1[0] << " likes this" << endl;
    }
    if (names2.size() == 2) {
        cout << names2[0] << " and " << names2[1] << " like this" << endl;
    }
    if (names3.size() == 3) {
        cout << names3[0] << ", " << names3[1] << " and " << names3[2] << " like this" << endl;
    }
    if (names4.size() == 4) {
        cout << names4[0] << ", " << names4[1] << " and 2 others like this";
    }
    return 0;
}