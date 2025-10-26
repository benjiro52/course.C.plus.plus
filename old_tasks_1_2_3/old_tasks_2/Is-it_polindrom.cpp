#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    cin >> i;

    int a = i / 1000 % 10;
    int b = i / 100 % 10;
    int c = i / 10 % 10;
    int d = i % 10;
    if (a == d && b == c){
        cout << "yes";
        return 0;
    } else {
        cout << "no";
        return 0;
    }
    
}