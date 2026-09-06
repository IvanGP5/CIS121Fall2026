# include <iostream>
using namespace std;
int main()
{
	double pitem;
	double pdiscount;

	cout << "Enter item price ";
	cin >> pitem;
	cout << "Enter discount percentage ";
	cin >> pdiscount;

	cout << "Total price after discount is " << pitem - (pitem * pdiscount / 100);
	cout << endl;

	return 0;




}