#include <iostream>
using namespace std;

string toUpperCase(string s) {
    (s.begin(), s.end(), s.begin(), ::toupper);
    return s;
}

double getLabFee(string dept, string courseCode) {
    dept = toUpperCase(dept);

    if (dept == "CIS" && courseCode == "101") return 50.0;
    if (dept == "CIS" && courseCode == "121") return 100.0;
    if (dept == "MAT" && courseCode == "111") return 25.0;
    if (dept == "MAT" && courseCode == "112") return 35.0;
    if (dept == "ENG" && courseCode == "100") return 55.0;

    return 50.0; // All others
}

int main() {
    string xdept, xcode;
    double tfees = 0.0;
    int xcount = 0;

    cout << "Enter course details (Department, Course Code). Press Ctrl+Z to stop.\n";
    cout << "Department: ";
    while (cin >> xdept >> xcode) {
        double fee = getLabFee(xdept, xcode);
        tfees += fee;
        xcount++;

        cout << "Dept: " << toUpperCase(xdept)
            << " | Course: " << xcode
            << " | Lab Fee: $" << fee << "\n\n";
        cout << "Department: ";
    }

    cout << "\n--- Summary ---\n";
    cout << "Total Lab Fees to Collect: $" << tfees << "\n";
    if (xcount > 0) {
        cout << "Average Lab Fee: $" << (tfees / xcount) << "\n";
    }

    return 0;
}