#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    int f[256] = {0};

    for (int i = 0; i < s1.length(); i++) {
        f[s1[i]]++;
        f[s2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (f[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";
    return 0;
}