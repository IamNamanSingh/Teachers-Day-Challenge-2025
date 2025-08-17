#include <iostream>
using namespace std;

int main() {
    long long k, n, w;
    cin >> k >> n >> w;
    long long total_cost = 0;
    for (int i = 1; i <= w; ++i) {
        total_cost += i * k;
    }
    if (total_cost <= n) {
        cout << 0 << endl;
    } else {
        cout << total_cost - n << endl;
    }
    return 0;
}
