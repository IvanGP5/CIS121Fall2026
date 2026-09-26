#include <iostream>
using namespace std;
int main() 
{
	double wmetal;
	double mrate;
	double xtotal;

	cout << "Enter the weight of the metal in pounds: ";
	cin >> wmetal;

	if (wmetal > 100)
	{
		mrate = 0.50;
	}
	else if (wmetal >= 30)
	{
		mrate = 0.25;
	}
	else if (wmetal >= 20)
	{
		mrate = 0.20;
	}
	else 
	{
		mrate = 0.10;
	}
	xtotal = wmetal * mrate;

	cout << " Weight of the metal: " << wmetal << endl;
	cout << " Rate per pound: " << mrate << endl;
	cout << " Total given to customer: " << xtotal << endl;

	return 0;

}