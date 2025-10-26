#include <iostream>

using namespace std;

int main() 
{
    int n, love,  sum_of_love; 
    long long total;
    cin >> n >> love;

    sum_of_love = (n - 1) * n / 2;
    total = sum_of_love * love;

    cout << total;

    return 0;
}