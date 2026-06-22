#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    string w[n], temp;

    cout << "Enter words:\n";
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    // Sort by length
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (w[i].length() > w[j].length()) {
                temp = w[i];
                w[i] = w[j];
                w[j] = temp;
            }
        }
    }

    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < n; i++) {
        cout << w[i] << endl;
    }

    return 0;
}