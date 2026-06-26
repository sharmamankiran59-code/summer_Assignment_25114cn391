#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Library Management System\n";
    cout << "Enter number of books: ";
    cin >> n;

    int id[n];
    string book[n], author[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Book ID: ";
        cin >> id[i];

        cout << "Enter Book Name: ";
        cin >> book[i];

        cout << "Enter Author Name: ";
        cin >> author[i];
    }

    cout << "\nBook Records\n";

    for (int i = 0; i < n; i++) {
        cout << "\nBook ID: " << id[i];
        cout << "\nBook Name: " << book[i];
        cout << "\nAuthor: " << author[i] << endl;
    }

    return 0;
}