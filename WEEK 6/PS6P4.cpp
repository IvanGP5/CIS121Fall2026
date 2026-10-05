#include <iostream>
using namespace std;
int main() {

    char ecode, dayCode;
    double cost = 50.00;

    cout << "Enter equipment code (A, B, C): ";
    cin >> ecode;
    cout << "Enter day code (F for Full, H for Half): ";
    cin >> dayCode;

    if (ecode == 'A' || ecode == 'a') {
        if (dayCode == 'F' || dayCode == 'f') cost = 10.00;
        else if (dayCode == 'H' || dayCode == 'h') cost = 15.00;
    }
    else if (ecode == 'B' || ecode == 'b') {
        if (dayCode == 'F' || dayCode == 'f') cost = 20.00;
        else if (dayCode == 'H' || dayCode == 'h') cost = 35.00;
    }
    else if (ecode == 'C' || ecode == 'c') {
        if (dayCode == 'H' || dayCode == 'h') cost = 40.00;
        else if (dayCode == 'F' || dayCode == 'f') cost = 45.00;
    }

    cout << "\nRental Cost: $" << cost << endl;

    return 0;
}