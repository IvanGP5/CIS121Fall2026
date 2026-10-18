#include <iostream>
using namespace std;

double computeTuition(int credits) {
    return credits * 250.0;
}

int main() {
    string lname;
    int xcredits;
    double xtuition = 0.0;
    int cstudent = 0;

    cout << "Enter student details (Last Name, Credits). Press Ctrl+Z to stop.\n";
    cout << "Last Name: ";
    while (cin >> lname >> xcredits) {
        double tuition = computeTuition(xcredits);
        xtuition += tuition;
        cstudent++;

        cout << "Student: " << lname << " | Credits: " << xcredits << " | Tuition Owed: $" << tuition << "\n\n";
        cout << "Last Name: ";
    }

    cout << "\n--- Summary ---\n";
    cout << "Total Tuition Collected: $" << xtuition << "\n";
    cout << "Total Students: " << cstudent << "\n";

    return 0;
}