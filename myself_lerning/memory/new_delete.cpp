#include <bits/stdc++.h>
using namespace std;

int main() {
    int* pa = new int;
    *pa = 10;
    cout << *pa;
    delete pa;
}