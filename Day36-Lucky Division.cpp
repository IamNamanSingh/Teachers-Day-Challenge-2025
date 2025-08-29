#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool is_almost_lucky = false;
    for (int i = 0; i < 14; ++i) {
        if (n % lucky_numbers[i] == 0) {
            is_almost_lucky = true;
            break;
        }
    }
    if (is_almost_lucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
