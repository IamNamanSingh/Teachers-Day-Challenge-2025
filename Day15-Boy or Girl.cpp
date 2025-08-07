#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string a;
    cin >> a;
    set<char> b;
    for (char c : a) {
        b.insert(c);
    }
    if (b.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
