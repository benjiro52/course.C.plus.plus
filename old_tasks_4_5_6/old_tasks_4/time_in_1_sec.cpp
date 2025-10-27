#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int hours, minutes, sec;
    cin >> hours >> minutes >> sec;

    sec ++;

    if (sec == 60) {
        sec = 0;
        minutes ++;
    }

    if(minutes == 60) {
        minutes = 0;
        hours ++;
    }

    if (hours == 24) {
        hours = 0;
    }

    cout << hours << " " << minutes << " " << sec;

    return 0;
}
