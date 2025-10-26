#include <iostream>

using namespace std;

int main() {
    int A1, B1, C1, A2, B2, C2;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;


    if (A1 > B1) { 
        int temp = A1; A1 = B1; B1 = temp;
    } 
    if (A1 > C1)  {
        int temp = A1; A1 = C1; C1 = temp;
    }
    if (B1 > C1)  {
        int temp = B1; B1 = C1; C1 = temp;
    }

    if (A2 > B2)  {
        int temp = A2; A2 = B2; B2 = temp;
    }
    if (A2 > C2)  {
        int temp = A2; A2 = C2; C2 = temp;
    }
    if (B2 > C2)  {
        int temp = B2; B2 = C2; C2 = temp;
    }

    if (A1 == A2 && B1 == B2 && C1 == C2) {
        cout << 0;
    } 

    else if (A2 <= A1 && B2 <= B1 && C2 <= C1) {
        cout << 1;
    } 

    else if (A1 <= A2 && B1 <= B2 && C1 <= C2) {
        cout << 2;
    } 

    else {
        cout << -1;
    }

    return 0;
}
