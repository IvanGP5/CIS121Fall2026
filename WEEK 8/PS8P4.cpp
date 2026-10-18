#include <iostream>
using namespace std;

double getUnitPrice(char code) {
    code = toupper(code);
    if (code == 'W') return 10.0;
    if (code == 'C') return 15.0;
    if (code == 'G') return 20.0;
    return 0.0;
}

double computeShipping(char code) {
    code = toupper(code);
    if (code == 'W') return 2.0;
    if (code == 'C') return 5.0;
    if (code == 'G') return 7.0;
    return 0.0;
}

int main() {
    char xcode;
    int qty;
    double gtotal = 0.0;

    cout << "Enter order details (Product Code [W/C/G], Quantity). Press Ctrl+Z to stop.\n";
    cout << "Product Code: ";
    while (cin >> xcode >> qty) {
        double unitPrice = getUnitPrice(xcode);
        double shipping = computeShipping(xcode);
        double extendedPrice = qty * unitPrice;
        double orderTotal = extendedPrice + shipping;

        gtotal += orderTotal;

        cout << "Code: " << (char)toupper(xcode)
            << " | Unit Price: $" << unitPrice
            << " | Shipping: $" << shipping
            << " | Ext. Price: $" << extendedPrice
            << " | Total: $" << orderTotal << "\n\n";
        cout << "Product Code: ";
    }

    cout << "\n--- Summary ---\n";
    cout << "Grand Total of All Entries: $" << gtotal << "\n";

    return 0;
}