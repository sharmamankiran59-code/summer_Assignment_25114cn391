#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";//enter size of array
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";//enter array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxFreq = 0, maxElement;//variables to store the maximum frequency and the corresponding element

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum frequency element: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}