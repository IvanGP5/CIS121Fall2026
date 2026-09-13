#include <iostream>
using namespace std;
int main()
{
	double sprice;
	double qstock;

	cout << "Enter current stock price ";
	cin >> sprice;
	cout << "Enter amount owned ";
	cin >> qstock;

	cout << "Total portfolio value " << sprice * qstock;

	return 0;


}