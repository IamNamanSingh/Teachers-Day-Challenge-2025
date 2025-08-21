#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
    int max_watered = 0;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        int current_watered = 1;
        for (int j = i - 1; j >= 0; --j) {
            if (heights[j] <= heights[j+1]) {
                current_watered++;
            } else {
                break;
            }
        }
        for (int j = i + 1; j < n; ++j) {
            if (heights[j] <= heights[j-1]) {
                current_watered++;
            } else {
                break;
            }
        }
        if (current_watered > max_watered) {
            max_watered = current_watered;
        }
    }
    cout << max_watered << endl;
    return 0;
}
