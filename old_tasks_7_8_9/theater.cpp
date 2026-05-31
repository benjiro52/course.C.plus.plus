#include <iostream>
using namespace std;

int main() {
    long long n, m, ant = 0;;
    cin >> n >> m;

    int price[100][100]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> price[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sold;
            cin >> sold;
            if (sold == 1) {
                ant += price[i][j];
            }
        }
    }

    cout << ant;
    return 0;
}
