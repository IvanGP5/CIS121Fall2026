#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int NUM_CARS = 10;

struct Car {
    string make;
    string model;
    double msrp;
};

// Loads the array of Car structures from a file
bool loadCars(Car cars[], int size, const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error: Could not open file '" << filename << "'." << endl;
        return false;
    }

    int count = 0;
    while (count < size && inFile >> cars[count].make >> cars[count].model >> cars[count].msrp) {
        count++;
    }

    inFile.close();

    if (count < size) {
        cerr << "Warning: Expected " << size << " records, but loaded " << count << "." << endl;
    }

    return true;
}

// Displays the array of Car structures
void displayCars(const Car cars[], int size) {
    cout << "\n--- Vehicle Inventory (Array of Structures) ---\n";
    cout << left
        << setw(15) << "Make"
        << setw(15) << "Model"
        << right << setw(12) << "MSRP" << endl;
    cout << string(42, '-') << endl;

    cout << fixed << setprecision(2);
    for (int i = 0; i < size; i++) {
        cout << left
            << setw(15) << cars[i].make
            << setw(15) << cars[i].model
            << right << "$" << setw(11) << cars[i].msrp << endl;
    }
}

int main() {
    Car cars[NUM_CARS];

    if (loadCars(cars, NUM_CARS, "cars.txt")) {
        displayCars(cars, NUM_CARS);
    }

    return 0;
}