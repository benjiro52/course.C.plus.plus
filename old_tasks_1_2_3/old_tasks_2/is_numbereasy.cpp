#include <iostream>

using namespace std;

int main()
{
    for (int i=10; i<=99; i++)
    {
        int k=0;
        for(int j=1; j<=i; j++)
            if (i % j == 0) k++;
            cout << i;
    }
}