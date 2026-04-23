#include <iostream>
using namespace std;

int main() {
    double temp;

    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    if (temp < -273.15) {
        cout << "Invalid temperature (below absolute zero)" << endl;
    }
    else if (temp == -273.15) {
        cout << "Temperature is absolute zero" << endl;
    }
    else if (temp > -273.15 && temp < 0) {
        cout << "Temperature is below freezing" << endl;
    }
    else if (temp == 0) {
        cout << "Temperature is at the freezing point" << endl;
    }
    else if (temp > 0 && temp < 100) {
        cout << "Temperature is in the normal range" << endl;
    }
    else if (temp == 100) {
        cout << "Temperature is at the boiling point" << endl;
    }
    else { // temp > 100
        cout << "Temperature is above the boiling point" << endl;
    }

    return 0;
}