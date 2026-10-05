#include <iostream>
using namespace std;
int main() {

    int qty;
    char cstat;
    double price = 0.0;

    cout << "Enter quantity of widgets: ";
    cin >> qty;
    cout << "Enter customer status: ";
    cin >> cstat;

    if (qty > 10000) {
        if (cstat == 'A' || cstat == 'a') price = 10.0;
        else if (cstat == 'B' || cstat == 'b') price = 12.0;
        else price = 30.0;
    }
    else if (qty >= 5000 && qty <= 10000) {
        if (cstat == 'C' || cstat == 'c') price = 20.0;
        else if (cstat == 'D' || cstat == 'd') price = 22.0;
        else price = 30.0;
    }
    else {
        price = 30.0;
    }

    double extendedPrice = qty * price;
    double tax = extendedPrice * 0.07;
    double total = extendedPrice + tax;

    cout << "\nExtended Price: $" << extendedPrice << endl;
    cout << "Tax Amount:     $" << tax << endl;
    cout << "Total Cost:     $" << total << endl;

    return 0;
}
