#include <iostream>
using namespace std;
int main() 
{


    string lName;
    int xhits, xBats;
    int pCount = 0;

    cout << "Enter last name, hits, and at bats (Enter EOF / Ctrl+Z to stop):\n";

    while (cin >> lName >> xhits >> xBats) {
        if (xBats == 0) {
            cout << "At bats cannot be zero. Skipping entry.\n";
            continue;
        }

        double battingAverage = static_cast<double>(xhits) / xBats;
        pCount++;

        cout << "Player: " << lName << " | Batting Average: " << battingAverage << endl;
    }

    cout << "\nTotal number of players entered: " << pCount << endl;
    return 0;
}