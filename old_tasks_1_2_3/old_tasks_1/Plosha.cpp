#include <iostream>

using namespace std;

int main()
 {
    long long N, M, A;

    cin >> N >> M >> A;
    
    long long tilesHorizontally = (N + A - 1) / A;
    long long tilesVertically = (M + A - 1) / A;
    
    long long totalTiles = tilesHorizontally * tilesVertically;
    
    cout << totalTiles;
    
    return 0;
}
