#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int problems_solved = 0;
    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;
        int sure_count = p + v + t;
        if (sure_count >= 2) {
            problems_solved++;
        }
    }
    cout << problems_solved << endl;
    return 0;
}
