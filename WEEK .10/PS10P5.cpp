#include <iostream>
#include <cmath>
using namespace std;

void calculateInvestment(double investment, double rate5, double rate10, double& fiveYearAmount, double& tenYearAmount) {
    fiveYearAmount = investment * pow(1.0 + rate5, 5);
    tenYearAmount = investment * pow(1.0 + rate10, 10);
}

int main() {
    double investment, rate5, rate10;
    double fiveYearAmount, tenYearAmount;

    cout << "Enter investment amount, 5-year rate, and 10-year rate (Ctrl+Z to stop):\n";
    while (cin >> investment >> rate5 >> rate10) {
        calculateInvestment(investment, rate5, rate10, fiveYearAmount, tenYearAmount);

        cout << "Investment Amount: $" << investment << endl;
        cout << "  5-Year Amount: $" << fiveYearAmount << endl;
        cout << "  10-Year Amount: $" << tenYearAmount << endl << endl;
    }

    return 0;
}