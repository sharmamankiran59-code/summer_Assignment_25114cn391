#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char c;
    int f = 0;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Enter character: ";
    cin >> c;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c)
            f++;
    }

    cout << "Frequency of " << c << " = " << f;

    return 0;
}