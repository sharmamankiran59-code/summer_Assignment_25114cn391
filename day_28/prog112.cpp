#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Contact Management System\n";
    cout << "Enter number of contacts: ";
    cin >> n;

    string name[n], phone[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Contact Name: ";
        cin >> name[i];

        cout << "Enter Phone Number: ";
        cin >> phone[i];
    }

    cout << "\nContact List\n";

    for (int i = 0; i < n; i++) {
        cout << "\nName: " << name[i];
        cout << "\nPhone: " << phone[i] << endl;
    }

    return 0;
}