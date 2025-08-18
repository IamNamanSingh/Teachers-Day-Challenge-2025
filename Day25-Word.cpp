#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    int uppercase_count = 0;
    int lowercase_count = 0;
    for (char c : s) {
        if (isupper(c)) {
            uppercase_count++;
        } else {
            lowercase_count++;
        }
    }
    if (uppercase_count > lowercase_count) {
        for (char &c : s) {
            c = toupper(c);
        }
    } else {
        for (char &c : s) {
            c = tolower(c);
        }
    }
    cout << s << endl;
    return 0;
}
