#include <iostream>
using namespace std;
int main() 
{

    string lname;
    int chours;
    char dcode;

    double ttuition = 0.0;
    int tcredits = 0;
    int scount = 0;

    cout << "Enter student last name, credit hours, and district code (I or O) (Enter EOF / Ctrl+Z to stop):\n";

    while (cin >> lname >> chours >> dcode) {
        double rate = 0.0;
        switch (toupper(dcode)) {
        case 'I': rate = 250.0; break;
        case 'O': rate = 550.0; break;
        default:
            cout << "Invalid district code. Skipping entry.\n";
            continue;
        }

        double tuition = chours * rate;
        ttuition += tuition;
        tcredits += chours;
        scount++;

        cout << "Student: " << lname << " | Tuition Owed: $" << tuition << endl;
    }

    cout << "\nTotal Tuition Owed: $" << ttuition << endl;
    cout << "Total Credit Hours Taken: " << tcredits << endl;
    cout << "Total Number of Students: " << scount << endl;
    return 0;
}