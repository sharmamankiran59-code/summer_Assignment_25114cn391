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

    cout << "Column-wise sum:\n";
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i][j];
        }
        cout << "Column " << j + 1 << " sum = " << sum << endl;
    }

    return 0;
}