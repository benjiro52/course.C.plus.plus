#include <bits/stdc++.h>
using namespace std;

int main() {
    int* pa = new int;
    *pa = 10;
    cout << *pa << endl;
    delete pa;

    // pa = NULL;
    // delete pa;

    pa = nullptr;
    if (pa != nullptr) {
        cout << pa << endl;
    }

    delete pa;
}