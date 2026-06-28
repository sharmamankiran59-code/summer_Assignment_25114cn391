#include <iostream>
#include <string>
using namespace std;

int main() {
    int bookID[100], n = 0, choice, i, searchID;
    string bookName[100], author[100];

    do {
        cout << "\n===== Mini Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Book ID: ";
                cin >> bookID[n];
                cin.ignore();

                cout << "Enter Book Name: ";
                getline(cin, bookName[n]);

                cout << "Enter Author Name: ";
                getline(cin, author[n]);

                n++;
                cout << "Book added successfully.\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No books available.\n";
                } else {
                    cout << "\nBook ID\tBook Name\t\tAuthor\n";
                    for (i = 0; i < n; i++) {
                        cout << bookID[i] << "\t"
                             << bookName[i] << "\t\t"
                             << author[i] << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Book ID to search: ";
                cin >> searchID;

                for (i = 0; i < n; i++) {
                    if (bookID[i] == searchID) {
                        cout << "\nBook Found!\n";
                        cout << "Book ID: " << bookID[i] << endl;
                        cout << "Book Name: " << bookName[i] << endl;
                        cout << "Author: " << author[i] << endl;
                        break;
                    }
                }

                if (i == n)
                    cout << "Book not found.\n";
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