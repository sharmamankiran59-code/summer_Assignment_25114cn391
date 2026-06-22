#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of names: ";
    cin >> n;

    string name[n], temp;

    cout << "Enter names:\n";
    for (int i = 0; i < n; i++) {
        cin >> name[i];
    }

    // Sorting
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (name[i] > name[j]) {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }

    return 0;
}