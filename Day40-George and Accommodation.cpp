#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int available_rooms = 0;
    for (int i = 0; i < n; ++i) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2) {
            available_rooms++;
        }
    }
    cout << available_rooms << endl;
    return 0;
}
