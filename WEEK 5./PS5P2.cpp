#include <iostream>
using namespace std;
int main()
{
	double qapple;
	double ppound;
	double xtotal;

	cout << "Enter apple quantity in pounds: ";
	cin >> qapple;

	if (qapple >= 100)
		ppound = 0.10;

	else if (qapple >= 50)
		ppound = 0.25;

	else
		ppound = 0.50;

	xtotal = qapple * ppound;

	cout << "Price per pound is: " << ppound << endl;
	cout << "Total cost is: " << xtotal << endl;
	
	return 0;


}