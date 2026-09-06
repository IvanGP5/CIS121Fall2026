#include <iostream>
using namespace std;
int main()
{
	float r1, r2;
	float s;
	float p;
	float d;

	cout << "Enter any real number";
	cin >> r1;
	cout << "Enter any real number";
	cin >> r2;

	s = r1 + r2;
	p = r1 * r2;
	d = r1 / r2;

	cout << "Sum of numbers = " << s << endl;
	cout << "Product of numbers = " << p << endl;
	cout << "Difference of numbers = " << d << endl;

	return 0;


}