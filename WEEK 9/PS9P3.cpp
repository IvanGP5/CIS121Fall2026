#include <iostream>
using namespace std;

double computeMPG(double miles, double gallons) {
    if (gallons == 0) return 0.0;
    return miles / gallons;
}

double computeGasCost(double gallons) {
    const double COST_PER_GALLON = 3.50;
    return gallons * COST_PER_GALLON;
}

int main() {
    string dcity;
    double tmiles, xgallons;
    double totalGasCostSum = 0.0;

    cout << "Enter destination city, miles travelled, and gallons used (Ctrl+Z to stop):\n";
    while (cin >> dcity >> tmiles >> xgallons) {
        double mpg = computeMPG(tmiles, xgallons);
        double cost = computeGasCost(xgallons);

        totalGasCostSum += cost;

        cout << "Destination: " << dcity << "\n";
        cout << "Enter next trip: ";
    }

    cout << "\nTotal Cost of Gas for All Trips: $" << totalGasCostSum << "\n";

    return 0;
}