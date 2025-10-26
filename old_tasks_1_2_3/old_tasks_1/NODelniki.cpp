#include <iostream>

using namespace std;

int main()
{
    int N, i = 1, k = 0;
    cin >> N;

        while (i <= N) 
        {
            if (N % i == 0) 
                k ++;
                i ++;
        }
        cout << k;
    return 0;
}