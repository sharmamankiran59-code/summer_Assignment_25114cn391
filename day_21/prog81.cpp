#include <iostream>
using namespace std;

int main() {
    string str;
    int length = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        length++;
    }

    cout << "Length of the string = " << length;

    return 0;
}