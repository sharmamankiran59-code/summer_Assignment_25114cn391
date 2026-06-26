#include <iostream>
using namespace std;

int main() {
    string name, place;
    int n, price, total;

    cout << "Ticket Booking System\n";

    cout << "Enter Customer Name: ";
    cin >> name;

    cout << "Enter Destination: ";
    cin >> place;

    cout << "Enter Number of Tickets: ";
    cin >> n;

    cout << "Enter Ticket Price: ";
    cin >> price;

    total = n * price;

    cout << "\nBooking Details\n";
    cout << "Name: " << name << endl;
    cout << "Destination: " << place << endl;
    cout << "Tickets: " << n << endl;
    cout << "Total Amount: " << total << endl;

    cout << "Ticket Booking Successful!";

    return 0;
}