#include <iostream>
#include <vector>//vector header file is included to use the vector container for storing the input elements.
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> arr(n - 1);//it creates a vector of integers named arr with a size of n - 1, which will be used to store the input elements.
    int sum = 0;

    cout << "Enter " << n - 1 << " elements:\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missingNumber = expectedSum - sum;

    cout << "Missing number is: " << missingNumber << endl;

    return 0;
}