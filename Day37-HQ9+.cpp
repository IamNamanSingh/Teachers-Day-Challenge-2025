#include <iostream>
#include <string>
using namespace std;

int main() {
    string p;
    cin >> p;
    bool has_output = false;
    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            has_output = true;
            break;
        }
    }
    if (has_output) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
