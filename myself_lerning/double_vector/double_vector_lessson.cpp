#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> double_vec = {
        {1, 2, 3}, // 1 vector
        {4, 5, 6}, // 2 vector
        {7, 8, 9}  // 3 vector
    };
    //double_vec[строка][столбец];
    vector<vector<int>> double_vec2(3, vector<int>(4)); // 3 Строки и 4 рядка
    vector<vector<int>> double_vec3(3, vector<int>(4, 7)); // 3 Строки и 4 рядка по 7 все
    
    cout << double_vec[0][0] << endl; // 1
    cout << double_vec[1][1] << endl; // 5
    cout << double_vec[2][2] << endl; // 9

    for (int i = 0; i < double_vec.size(); i++) {
        for (int j = 0; j < double_vec[i].size(); j++) {
            cout << double_vec[i][j] << " ";
        }
    }

    // looks easy
}