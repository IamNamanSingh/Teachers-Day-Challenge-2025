#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string result = "";
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] == s2[i]) {
            result += '0';
        } else {
            result += '1';
        }
    }
    cout << result << endl;
    return 0;
}
