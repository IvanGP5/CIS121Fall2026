#include <iostream>
using namespace std;
int main()
{
	double pprice;
	double cprice;

	cout << "Enter purchase price: ";
	cin >> pprice;
	cout << "Enter current price: ";
	cin >> cprice;

	cout << "Percentage change: " << (cprice - pprice) / pprice * 100 << "%";

	return 0;


}