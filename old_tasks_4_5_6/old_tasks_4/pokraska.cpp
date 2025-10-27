#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s1, s2, s3, grn1, grn2, grn3, kop1, kop2, kop3, a, b;
    cin >> s1 >> grn1 >> kop1 >> s2 >> grn2 >> kop2 >> s3 >> grn3 >> kop3 >> a >> b;

    int all_area = 4 * a * b;
    int all_kop1 = grn1 * 100 + kop1;
    int all_kop2 = grn2 * 100 + kop2;
    int all_kop3 = grn3 * 100 + kop3;

    int cans1 = (all_area + s1 - 1) / s1;
    int cans2 = (all_area + s2 - 1) / s2;
    int cans3 = (all_area + s3 - 1) / s3;

    int total_kop1 = cans1 * all_kop1;
    int total_kop2 = cans2 * all_kop2;
    int total_kop3 = cans3 * all_kop3;

    int min_cost = min({total_kop1, total_kop2, total_kop3});

    cout << min_cost / 100 << " " << min_cost % 100;

    return 0;
}
