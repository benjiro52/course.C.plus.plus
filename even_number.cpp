#include <iostream>
#include <string>

using namespace std;

bool isValidPartial(const string& current, int pos) {
    // After placing digit at position pos, check if the constraint for position pos-1 is satisfied
    // We need: d[pos-1] < (d[pos-2] + d[pos]) / 2
    // which is: 2 * d[pos-1] < d[pos-2] + d[pos]
    if (pos < 2) return true;  // Not enough digits yet to check a constraint
    
    int d_prev_prev = current[pos - 2] - '0';
    int d_prev = current[pos - 1] - '0';
    int d_curr = current[pos] - '0';
    return 2 * d_prev < d_prev_prev + d_curr;
}

bool isValidComplete(const string& current) {
    // Check all constraints for a complete number
    int n = current.length();
    for (int i = 1; i < n - 1; i++) {
        int d_prev = current[i - 1] - '0';
        int d_curr = current[i] - '0';
        int d_next = current[i + 1] - '0';
        if (!(2 * d_curr < d_prev + d_next)) {
            return false;
        }
    }
    return true;
}

string backtrack(string current, int remaining, int l) {
    if (remaining == 0) {
        return isValidComplete(current) ? current : "";
    }
    
    int pos = l - remaining;  // Current position (0-indexed from left)
    
    // Try digits from 9 down to 0 to get the maximum number
    for (int digit = 9; digit >= 0; digit--) {
        string newCurrent = current + char('0' + digit);
        
        // Prune early: check if the constraint for position pos-1 can be satisfied
        if (isValidPartial(newCurrent, pos)) {
            string result = backtrack(newCurrent, remaining - 1, l);
            if (!result.empty()) {
                return result;  // Found the maximum
            }
        }
    }
    
    return "";
}

int main() {
    int l;
    cin >> l;
    
    string result = backtrack("", l, l);
    
    if (result.empty()) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }
    
    return 0;
}
