#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int SIZE = 10;

void readStudents(string first[], string last[], double gpa[], int size) {
    ifstream infile("students.txt");
    if (!infile) {
        cerr << "Error opening student data file!" << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        infile >> first[i] >> last[i] >> gpa[i];
    }
    infile.close();
}

void displayStudents(const string first[], const string last[], const double gpa[], int size) {
    cout << "\n--- Student Records (Original Order) ---" << endl;
    for (int i = 0; i < size; i++) {
        cout << first[i] << " " << last[i] << " " << gpa[i] << endl;
    }
}

void displayReverse(const string first[], const string last[], const double gpa[], int size) {
    cout << "\n--- Student Records (Reverse Order) ---" << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << first[i] << " " << last[i] << " " << gpa[i] << endl;
    }
}

int main() {
    string firstName[SIZE];
    string lastName[SIZE];
    double gpa[SIZE];

    readStudents(firstName, lastName, gpa, SIZE);
    displayStudents(firstName, lastName, gpa, SIZE);
    displayReverse(firstName, lastName, gpa, SIZE);

    return 0;
}