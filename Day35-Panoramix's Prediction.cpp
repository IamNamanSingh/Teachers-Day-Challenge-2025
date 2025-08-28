#include <iostream>
using namespace std;
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n, m;
    cin >> n >> m;
    int next_prime_after_n = -1;
    for (int i = n + 1; i <= 50; ++i) {
        if (is_prime(i)) {
            next_prime_after_n = i;
            break;
        }
    }
    if (next_prime_after_n == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
