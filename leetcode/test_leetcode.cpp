#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int main_cost;
    if (n / 60 > 0) {
        main_cost = (n / 60) * 30;
      } else {
        main_cost = 30;
    }
    if (n % 60 >= 30 && n % 60 <= 55) {
        main_cost += 10;
      }
    if (n % 60 <= 30 && n % 60 >= 5) {
       main_cost += 10;
    }
    cout << main_cost;
}