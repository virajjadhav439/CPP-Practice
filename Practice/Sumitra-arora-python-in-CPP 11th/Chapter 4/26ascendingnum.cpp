#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cout << "Enter the Value for A: ";
    cin >> A;

    cout << "Enter the Value for B: ";
    cin >> B;

    cout << "Enter the Value for C: ";
    cin >> C;

    int smallest, middle, largest;

    // Find smallest
    if (A <= B && A <= C)
        smallest = A;
    else if (B <= A && B <= C)
        smallest = B;
    else
        smallest = C;

    // Find largest
    if (A >= B && A >= C)
        largest = A;
    else if (B >= A && B >= C)
        largest = B;
    else
        largest = C;

    // Find middle
    middle = A + B + C - smallest - largest;

    cout << "Smallest Number: " << smallest << endl;
    cout << "Next Higher Number: " << middle << endl;
    cout << "Highest Number: " << largest << endl;

    return 0;
}