#include <iostream>
using namespace std;
int main()
{
	double fcost;
	double punit;
	double cunit;

	cout << "Enter fixed cost: ";
	cin >> fcost;
	cout << "Enter price per unit: ";
	cin >> punit;
	cout << "Enter cost per unit sold: ";
	cin >> cunit;

	cout << "Breakeven point: " << fcost / (punit - cunit);

	return 0;


}