#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        sum += coins[i];
    }
    sort(coins.begin(), coins.end());
    reverse(coins.begin(), coins.end());
    int my_sum = 0;
    int coins_taken = 0;
    for (int coin : coins) {
        my_sum += coin;
        coins_taken++;
        if (my_sum > sum / 2) {
            break;
        }
    }
    cout << coins_taken << endl;
    return 0;
}
