#include <iostream>

using namespace std;

int main() {
    long long s;
    cin >> s;
    for (long long i = 2; i * i <= s; i++) { 
        if (s % i != 0) 
        continue;  
        cout << s - i << " ";  

        while (s % i == 0) 
            s /= i;  
    } 

    if (s > 1) cout << s - s;  
}

