#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sqrt_num = sqrt(num);

    int isPrime = 1;

    if(sqrt_num <= 1)
        isPrime = 0;

    for(int i = 2; i <= sqrt_num/2; i++){
        if(sqrt_num % i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime)
        cout << "Square root is Prime";
    else
        cout << "Square root is Not Prime";

    return 0;
}