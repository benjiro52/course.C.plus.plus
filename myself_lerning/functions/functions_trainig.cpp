#include <bits/stdc++.h>
using namespace std;

void greet(string name) {
    cout << "hello " << name << endl;
}

int sum(int a, int b) { 
    return a + b;
}

int square(int num) {
    return num * num;
}

int theBiggest(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int sumArray(vector<int> arr = {1, 2, 3, 4, 5}, int sum = 0) {
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    return sum;
}

int countNums(vector<int> arr = {5, 4, 3, 2, 1}, int b = 0) {
    for (int i = 0; i < arr.size(); i++) {
        b++;
    }

    return b;
}   

int maxEl(vector<int> arr = {5, 6, 928, 42, 1, 52, 67}) {
    int mx = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }

    return mx;
}

int main() {
    int funct;
    funct = maxEl();
    cout << funct;
}