#include <iostream>
using namespace std;

void computePostage(double xweight, int zcode, double& xpostage, double& acharge, double& wcharge) {
    // Weight charge calculation
    double ratePerOunce;
    if (xweight > 100) {
        ratePerOunce = 0.02;
    }
    else if (xweight > 50) {
        ratePerOunce = 0.03;
    }
    else {
        ratePerOunce = 0.05;
    }
    wcharge = xweight * ratePerOunce;

    // Area charge calculation
    if (zcode == 60171) {
        acharge = 2.00;
    }
    else if (zcode == 60172) {
        acharge = 2.50;
    }
    else if (zcode == 60635) {
        acharge = 3.00;
    }
    else {
        acharge = 5.00;
    }

    // Total postage calculation
    xpostage = wcharge + acharge;
}

int main() {
    double xweight;
    int zcode;
    double xpostage, acharge, wcharge;
    int ecount = 0;

    cout << "Enter weight and zip code (Press Ctrl+Z to stop):\n";
    while (cin >> xweight >> zcode) {
        computePostage(xweight, zcode, xpostage, acharge, wcharge);
        ecount++;

        cout << "  Area Charge: $" << acharge << endl;
        cout << "  Weight Charge: $" << wcharge << endl;
        cout << "  Total Postage: $" << xpostage << endl << endl;
    }

    cout << "Total number of entries made: " << ecount << endl;
    return 0;
}