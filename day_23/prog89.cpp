#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {// s.size() returns the number of characters in the string s. The loop iterates through each character in the string to check for non-repeating characters.
        bool ok = true;// ok is a boolean variable that is used to track whether the current character s[i] is non-repeating or not. It is initialized to true at the beginning of each iteration.

        for (int j = 0; j < s.size(); j++) {
            if (i != j && s[i] == s[j]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << s[i];
            return 0;
        }
    }

    cout << "No non-repeating character";
    return 0;
}