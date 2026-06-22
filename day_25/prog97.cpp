#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;
    int a[n];

    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> m;
    int b[m];

    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;

    cout << "Merged Array: ";
    while (i < n && j < m) {
        if (a[i] <= b[j])
            cout << a[i++] << " ";
        else
            cout << b[j++] << " ";
    }

    while (i < n)
        cout << a[i++] << " ";

    while (j < m)
        cout << b[j++] << " ";

    return 0;
}