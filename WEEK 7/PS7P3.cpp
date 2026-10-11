#include <iostream>
using namespace std;
int main() 
{

    string dcity;
    double xmiles, xgallons;
    double tmiles = 0.0;
    int tcount = 0;

    cout << "Enter destination city, miles travelled, and gallons used (Enter EOF / Ctrl+Z to stop):\n";

    while (cin >> dcity >> xmiles >> xgallons) {
        if (xgallons == 0) {
            cout << "Gallons used cannot be zero. Skipping entry.\n";
            continue;
        }

        double mpg = xmiles / xgallons;
        tmiles += xmiles;
        tcount++;

        cout << "Destination: " << dcity << " | MPG: " << mpg << endl;
    }

    cout << "\nTotal miles travelled: " << tmiles << endl;
    cout << "Total number of trips: " << tcount << endl;
    return 0;


}