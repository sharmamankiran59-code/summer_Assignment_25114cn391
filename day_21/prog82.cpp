#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);//getline is a function in c++ used to read read entire line of text including spaces

    cout << "Reversed string: ";

    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}