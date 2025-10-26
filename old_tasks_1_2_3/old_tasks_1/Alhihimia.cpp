#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    long long new_a = a * x;
    long long new_b = b * x;
    long long new_c = c * x;

    long long total_weight = new_a + new_b + new_c + 1;

    cout << total_weight;

    return 0;
}
