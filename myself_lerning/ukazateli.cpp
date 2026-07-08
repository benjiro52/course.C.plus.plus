#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0;
    cout << &i << endl;
    int* ptr = &i;
    cout << ptr << endl;

    char c = 'a';
    char* ptr2 = &c;
    *ptr2 = 'b';
    cout << c << endl;
}
