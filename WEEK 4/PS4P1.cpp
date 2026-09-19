#include <iostream>
using namespace std;
int main () {

	double nquantity;
	double uprice;
	double eprice;
	double ntax;

	cout << "Enter Quantity: ";
	cin >> nquantity;

	if (nquantity >= 1000) { uprice = 3.00; }
	else { uprice = 5.00; }

	eprice = nquantity * uprice;
	ntax = eprice * 0.07;
	double total = eprice + ntax;

	cout << "nquantity: ";
	cout << "Unit Price: " << uprice << endl;
	cout << "Extended Price: " << eprice << endl;
	cout << "Tax: " << ntax << endl;
	cout << "Total: " << total << endl;

	return 0;

}