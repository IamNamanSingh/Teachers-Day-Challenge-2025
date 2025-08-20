#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double total_percentage = 0.0;
    for (int i = 0; i < n; ++i) {
        double p;
        cin >> p;
        total_percentage += p;
    }
    double average_percentage = total_percentage / n;
    cout << fixed << setprecision(12) << average_percentage << endl;
    return 0;
}
