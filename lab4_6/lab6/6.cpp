#include <iostream>
#include <string>
using namespace std;
string capitalizeEvenPositions(const string & s) {
    string result = s;

    for (int i = 0; i < s.length(); i += 2) {
        if (islower(s[i])) {
            result[i] = toupper(s[i]);
        }
    }

    return result;
}

int main() {
    string input;
    cin >> input;

    string modifiedString = capitalizeEvenPositions(input);

    cout << modifiedString << endl;

    return 0;
}// lab6  I I 