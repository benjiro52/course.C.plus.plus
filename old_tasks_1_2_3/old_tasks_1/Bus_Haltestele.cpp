#include <iostream>

using namespace std;

int main()
{
    int K, N, distance_to_stop;
    cin >> K >> N;

    distance_to_stop = min(N % K, K - (N % K));

    cout << distance_to_stop;

    return 0;
}