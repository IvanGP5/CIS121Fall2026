#include <iostream>
using namespace std;
int main()
{
	double asalary;
	double trate;
	double towed;

	cout << "Enter Annual Salary: ";
	cin >> asalary;

	if (asalary > 100000)
			{
		trate = 0.40;
	}
	else if (asalary >= 50000)
	{
		trate = 0.35;
	}
	else
	{
		trate = 0.25;
	}
	towed = asalary * trate;
	
	cout << "Annual Salary: " << asalary << endl;
	cout << "Tax Rate: " << trate * 100 << "%" << endl;
	cout << "Tax Owed: " << towed << endl;

	return 0;

}