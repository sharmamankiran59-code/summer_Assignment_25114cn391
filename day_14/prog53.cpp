#include <iostream>
using namespace std;

int main() {
    int n, key;

    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> key;

    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            cout << "Element found at position " << i + 1;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}