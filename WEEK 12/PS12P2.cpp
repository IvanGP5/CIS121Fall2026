#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int CITY_SIZE = 8;

void readCities(string cities[], long populations[], int size) {
    ifstream infile("cities.txt");
    if (!infile) {
        cerr << "Error opening cities data file!" << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        infile >> cities[i] >> populations[i];
    }
    infile.close();
}

void displayCities(const string cities[], const long populations[], int size) {
    cout << "\n--- City Population Database ---" << endl;
    for (int i = 0; i < size; i++) {
        cout << cities[i] << " " << populations[i] << endl;
    }
}

int searchCity(const string cities[], int size, const string& target) {
    for (int i = 0; i < size; i++) {
        if (cities[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    string cities[CITY_SIZE];
    long populations[CITY_SIZE];

    readCities(cities, populations, CITY_SIZE);
    displayCities(cities, populations, CITY_SIZE);

    string searchTarget;
    cout << "\nEnter city name, ctl+z to stop: ";
    while (cin >> searchTarget) {
        int index = searchCity(cities, CITY_SIZE, searchTarget);
        if (index != -1) {
            cout << cities[index] << " has a population of " << populations[index] << endl;
        }
        else {
            cout << searchTarget << " not found" << endl;
        }
        cout << "Enter city name, ctl+z to stop: ";
    }

    cout << "\nGoodbye. Have a nice day." << endl;
    return 0;
}