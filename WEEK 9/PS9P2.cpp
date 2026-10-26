#include <iostream>
using namespace std;

double computeBattingAverage(int atBats, int hits) {
    if (atBats == 0) return 0.0;
    // Standard batting average calculation: hits / at bats
    return static_cast<double>(hits) / atBats;
}

int main() {
    string lname;
    int xhits, xbats;
    int pcount = 0;

    cout << "Enter player's last name, hits, and at bats (Ctrl+Z to stop):\n";
    while (cin >> lname >> xhits >> xbats) {
        pcount++;
        double avg = computeBattingAverage(xbats, xhits);

        cout << "Player: " << lname << " | Batting Average: " << avg << "\n\n";
        cout << "Enter next player: ";
    }

    cout << "\nTotal players entered: " << pcount << "\n";
    return 0;
}