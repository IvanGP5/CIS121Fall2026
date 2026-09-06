#include <iostream>
using namespace std;
int main()
{
	double xlength;
	double xwidth;

	cout << "Enter Length ";
	cin >> xlength;
	cout << "Enter Width ";
	cin >> xwidth;

	cout << "Area is " << xlength * xwidth;
	cout << "Circumference is " << 2 * xlength + 2 * xwidth;

	return 0;



}