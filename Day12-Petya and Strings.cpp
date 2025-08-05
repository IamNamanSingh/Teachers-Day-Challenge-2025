#include <iostream>
#include <string>
#include <cctype>

int main() {
    using namespace std;

    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); ++i) {
        char lower_s1 = tolower(s1[i]);
        char lower_s2 = tolower(s2[i]);

        if (lower_s1 < lower_s2) {
            cout << -1 << endl;
            return 0;
        } else if (lower_s1 > lower_s2) {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}
