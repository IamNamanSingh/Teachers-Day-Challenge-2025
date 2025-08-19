#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int consecutive_zeros = 0;
    int consecutive_ones = 0;
    bool dangerous = false;
    for (char c : s) {
        if (c == '0') {
            consecutive_zeros++;
            consecutive_ones = 0;
        } else {
            consecutive_ones++;
            consecutive_zeros = 0;
        }
        if (consecutive_zeros >= 7 || consecutive_ones >= 7) {
            dangerous = true;
            break;
        }
    }
    if (dangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
