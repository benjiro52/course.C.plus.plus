#include <iostream>

using namespace std;

int main() {
    int N, M, K;

    cin >> N >> M >> K;

    int numStrips = M;

    int stripsPerRoll = K / N;

    int numRolls;
    if (stripsPerRoll > 0) {
        numRolls = (numStrips + stripsPerRoll - 1) / stripsPerRoll;
    } else {
        numRolls = numStrips;
    }

    cout << numRolls;
   
}