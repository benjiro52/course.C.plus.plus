#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, x, m;
    cin >> n >> x >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> segments; 

    int last = -1; 

    for (int i = 0; i < n; i++) {
        if (a[i] > m && i > last) {
            if (i + x - 1 >= n) {
                cout << -1;
                return 0;
            }
            segments.push_back(i + 1); 
            last = i + x - 1;
        }
    }

    cout << segments.size() << endl;
    for (int t = 0; t < segments.size(); t++) {
        cout << segments[t] << " ";
    } 

    return 0;
}
