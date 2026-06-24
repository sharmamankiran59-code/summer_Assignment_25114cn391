#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Employee Management System\n";
    cout << "Enter number of employees: ";
    cin >> n;

    int id[n], sal[n];
    string name[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Employee ID: ";
        cin >> id[i];

        cout << "Enter Employee Name: ";
        cin >> name[i];

        cout << "Enter Salary: ";
        cin >> sal[i];
    }

    cout << "\nEmployee Records\n";

    for (int i = 0; i < n; i++) {
        cout << "\nID: " << id[i];
        cout << "\nName: " << name[i];
        cout << "\nSalary: " << sal[i] << endl;
    }

    return 0;
}