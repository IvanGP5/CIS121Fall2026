#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    double gpa;
};

// Loads the vector of Student structures from a file
bool loadStudents(vector<Student>& students, const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error: Could not open file '" << filename << "'." << endl;
        return false;
    }

    students.clear();
    Student temp;
    while (inFile >> temp.firstName >> temp.lastName >> temp.gpa) {
        students.push_back(temp);
    }

    inFile.close();
    return true;
}

// Displays the vector of Student structures
void displayStudents(const vector<Student>& students) {
    cout << "\n--- Student Records (Vector of Structures) ---\n";
    cout << left
        << setw(15) << "First Name"
        << setw(15) << "Last Name"
        << right << setw(8) << "GPA" << endl;
    cout << string(38, '-') << endl;

    cout << fixed << setprecision(2);
    for (size_t i = 0; i < students.size(); i++) {
        cout << left
            << setw(15) << students[i].firstName
            << setw(15) << students[i].lastName
            << right << setw(8) << students[i].gpa << endl;
    }
}

int main() {
    vector<Student> students;

    if (loadStudents(students, "students.txt")) {
        displayStudents(students);
    }

    return 0;
}