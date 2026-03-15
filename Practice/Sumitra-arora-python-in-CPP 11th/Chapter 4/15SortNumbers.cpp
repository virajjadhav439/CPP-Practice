#include <iostream>
using namespace std;

int main() {
    int N;
    int num;
    
    cout << "Enter the Number of Numbers you want to Compare : ";
    cin >> N;

    int largest = 0;
    int sec_largest = 0;

    for (int i = 0; i < N; i++)
    {
        cout << "Enter Number " << i+1 << " : ";
        cin >> num;

        if (num > largest)
        {
            sec_largest = largest;
            largest = num;
        }
        else if (num > sec_largest && num != largest)
        {
            sec_largest = num;
        }
    }

    cout << "The Second Largest number is : " << sec_largest;

    return 0;
}