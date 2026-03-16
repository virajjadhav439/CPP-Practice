#include <iostream>
using namespace std;

int main(){
    int X ; 
    cout<<"Enter the Value X : ";
    cin>>X;
    int temp_X = X;
    int digits_in_X=0;
    int significant_digit;
    while (temp_X)
    {
        digits_in_X++;
        significant_digit = temp_X;
        temp_X=temp_X/10;
    }
    cout<<digits_in_X<<endl;
    // iii
    int Y = digits_in_X*10 + significant_digit;
    // iv
    cout << Y<<endl;
    return 0;
}