#include <iostream>
using namespace std;

void calculateOrder(int qty, double price, double& total, double& tax, double& totalOrder) {
    total = qty * price;
    tax = total * 0.07;
    totalOrder = total + tax;
}

int main() {
    int xquant;
    double xprice;
    double xtotal = 0, tax = 0, totalOrder = 0;
    double gtotalorders = 0, grandTaxAllOrders = 0;

    cout << "Enter quantity and price (Press Ctrl+Z to stop): \n";
    while (cin >> xquant >> xprice) {
        calculateOrder(xquant, xprice, xtotal, tax, totalOrder);

        cout << "  -- Order Details --\n";
        cout << "  Total: $" << xtotal << "\n";
        cout << "  Tax: $" << tax << "\n";
        cout << "  Total Order: $" << totalOrder << "\n\n";

        gtotalorders += xtotal;
        grandTaxAllOrders += tax;
    }

    cout << "\n==============================\n";
    cout << "Final Sum of All Orders Total: $" << gtotalorders << endl;
    cout << "Final Sum of All Taxes: $" << grandTaxAllOrders << endl;

    return 0;
}