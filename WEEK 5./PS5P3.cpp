#include <iostream>
using namespace std;
int main() 
{
	string lname;
	double xhours;
	string jcode;
	double prate;
	double tpay;

	cout << "Enter last name: ";
	cin >> lname;
	cout << "Enter hours worked: ";
	cin >> xhours;
	cout << "Enter job code: ";
	cin >> jcode;

	if (jcode == "E")
	{ 
		prate = 25.00;
	}
	else if (jcode == "J")
	{
		prate = 20.00;
	}
	else if (jcode == "A")
	{
		prate = 15.00;
	}
	tpay = xhours * prate;

	cout << "Last name: " << lname << endl;
	cout << "Hours worked: " << xhours << endl;
	cout << "Pay rate: $" << prate << endl;
	cout << "Total pay: $" << tpay << endl;

	return 0;

}