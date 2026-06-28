#include <iostream>
#include <string>
using namespace std;

int main() {
    int roll[100], marks[100], n = 0;
    string name[100];
    int choice, i, searchRoll;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> roll[n];
                cin.ignore();

                cout << "Enter Student Name: ";
                getline(cin, name[n]);

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;
                cout << "Student record added successfully.\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No student records found.\n";
                } else {
                    cout << "\nRoll No\tName\t\tMarks\n";
                    for (i = 0; i < n; i++) {
                        cout << roll[i] << "\t" << name[i]
                             << "\t\t" << marks[i] << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Roll Number to search: ";
                cin >> searchRoll;

                for (i = 0; i < n; i++) {
                    if (roll[i] == searchRoll) {
                        cout << "\nStudent Found!\n";
                        cout << "Roll No: " << roll[i] << endl;
                        cout << "Name: " << name[i] << endl;
                        cout << "Marks: " << marks[i] << endl;
                        break;
                    }
                }

                if (i == n)
                    cout << "Student record not found.\n";
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