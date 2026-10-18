#include <iostream>
using namespace std;

double computeMPG(double miles, double gallons) {
    if (gallons <= 0) return 0.0;
    return miles / gallons;
}

int main() {
    string xcity;
    double xmiles, xgallons;
    double tmiles = 0.0;
    int ctrip = 0;

    cout << "Enter trip details (Destination, Miles, Gallons). Press Ctrl+Z to stop.\n";
    cout << "Destination: ";
    while (cin >> xcity >> xmiles >> xgallons) {
        double mpg = computeMPG(xmiles, xgallons);
        tmiles += xmiles;
        ctrip++;

        cout << "Destination: " << xcity << " | MPG: " << mpg << "\n\n";
        cout << "Destination: ";
    }

    cout << "\n--- Summary ---\n";
    cout << "Total Miles Traveled: " << tmiles << "\n";
    cout << "Total Trips Made: " << ctrip << "\n";

    return 0;
}