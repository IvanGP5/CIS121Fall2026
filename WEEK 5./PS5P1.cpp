#include <iostream>
using namespace std;
int main()
{
	string lname;
	double xscore;
	string xgrade;

	cout << "Enter last name: ";
	cin >> lname;
	cout << "Enter score: ";
	cin >> xscore;

	if (xscore >= 90)
	{
		xgrade = "A";
	}
	else if (xscore >= 80)
	{
		xgrade = "B";
	}
	else if (xscore >= 70)
	{
		xgrade = "C";
	}
	else if (xscore >= 60)

		xgrade = "D";

	else
	{
		xgrade = "F";
	}

	cout << lname << " has grade " << xgrade << endl;
	return 0;
}