#include <iostream>

using namespace std;

int main()
{
    for (int i=100; i<=999; i++)
    {
        int k = 0;
        for (int j = 1; j <= i; j ++)
            if (i % j == 0) k ++;
        int a = i / 100;
        int b = i / 10 % 10;
        int c = i % 100 % 10;
        if (k == 2 && a != b && b != c && a != c) cout << i << " ";
    }
}