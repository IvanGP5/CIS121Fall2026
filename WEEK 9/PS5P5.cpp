#include <iostream>
using namespace std;

double getCostPerCredit(char districtCode) {
    if (toupper(districtCode) == 'I') {
        return 250.0;
    }
    else if (toupper(districtCode) == 'O') {
        return 550.0;
    }
    return 0.0;
}

double computeTuition(int creditHours, double costPerCredit) {
    return creditHours * costPerCredit;
}

int main() {
    string lname;
    int chours;
    char dcode;
    double ttuition = 0.0;

    cout << "Enter student last name, credit hours, and district code (I/O) (Ctrl+Z to stop):\n";
    while (cin >> lname >> chours >> dcode) {
        double costPerCredit = getCostPerCredit(dcode);
        double tuition = computeTuition(chours, costPerCredit);

        ttuition += tuition;

        cout << "Student: " << lname << " | Tuition Cost: $" << tuition << "\n\n";
        cout << "Enter next student: ";
    }

    cout << "\nTotal of All Tuition Costs: $" << ttuition << "\n";
    return 0;
}