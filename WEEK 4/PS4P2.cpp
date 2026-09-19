#include <iostream>
using namespace std;
int main() {

	char item;
	double quant;
	double uprice;
	double eprice;

	cout << "Enter item (A or B): ";
	cin >> item;
	cout << "Enter quantity: ";
	cin >> quant;

	if (item == 'A' || item == 'a') {
		uprice = 10.00;
	}
	else if (item == 'B' || item == 'b') {
		uprice = 20.00;
	}

	eprice = quant * uprice;

	cout << "Item: " << item << endl;
	cout << "Unit Price: $" << uprice << endl;
	cout << "Extended Price: $" << eprice << endl;

	return 0;




}