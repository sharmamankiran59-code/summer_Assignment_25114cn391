#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, r = "";

    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ')
            r += s[i];//+= is used to concatenate the character to the result string r
    }

    cout << "String without spaces: " << r;

    return 0;
}