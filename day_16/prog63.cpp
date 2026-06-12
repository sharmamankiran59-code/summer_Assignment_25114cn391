#include <iostream>
using namespace std;

int main() {
    int n, sum;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter required sum: ";//enter required sum
    cin >> sum;

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;//it prints the pair of elements that add up to the required sum.
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No pair found.";
    }

    return 0;
}