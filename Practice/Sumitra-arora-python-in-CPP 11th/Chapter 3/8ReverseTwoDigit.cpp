#include <iostream>
using namespace std ;
int main(){
    int x;
    cout << "Enter the number to Reverse : ";
    cin>>x;

    cout << "The number reversed is : "<< (x%10)*10 + ((x - (x%10))/10);
    return 0 ;
}