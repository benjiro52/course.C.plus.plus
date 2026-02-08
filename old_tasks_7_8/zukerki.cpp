#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[5000];
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    int mx = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > mx) {
            mx = a[i];
        }
    }

    int add = 0;  
    int students = 0;  

    for (int i = 0; i < n; i++) {
        if (a[i] < mx) {
            add += (mx - a[i]);
            students++;
        }
    }

    cout << add << " " << students;

    return 0;
}
