#include <iostream>
using namespace std;
int main() {

    int ntick;
    char lcode;
    double price = 0.0;

    cout << "Enter number of tickets: ";
    cin >> ntick;
    cout << "Enter location code (H or L): ";
    cin >> lcode;

    if (ntick > 25 || lcode == 'H' || lcode == 'h') {
        price = 30.00;
    }
    else if ((ntick >= 10 && ntick   <= 24) || lcode == 'L' || lcode == 'l') {
        price = 40.00;
    }
    else {
        price = 50.00;
    }

    double total = ntick * price;

    cout << "\nNumber of Tickets:  " << ntick << endl;
    cout << "Price Per Ticket:   $" << price << endl;
    cout << "Total Cost:         $" << total << endl;

    return 0;
}