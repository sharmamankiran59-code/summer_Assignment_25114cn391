#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string ans = "";

    int count = 1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i + 1]) {
            count++;
        } 
        else {
            ans += s[i];
            ans += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed string: " << ans;

    return 0;
}