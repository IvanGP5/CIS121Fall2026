#include <iostream>
using namespace std;
int main() {
    string lName;
    int ndepend;
    double gIncome;
    double agincome;
    double taxRate;
    double incomeTax;

    
    cout << "Enter last name: ";
    cin >> lName;
    cout << "Enter number of dependents: ";
    cin >> ndepend;
    cout << "Enter gross income: ";
    cin >> gIncome;


    agincome = gIncome - (ndepend * 12000.00); 

     
    if (agincome > 50000.00) {
        taxRate = 0.20;
    }
    else
        taxRate = 0.10;

    incomeTax = agincome * taxRate; 
 
        if (incomeTax < 0) {
            incomeTax = 100.00; 
        }


    cout << "Last Name:             " << lName << endl;
    cout << "Gross Income:          $" << gIncome << endl;
    cout << "Number of Dependents:  " << ndepend << endl;
    cout << "Adjusted Gross Income: $" << agincome << endl;
    cout << "Income Tax:            $" << incomeTax << endl;

    return 0;
}