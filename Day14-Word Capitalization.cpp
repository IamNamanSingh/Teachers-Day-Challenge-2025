#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.length() > 0) {
        s[0] = toupper(s[0]);
    }
    cout << s << endl;
    return 0;
}
