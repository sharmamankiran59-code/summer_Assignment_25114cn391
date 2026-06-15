#include <iostream>
#include <vector>//vetor is used to store a collection of integers. It is a dynamic array that can resize itself automatically when elements are added or removed. In this code, we declare a vector named arr with a size of n, which will hold the input integers.
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[i], arr[minIndex]);
    }

    for (int x : arr)
        cout << x << " ";

    return 0;
}