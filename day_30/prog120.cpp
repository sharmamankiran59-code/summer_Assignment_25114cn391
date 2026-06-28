#include <iostream>
#include <string>
using namespace std;

int roll[100], marks[100], n = 0;
string name[100];

void addStudent() {
    cout << "\nEnter Roll Number: ";
    cin >> roll[n];
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name[n]);

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
    cout << "Student added successfully!\n";
}

void displayStudents() {
    if (n == 0) {
        cout << "\nNo student records found.\n";
        return;
    }

    cout << "\nRoll\tName\t\tMarks\n";
    for (int i = 0; i < n; i++) {
        cout << roll[i] << "\t" << name[i] << "\t\t" << marks[i] << endl;
    }
}

void searchStudent() {
    int searchRoll;
    cout << "\nEnter Roll Number to search: ";
    cin >> searchRoll;

    for (int i = 0; i < n; i++) {
        if (roll[i] == searchRoll) {
            cout << "\nStudent Found!\n";
            cout << "Roll No: " << roll[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            return;
        }
    }

    cout << "Student not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}