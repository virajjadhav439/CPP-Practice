#include <iostream>
using namespace std;

int main()
{
    float cm;
    cout << "Enter length in centimetres: ";
    cin >> cm;

    if (cm < 0)
    {
        cout << "Invalid entry";
    }
    else
    {
        double inches = cm / 2.54;
        cout << "Length in inches: " << inches;
    }

    return 0;
}