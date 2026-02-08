#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;
    int length = N.size();
    int first_group = length % 3;
    if (first_group == 0) first_group = 3;

    cout << N.substr(0, first_group);
    
    for (int i = first_group; i < length; i += 3) {
        cout << "," << N.substr(i, 3);
    }
 
    return 0;
}