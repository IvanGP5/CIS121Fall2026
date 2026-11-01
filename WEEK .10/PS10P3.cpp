#include <iostream>
using namespace std;

void calculateTuition(int creditHours, double financialAid, double& tuition, double& tuitionOwed) {
    tuition = creditHours * 250.0;
    tuitionOwed = tuition - financialAid;
}

int main() {
    string lname;
    int chours;
    double faid;
    double xtuition, towed;

    double totalTuitionOwedAll = 0;
    int ecount = 0;

    cout << "Enter last name, credit hours, and financial aid (Ctrl+Z to stop):\n";
    while (cin >> lname >> chours >> faid) {
        calculateTuition(chours, faid, xtuition, towed);
        ecount++;
        totalTuitionOwedAll += towed;

        cout << "Student: " << lname << endl;
        cout << "  Tuition: $" << xtuition << endl;
        cout << "  Tuition Owed: $" << towed << endl << endl;
    }

    cout << "==============================\n";
    cout << "Total tuition owed by all students: $" << totalTuitionOwedAll << endl;
    cout << "Count of number of entries: " << ecount << endl;
    if (ecount > 0) {
        cout << "Average amount owed by students: $" << (totalTuitionOwedAll / ecount) << endl;
    }
    else {
        cout << "Average amount owed by students: $0.00\n";
    }

    return 0;
}