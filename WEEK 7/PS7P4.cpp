#include <iostream>
using namespace std;
int main() 
{


    string lname;
    char jcode;
    double hwork;
    double tpay = 0.0;
    int ecount = 0;

    cout << "Enter last name, job code (L, A, J), and hours worked (Enter EOF / Ctrl+Z to stop):\n";

    while (cin >> lname >> jcode >> hwork) {
        double hourlyRate = 0.0;
        switch (toupper(jcode)) {
        case 'L': hourlyRate = 25.0; break;
        case 'A': hourlyRate = 30.0; break;
        case 'J': hourlyRate = 50.0; break;
        default:
            cout << "Invalid job code. Skipping entry.\n";
            continue;
        }

        double pay = 0.0;
        if (hwork > 40) {
            pay = (40 * hourlyRate) + ((hwork - 40) * hourlyRate * 1.5);
        }
        else {
            pay = hwork * hourlyRate;
        }

        tpay += pay;
        ecount++;
        cout << "Employee: " << lname
            << " | Code: " << jcode
            << " | Hours: " << hwork
            << " | Pay: $" << pay << endl;
    }

    if (ecount > 0) {
        double averagePay = tpay / ecount;
        cout << "\nTotal entries: " << ecount << endl;
        cout << "Average pay: $" << averagePay << endl;
    }
    else {
        cout << "\nNo valid entries recorded.\n";
    }

    return 0;


}