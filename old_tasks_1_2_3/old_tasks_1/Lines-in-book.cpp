#include <iostream>

using namespace std;

int main()
{
    short k, n;
    int antwort, page, lineNumber;
    cin>>k>>n;

    if (n % k != 0) {
        page = page + 1;
    }
    else {
        page = n / k;
    }

    if (n > k) {
        lineNumber = n - k * page;
    }
    if (lineNumber == 0) {
        lineNumber = 1;
    }
}