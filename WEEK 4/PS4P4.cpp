#include <iostream>
using namespace std;
int main() {


    string aname;
    double acost;
    double wcost;
    double ntotal;

    cout << "Enter appliance name: ";
    cin >> aname;
    cout << "Enter cost of the appliance: ";
    cin >> acost;

   
    if (acost > 1000.00) {
        wcost = acost * 0.10;
    }
    else {
        wcost = acost * 0.05;
    }

    ntotal = acost + wcost;

    cout << "Appliance Name: " << aname << endl;
    cout << "Appliance Cost: $" << acost << endl;
    cout << "Warranty Cost:  $" << wcost << endl;
    cout << "Total:          $" << ntotal << endl;

    return 0;
}