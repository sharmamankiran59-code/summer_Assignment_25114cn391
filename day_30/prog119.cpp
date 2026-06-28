#include <iostream>
#include <string>
using namespace std;

int main() {
    int empID[100], salary[100], n = 0;
    string empName[100], department[100];
    int choice, i, searchID;

    do {
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> empID[n];
                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, empName[n]);

                cout << "Enter Department: ";
                getline(cin, department[n]);

                cout << "Enter Salary: ";
                cin >> salary[n];

                n++;
                cout << "Employee added successfully.\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No employee records available.\n";
                } else {
                    cout << "\nID\tName\t\tDepartment\tSalary\n";
                    for (i = 0; i < n; i++) {
                        cout << empID[i] << "\t"
                             << empName[i] << "\t\t"
                             << department[i] << "\t\t"
                             << salary[i] << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Employee ID to search: ";
                cin >> searchID;

                for (i = 0; i < n; i++) {
                    if (empID[i] == searchID) {
                        cout << "\nEmployee Found!\n";
                        cout << "ID: " << empID[i] << endl;
                        cout << "Name: " << empName[i] << endl;
                        cout << "Department: " << department[i] << endl;
                        cout << "Salary: " << salary[i] << endl;
                        break;
                    }
                }

                if (i == n)
                    cout << "Employee not found.\n";
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}