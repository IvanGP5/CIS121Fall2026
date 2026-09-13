#include <iostream>
using namespace std;
int main()
{

	double tmeal;
	string tip = "15%";

	cout << "Enter cost of meal ";
	cin >> tmeal;

	cout << "Meal total: " << tmeal;

	cout << "Tip: " << tip;
	cout << "Bill total: " << tmeal * 0.15 + tmeal;


	return 0;

}