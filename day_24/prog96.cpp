#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, ans = "";

    cout << "Enter a string: ";
    cin >> s;

    int f[256] = {0};

    for (int i = 0; i < s.length(); i++) {
        if (f[s[i]] == 0) {
            ans += s[i];
            f[s[i]] = 1;
        }
    }

    cout << "String after removing duplicates: " << ans;

    return 0;
}