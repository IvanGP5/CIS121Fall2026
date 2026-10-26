#include <iostream>
using namespace std;

double getPayRate(char jobCode) {
    switch (toupper(jobCode)) {
    case 'L': return 25.0;
    case 'A': return 30.0;
    case 'J': return 50.0;
    default: return 0.0;
    }
}

double computeGrossPay(double hours, double rate) {
    if (hours <= 40) {
        return hours * rate;
    }
    else {
        double regularPay = 40 * rate;
        double overtimeHours = hours - 40;
        double overtimePay = overtimeHours * (rate * 1.5);
        return regularPay + overtimePay;
    }
}

int main() {
    string lname;
    char jcode;
    double xhours;
    double tpay = 0.0;

    cout << "Enter last name, job code (L/A/J), and hours worked (Ctrl+Z to stop):\n";
    while (cin >> lname >> jcode >> xhours) {
        double rate = getPayRate(jcode);
        double grossPay = computeGrossPay(xhours, rate);

        tpay += grossPay;

        cout << "Employee: " << lname << " | Gross Pay: $" << grossPay << "\n\n";
        cout << "Enter next employee: ";
    }

    cout << "\nTotal of All Gross Pay: $" << tpay << "\n";

    return 0;
}