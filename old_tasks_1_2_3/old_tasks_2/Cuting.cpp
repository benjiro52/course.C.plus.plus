#include <iostream>

using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;  

    long long count = 0;
    
    while (N > 0 && M > 0) {
        if (N > M) {
            count += N / M;  
            N = N % M;  
        } else {
            count += M / N;  
            M = M % N; 
        }
    }

    cout << count;
    return 0;
}
