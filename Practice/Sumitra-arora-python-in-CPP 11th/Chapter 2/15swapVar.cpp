// Wrilea program to read three numbers in three variables and swap first two variables with the sums of
// first and second, second and third numbers respectively.
#include <iostream>
using namespace std;

int main(){

    int a = 1;
    int b = 2;
    int c = 3;

    int sum1 = a + b;   // first + second
    int sum2 = b + c;   // second + third

    a = sum1;
    b = sum2;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}