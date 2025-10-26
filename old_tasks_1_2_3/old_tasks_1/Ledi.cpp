#include <iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int count = 0; 

    for (int i = A; i <= B; ++i) {
        int n = i;
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        if (sum % 2 != 0) { 
            count++; 
        }
    }

    cout << count << endl;

    return 0;
}
