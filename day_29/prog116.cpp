#include <iostream>
using namespace std;

int main() {
    int id[100], qty[100], n = 0;
    string name[100];
    int choice, i, searchId;

    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Product ID: ";
                cin >> id[n];
                cin.ignore();

                cout << "Enter Product Name: ";
                getline(cin, name[n]);

                cout << "Enter Quantity: ";
                cin >> qty[n];

                n++;
                cout << "Product added successfully.\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No products available.\n";
                } else {
                    cout << "\nID\tName\t\tQuantity\n";
                    for (i = 0; i < n; i++) {
                        cout << id[i] << "\t" << name[i]
                             << "\t\t" << qty[i] << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Product ID to search: ";
                cin >> searchId;

                for (i = 0; i < n; i++) {
                    if (id[i] == searchId) {
                        cout << "\nProduct Found!\n";
                        cout << "ID: " << id[i] << endl;
                        cout << "Name: " << name[i] << endl;
                        cout << "Quantity: " << qty[i] << endl;
                        break;
                    }
                }

                if (i == n)
                    cout << "Product not found.\n";
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