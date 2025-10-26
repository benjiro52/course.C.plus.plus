#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <cstdint>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>
#include <bitset>
#include <map>
#include <queue>
#include <ctime>
#include <stack>
#include <set>
#include <list>
#include <random>
#include <deque>
#include <functional>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <complex>
#include <numeric>
#include <cassert>
#include <array>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <thread>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int days_with_diff = min(n, m);

    int remaining_red = n - days_with_diff;
    int remaining_yellow = m - days_with_diff;

    int days_with_same = remaining_red / 2 + remaining_yellow / 2;
    
    cout << days_with_diff << " " << days_with_same;
    
    return 0;
}