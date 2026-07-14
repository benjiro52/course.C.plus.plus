#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0;
    cout << &i << endl;

    int* ptr = &i;
    cout << "ptr: " << ptr << endl;

    char c = 'a';
    char* ptr2 = &c;
    cout << "ptr2: " << (void*)ptr2 << endl;
    *ptr2 = 'b';
    cout << "ptr2.1: " << ptr2 << endl;
    cout << c << endl;
}
