#include <iostream>

using namespace std;

int main()
{
    long long a, b, w, l, y, halfW, halfAB, variant1, variant2, ans1, ans2;
    cin>>a>>b>>w>>l>>y;

    halfW = w / 2;
    halfAB = max(a, b) / 2;
    
    variant1 = (halfW + halfAB) - l;
    if (l > halfW + halfAB) {
        variant1 = l - (halfW + halfAB);
    }
    ans1 = w - variant1;

    if (ans1 % ans1 != 1) {
        cout<<ans1 + 1;
        return 0;
    }

    cout<<ans1;

    return 0;

}