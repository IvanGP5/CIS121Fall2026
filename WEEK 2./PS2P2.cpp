# include <iostream>
using namespace std;
int main()
{
	string lname;
	double thours;
	double prate;

	cout << "Enter Employee Last Name";
	cin >> lname;
	cout << "Enter hours worked";
	cin >> thours;
	cout << "Enter pay rate";
	cin >> prate;

	cout << "Employee: " << lname << endl;
	cout << "Gross pay: " << thours * prate << endl;

	return 0;



}