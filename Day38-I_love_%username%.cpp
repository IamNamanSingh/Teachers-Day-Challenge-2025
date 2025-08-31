#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int first_score;
    cin >> first_score;
    int min_score = first_score;
    int max_score = first_score;
    int amazing_count = 0;
    for (int i = 1; i < n; ++i) {
        int current_score;
        cin >> current_score;
        if (current_score > max_score) {
            amazing_count++;
            max_score = current_score;
        }
        if (current_score < min_score) {
            amazing_count++;
            min_score = current_score;
        }
    }
    cout << amazing_count << endl;
    return 0;
}
