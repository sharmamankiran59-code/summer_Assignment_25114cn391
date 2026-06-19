#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int w = 0;

    cout << "Enter a sentence: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' && s[i + 1] != ' ')
            w++;
    }

    if (s.length() > 0)
        w++;

    cout << "Words = " << w;

    return 0;
}