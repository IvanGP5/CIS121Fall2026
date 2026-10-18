#include <iostream>
using namespace std;

double calculatePay(char jobCode, double hours) {
    double rate = 0.0;
    jobCode = toupper(jobCode);

    if (jobCode == 'L') rate = 25.0;
    else if (jobCode == 'A') rate = 30.0;
    else if (jobCode == 'J') rate = 50.0;

    if (hours > 40) {
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    }
    return hours * rate;
}

int main() {
    string lname;
    char jcode;
    double hwork;
    double totalPaySum = 0.0;
    int ecount = 0;

    cout << "Enter employee details (Last Name, Job Code [L/A/J], Hours). Press Ctrl+Z to stop.\n";
    cout << "Last Name: ";
    while (cin >> lname >> jcode >> hwork) {
        double pay = calculatePay(jcode, hwork);
        totalPaySum += pay;
        ecount++;

        cout << "Employee: " << lname << " | Pay: $" << pay << "\n\n";
        cout << "Last Name: ";
    }

    cout << "\n--- Summary ---\n";
    cout << "Total Pay: $" << totalPaySum << "\n";
    cout << "Total Entries: " << ecount << "\n";
    if (ecount > 0) {
        cout << "Average Pay: $" << (totalPaySum / ecount) << "\n";
    }

    return 0;
}