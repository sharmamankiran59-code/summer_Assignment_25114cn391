#include <iostream>
using namespace std;

int main() {
    string name;
    int r, m1, m2, m3, total;
    float per;

    cout << "Marksheet Generation System\n";

    cout << "Enter Roll No: ";
    cin >> r;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter marks of 3 subjects:\n";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    per = total / 3.0;

    cout << "\n----- Marksheet -----\n";
    cout << "Roll No: " << r << endl;
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << per << "%" << endl;

    if (per >= 40)
        cout << "Result: Pass";
    else
        cout << "Result: Fail";

    return 0;
}