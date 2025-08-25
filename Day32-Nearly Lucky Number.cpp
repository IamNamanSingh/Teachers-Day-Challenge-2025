#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int lucky_digit_count = 0;
    string s = to_string(n);
    for (char c : s) {
        if (c == '4' || c == '7') {
            lucky_digit_count++;
        }
    }
    if (lucky_digit_count == 4 || lucky_digit_count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
