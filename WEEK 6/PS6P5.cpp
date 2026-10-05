#include <iostream>
using namespace std;
int main() {

    char jcode;
    double whours, rate = 0.0;

    cout << "Enter job code (L, J, A): ";
    cin >> jcode;
    cout << "Enter hours worked: ";
    cin >> whours;

    if (jcode == 'L' || jcode == 'l') {
        if (whours > 40) rate = 50.00;
        else rate = 40.00;
    }
    else if (jcode == 'J' || jcode == 'j') {
        if (whours > 60) rate = 100.00;
        else rate = 75.00;
    }
    else if (jcode == 'A' || jcode == 'a') {
        if (whours > 40) rate = 25.00;
        else rate = 20.00;
    }

    double grossPay = whours * rate;
    cout << "\nGross Salary: $" << grossPay << endl;

    return 0;
}