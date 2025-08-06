#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    using namespace std;

    string s;
    cin >> s;

    vector<int> num;

    for (char c : s) {
        if (c >= '1' && c <= '3') {
            num.push_back(c - '0');
        }
    }

    sort(num.begin(), num.end());

    for (int i = 0; i < num.size(); ++i) {
        cout << num[i];
        if (i < num.size() - 1) {
            cout << "+";
        }
    }
    cout << endl;

    return 0;
}
