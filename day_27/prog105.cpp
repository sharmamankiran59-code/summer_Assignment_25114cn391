#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Student Record Management System\n";
    cout << "Enter number of students: ";
    cin >> n;

    int r[n], m[n];
    string nm[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Roll No: ";
        cin >> r[i];

        cout << "Enter Name: ";
        cin >> nm[i];

        cout << "Enter Marks: ";
        cin >> m[i];
    }

    cout << "\nStudent Records\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll No: " << r[i];
        cout << "\nName: " << nm[i];
        cout << "\nMarks: " << m[i] << endl;
    }

    return 0;
}