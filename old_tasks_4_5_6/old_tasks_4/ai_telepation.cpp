#include <iostream>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a, b, n;
    cin >> a >> b >> n;

    for (int i = 0; i < n; i++) {
        a++;
        b = b + 2;
        swap(a, b);
    }
    cout << a + b;
}