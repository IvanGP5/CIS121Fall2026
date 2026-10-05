#include <iostream>
using namespace std;
int main() {

    int partNum, qty;
    double costPerUnit = 0.0;

    cout << "Enter part number (10, 99, 55, 70, 50): ";
    cin >> partNum;
    cout << "Enter quantity: ";
    cin >> qty;

    if (qty > 1000) {
        costPerUnit = 1.00;
    }
    else if (qty > 500) {
        costPerUnit = 2.00;
    }
    else {
        costPerUnit = 5.00;
    }

    double total = qty * costPerUnit;

    cout << "\nPart Number:   " << partNum << endl;
    cout << "Cost Per Unit: $" << costPerUnit << endl;
    cout << "Total Cost:    $" << total << endl;

    return 0;
}