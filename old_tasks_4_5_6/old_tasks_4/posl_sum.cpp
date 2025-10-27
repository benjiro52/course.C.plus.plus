#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> array (n);
    for (int i = 0; i != array.size(); i ++) {
        cin >> array[i];
    }

    int antwort = 0;

    for (int a = 0; a != n - 2; a ++) {
        int sum;
        antwort = array[a] + array[a+1] + array[a+2];
        if (sum > antwort) antwort = sum;
    }

    cout << antwort;

    return 0;
}