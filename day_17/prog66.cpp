#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;
    int a[n1];

    for (int i = 0; i < n1; i++)
        cin >> a[i];

    cin >> n2;
    int b[n2];

    for (int i = 0; i < n2; i++)
        cin >> b[i];

    for (int i = 0; i < n1; i++) {
        bool dup = false;//bool dup is a boolean variable initialized to false. It is used to track whether the current element a[i] is a duplicate of any previous element in the array a.
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                dup = true;
                break;
            }
        }
        if (!dup)
            cout << a[i] << " ";
    }

    for (int i = 0; i < n2; i++) {
        bool found = false;//bool found is a boolean variable initialized to false. It is used to track whether the current element b[i] is found in the array a.
        for (int j = 0; j < n1; j++) {
            if (b[i] == a[j]) {
                found = true;
                break;
            }
        }
        if (!found)
            cout << b[i] << " ";
    }

    return 0;
}