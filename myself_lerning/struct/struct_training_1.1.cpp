#include <bits/stdc++.h>
using namespace std;

struct point {
    int x;
    int y;
};

int main() {
    point p1;
    point p2;

    p1.x = 2;
    p1.y = 3;
    
    p2.x = 5;
    p2.y = 7;

    double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    cout << distance;
    return 0;
}