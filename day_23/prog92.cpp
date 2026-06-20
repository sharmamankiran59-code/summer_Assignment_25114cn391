#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    int f[256] = {0};

    for (int i = 0; i < s.length(); i++)
        f[s[i]]++;

    char ch = s[0];
    int mx = 0;

    for (int i = 0; i < s.length(); i++) {
        if (f[s[i]] > mx) {
            mx = f[s[i]];
            ch = s[i];
        }
    }

    cout << "Maximum occurring character: " << ch;

    return 0;
}