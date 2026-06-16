#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the order of matrix: ";
    cin >> n;

    int a[n][n];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Transpose of matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}