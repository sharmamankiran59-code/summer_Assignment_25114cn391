#include <iostream>
using namespace std;

int main() {
    int pin, choice;
    float bal = 5000, amt;

    cout << "ATM Simulation\n";
    cout << "Enter your PIN: ";
    cin >> pin;

    if (pin == 1234) {
        do {
            cout << "\n1. Check Balance";
            cout << "\n2. Withdraw Money";
            cout << "\n3. Deposit Money";
            cout << "\n4. Exit";

            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Your balance is: " << bal << endl;
                    break;

                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> amt;

                    if (amt <= bal) {
                        bal = bal - amt;
                        cout << "Withdrawal successful.\n";
                    }
                    else {
                        cout << "Insufficient balance.\n";
                    }
                    break;

                case 3:
                    cout << "Enter amount to deposit: ";
                    cin >> amt;

                    bal = bal + amt;
                    cout << "Deposit successful.\n";
                    break;

                case 4:
                    cout << "Thank you for using ATM.";
                    break;

                default:
                    cout << "Invalid choice.";
            }

        } while (choice != 4);
    }
    else {
        cout << "Wrong PIN!";
    }

    return 0;
}