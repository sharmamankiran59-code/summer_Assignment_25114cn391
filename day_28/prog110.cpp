#include <iostream>
using namespace std;

int main() {
    string name;
    int acc;
    float bal, dep, wit;

    cout << "Bank Account System\n";

    cout << "Enter Account Number: ";
    cin >> acc;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> bal;

    cout << "\nAccount Details\n";
    cout << "Account No: " << acc << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << bal << endl;

    cout << "\nEnter Deposit Amount: ";
    cin >> dep;

    bal = bal + dep;

    cout << "Balance After Deposit: " << bal << endl;

    cout << "\nEnter Withdraw Amount: ";
    cin >> wit;

    if (wit <= bal) {
        bal = bal - wit;
        cout << "Withdrawal Successful\n";
    }
    else {
        cout << "Insufficient Balance\n";
    }

    cout << "Final Balance: " << bal;

    return 0;
}