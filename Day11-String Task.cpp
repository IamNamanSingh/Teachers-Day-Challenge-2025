#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string input_string;
    cin >> input_string;
    string result_string = "";
    for (char character : input_string) {
        char lower_char = tolower(character);
        if (lower_char == 'a' || lower_char == 'o' || lower_char == 'y' || lower_char == 'e' || lower_char == 'u' || lower_char == 'i') {
            continue;
        } else {
            result_string += '.';
            result_string += lower_char;
        }
    }
    cout << result_string << endl;
    return 0;
}
