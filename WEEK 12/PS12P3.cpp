#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int EMP_SIZE = 10;

void readEmployees(string first[], string last[], double salary[], int size) {
    ifstream infile("Empldata.txt");
    if (!infile) {
        cerr << "Error opening Empldata.txt!" << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        infile >> first[i] >> last[i] >> salary[i];
    }
    infile.close();
}

void displayEmployees(const string first[], const string last[], const double salary[], int size) {
    cout << "\n--- Employee Database ---" << endl;
    for (int i = 0; i < size; i++) {
        cout << first[i] << " " << last[i] << " " << salary[i] << endl;
    }
}

int searchEmployee(const string last[], int size, const string& targetLastName) {
    for (int i = 0; i < size; i++) {
        if (last[i] == targetLastName) {
            return i;
        }
    }
    return -1;
}

int main() {
    string firstName[EMP_SIZE];
    string lastName[EMP_SIZE];
    double salary[EMP_SIZE];

    readEmployees(firstName, lastName, salary, EMP_SIZE);
    displayEmployees(firstName, lastName, salary, EMP_SIZE);

    string searchName;
    while (true) {
        cout << "\nEnter last name to search (or type 'quit' to exit): ";
        cin >> searchName;
        if (searchName == "quit") {
            break;
        }

        int index = searchEmployee(lastName, EMP_SIZE, searchName);
        if (index != -1) {
            cout << firstName[index] << " " << lastName[index] << " " << salary[index] << endl;
        }
        else {
            cout << searchName << " not found" << endl;
        }
    }

    return 0;
}