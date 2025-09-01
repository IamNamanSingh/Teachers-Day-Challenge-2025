#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    int max_h = 0;
    int min_h = 101;
    int max_idx = -1;
    int min_idx = -1;
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    for (int i = 0; i < n; ++i) {
        if (h[i] > max_h) {
            max_h = h[i];
            max_idx = i;
        }
        if (h[i] <= min_h) {
            min_h = h[i];
            min_idx = i;
        }
    }
    int swaps = max_idx + (n - 1 - min_idx);
    if (max_idx > min_idx) {
        swaps--;
    }
    cout << swaps << endl;
    return 0;
}
