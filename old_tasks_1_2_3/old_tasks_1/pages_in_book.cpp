#include <iostream>

using namespace std;

int main()
{
    int K, N;
    cin >> K >> N;

    int pageNumber = (N + K - 1) / K;

    int lineNumber = N % K;
    if (lineNumber == 0) {
        lineNumber = K;
    }
    cout << pageNumber << " " << lineNumber;

}