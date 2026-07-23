#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> f = {10, 60, 30, 80, 45, 90};
    int count = count_if(f.begin(), f.end(),
                      [](int x) { return x > 50; });

                      
    cout << count;
}