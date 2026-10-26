#include <iostream>
using namespace std;

double computeTotal(int quantity, double price) {
    return quantity * price;
}

double computeDiscount(double total) {
    double discountRate = (total > 10000.00) ? 0.10 : 0.05;
    double discountAmount = total * discountRate;
    return total - discountAmount;
}

int main() {
    int xquant;
    double xprice;
    double xtotal = 0.0;
    double xdis = 0.0;

    cout << "Enter quantity and price (Press Ctrl+Z to stop): \n";
    while (cin >> xquant >> xprice) {
        double total = computeTotal(xquant, xprice);
        double discountTotal = computeDiscount(total);

        xtotal += total;
        xdis += discountTotal;

        cout << "Total: $" << total << "\n";
        cout << "Discount Total: $" << discountTotal << "\n\n";
        cout << "Enter quantity and price: ";
    }

    cout << "\n--- Final Summary ---\n";
    cout << "Sum of All Totals: $" << xtotal << "\n";
    cout << "Sum of All Discount Totals: $" << xdis << "\n";

    return 0;
}