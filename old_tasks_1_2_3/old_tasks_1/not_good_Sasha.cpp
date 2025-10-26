#include <iostream>

using namespace std;

int main() {
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;

    long long total_time = N * 60 - (X + Y + Z);
    long long translated_words = total_time / 5;

    cout << translated_words;

    return 0;
}