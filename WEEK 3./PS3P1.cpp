#include <iostream>;
using namespace std;
int main()
{
	double xtest;
	double ytest;

	cout << "Enter test one's score ";
	cin >> xtest;
	cout << "Enter test two's score ";
	cin >> ytest;
	
	cout << "Total score " << xtest * .60 + ytest * .40;

	return 0;


}