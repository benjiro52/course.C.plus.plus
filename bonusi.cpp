#include <bits/stdc++.h>
using namespace std;

int main(){
    int leap, k;
    cin >> leap >> k;
    
    int monthDays[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (leap) {
        monthDays[2] = 29;
    }
    
    long long a = 0, gold = 0;
    
    for (int i = 0; i < k; i++) {
        string date;
        cin >> date;
        int dd = stoi(date.substr(0,2));
        int mm = stoi(date.substr(3,2));
        
        int dayOfYear = dd;
        for (int m = 1; m < mm; m++) {
            dayOfYear += monthDays[m];
        }
        
        int pos = (dayOfYear - 1) % 5 + 1; 
        
        if (pos == 1) a += 1000;
        else if (pos == 2) a += 5000;
        else if (pos == 3 || pos == 4) a += 3000;
        else gold += 3;
    }
    
    cout << a << " " << gold;
}