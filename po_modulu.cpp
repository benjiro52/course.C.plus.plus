#include <iostream>
using namespace std;

int main() {
    int nums[10];
    int array[42] = {0}; 
    int ant = 0;

    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
        int remainder = nums[i] % 42; 
        if (array[remainder] == 0) {
            array[remainder] = 1; 
            ant++;       
        }
    }
    
    cout << ant;
    
}
