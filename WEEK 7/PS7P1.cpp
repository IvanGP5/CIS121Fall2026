#include <iostream>
using namespace std;
int main() 

{
    double xquant, xprice;
    double totalDiscountedPrices = 0.0;

    cout << "Enter quantity and price (Enter EOF / Ctrl+Z to stop):\n";

    while (cin >> xquant >> xprice) {
        double extended = xquant * xprice;
        double discount = 0.0;

        if (xquant > 1000) {
            discount = extended * 0.10;
        }

        double discountedPrice = extended - discount;
        totalDiscountedPrices += discountedPrice;

        cout << "Quantity: " << xquant
            << " | Price: $" << xprice
            << " | Extended: $" << extended
            << " | Discount: $" << discount
            << " | Discounted Price: $" << discountedPrice << endl;
    }

    cout << "\nTotal of all discounted prices: $" << totalDiscountedPrices << endl;
    return 0;
}