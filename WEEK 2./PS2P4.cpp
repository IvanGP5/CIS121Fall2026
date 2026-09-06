# include <iostream>
using namespace std;
int main()
{
	string lname;
	double tcredits;

	cout << "Enter your last name";
	cin >> lname;
	cout << "Enter the number of credits taken";
	cin >> tcredits;

	cout << "Last name: " << lname << endl;
	cout << "Total Credits taken " << tcredits * 250 + 100;

	return 0;


}