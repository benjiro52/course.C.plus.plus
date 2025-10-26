#include <iostream>

using namespace std;

int main() {
    int g, s, k;
    cin >> g >> s >> k;

    long long total_knuts = g * 17 * 29 + s * 29 + k;

    int N;
    cin >> N;

    while (N--) {
        int item_g, item_s, item_k;
        cin >> item_g >> item_s >> item_k;

        long long item_price = item_g * 17 * 29 + item_s * 29 + item_k;

        if (item_price > total_knuts) {
            cout << "-1" << endl;
            return 0;
        }

        total_knuts -= item_price;
    }

    int remaining_g = total_knuts / (17 * 29);
    int remaining_s = (total_knuts % (17 * 29)) / 29;
    int remaining_k = total_knuts % 29;

    cout << remaining_g << " " << remaining_s << " " << remaining_k << endl;

    return 0;
}