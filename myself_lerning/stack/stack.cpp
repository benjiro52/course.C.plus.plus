#include <iostream>
#include <string>
using namespace std;

int main() {
    string function;
    cin >> function;

    int value;
    const int size = 100;
    int j = 0;
    int stack[size];
    while (true) {
        if (function == "push") {
            cin >> value; 
            stack[j] = value;
            j++;
            cout << j << endl;
        } else {
            string function2;
            cin >> function2;

            if (function2 == "pop") {
                cout << stack[j - 1] << endl;
                j--;
            }
        }
    }
    

}