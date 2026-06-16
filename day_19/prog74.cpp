#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the order of matrix: ";
    cin >> n;

    int a[n][n], b[n][n], diff[n][n];

    cout << "Enter first matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Difference of matrices:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}