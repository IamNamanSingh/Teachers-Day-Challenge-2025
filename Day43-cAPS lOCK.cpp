#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool a(const string& s) {
    if (s.length() == 1) {
        return true;
    }
    for (size_t i = 1; i < s.length(); ++i) {
        if (islower(s[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (a(s)) {
        for (size_t i = 0; i < s.length(); ++i) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    cout << s << endl;
    return 0;
}
