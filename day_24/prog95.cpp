#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, word = "", longest = "";

    cout << "Enter a sentence: ";
    getline(cin, s);

    for (int i = 0; i <= s.length(); i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            word += s[i];
        }
        else {
            if (word.length() > longest.length())
                longest = word;

            word = "";
        }
    }

    cout << "Longest word: " << longest;

    return 0;
}