#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long region, rayon, schools, students;
    cin >> region >> rayon >> schools >> students;

    long long all_students = region * rayon * schools * students;

    cout << all_students;

    return 0;
}