#include <iostream>
#include <cmath>

using namespace std;
int main() {
    long long number, a, b;
    cin >> number >> a >> b;
    
    unsigned long long ant = pow(number, a);
    ant = (ant - 1) / b;
    if (ant % b != 0) {
        cout << "no" << endl;
    }
    
    cout << ant;
}