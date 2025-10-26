#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 1000;

    while (i <= 9999)
    {
        int a = i / 1000 % 10;
        int d = i % 10;
        int b = i / 100  % 10;
        int c = i / 10 % 10;
        
        if (a == d && b == c){
            cout << i << " ";
        }
        i ++;
    }
    return 0;
}